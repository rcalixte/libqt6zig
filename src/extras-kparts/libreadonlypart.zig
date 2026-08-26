const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KActionCollection = @import("libqt6").KActionCollection;
const KIO__Job = @import("libqt6").KIO__Job;
const KParts__GUIActivateEvent = @import("libqt6").KParts__GUIActivateEvent;
const KParts__NavigationExtension = @import("libqt6").KParts__NavigationExtension;
const KParts__OpenUrlArguments = @import("libqt6").KParts__OpenUrlArguments;
const KParts__Part = @import("libqt6").KParts__Part;
const KParts__PartActivateEvent = @import("libqt6").KParts__PartActivateEvent;
const KParts__PartBase = @import("libqt6").KParts__PartBase;
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KParts::ReadOnlyPart object in C++ memory
    ///
    pub fn new() KParts__ReadOnlyPart {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KParts::ReadOnlyPart object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KParts__ReadOnlyPart {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KParts__ReadOnlyPart_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KParts::ReadOnlyPart object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    /// ` data: KPluginMetaData `
    ///
    pub fn new3(_parent: anytype, data: anytype) KParts__ReadOnlyPart {
        comptime _ = @TypeOf(_parent)._is_QObject;
        comptime _ = @TypeOf(data)._is_KPluginMetaData;
        return .{ .ptr = qtc.KParts__ReadOnlyPart_new3(@ptrCast(_parent.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn metaObject(self: KParts__ReadOnlyPart) QMetaObject {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KParts__ReadOnlyPart_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn superMetaObject(self: KParts__ReadOnlyPart) QMetaObject {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KParts__ReadOnlyPart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__ReadOnlyPart_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KParts__ReadOnlyPart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__ReadOnlyPart_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KParts__ReadOnlyPart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__ReadOnlyPart_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__ReadOnlyPart_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KParts__ReadOnlyPart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__ReadOnlyPart_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setProgressInfoEnabled` instead
    ///
    pub const SetProgressInfoEnabled = setProgressInfoEnabled;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setProgressInfoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` show: bool `
    ///
    pub fn setProgressInfoEnabled(self: KParts__ReadOnlyPart, show: bool) void {
        qtc.KParts__ReadOnlyPart_SetProgressInfoEnabled(@ptrCast(self.ptr), show);
    }

    /// ### DEPRECATED: Use `isProgressInfoEnabled` instead
    ///
    pub const IsProgressInfoEnabled = isProgressInfoEnabled;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#isProgressInfoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn isProgressInfoEnabled(self: KParts__ReadOnlyPart) bool {
        return qtc.KParts__ReadOnlyPart_IsProgressInfoEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `openUrl` instead
    ///
    pub const OpenUrl = openUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn openUrl(self: KParts__ReadOnlyPart, _url: anytype) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.KParts__ReadOnlyPart_OpenUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `onOpenUrl` instead
    ///
    pub const OnOpenUrl = onOpenUrl;

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
    pub fn onOpenUrl(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QUrl) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnOpenUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpenUrl` instead
    ///
    pub const SuperOpenUrl = superOpenUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn superOpenUrl(self: KParts__ReadOnlyPart, _url: anytype) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.KParts__ReadOnlyPart_SuperOpenUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn url(self: KParts__ReadOnlyPart) QUrl {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `closeUrl` instead
    ///
    pub const CloseUrl = closeUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn closeUrl(self: KParts__ReadOnlyPart) bool {
        return qtc.KParts__ReadOnlyPart_CloseUrl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCloseUrl` instead
    ///
    pub const OnCloseUrl = onCloseUrl;

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
    pub fn onCloseUrl(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnCloseUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCloseUrl` instead
    ///
    pub const SuperCloseUrl = superCloseUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn superCloseUrl(self: KParts__ReadOnlyPart) bool {
        return qtc.KParts__ReadOnlyPart_SuperCloseUrl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `navigationExtension` instead
    ///
    pub const NavigationExtension = navigationExtension;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#navigationExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn navigationExtension(self: KParts__ReadOnlyPart) KParts__NavigationExtension {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_NavigationExtension(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setArguments` instead
    ///
    pub const SetArguments = setArguments;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _arguments: KParts__OpenUrlArguments `
    ///
    pub fn setArguments(self: KParts__ReadOnlyPart, _arguments: anytype) void {
        comptime _ = @TypeOf(_arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__ReadOnlyPart_SetArguments(@ptrCast(self.ptr), @ptrCast(_arguments.ptr));
    }

    /// ### DEPRECATED: Use `arguments` instead
    ///
    pub const Arguments = arguments;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn arguments(self: KParts__ReadOnlyPart) KParts__OpenUrlArguments {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Arguments(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `openStream` instead
    ///
    pub const OpenStream = openStream;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` mimeType: []const u8 `
    ///
    /// ` _url: QUrl `
    ///
    pub fn openStream(self: KParts__ReadOnlyPart, mimeType: []const u8, _url: anytype) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.KParts__ReadOnlyPart_OpenStream(@ptrCast(self.ptr), mimeType_str, @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `writeStream` instead
    ///
    pub const WriteStream = writeStream;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#writeStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` data: []u8 `
    ///
    pub fn writeStream(self: KParts__ReadOnlyPart, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KParts__ReadOnlyPart_WriteStream(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `closeStream` instead
    ///
    pub const CloseStream = closeStream;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn closeStream(self: KParts__ReadOnlyPart) bool {
        return qtc.KParts__ReadOnlyPart_CloseStream(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `started` instead
    ///
    pub const Started = started;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn started(self: KParts__ReadOnlyPart, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KParts__ReadOnlyPart_Started(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onStarted` instead
    ///
    pub const OnStarted = onStarted;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, job: KIO__Job) callconv(.c) void `
    ///
    pub fn onStarted(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, KIO__Job) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `completed` instead
    ///
    pub const Completed = completed;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn completed(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_Completed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCompleted` instead
    ///
    pub const OnCompleted = onCompleted;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart) callconv(.c) void `
    ///
    pub fn onCompleted(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Completed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `completedWithPendingAction` instead
    ///
    pub const CompletedWithPendingAction = completedWithPendingAction;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn completedWithPendingAction(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_CompletedWithPendingAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCompletedWithPendingAction` instead
    ///
    pub const OnCompletedWithPendingAction = onCompletedWithPendingAction;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart) callconv(.c) void `
    ///
    pub fn onCompletedWithPendingAction(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_CompletedWithPendingAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canceled` instead
    ///
    pub const Canceled = canceled;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` errMsg: []const u8 `
    ///
    pub fn canceled(self: KParts__ReadOnlyPart, errMsg: []const u8) void {
        const errMsg_str = qtc.libqt_string{
            .len = errMsg.len,
            .data = errMsg.ptr,
        };
        qtc.KParts__ReadOnlyPart_Canceled(@ptrCast(self.ptr), errMsg_str);
    }

    /// ### DEPRECATED: Use `onCanceled` instead
    ///
    pub const OnCanceled = onCanceled;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, errMsg: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCanceled(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `urlChanged` instead
    ///
    pub const UrlChanged = urlChanged;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn urlChanged(self: KParts__ReadOnlyPart, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KParts__ReadOnlyPart_UrlChanged(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `onUrlChanged` instead
    ///
    pub const OnUrlChanged = onUrlChanged;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, url: QUrl) callconv(.c) void `
    ///
    pub fn onUrlChanged(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QUrl) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_UrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `openFile` instead
    ///
    pub const OpenFile = openFile;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn openFile(self: KParts__ReadOnlyPart) bool {
        return qtc.KParts__ReadOnlyPart_OpenFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpenFile` instead
    ///
    pub const OnOpenFile = onOpenFile;

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
    pub fn onOpenFile(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnOpenFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpenFile` instead
    ///
    pub const SuperOpenFile = superOpenFile;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn superOpenFile(self: KParts__ReadOnlyPart) bool {
        return qtc.KParts__ReadOnlyPart_SuperOpenFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `abortLoad` instead
    ///
    pub const AbortLoad = abortLoad;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn abortLoad(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_AbortLoad(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAbortLoad` instead
    ///
    pub const OnAbortLoad = onAbortLoad;

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
    pub fn onAbortLoad(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnAbortLoad(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAbortLoad` instead
    ///
    pub const SuperAbortLoad = superAbortLoad;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn superAbortLoad(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_SuperAbortLoad(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `guiActivateEvent` instead
    ///
    pub const GuiActivateEvent = guiActivateEvent;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _event: KParts__GUIActivateEvent `
    ///
    pub fn guiActivateEvent(self: KParts__ReadOnlyPart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_KParts__GUIActivateEvent;
        qtc.KParts__ReadOnlyPart_GuiActivateEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onGuiActivateEvent` instead
    ///
    pub const OnGuiActivateEvent = onGuiActivateEvent;

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
    pub fn onGuiActivateEvent(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, KParts__GUIActivateEvent) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnGuiActivateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGuiActivateEvent` instead
    ///
    pub const SuperGuiActivateEvent = superGuiActivateEvent;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _event: KParts__GUIActivateEvent `
    ///
    pub fn superGuiActivateEvent(self: KParts__ReadOnlyPart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_KParts__GUIActivateEvent;
        qtc.KParts__ReadOnlyPart_SuperGuiActivateEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: KParts__ReadOnlyPart, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KParts__ReadOnlyPart_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `onSetUrl` instead
    ///
    pub const OnSetUrl = onSetUrl;

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
    pub fn onSetUrl(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QUrl) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetUrl` instead
    ///
    pub const SuperSetUrl = superSetUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn superSetUrl(self: KParts__ReadOnlyPart, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KParts__ReadOnlyPart_SuperSetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `localFilePath` instead
    ///
    pub const LocalFilePath = localFilePath;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localFilePath(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_LocalFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.localFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onLocalFilePath` instead
    ///
    pub const OnLocalFilePath = onLocalFilePath;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onLocalFilePath(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnLocalFilePath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLocalFilePath` instead
    ///
    pub const SuperLocalFilePath = superLocalFilePath;

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
    pub fn superLocalFilePath(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperLocalFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.localFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLocalFilePath` instead
    ///
    pub const SetLocalFilePath = setLocalFilePath;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _localFilePath: []const u8 `
    ///
    pub fn setLocalFilePath(self: KParts__ReadOnlyPart, _localFilePath: []const u8) void {
        const localFilePath_str = qtc.libqt_string{
            .len = _localFilePath.len,
            .data = _localFilePath.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetLocalFilePath(@ptrCast(self.ptr), localFilePath_str);
    }

    /// ### DEPRECATED: Use `onSetLocalFilePath` instead
    ///
    pub const OnSetLocalFilePath = onSetLocalFilePath;

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
    pub fn onSetLocalFilePath(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetLocalFilePath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetLocalFilePath` instead
    ///
    pub const SuperSetLocalFilePath = superSetLocalFilePath;

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _localFilePath: []const u8 `
    ///
    pub fn superSetLocalFilePath(self: KParts__ReadOnlyPart, _localFilePath: []const u8) void {
        const localFilePath_str = qtc.libqt_string{
            .len = _localFilePath.len,
            .data = _localFilePath.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetLocalFilePath(@ptrCast(self.ptr), localFilePath_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KParts::Part
    ///
    /// Upcasts to a KParts::PartBase object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn asKParts__PartBase(self: KParts__ReadOnlyPart) KParts__PartBase {
        return .{ .ptr = qtc.KParts__Part_AsKParts__PartBase(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::Part
    ///
    /// Downcasts to a KParts__ReadOnlyPart object
    ///
    /// ## Parameter(s):
    ///
    /// ` _kparts__partbase: KParts__PartBase `
    ///
    pub fn fromKParts__PartBase(_kparts__partbase: anytype) KParts__ReadOnlyPart {
        comptime _ = @TypeOf(_kparts__partbase)._is_KParts__PartBase;
        return @bitCast(qtc.KParts__Part_FromKParts__PartBase(@ptrCast(_kparts__partbase.ptr)));
    }

    /// ### DEPRECATED: Use `manager` instead
    ///
    pub const Manager = manager;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn manager(self: KParts__ReadOnlyPart) KParts__PartManager {
        return .{ .ptr = qtc.KParts__Part_Manager(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAutoDeleteWidget` instead
    ///
    pub const SetAutoDeleteWidget = setAutoDeleteWidget;

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
    pub fn setAutoDeleteWidget(self: KParts__ReadOnlyPart, autoDeleteWidget: bool) void {
        qtc.KParts__Part_SetAutoDeleteWidget(@ptrCast(self.ptr), autoDeleteWidget);
    }

    /// ### DEPRECATED: Use `setAutoDeletePart` instead
    ///
    pub const SetAutoDeletePart = setAutoDeletePart;

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
    pub fn setAutoDeletePart(self: KParts__ReadOnlyPart, autoDeletePart: bool) void {
        qtc.KParts__Part_SetAutoDeletePart(@ptrCast(self.ptr), autoDeletePart);
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn metaData(self: KParts__ReadOnlyPart) KPluginMetaData {
        return .{ .ptr = qtc.KParts__Part_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowCaption` instead
    ///
    pub const SetWindowCaption = setWindowCaption;

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
    pub fn setWindowCaption(self: KParts__ReadOnlyPart, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KParts__Part_SetWindowCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `onSetWindowCaption` instead
    ///
    pub const OnSetWindowCaption = onSetWindowCaption;

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
    pub fn onSetWindowCaption(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetWindowCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setStatusBarText` instead
    ///
    pub const SetStatusBarText = setStatusBarText;

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
    pub fn setStatusBarText(self: KParts__ReadOnlyPart, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KParts__Part_SetStatusBarText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onSetStatusBarText` instead
    ///
    pub const OnSetStatusBarText = onSetStatusBarText;

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
    pub fn onSetStatusBarText(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetStatusBarText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.objectName: Memory allocation failed");
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KParts__ReadOnlyPart, name: []const u8) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn isWidgetType(self: KParts__ReadOnlyPart) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn isWindowType(self: KParts__ReadOnlyPart) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn isQuickItemType(self: KParts__ReadOnlyPart) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn signalsBlocked(self: KParts__ReadOnlyPart) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KParts__ReadOnlyPart, b: bool) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn thread(self: KParts__ReadOnlyPart) QThread {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KParts__ReadOnlyPart, _thread: anytype) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KParts__ReadOnlyPart, interval: i32) i32 {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KParts__ReadOnlyPart, time: i64) i32 {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KParts__ReadOnlyPart, id: i32) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KParts__ReadOnlyPart, id: i32) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KParts__ReadOnlyPart.children: Memory allocation failed");
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KParts__ReadOnlyPart, _parent: anytype) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KParts__ReadOnlyPart, filterObj: anytype) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KParts__ReadOnlyPart, obj: anytype) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KParts__ReadOnlyPart, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn disconnect3(self: KParts__ReadOnlyPart) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KParts__ReadOnlyPart, receiver: anytype) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn dumpObjectTree(self: KParts__ReadOnlyPart) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn dumpObjectInfo(self: KParts__ReadOnlyPart) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KParts__ReadOnlyPart, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KParts__ReadOnlyPart, name: [:0]const u8) QVariant {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KParts__ReadOnlyPart.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KParts__ReadOnlyPart.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn bindingStorage(self: KParts__ReadOnlyPart) QBindingStorage {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn bindingStorage2(self: KParts__ReadOnlyPart) QBindingStorage {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn destroyed(self: KParts__ReadOnlyPart) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart) callconv(.c) void) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn parent(self: KParts__ReadOnlyPart) QObject {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KParts__ReadOnlyPart, classname: [:0]const u8) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn deleteLater(self: KParts__ReadOnlyPart) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KParts__ReadOnlyPart, interval: i32, timerType: i32) i32 {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KParts__ReadOnlyPart, time: i64, timerType: i32) i32 {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KParts__ReadOnlyPart, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KParts__ReadOnlyPart, signal: [:0]const u8) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KParts__ReadOnlyPart, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KParts__ReadOnlyPart, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KParts__ReadOnlyPart, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KParts__ReadOnlyPart, param1: anytype) void {
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPartObject` instead
    ///
    pub const SetPartObject = setPartObject;

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
    pub fn setPartObject(self: KParts__ReadOnlyPart, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.KParts__PartBase_SetPartObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `partObject` instead
    ///
    pub const PartObject = partObject;

    /// Inherited from KParts::PartBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn partObject(self: KParts__ReadOnlyPart) QObject {
        return .{ .ptr = qtc.KParts__PartBase_PartObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

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
    pub fn action(self: KParts__ReadOnlyPart, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setXMLGUIBuildDocument` instead
    ///
    pub const SetXMLGUIBuildDocument = setXMLGUIBuildDocument;

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
    pub fn setXMLGUIBuildDocument(self: KParts__ReadOnlyPart, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// ### DEPRECATED: Use `xmlguiBuildDocument` instead
    ///
    pub const XmlguiBuildDocument = xmlguiBuildDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn xmlguiBuildDocument(self: KParts__ReadOnlyPart) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFactory` instead
    ///
    pub const SetFactory = setFactory;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _factory: KXMLGUIFactory `
    ///
    pub fn setFactory(self: KParts__ReadOnlyPart, _factory: anytype) void {
        comptime _ = @TypeOf(_factory)._is_KXMLGUIFactory;
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self.ptr), @ptrCast(_factory.ptr));
    }

    /// ### DEPRECATED: Use `factory` instead
    ///
    pub const Factory = factory;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn factory(self: KParts__ReadOnlyPart) KXMLGUIFactory {
        return .{ .ptr = qtc.KXMLGUIClient_Factory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentClient` instead
    ///
    pub const ParentClient = parentClient;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn parentClient(self: KParts__ReadOnlyPart) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_ParentClient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `insertChildClient` instead
    ///
    pub const InsertChildClient = insertChildClient;

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
    pub fn insertChildClient(self: KParts__ReadOnlyPart, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        const child_ = if (@hasDecl(@TypeOf(child), "asKXMLGUIClient")) child.asKXMLGUIClient() else child;
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self.ptr), @ptrCast(child_.ptr));
    }

    /// ### DEPRECATED: Use `removeChildClient` instead
    ///
    pub const RemoveChildClient = removeChildClient;

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
    pub fn removeChildClient(self: KParts__ReadOnlyPart, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        const child_ = if (@hasDecl(@TypeOf(child), "asKXMLGUIClient")) child.asKXMLGUIClient() else child;
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self.ptr), @ptrCast(child_.ptr));
    }

    /// ### DEPRECATED: Use `childClients` instead
    ///
    pub const ChildClients = childClients;

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
    pub fn childClients(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("KParts__ReadOnlyPart.childClients: Memory allocation failed");
        const _data_val: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setClientBuilder` instead
    ///
    pub const SetClientBuilder = setClientBuilder;

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
    pub fn setClientBuilder(self: KParts__ReadOnlyPart, builder: anytype) void {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        const builder_ = if (@hasDecl(@TypeOf(builder), "asKXMLGUIBuilder")) builder.asKXMLGUIBuilder() else builder;
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self.ptr), @ptrCast(builder_.ptr));
    }

    /// ### DEPRECATED: Use `clientBuilder` instead
    ///
    pub const ClientBuilder = clientBuilder;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn clientBuilder(self: KParts__ReadOnlyPart) KXMLGUIBuilder {
        return .{ .ptr = qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `reloadXML` instead
    ///
    pub const ReloadXML = reloadXML;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn reloadXML(self: KParts__ReadOnlyPart) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `plugActionList` instead
    ///
    pub const PlugActionList = plugActionList;

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
    pub fn plugActionList(self: KParts__ReadOnlyPart, name: []const u8, actionList: []QAction) void {
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

    /// ### DEPRECATED: Use `unplugActionList` instead
    ///
    pub const UnplugActionList = unplugActionList;

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
    pub fn unplugActionList(self: KParts__ReadOnlyPart, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `findMostRecentXMLFile` instead
    ///
    pub const FindMostRecentXMLFile = findMostRecentXMLFile;

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
    pub fn findMostRecentXMLFile(allocator: std.mem.Allocator, files: []const []const u8, doc: []const u8) []const u8 {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("KParts__ReadOnlyPart.findMostRecentXMLFile: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |str_item, i|
            files_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.findMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addStateActionEnabled` instead
    ///
    pub const AddStateActionEnabled = addStateActionEnabled;

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
    /// ` _action: []const u8 `
    ///
    pub fn addStateActionEnabled(self: KParts__ReadOnlyPart, state: []const u8, _action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = _action.len,
            .data = _action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionEnabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// ### DEPRECATED: Use `addStateActionDisabled` instead
    ///
    pub const AddStateActionDisabled = addStateActionDisabled;

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
    /// ` _action: []const u8 `
    ///
    pub fn addStateActionDisabled(self: KParts__ReadOnlyPart, state: []const u8, _action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = _action.len,
            .data = _action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionDisabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// ### DEPRECATED: Use `getActionsToChangeForState` instead
    ///
    pub const GetActionsToChangeForState = getActionsToChangeForState;

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
    pub fn getActionsToChangeForState(self: KParts__ReadOnlyPart, state: []const u8) KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self.ptr), state_str) };
    }

    /// ### DEPRECATED: Use `beginXMLPlug` instead
    ///
    pub const BeginXMLPlug = beginXMLPlug;

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
    pub fn beginXMLPlug(self: KParts__ReadOnlyPart, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `endXMLPlug` instead
    ///
    pub const EndXMLPlug = endXMLPlug;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn endXMLPlug(self: KParts__ReadOnlyPart) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `prepareXMLUnplug` instead
    ///
    pub const PrepareXMLUnplug = prepareXMLUnplug;

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
    pub fn prepareXMLUnplug(self: KParts__ReadOnlyPart, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `replaceXMLFile` instead
    ///
    pub const ReplaceXMLFile = replaceXMLFile;

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
    pub fn replaceXMLFile(self: KParts__ReadOnlyPart, xmlfile: []const u8, localxmlfile: []const u8) void {
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

    /// ### DEPRECATED: Use `findVersionNumber` instead
    ///
    pub const FindVersionNumber = findVersionNumber;

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
    pub fn findVersionNumber(allocator: std.mem.Allocator, xml: []const u8) []const u8 {
        const xml_str = qtc.libqt_string{
            .len = xml.len,
            .data = xml.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindVersionNumber(xml_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.findVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `replaceXMLFile3` instead
    ///
    pub const ReplaceXMLFile3 = replaceXMLFile3;

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
    pub fn replaceXMLFile3(self: KParts__ReadOnlyPart, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
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

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

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
    pub fn widget(self: KParts__ReadOnlyPart) QWidget {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superWidget` instead
    ///
    pub const SuperWidget = superWidget;

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
    pub fn superWidget(self: KParts__ReadOnlyPart) QWidget {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

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
    pub fn onWidget(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KParts__ReadOnlyPart_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setManager` instead
    ///
    pub const SetManager = setManager;

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
    /// ` _manager: KParts__PartManager `
    ///
    pub fn setManager(self: KParts__ReadOnlyPart, _manager: anytype) void {
        comptime _ = @TypeOf(_manager)._is_KParts__PartManager;
        qtc.KParts__ReadOnlyPart_SetManager(@ptrCast(self.ptr), @ptrCast(_manager.ptr));
    }

    /// ### DEPRECATED: Use `superSetManager` instead
    ///
    pub const SuperSetManager = superSetManager;

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
    /// ` _manager: KParts__PartManager `
    ///
    pub fn superSetManager(self: KParts__ReadOnlyPart, _manager: anytype) void {
        comptime _ = @TypeOf(_manager)._is_KParts__PartManager;
        qtc.KParts__ReadOnlyPart_SuperSetManager(@ptrCast(self.ptr), @ptrCast(_manager.ptr));
    }

    /// ### DEPRECATED: Use `onSetManager` instead
    ///
    pub const OnSetManager = onSetManager;

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
    pub fn onSetManager(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, KParts__PartManager) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hitTest` instead
    ///
    pub const HitTest = hitTest;

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
    /// ` _widget: QWidget `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn hitTest(self: KParts__ReadOnlyPart, _widget: anytype, globalPos: anytype) KParts__Part {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.KParts__ReadOnlyPart_HitTest(@ptrCast(self.ptr), @ptrCast(_widget.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// ### DEPRECATED: Use `superHitTest` instead
    ///
    pub const SuperHitTest = superHitTest;

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
    /// ` _widget: QWidget `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn superHitTest(self: KParts__ReadOnlyPart, _widget: anytype, globalPos: anytype) KParts__Part {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperHitTest(@ptrCast(self.ptr), @ptrCast(_widget.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// ### DEPRECATED: Use `onHitTest` instead
    ///
    pub const OnHitTest = onHitTest;

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
    pub fn onHitTest(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QWidget, QPoint) callconv(.c) KParts__Part) void {
        qtc.KParts__ReadOnlyPart_OnHitTest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

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
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: KParts__ReadOnlyPart, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.KParts__ReadOnlyPart_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `superSetWidget` instead
    ///
    pub const SuperSetWidget = superSetWidget;

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
    /// ` _widget: QWidget `
    ///
    pub fn superSetWidget(self: KParts__ReadOnlyPart, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.KParts__ReadOnlyPart_SuperSetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `onSetWidget` instead
    ///
    pub const OnSetWidget = onSetWidget;

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
    pub fn onSetWidget(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QWidget) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KParts__ReadOnlyPart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KParts__ReadOnlyPart_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KParts__ReadOnlyPart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KParts__ReadOnlyPart_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QEvent) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `partActivateEvent` instead
    ///
    pub const PartActivateEvent = partActivateEvent;

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
    /// ` _event: KParts__PartActivateEvent `
    ///
    pub fn partActivateEvent(self: KParts__ReadOnlyPart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_KParts__PartActivateEvent;
        qtc.KParts__ReadOnlyPart_PartActivateEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superPartActivateEvent` instead
    ///
    pub const SuperPartActivateEvent = superPartActivateEvent;

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
    /// ` _event: KParts__PartActivateEvent `
    ///
    pub fn superPartActivateEvent(self: KParts__ReadOnlyPart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_KParts__PartActivateEvent;
        qtc.KParts__ReadOnlyPart_SuperPartActivateEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onPartActivateEvent` instead
    ///
    pub const OnPartActivateEvent = onPartActivateEvent;

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
    pub fn onPartActivateEvent(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, KParts__PartActivateEvent) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnPartActivateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KParts__ReadOnlyPart, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__ReadOnlyPart_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KParts__ReadOnlyPart, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__ReadOnlyPart_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QEvent) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KParts__ReadOnlyPart, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__ReadOnlyPart_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KParts__ReadOnlyPart, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__ReadOnlyPart_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QObject, QEvent) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KParts__ReadOnlyPart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KParts__ReadOnlyPart_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KParts__ReadOnlyPart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KParts__ReadOnlyPart_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QTimerEvent) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KParts__ReadOnlyPart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KParts__ReadOnlyPart_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KParts__ReadOnlyPart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KParts__ReadOnlyPart_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QChildEvent) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KParts__ReadOnlyPart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadOnlyPart_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KParts__ReadOnlyPart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadOnlyPart_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KParts__ReadOnlyPart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadOnlyPart_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KParts__ReadOnlyPart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadOnlyPart_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `action2` instead
    ///
    pub const Action2 = action2;

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
    pub fn action2(self: KParts__ReadOnlyPart, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `superAction2` instead
    ///
    pub const SuperAction2 = superAction2;

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
    pub fn superAction2(self: KParts__ReadOnlyPart, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperAction2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `onAction2` instead
    ///
    pub const OnAction2 = onAction2;

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
    pub fn onAction2(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QDomElement) callconv(.c) QAction) void {
        qtc.KParts__ReadOnlyPart_OnAction2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionCollection` instead
    ///
    pub const ActionCollection = actionCollection;

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
    pub fn actionCollection(self: KParts__ReadOnlyPart) KActionCollection {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_ActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superActionCollection` instead
    ///
    pub const SuperActionCollection = superActionCollection;

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
    pub fn superActionCollection(self: KParts__ReadOnlyPart) KActionCollection {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onActionCollection` instead
    ///
    pub const OnActionCollection = onActionCollection;

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
    pub fn onActionCollection(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) KActionCollection) void {
        qtc.KParts__ReadOnlyPart_OnActionCollection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `componentName` instead
    ///
    pub const ComponentName = componentName;

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
    pub fn componentName(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superComponentName` instead
    ///
    pub const SuperComponentName = superComponentName;

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
    pub fn superComponentName(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onComponentName` instead
    ///
    pub const OnComponentName = onComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onComponentName(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `domDocument` instead
    ///
    pub const DomDocument = domDocument;

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
    pub fn domDocument(self: KParts__ReadOnlyPart) QDomDocument {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superDomDocument` instead
    ///
    pub const SuperDomDocument = superDomDocument;

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
    pub fn superDomDocument(self: KParts__ReadOnlyPart) QDomDocument {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperDomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onDomDocument` instead
    ///
    pub const OnDomDocument = onDomDocument;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDomDocument(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) QDomDocument) void {
        qtc.KParts__ReadOnlyPart_OnDomDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xmlFile` instead
    ///
    pub const XmlFile = xmlFile;

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
    pub fn xmlFile(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.xmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superXmlFile` instead
    ///
    pub const SuperXmlFile = superXmlFile;

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
    pub fn superXmlFile(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperXmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.xmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onXmlFile` instead
    ///
    pub const OnXmlFile = onXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onXmlFile(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `localXMLFile` instead
    ///
    pub const LocalXMLFile = localXMLFile;

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
    pub fn localXMLFile(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.localXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superLocalXMLFile` instead
    ///
    pub const SuperLocalXMLFile = superLocalXMLFile;

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
    pub fn superLocalXMLFile(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperLocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.localXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onLocalXMLFile` instead
    ///
    pub const OnLocalXMLFile = onLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onLocalXMLFile(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setComponentName` instead
    ///
    pub const SetComponentName = setComponentName;

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
    /// ` _componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn setComponentName(self: KParts__ReadOnlyPart, _componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `superSetComponentName` instead
    ///
    pub const SuperSetComponentName = superSetComponentName;

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
    /// ` _componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn superSetComponentName(self: KParts__ReadOnlyPart, _componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `onSetComponentName` instead
    ///
    pub const OnSetComponentName = onSetComponentName;

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
    pub fn onSetComponentName(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setXMLFile` instead
    ///
    pub const SetXMLFile = setXMLFile;

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
    pub fn setXMLFile(self: KParts__ReadOnlyPart, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `superSetXMLFile` instead
    ///
    pub const SuperSetXMLFile = superSetXMLFile;

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
    pub fn superSetXMLFile(self: KParts__ReadOnlyPart, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `onSetXMLFile` instead
    ///
    pub const OnSetXMLFile = onSetXMLFile;

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
    pub fn onSetXMLFile(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setLocalXMLFile` instead
    ///
    pub const SetLocalXMLFile = setLocalXMLFile;

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
    pub fn setLocalXMLFile(self: KParts__ReadOnlyPart, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `superSetLocalXMLFile` instead
    ///
    pub const SuperSetLocalXMLFile = superSetLocalXMLFile;

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
    pub fn superSetLocalXMLFile(self: KParts__ReadOnlyPart, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `onSetLocalXMLFile` instead
    ///
    pub const OnSetLocalXMLFile = onSetLocalXMLFile;

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
    pub fn onSetLocalXMLFile(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setXML` instead
    ///
    pub const SetXML = setXML;

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
    pub fn setXML(self: KParts__ReadOnlyPart, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `superSetXML` instead
    ///
    pub const SuperSetXML = superSetXML;

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
    pub fn superSetXML(self: KParts__ReadOnlyPart, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `onSetXML` instead
    ///
    pub const OnSetXML = onSetXML;

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
    pub fn onSetXML(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetXML(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setDOMDocument` instead
    ///
    pub const SetDOMDocument = setDOMDocument;

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
    pub fn setDOMDocument(self: KParts__ReadOnlyPart, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KParts__ReadOnlyPart_SetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `superSetDOMDocument` instead
    ///
    pub const SuperSetDOMDocument = superSetDOMDocument;

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
    pub fn superSetDOMDocument(self: KParts__ReadOnlyPart, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KParts__ReadOnlyPart_SuperSetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `onSetDOMDocument` instead
    ///
    pub const OnSetDOMDocument = onSetDOMDocument;

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
    pub fn onSetDOMDocument(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QDomDocument, bool) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetDOMDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

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
    pub fn stateChanged(self: KParts__ReadOnlyPart, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__ReadOnlyPart_StateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `superStateChanged` instead
    ///
    pub const SuperStateChanged = superStateChanged;

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
    pub fn superStateChanged(self: KParts__ReadOnlyPart, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperStateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

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
    pub fn onStateChanged(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hostContainer` instead
    ///
    pub const HostContainer = hostContainer;

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
    pub fn hostContainer(self: KParts__ReadOnlyPart, containerName: []const u8) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return .{ .ptr = qtc.KParts__ReadOnlyPart_HostContainer(@ptrCast(self.ptr), containerName_str) };
    }

    /// ### DEPRECATED: Use `superHostContainer` instead
    ///
    pub const SuperHostContainer = superHostContainer;

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
    pub fn superHostContainer(self: KParts__ReadOnlyPart, containerName: []const u8) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperHostContainer(@ptrCast(self.ptr), containerName_str) };
    }

    /// ### DEPRECATED: Use `onHostContainer` instead
    ///
    pub const OnHostContainer = onHostContainer;

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
    pub fn onHostContainer(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) QWidget) void {
        qtc.KParts__ReadOnlyPart_OnHostContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `slotWidgetDestroyed` instead
    ///
    pub const SlotWidgetDestroyed = slotWidgetDestroyed;

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
    pub fn slotWidgetDestroyed(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_SlotWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSlotWidgetDestroyed` instead
    ///
    pub const SuperSlotWidgetDestroyed = superSlotWidgetDestroyed;

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
    pub fn superSlotWidgetDestroyed(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_SuperSlotWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSlotWidgetDestroyed` instead
    ///
    pub const OnSlotWidgetDestroyed = onSlotWidgetDestroyed;

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
    pub fn onSlotWidgetDestroyed(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSlotWidgetDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn sender(self: KParts__ReadOnlyPart) QObject {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn superSender(self: KParts__ReadOnlyPart) QObject {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) QObject) void {
        qtc.KParts__ReadOnlyPart_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn senderSignalIndex(self: KParts__ReadOnlyPart) i32 {
        return qtc.KParts__ReadOnlyPart_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn superSenderSignalIndex(self: KParts__ReadOnlyPart) i32 {
        return qtc.KParts__ReadOnlyPart_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__ReadOnlyPart_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KParts__ReadOnlyPart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__ReadOnlyPart_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KParts__ReadOnlyPart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__ReadOnlyPart_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__ReadOnlyPart_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KParts__ReadOnlyPart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__ReadOnlyPart_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KParts__ReadOnlyPart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__ReadOnlyPart_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, QMetaMethod) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `standardsXmlFileLocation` instead
    ///
    pub const StandardsXmlFileLocation = standardsXmlFileLocation;

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
    pub fn standardsXmlFileLocation(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_StandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.standardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superStandardsXmlFileLocation` instead
    ///
    pub const SuperStandardsXmlFileLocation = superStandardsXmlFileLocation;

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
    pub fn superStandardsXmlFileLocation(self: KParts__ReadOnlyPart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperStandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadOnlyPart.standardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onStandardsXmlFileLocation` instead
    ///
    pub const OnStandardsXmlFileLocation = onStandardsXmlFileLocation;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onStandardsXmlFileLocation(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnStandardsXmlFileLocation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loadStandardsXmlFile` instead
    ///
    pub const LoadStandardsXmlFile = loadStandardsXmlFile;

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
    pub fn loadStandardsXmlFile(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_LoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superLoadStandardsXmlFile` instead
    ///
    pub const SuperLoadStandardsXmlFile = superLoadStandardsXmlFile;

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
    pub fn superLoadStandardsXmlFile(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_SuperLoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLoadStandardsXmlFile` instead
    ///
    pub const OnLoadStandardsXmlFile = onLoadStandardsXmlFile;

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
    pub fn onLoadStandardsXmlFile(self: KParts__ReadOnlyPart, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnLoadStandardsXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: KParts__ReadOnlyPart, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KParts__ReadOnlyPart, callback: *const fn (KParts__ReadOnlyPart, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__ReadOnlyPart `
    ///
    pub fn delete(self: KParts__ReadOnlyPart) void {
        qtc.KParts__ReadOnlyPart_Delete(@ptrCast(self.ptr));
    }
};
