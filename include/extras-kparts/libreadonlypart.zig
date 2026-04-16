const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KActionCollection = @import("libqt6").KActionCollection;
const KIO__Job = @import("libqt6").KIO__Job;
const KParts__GUIActivateEvent = @import("libqt6").KParts__GUIActivateEvent;
const KParts__NavigationExtension = @import("libqt6").KParts__NavigationExtension;
const KParts__OpenUrlArguments = @import("libqt6").KParts__OpenUrlArguments;
const KParts__Part = @import("libqt6").KParts__Part;
const KParts__PartActivateEvent = @import("libqt6").KParts__PartActivateEvent;
const KParts__PartManager = @import("libqt6").KParts__PartManager;
const KPluginMetaData = @import("libqt6").KPluginMetaData;
const KXMLGUIBuilder = @import("libqt6").KXMLGUIBuilder;
const KXMLGUIClient = @import("libqt6").KXMLGUIClient;
const KXMLGUIClient__StateChange = @import("libqt6").KXMLGUIClient__StateChange;
const KXMLGUIFactory = @import("libqt6").KXMLGUIFactory;
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDomDocument = @import("libqt6").QDomDocument;
const QDomElement = @import("libqt6").QDomElement;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const kxmlguiclient_enums = @import("../extras-kxmlgui/libkxmlguiclient.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html)
pub const KParts__ReadOnlyPart = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KParts__ReadOnlyPart,

    pub const _is_KParts__ReadOnlyPart = {};
    pub const _is_KParts__Part = {};
    pub const _is_QObject = {};
    pub const _is_KParts__PartBase = {};
    pub const _is_KXMLGUIClient = {};

    /// New constructs a new KParts::ReadOnlyPart object.
    ///
    pub fn New() KParts__ReadOnlyPart {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_new() };
    }

    /// New2 constructs a new KParts::ReadOnlyPart object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KParts__ReadOnlyPart {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KParts__ReadOnlyPart_new2(@ptrCast(parent.ptr)) };
    }

    /// New3 constructs a new KParts::ReadOnlyPart object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    /// ` data: KPluginMetaData `
    ///
    pub fn New3(parent: anytype, data: anytype) KParts__ReadOnlyPart {
        comptime _ = @TypeOf(parent)._is_QObject;
        comptime _ = @TypeOf(data)._is_KPluginMetaData;
        return .{ .ptr = qtc.KParts__ReadOnlyPart_new3(@ptrCast(parent.ptr), @ptrCast(data.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn MetaObject(self: KParts__ReadOnlyPart) QMetaObject {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KParts__ReadOnlyPart_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SuperMetaObject(self: KParts__ReadOnlyPart) QMetaObject {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KParts__ReadOnlyPart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__ReadOnlyPart_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KParts__ReadOnlyPart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__ReadOnlyPart_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KParts__ReadOnlyPart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__ReadOnlyPart_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__ReadOnlyPart_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KParts__ReadOnlyPart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__ReadOnlyPart_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setProgressInfoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` show: bool `
    ///
    pub fn SetProgressInfoEnabled(self: KParts__ReadOnlyPart, show: bool) void {
        qtc.KParts__ReadOnlyPart_SetProgressInfoEnabled(@ptrCast(self.ptr), show);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#isProgressInfoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn IsProgressInfoEnabled(self: KParts__ReadOnlyPart) bool {
        return qtc.KParts__ReadOnlyPart_IsProgressInfoEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` url: QUrl `
    ///
    pub fn OpenUrl(self: KParts__ReadOnlyPart, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KParts__ReadOnlyPart_OpenUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, url: QUrl) callconv(.c) bool `
    ///
    pub fn OnOpenUrl(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QUrl) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnOpenUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpenUrl` instead
    ///
    pub const QBaseOpenUrl = SuperOpenUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` url: QUrl `
    ///
    pub fn SuperOpenUrl(self: KParts__ReadOnlyPart, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KParts__ReadOnlyPart_SuperOpenUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn Url(self: KParts__ReadOnlyPart) QUrl {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn CloseUrl(self: KParts__ReadOnlyPart) bool {
        return qtc.KParts__ReadOnlyPart_CloseUrl(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCloseUrl(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnCloseUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCloseUrl` instead
    ///
    pub const QBaseCloseUrl = SuperCloseUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SuperCloseUrl(self: KParts__ReadOnlyPart) bool {
        return qtc.KParts__ReadOnlyPart_SuperCloseUrl(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#navigationExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn NavigationExtension(self: KParts__ReadOnlyPart) KParts__NavigationExtension {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_NavigationExtension(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` arguments: KParts__OpenUrlArguments `
    ///
    pub fn SetArguments(self: KParts__ReadOnlyPart, arguments: anytype) void {
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__ReadOnlyPart_SetArguments(@ptrCast(self.ptr), @ptrCast(arguments.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn Arguments(self: KParts__ReadOnlyPart) KParts__OpenUrlArguments {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Arguments(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` mimeType: []const u8 `
    ///
    /// ` url: QUrl `
    ///
    pub fn OpenStream(self: KParts__ReadOnlyPart, mimeType: []const u8, url: anytype) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KParts__ReadOnlyPart_OpenStream(@ptrCast(self.ptr), mimeType_str, @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#writeStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` data: []u8 `
    ///
    pub fn WriteStream(self: KParts__ReadOnlyPart, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KParts__ReadOnlyPart_WriteStream(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn CloseStream(self: KParts__ReadOnlyPart) bool {
        return qtc.KParts__ReadOnlyPart_CloseStream(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn Started(self: KParts__ReadOnlyPart, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KParts__ReadOnlyPart_Started(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, job: KIO__Job) callconv(.c) void `
    ///
    pub fn OnStarted(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, KIO__Job) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn Completed(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_Completed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart) callconv(.c) void `
    ///
    pub fn OnCompleted(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Completed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn CompletedWithPendingAction(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_CompletedWithPendingAction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart) callconv(.c) void `
    ///
    pub fn OnCompletedWithPendingAction(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_CompletedWithPendingAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` errMsg: []const u8 `
    ///
    pub fn Canceled(self: KParts__ReadOnlyPart, errMsg: []const u8) void {
        const errMsg_str = qtc.libqt_string{
            .len = errMsg.len,
            .data = errMsg.ptr,
        };
        qtc.KParts__ReadOnlyPart_Canceled(@ptrCast(self.ptr), errMsg_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, errMsg: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCanceled(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` url: QUrl `
    ///
    pub fn UrlChanged(self: KParts__ReadOnlyPart, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__ReadOnlyPart_UrlChanged(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, url: QUrl) callconv(.c) void `
    ///
    pub fn OnUrlChanged(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QUrl) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_UrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn OpenFile(self: KParts__ReadOnlyPart) bool {
        return qtc.KParts__ReadOnlyPart_OpenFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnOpenFile(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnOpenFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpenFile` instead
    ///
    pub const QBaseOpenFile = SuperOpenFile;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SuperOpenFile(self: KParts__ReadOnlyPart) bool {
        return qtc.KParts__ReadOnlyPart_SuperOpenFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn AbortLoad(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_AbortLoad(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAbortLoad(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnAbortLoad(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAbortLoad` instead
    ///
    pub const QBaseAbortLoad = SuperAbortLoad;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SuperAbortLoad(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_SuperAbortLoad(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` event: KParts__GUIActivateEvent `
    ///
    pub fn GuiActivateEvent(self: KParts__ReadOnlyPart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_KParts__GUIActivateEvent;
        qtc.KParts__ReadOnlyPart_GuiActivateEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, event: KParts__GUIActivateEvent) callconv(.c) void `
    ///
    pub fn OnGuiActivateEvent(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, KParts__GUIActivateEvent) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnGuiActivateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGuiActivateEvent` instead
    ///
    pub const QBaseGuiActivateEvent = SuperGuiActivateEvent;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` event: KParts__GUIActivateEvent `
    ///
    pub fn SuperGuiActivateEvent(self: KParts__ReadOnlyPart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_KParts__GUIActivateEvent;
        qtc.KParts__ReadOnlyPart_SuperGuiActivateEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: KParts__ReadOnlyPart, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__ReadOnlyPart_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, url: QUrl) callconv(.c) void `
    ///
    pub fn OnSetUrl(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QUrl) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetUrl` instead
    ///
    pub const QBaseSetUrl = SuperSetUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` url: QUrl `
    ///
    pub fn SuperSetUrl(self: KParts__ReadOnlyPart, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__ReadOnlyPart_SuperSetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalFilePath(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_LocalFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.LocalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalFilePath(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnLocalFilePath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLocalFilePath` instead
    ///
    pub const QBaseLocalFilePath = SuperLocalFilePath;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperLocalFilePath(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperLocalFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.LocalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` localFilePath: []const u8 `
    ///
    pub fn SetLocalFilePath(self: KParts__ReadOnlyPart, localFilePath: []const u8) void {
        const localFilePath_str = qtc.libqt_string{
            .len = localFilePath.len,
            .data = localFilePath.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetLocalFilePath(@ptrCast(self.ptr), localFilePath_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, localFilePath: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetLocalFilePath(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetLocalFilePath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetLocalFilePath` instead
    ///
    pub const QBaseSetLocalFilePath = SuperSetLocalFilePath;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` localFilePath: []const u8 `
    ///
    pub fn SuperSetLocalFilePath(self: KParts__ReadOnlyPart, localFilePath: []const u8) void {
        const localFilePath_str = qtc.libqt_string{
            .len = localFilePath.len,
            .data = localFilePath.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetLocalFilePath(@ptrCast(self.ptr), localFilePath_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn Manager(self: KParts__ReadOnlyPart) KParts__PartManager {
        return .{ .ptr = qtc.KParts__Part_Manager(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeleteWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` autoDeleteWidget: bool `
    ///
    pub fn SetAutoDeleteWidget(self: KParts__ReadOnlyPart, autoDeleteWidget: bool) void {
        qtc.KParts__Part_SetAutoDeleteWidget(@ptrCast(self.ptr), autoDeleteWidget);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeletePart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` autoDeletePart: bool `
    ///
    pub fn SetAutoDeletePart(self: KParts__ReadOnlyPart, autoDeletePart: bool) void {
        qtc.KParts__Part_SetAutoDeletePart(@ptrCast(self.ptr), autoDeletePart);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn MetaData(self: KParts__ReadOnlyPart) KPluginMetaData {
        return .{ .ptr = qtc.KParts__Part_MetaData(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn SetWindowCaption(self: KParts__ReadOnlyPart, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KParts__Part_SetWindowCaption(@ptrCast(self.ptr), caption_str);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, caption: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetWindowCaption(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetWindowCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetStatusBarText(self: KParts__ReadOnlyPart, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KParts__Part_SetStatusBarText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetStatusBarText(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetStatusBarText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KParts__ReadOnlyPart, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn IsWidgetType(self: KParts__ReadOnlyPart) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn IsWindowType(self: KParts__ReadOnlyPart) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn IsQuickItemType(self: KParts__ReadOnlyPart) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SignalsBlocked(self: KParts__ReadOnlyPart) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KParts__ReadOnlyPart, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn Thread(self: KParts__ReadOnlyPart) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KParts__ReadOnlyPart, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KParts__ReadOnlyPart, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KParts__ReadOnlyPart, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KParts__ReadOnlyPart, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KParts__ReadOnlyPart, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kparts__readonlypart.Children: Memory allocation failed");
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KParts__ReadOnlyPart, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KParts__ReadOnlyPart, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KParts__ReadOnlyPart, obj: anytype) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KParts__ReadOnlyPart, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn Disconnect3(self: KParts__ReadOnlyPart) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KParts__ReadOnlyPart, receiver: anytype) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn DumpObjectTree(self: KParts__ReadOnlyPart) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn DumpObjectInfo(self: KParts__ReadOnlyPart) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KParts__ReadOnlyPart, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KParts__ReadOnlyPart, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kparts__readonlypart.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts__readonlypart.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn BindingStorage(self: KParts__ReadOnlyPart) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn BindingStorage2(self: KParts__ReadOnlyPart) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn Destroyed(self: KParts__ReadOnlyPart) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn Parent(self: KParts__ReadOnlyPart) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KParts__ReadOnlyPart, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn DeleteLater(self: KParts__ReadOnlyPart) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KParts__ReadOnlyPart, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KParts__ReadOnlyPart, time: i64, timerType: i32) i32 {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KParts__ReadOnlyPart, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KParts__ReadOnlyPart, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KParts__ReadOnlyPart, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KParts__ReadOnlyPart, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KParts__ReadOnlyPart, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KParts__ReadOnlyPart, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::PartBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#setPartObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` object: QObject `
    ///
    pub fn SetPartObject(self: KParts__ReadOnlyPart, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.KParts__PartBase_SetPartObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// Inherited from KParts::PartBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn PartObject(self: KParts__ReadOnlyPart) QObject {
        return .{ .ptr = qtc.KParts__PartBase_PartObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Action(self: KParts__ReadOnlyPart, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn SetXMLGUIBuildDocument(self: KParts__ReadOnlyPart, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn XmlguiBuildDocument(self: KParts__ReadOnlyPart) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` factory: KXMLGUIFactory `
    ///
    pub fn SetFactory(self: KParts__ReadOnlyPart, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_KXMLGUIFactory;
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn Factory(self: KParts__ReadOnlyPart) KXMLGUIFactory {
        return .{ .ptr = qtc.KXMLGUIClient_Factory(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn ParentClient(self: KParts__ReadOnlyPart) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_ParentClient(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn InsertChildClient(self: KParts__ReadOnlyPart, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn RemoveChildClient(self: KParts__ReadOnlyPart, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildClients(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("kparts__readonlypart.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn SetClientBuilder(self: KParts__ReadOnlyPart, builder: anytype) void {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self.ptr), @ptrCast(builder.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn ClientBuilder(self: KParts__ReadOnlyPart) KXMLGUIBuilder {
        return .{ .ptr = qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn ReloadXML(self: KParts__ReadOnlyPart) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QAction `
    ///
    pub fn PlugActionList(self: KParts__ReadOnlyPart, name: []const u8, actionList: []QAction) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const actionList_list = qtc.libqt_list{
            .len = actionList.len,
            .data = @ptrCast(actionList.ptr),
        };
        qtc.KXMLGUIClient_PlugActionList(@ptrCast(self.ptr), name_str, actionList_list);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnplugActionList(self: KParts__ReadOnlyPart, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` files: []const []const u8 `
    ///
    /// ` doc: []const u8 `
    ///
    pub fn FindMostRecentXMLFile(allocator: std.mem.Allocator, files: []const []const u8, doc: []const u8) []const u8 {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("kparts__readonlypart.FindMostRecentXMLFile: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i|
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        const doc_str = qtc.libqt_string{
            .len = doc.len,
            .data = doc.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindMostRecentXMLFile(files_list, doc_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionEnabled(self: KParts__ReadOnlyPart, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionEnabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionDisabled(self: KParts__ReadOnlyPart, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionDisabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` state: []const u8 `
    ///
    pub fn GetActionsToChangeForState(self: KParts__ReadOnlyPart, state: []const u8) KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self.ptr), state_str) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` param1: QWidget `
    ///
    pub fn BeginXMLPlug(self: KParts__ReadOnlyPart, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn EndXMLPlug(self: KParts__ReadOnlyPart) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` param1: QWidget `
    ///
    pub fn PrepareXMLUnplug(self: KParts__ReadOnlyPart, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    pub fn ReplaceXMLFile(self: KParts__ReadOnlyPart, xmlfile: []const u8, localxmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile(@ptrCast(self.ptr), xmlfile_str, localxmlfile_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` xml: []const u8 `
    ///
    pub fn FindVersionNumber(allocator: std.mem.Allocator, xml: []const u8) []const u8 {
        const xml_str = qtc.libqt_string{
            .len = xml.len,
            .data = xml.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindVersionNumber(xml_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn ReplaceXMLFile3(self: KParts__ReadOnlyPart, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile3(@ptrCast(self.ptr), xmlfile_str, localxmlfile_str, merge);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn Widget(self: KParts__ReadOnlyPart) QWidget {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SuperWidget(self: KParts__ReadOnlyPart) QWidget {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnWidget(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KParts__ReadOnlyPart_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` manager: KParts__PartManager `
    ///
    pub fn SetManager(self: KParts__ReadOnlyPart, manager: anytype) void {
        comptime _ = @TypeOf(manager)._is_KParts__PartManager;
        qtc.KParts__ReadOnlyPart_SetManager(@ptrCast(self.ptr), @ptrCast(manager.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetManager` instead
    ///
    pub const QBaseSetManager = SuperSetManager;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` manager: KParts__PartManager `
    ///
    pub fn SuperSetManager(self: KParts__ReadOnlyPart, manager: anytype) void {
        comptime _ = @TypeOf(manager)._is_KParts__PartManager;
        qtc.KParts__ReadOnlyPart_SuperSetManager(@ptrCast(self.ptr), @ptrCast(manager.ptr));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, manager: KParts__PartManager) callconv(.c) void `
    ///
    pub fn OnSetManager(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, KParts__PartManager) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` widget: QWidget `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn HitTest(self: KParts__ReadOnlyPart, widget: anytype, globalPos: anytype) KParts__Part {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.KParts__ReadOnlyPart_HitTest(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperHitTest` instead
    ///
    pub const QBaseHitTest = SuperHitTest;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` widget: QWidget `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn SuperHitTest(self: KParts__ReadOnlyPart, widget: anytype, globalPos: anytype) KParts__Part {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperHitTest(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, widget: QWidget, globalPos: QPoint) callconv(.c) KParts__Part `
    ///
    pub fn OnHitTest(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QWidget, QPoint) callconv(.c) KParts__Part) void {
        qtc.KParts__ReadOnlyPart_OnHitTest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: KParts__ReadOnlyPart, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KParts__ReadOnlyPart_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetWidget` instead
    ///
    pub const QBaseSetWidget = SuperSetWidget;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperSetWidget(self: KParts__ReadOnlyPart, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KParts__ReadOnlyPart_SuperSetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnSetWidget(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QWidget) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KParts__ReadOnlyPart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KParts__ReadOnlyPart_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KParts__ReadOnlyPart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KParts__ReadOnlyPart_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QEvent) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` event: KParts__PartActivateEvent `
    ///
    pub fn PartActivateEvent(self: KParts__ReadOnlyPart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_KParts__PartActivateEvent;
        qtc.KParts__ReadOnlyPart_PartActivateEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperPartActivateEvent` instead
    ///
    pub const QBasePartActivateEvent = SuperPartActivateEvent;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` event: KParts__PartActivateEvent `
    ///
    pub fn SuperPartActivateEvent(self: KParts__ReadOnlyPart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_KParts__PartActivateEvent;
        qtc.KParts__ReadOnlyPart_SuperPartActivateEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, event: KParts__PartActivateEvent) callconv(.c) void `
    ///
    pub fn OnPartActivateEvent(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, KParts__PartActivateEvent) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnPartActivateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KParts__ReadOnlyPart, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__ReadOnlyPart_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KParts__ReadOnlyPart, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__ReadOnlyPart_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QEvent) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KParts__ReadOnlyPart, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__ReadOnlyPart_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KParts__ReadOnlyPart, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__ReadOnlyPart_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QObject, QEvent) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KParts__ReadOnlyPart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KParts__ReadOnlyPart_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KParts__ReadOnlyPart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KParts__ReadOnlyPart_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QTimerEvent) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KParts__ReadOnlyPart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KParts__ReadOnlyPart_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KParts__ReadOnlyPart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KParts__ReadOnlyPart_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QChildEvent) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KParts__ReadOnlyPart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadOnlyPart_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KParts__ReadOnlyPart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadOnlyPart_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KParts__ReadOnlyPart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadOnlyPart_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KParts__ReadOnlyPart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadOnlyPart_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` element: QDomElement `
    ///
    pub fn Action2(self: KParts__ReadOnlyPart, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAction2` instead
    ///
    pub const QBaseAction2 = SuperAction2;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` element: QDomElement `
    ///
    pub fn SuperAction2(self: KParts__ReadOnlyPart, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperAction2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, element: QDomElement) callconv(.c) QAction `
    ///
    pub fn OnAction2(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QDomElement) callconv(.c) QAction) void {
        qtc.KParts__ReadOnlyPart_OnAction2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn ActionCollection(self: KParts__ReadOnlyPart) KActionCollection {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_ActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperActionCollection` instead
    ///
    pub const QBaseActionCollection = SuperActionCollection;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SuperActionCollection(self: KParts__ReadOnlyPart) KActionCollection {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperActionCollection(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) KActionCollection `
    ///
    pub fn OnActionCollection(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) KActionCollection) void {
        qtc.KParts__ReadOnlyPart_OnActionCollection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentName(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperComponentName` instead
    ///
    pub const QBaseComponentName = SuperComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperComponentName(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnComponentName(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn DomDocument(self: KParts__ReadOnlyPart) QDomDocument {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperDomDocument` instead
    ///
    pub const QBaseDomDocument = SuperDomDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SuperDomDocument(self: KParts__ReadOnlyPart) QDomDocument {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperDomDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) QDomDocument `
    ///
    pub fn OnDomDocument(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) QDomDocument) void {
        qtc.KParts__ReadOnlyPart_OnDomDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn XmlFile(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperXmlFile` instead
    ///
    pub const QBaseXmlFile = SuperXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperXmlFile(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperXmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnXmlFile(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalXMLFile(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperLocalXMLFile` instead
    ///
    pub const QBaseLocalXMLFile = SuperLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperLocalXMLFile(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperLocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalXMLFile(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SetComponentName(self: KParts__ReadOnlyPart, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `SuperSetComponentName` instead
    ///
    pub const QBaseSetComponentName = SuperSetComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SuperSetComponentName(self: KParts__ReadOnlyPart, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, componentName: [*:0]const u8, componentDisplayName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetComponentName(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn SetXMLFile(self: KParts__ReadOnlyPart, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `SuperSetXMLFile` instead
    ///
    pub const QBaseSetXMLFile = SuperSetXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn SuperSetXMLFile(self: KParts__ReadOnlyPart, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, file: [*:0]const u8, merge: bool, setXMLDoc: bool) callconv(.c) void `
    ///
    pub fn OnSetXMLFile(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetLocalXMLFile(self: KParts__ReadOnlyPart, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `SuperSetLocalXMLFile` instead
    ///
    pub const QBaseSetLocalXMLFile = SuperSetLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SuperSetLocalXMLFile(self: KParts__ReadOnlyPart, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, file: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetLocalXMLFile(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn SetXML(self: KParts__ReadOnlyPart, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `SuperSetXML` instead
    ///
    pub const QBaseSetXML = SuperSetXML;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn SuperSetXML(self: KParts__ReadOnlyPart, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, document: [*:0]const u8, merge: bool) callconv(.c) void `
    ///
    pub fn OnSetXML(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetXML(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` document: QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn SetDOMDocument(self: KParts__ReadOnlyPart, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KParts__ReadOnlyPart_SetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `SuperSetDOMDocument` instead
    ///
    pub const QBaseSetDOMDocument = SuperSetDOMDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` document: QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn SuperSetDOMDocument(self: KParts__ReadOnlyPart, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KParts__ReadOnlyPart_SuperSetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, document: QDomDocument, merge: bool) callconv(.c) void `
    ///
    pub fn OnSetDOMDocument(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QDomDocument, bool) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetDOMDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn StateChanged(self: KParts__ReadOnlyPart, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__ReadOnlyPart_StateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `SuperStateChanged` instead
    ///
    pub const QBaseStateChanged = SuperStateChanged;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn SuperStateChanged(self: KParts__ReadOnlyPart, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperStateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, newstate: [*:0]const u8, reverse: kxmlguiclient_enums.ReverseStateChange) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` containerName: []const u8 `
    ///
    pub fn HostContainer(self: KParts__ReadOnlyPart, containerName: []const u8) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return .{ .ptr = qtc.KParts__ReadOnlyPart_HostContainer(@ptrCast(self.ptr), containerName_str) };
    }

    /// ### DEPRECATED: Use `SuperHostContainer` instead
    ///
    pub const QBaseHostContainer = SuperHostContainer;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` containerName: []const u8 `
    ///
    pub fn SuperHostContainer(self: KParts__ReadOnlyPart, containerName: []const u8) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperHostContainer(@ptrCast(self.ptr), containerName_str) };
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, containerName: [*:0]const u8) callconv(.c) QWidget `
    ///
    pub fn OnHostContainer(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) QWidget) void {
        qtc.KParts__ReadOnlyPart_OnHostContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SlotWidgetDestroyed(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_SlotWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSlotWidgetDestroyed` instead
    ///
    pub const QBaseSlotWidgetDestroyed = SuperSlotWidgetDestroyed;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SuperSlotWidgetDestroyed(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_SuperSlotWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotWidgetDestroyed(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSlotWidgetDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn Sender(self: KParts__ReadOnlyPart) QObject {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SuperSender(self: KParts__ReadOnlyPart) QObject {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) QObject) void {
        qtc.KParts__ReadOnlyPart_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SenderSignalIndex(self: KParts__ReadOnlyPart) i32 {
        return qtc.KParts__ReadOnlyPart_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SuperSenderSignalIndex(self: KParts__ReadOnlyPart) i32 {
        return qtc.KParts__ReadOnlyPart_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__ReadOnlyPart_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KParts__ReadOnlyPart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__ReadOnlyPart_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KParts__ReadOnlyPart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__ReadOnlyPart_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__ReadOnlyPart_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KParts__ReadOnlyPart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__ReadOnlyPart_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KParts__ReadOnlyPart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__ReadOnlyPart_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QMetaMethod) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StandardsXmlFileLocation(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_StandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperStandardsXmlFileLocation` instead
    ///
    pub const QBaseStandardsXmlFileLocation = SuperStandardsXmlFileLocation;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperStandardsXmlFileLocation(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperStandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnStandardsXmlFileLocation(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnStandardsXmlFileLocation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn LoadStandardsXmlFile(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_LoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperLoadStandardsXmlFile` instead
    ///
    pub const QBaseLoadStandardsXmlFile = SuperLoadStandardsXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn SuperLoadStandardsXmlFile(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_SuperLoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnLoadStandardsXmlFile(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnLoadStandardsXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn Delete(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_Delete(@ptrCast(self.ptr));
    }
};
