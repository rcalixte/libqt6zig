const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kxmlguiclient_enums = @import("../extras-kxmlgui/libkxmlguiclient.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html)
pub const kparts__readonlypart = struct {
    /// New constructs a new KParts::ReadOnlyPart object.
    ///
    pub fn New() QtC.KParts__ReadOnlyPart {
        return qtc.KParts__ReadOnlyPart_new();
    }

    /// New2 constructs a new KParts::ReadOnlyPart object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.KParts__ReadOnlyPart {
        return qtc.KParts__ReadOnlyPart_new2(@ptrCast(parent));
    }

    /// New3 constructs a new KParts::ReadOnlyPart object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` data: QtC.KPluginMetaData `
    ///
    pub fn New3(parent: ?*anyopaque, data: ?*anyopaque) QtC.KParts__ReadOnlyPart {
        return qtc.KParts__ReadOnlyPart_new3(@ptrCast(parent), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KParts__ReadOnlyPart_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.KParts__ReadOnlyPart_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KParts__ReadOnlyPart_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__ReadOnlyPart_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__ReadOnlyPart_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__ReadOnlyPart_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__ReadOnlyPart_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__ReadOnlyPart_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` show: bool `
    ///
    pub fn SetProgressInfoEnabled(self: ?*anyopaque, show: bool) void {
        qtc.KParts__ReadOnlyPart_SetProgressInfoEnabled(@ptrCast(self), show);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#isProgressInfoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn IsProgressInfoEnabled(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_IsProgressInfoEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn OpenUrl(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_OpenUrl(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, url: QtC.QUrl) callconv(.c) bool `
    ///
    pub fn OnOpenUrl(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnOpenUrl(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SuperOpenUrl(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_SuperOpenUrl(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KParts__ReadOnlyPart_Url(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn CloseUrl(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_CloseUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCloseUrl(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnCloseUrl(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SuperCloseUrl(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_SuperCloseUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#navigationExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn NavigationExtension(self: ?*anyopaque) QtC.KParts__NavigationExtension {
        return qtc.KParts__ReadOnlyPart_NavigationExtension(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` arguments: QtC.KParts__OpenUrlArguments `
    ///
    pub fn SetArguments(self: ?*anyopaque, arguments: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SetArguments(@ptrCast(self), @ptrCast(arguments));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn Arguments(self: ?*anyopaque) QtC.KParts__OpenUrlArguments {
        return qtc.KParts__ReadOnlyPart_Arguments(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` mimeType: []const u8 `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn OpenStream(self: ?*anyopaque, mimeType: []const u8, url: ?*anyopaque) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return qtc.KParts__ReadOnlyPart_OpenStream(@ptrCast(self), mimeType_str, @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#writeStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` data: []u8 `
    ///
    pub fn WriteStream(self: ?*anyopaque, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KParts__ReadOnlyPart_WriteStream(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn CloseStream(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_CloseStream(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` job: QtC.KIO__Job `
    ///
    pub fn Started(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_Started(@ptrCast(self), @ptrCast(job));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, job: QtC.KIO__Job) callconv(.c) void `
    ///
    pub fn OnStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Started(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn Completed(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_Completed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart) callconv(.c) void `
    ///
    pub fn OnCompleted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Completed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn CompletedWithPendingAction(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_CompletedWithPendingAction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart) callconv(.c) void `
    ///
    pub fn OnCompletedWithPendingAction(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_CompletedWithPendingAction(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` errMsg: []const u8 `
    ///
    pub fn Canceled(self: ?*anyopaque, errMsg: []const u8) void {
        const errMsg_str = qtc.libqt_string{
            .len = errMsg.len,
            .data = errMsg.ptr,
        };
        qtc.KParts__ReadOnlyPart_Canceled(@ptrCast(self), errMsg_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, errMsg: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCanceled(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Canceled(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn UrlChanged(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_UrlChanged(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, url: QtC.QUrl) callconv(.c) void `
    ///
    pub fn OnUrlChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_UrlChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn OpenFile(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_OpenFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnOpenFile(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnOpenFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SuperOpenFile(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_SuperOpenFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn AbortLoad(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_AbortLoad(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAbortLoad(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnAbortLoad(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SuperAbortLoad(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperAbortLoad(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` event: QtC.KParts__GUIActivateEvent `
    ///
    pub fn GuiActivateEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_GuiActivateEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, event: QtC.KParts__GUIActivateEvent) callconv(.c) void `
    ///
    pub fn OnGuiActivateEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnGuiActivateEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` event: QtC.KParts__GUIActivateEvent `
    ///
    pub fn SuperGuiActivateEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperGuiActivateEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, url: QtC.QUrl) callconv(.c) void `
    ///
    pub fn OnSetUrl(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetUrl(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SuperSetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperSetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_LocalFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.LocalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalFilePath(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnLocalFilePath(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperLocalFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperLocalFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readonlypart.LocalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` localFilePath: []const u8 `
    ///
    pub fn SetLocalFilePath(self: ?*anyopaque, localFilePath: []const u8) void {
        const localFilePath_str = qtc.libqt_string{
            .len = localFilePath.len,
            .data = localFilePath.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetLocalFilePath(@ptrCast(self), localFilePath_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, localFilePath: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetLocalFilePath(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetLocalFilePath(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` localFilePath: []const u8 `
    ///
    pub fn SuperSetLocalFilePath(self: ?*anyopaque, localFilePath: []const u8) void {
        const localFilePath_str = qtc.libqt_string{
            .len = localFilePath.len,
            .data = localFilePath.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetLocalFilePath(@ptrCast(self), localFilePath_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn Manager(self: ?*anyopaque) QtC.KParts__PartManager {
        return qtc.KParts__Part_Manager(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeleteWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` autoDeleteWidget: bool `
    ///
    pub fn SetAutoDeleteWidget(self: ?*anyopaque, autoDeleteWidget: bool) void {
        qtc.KParts__Part_SetAutoDeleteWidget(@ptrCast(self), autoDeleteWidget);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeletePart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` autoDeletePart: bool `
    ///
    pub fn SetAutoDeletePart(self: ?*anyopaque, autoDeletePart: bool) void {
        qtc.KParts__Part_SetAutoDeletePart(@ptrCast(self), autoDeletePart);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn MetaData(self: ?*anyopaque) QtC.KPluginMetaData {
        return qtc.KParts__Part_MetaData(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn SetWindowCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KParts__Part_SetWindowCaption(@ptrCast(self), caption_str);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, caption: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetWindowCaption(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetWindowCaption(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetStatusBarText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KParts__Part_SetStatusBarText(@ptrCast(self), text_str);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetStatusBarText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetStatusBarText(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kparts__readonlypart.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::PartBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#setPartObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` object: QtC.QObject `
    ///
    pub fn SetPartObject(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.KParts__PartBase_SetPartObject(@ptrCast(self), @ptrCast(object));
    }

    /// Inherited from KParts::PartBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn PartObject(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__PartBase_PartObject(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Action(self: ?*anyopaque, name: []const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KXMLGUIClient_Action(@ptrCast(self), name_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` doc: QtC.QDomDocument `
    ///
    pub fn SetXMLGUIBuildDocument(self: ?*anyopaque, doc: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self), @ptrCast(doc));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn XmlguiBuildDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` factory: QtC.KXMLGUIFactory `
    ///
    pub fn SetFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn Factory(self: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KXMLGUIClient_Factory(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn ParentClient(self: ?*anyopaque) QtC.KXMLGUIClient {
        return qtc.KXMLGUIClient_ParentClient(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` child: QtC.KXMLGUIClient `
    ///
    pub fn InsertChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` child: QtC.KXMLGUIClient `
    ///
    pub fn RemoveChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildClients(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KXMLGUIClient, _arr.len) catch @panic("kparts__readonlypart.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` builder: QtC.KXMLGUIBuilder `
    ///
    pub fn SetClientBuilder(self: ?*anyopaque, builder: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self), @ptrCast(builder));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn ClientBuilder(self: ?*anyopaque) QtC.KXMLGUIBuilder {
        return qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn ReloadXML(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QtC.QAction `
    ///
    pub fn PlugActionList(self: ?*anyopaque, name: []const u8, actionList: []?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const actionList_list = qtc.libqt_list{
            .len = actionList.len,
            .data = @ptrCast(actionList.ptr),
        };
        qtc.KXMLGUIClient_PlugActionList(@ptrCast(self), name_str, actionList_list);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnplugActionList(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self), name_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` files: []const []const u8 `
    ///
    /// ` doc: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FindMostRecentXMLFile(files: []const []const u8, doc: []const u8, allocator: std.mem.Allocator) []const u8 {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("kparts__readonlypart.FindMostRecentXMLFile: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i| {
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionEnabled(self: ?*anyopaque, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionEnabled(@ptrCast(self), state_str, action_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionDisabled(self: ?*anyopaque, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionDisabled(@ptrCast(self), state_str, action_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` state: []const u8 `
    ///
    pub fn GetActionsToChangeForState(self: ?*anyopaque, state: []const u8) QtC.KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self), state_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn BeginXMLPlug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn EndXMLPlug(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn PrepareXMLUnplug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    pub fn ReplaceXMLFile(self: ?*anyopaque, xmlfile: []const u8, localxmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile(@ptrCast(self), xmlfile_str, localxmlfile_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` xml: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FindVersionNumber(xml: []const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn ReplaceXMLFile3(self: ?*anyopaque, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile3(@ptrCast(self), xmlfile_str, localxmlfile_str, merge);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KParts__ReadOnlyPart_Widget(@ptrCast(self));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SuperWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KParts__ReadOnlyPart_SuperWidget(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWidget `
    ///
    pub fn OnWidget(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWidget) void {
        qtc.KParts__ReadOnlyPart_OnWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` manager: QtC.KParts__PartManager `
    ///
    pub fn SetManager(self: ?*anyopaque, manager: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SetManager(@ptrCast(self), @ptrCast(manager));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` manager: QtC.KParts__PartManager `
    ///
    pub fn SuperSetManager(self: ?*anyopaque, manager: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperSetManager(@ptrCast(self), @ptrCast(manager));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, manager: QtC.KParts__PartManager) callconv(.c) void `
    ///
    pub fn OnSetManager(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetManager(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` globalPos: QtC.QPoint `
    ///
    pub fn HitTest(self: ?*anyopaque, widget: ?*anyopaque, globalPos: ?*anyopaque) QtC.KParts__Part {
        return qtc.KParts__ReadOnlyPart_HitTest(@ptrCast(self), @ptrCast(widget), @ptrCast(globalPos));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` globalPos: QtC.QPoint `
    ///
    pub fn SuperHitTest(self: ?*anyopaque, widget: ?*anyopaque, globalPos: ?*anyopaque) QtC.KParts__Part {
        return qtc.KParts__ReadOnlyPart_SuperHitTest(@ptrCast(self), @ptrCast(widget), @ptrCast(globalPos));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, widget: QtC.QWidget, globalPos: QtC.QPoint) callconv(.c) QtC.KParts__Part `
    ///
    pub fn OnHitTest(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.KParts__Part) void {
        qtc.KParts__ReadOnlyPart_OnHitTest(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SetWidget(@ptrCast(self), @ptrCast(widget));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperSetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperSetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnSetWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` event: QtC.KParts__PartActivateEvent `
    ///
    pub fn PartActivateEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_PartActivateEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` event: QtC.KParts__PartActivateEvent `
    ///
    pub fn SuperPartActivateEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperPartActivateEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, event: QtC.KParts__PartActivateEvent) callconv(.c) void `
    ///
    pub fn OnPartActivateEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnPartActivateEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` element: QtC.QDomElement `
    ///
    pub fn Action2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KParts__ReadOnlyPart_Action2(@ptrCast(self), @ptrCast(element));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` element: QtC.QDomElement `
    ///
    pub fn SuperAction2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KParts__ReadOnlyPart_SuperAction2(@ptrCast(self), @ptrCast(element));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, element: QtC.QDomElement) callconv(.c) QtC.QAction `
    ///
    pub fn OnAction2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAction) void {
        qtc.KParts__ReadOnlyPart_OnAction2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn ActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KParts__ReadOnlyPart_ActionCollection(@ptrCast(self));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SuperActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KParts__ReadOnlyPart_SuperActionCollection(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.KActionCollection `
    ///
    pub fn OnActionCollection(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KActionCollection) void {
        qtc.KParts__ReadOnlyPart_OnActionCollection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_ComponentName(@ptrCast(self));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperComponentName(@ptrCast(self));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnComponentName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnComponentName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn DomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KParts__ReadOnlyPart_DomDocument(@ptrCast(self));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SuperDomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KParts__ReadOnlyPart_SuperDomDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QDomDocument `
    ///
    pub fn OnDomDocument(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDomDocument) void {
        qtc.KParts__ReadOnlyPart_OnDomDocument(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn XmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_XmlFile(@ptrCast(self));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperXmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperXmlFile(@ptrCast(self));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnXmlFile(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnXmlFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_LocalXMLFile(@ptrCast(self));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperLocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperLocalXMLFile(@ptrCast(self));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalXMLFile(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnLocalXMLFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SetComponentName(self: ?*anyopaque, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetComponentName(@ptrCast(self), componentName_str, componentDisplayName_str);
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SuperSetComponentName(self: ?*anyopaque, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetComponentName(@ptrCast(self), componentName_str, componentDisplayName_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, componentName: [*:0]const u8, componentDisplayName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetComponentName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetComponentName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn SetXMLFile(self: ?*anyopaque, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetXMLFile(@ptrCast(self), file_str, merge, setXMLDoc);
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn SuperSetXMLFile(self: ?*anyopaque, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetXMLFile(@ptrCast(self), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, file: [*:0]const u8, merge: bool, setXMLDoc: bool) callconv(.c) void `
    ///
    pub fn OnSetXMLFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetXMLFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetLocalXMLFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetLocalXMLFile(@ptrCast(self), file_str);
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SuperSetLocalXMLFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetLocalXMLFile(@ptrCast(self), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, file: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetLocalXMLFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetLocalXMLFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn SetXML(self: ?*anyopaque, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetXML(@ptrCast(self), document_str, merge);
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn SuperSetXML(self: ?*anyopaque, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperSetXML(@ptrCast(self), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, document: [*:0]const u8, merge: bool) callconv(.c) void `
    ///
    pub fn OnSetXML(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetXML(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` document: QtC.QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn SetDOMDocument(self: ?*anyopaque, document: ?*anyopaque, merge: bool) void {
        qtc.KParts__ReadOnlyPart_SetDOMDocument(@ptrCast(self), @ptrCast(document), merge);
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` document: QtC.QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn SuperSetDOMDocument(self: ?*anyopaque, document: ?*anyopaque, merge: bool) void {
        qtc.KParts__ReadOnlyPart_SuperSetDOMDocument(@ptrCast(self), @ptrCast(document), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, document: QtC.QDomDocument, merge: bool) callconv(.c) void `
    ///
    pub fn OnSetDOMDocument(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetDOMDocument(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn StateChanged(self: ?*anyopaque, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__ReadOnlyPart_StateChanged(@ptrCast(self), newstate_str, @bitCast(reverse));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn SuperStateChanged(self: ?*anyopaque, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__ReadOnlyPart_SuperStateChanged(@ptrCast(self), newstate_str, @bitCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, newstate: [*:0]const u8, reverse: kxmlguiclient_enums.ReverseStateChange) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnStateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` containerName: []const u8 `
    ///
    pub fn HostContainer(self: ?*anyopaque, containerName: []const u8) QtC.QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return qtc.KParts__ReadOnlyPart_HostContainer(@ptrCast(self), containerName_str);
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` containerName: []const u8 `
    ///
    pub fn SuperHostContainer(self: ?*anyopaque, containerName: []const u8) QtC.QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return qtc.KParts__ReadOnlyPart_SuperHostContainer(@ptrCast(self), containerName_str);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, containerName: [*:0]const u8) callconv(.c) QtC.QWidget `
    ///
    pub fn OnHostContainer(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QWidget) void {
        qtc.KParts__ReadOnlyPart_OnHostContainer(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SlotWidgetDestroyed(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SlotWidgetDestroyed(@ptrCast(self));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SuperSlotWidgetDestroyed(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperSlotWidgetDestroyed(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotWidgetDestroyed(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSlotWidgetDestroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__ReadOnlyPart_Sender(@ptrCast(self));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__ReadOnlyPart_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KParts__ReadOnlyPart_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KParts__ReadOnlyPart_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KParts__ReadOnlyPart_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__ReadOnlyPart_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__ReadOnlyPart_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__ReadOnlyPart_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__ReadOnlyPart_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StandardsXmlFileLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_StandardsXmlFileLocation(@ptrCast(self));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperStandardsXmlFileLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadOnlyPart_SuperStandardsXmlFileLocation(@ptrCast(self));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnStandardsXmlFileLocation(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnStandardsXmlFileLocation(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn LoadStandardsXmlFile(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_LoadStandardsXmlFile(@ptrCast(self));
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
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn SuperLoadStandardsXmlFile(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SuperLoadStandardsXmlFile(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnLoadStandardsXmlFile(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnLoadStandardsXmlFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    /// ` callback: *const fn (self: QtC.KParts__ReadOnlyPart, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KParts__ReadOnlyPart `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_Delete(@ptrCast(self));
    }
};
