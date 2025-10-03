const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kxmlguiclient_enums = @import("../extras-kxmlgui/libkxmlguiclient.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kparts-readonlypart.html
pub const kparts__readonlypart = struct {
    /// New constructs a new KParts::ReadOnlyPart object.
    ///
    ///
    pub fn New() QtC.KParts__ReadOnlyPart {
        return qtc.KParts__ReadOnlyPart_new();
    }

    /// New2 constructs a new KParts::ReadOnlyPart object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KParts__ReadOnlyPart {
        return qtc.KParts__ReadOnlyPart_new2(@ptrCast(parent));
    }

    /// New3 constructs a new KParts::ReadOnlyPart object.
    ///
    /// ``` parent: QtC.QObject, data: QtC.KPluginMetaData ```
    pub fn New3(parent: ?*anyopaque, data: ?*anyopaque) QtC.KParts__ReadOnlyPart {
        return qtc.KParts__ReadOnlyPart_new3(@ptrCast(parent), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KParts__ReadOnlyPart_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KParts__ReadOnlyPart, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__ReadOnlyPart_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KParts__ReadOnlyPart, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KParts__ReadOnlyPart_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__ReadOnlyPart_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KParts__ReadOnlyPart_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KParts__ReadOnlyPart_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#setProgressInfoEnabled)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, show: bool ```
    pub fn SetProgressInfoEnabled(self: ?*anyopaque, show: bool) void {
        qtc.KParts__ReadOnlyPart_SetProgressInfoEnabled(@ptrCast(self), show);
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#isProgressInfoEnabled)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn IsProgressInfoEnabled(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_IsProgressInfoEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, url: QtC.QUrl ```
    pub fn OpenUrl(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_OpenUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, url: QtC.QUrl) callconv(.c) bool ```
    pub fn OnOpenUrl(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnOpenUrl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, url: QtC.QUrl ```
    pub fn QBaseOpenUrl(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_QBaseOpenUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#url)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KParts__ReadOnlyPart_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#closeUrl)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn CloseUrl(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_CloseUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#closeUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) bool ```
    pub fn OnCloseUrl(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnCloseUrl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#closeUrl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn QBaseCloseUrl(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_QBaseCloseUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#navigationExtension)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn NavigationExtension(self: ?*anyopaque) QtC.KParts__NavigationExtension {
        return qtc.KParts__ReadOnlyPart_NavigationExtension(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#setArguments)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, arguments: QtC.KParts__OpenUrlArguments ```
    pub fn SetArguments(self: ?*anyopaque, arguments: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SetArguments(@ptrCast(self), @ptrCast(arguments));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#arguments)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn Arguments(self: ?*anyopaque) QtC.KParts__OpenUrlArguments {
        return qtc.KParts__ReadOnlyPart_Arguments(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#openStream)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, mimeType: []const u8, url: QtC.QUrl ```
    pub fn OpenStream(self: ?*anyopaque, mimeType: []const u8, url: ?*anyopaque) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return qtc.KParts__ReadOnlyPart_OpenStream(@ptrCast(self), mimeType_str, @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#writeStream)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, data: []u8 ```
    pub fn WriteStream(self: ?*anyopaque, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KParts__ReadOnlyPart_WriteStream(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#closeStream)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn CloseStream(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_CloseStream(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, job: QtC.KIO__Job ```
    pub fn Started(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_Started(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, job: QtC.KIO__Job) callconv(.c) void ```
    pub fn OnStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Started(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn Completed(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_Completed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart) callconv(.c) void ```
    pub fn OnCompleted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Completed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn CompletedWithPendingAction(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_CompletedWithPendingAction(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart) callconv(.c) void ```
    pub fn OnCompletedWithPendingAction(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_CompletedWithPendingAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, errMsg: []const u8 ```
    pub fn Canceled(self: ?*anyopaque, errMsg: []const u8) void {
        const errMsg_str = qtc.libqt_string{
            .len = errMsg.len,
            .data = errMsg.ptr,
        };
        qtc.KParts__ReadOnlyPart_Canceled(@ptrCast(self), errMsg_str);
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, errMsg: [*:0]const u8) callconv(.c) void ```
    pub fn OnCanceled(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Canceled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, url: QtC.QUrl ```
    pub fn UrlChanged(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_UrlChanged(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, url: QtC.QUrl) callconv(.c) void ```
    pub fn OnUrlChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_UrlChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn OpenFile(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_OpenFile(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) bool ```
    pub fn OnOpenFile(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnOpenFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn QBaseOpenFile(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_QBaseOpenFile(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn AbortLoad(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_AbortLoad(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) void ```
    pub fn OnAbortLoad(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnAbortLoad(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn QBaseAbortLoad(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBaseAbortLoad(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, event: QtC.KParts__GUIActivateEvent ```
    pub fn GuiActivateEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_GuiActivateEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, event: QtC.KParts__GUIActivateEvent) callconv(.c) void ```
    pub fn OnGuiActivateEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnGuiActivateEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, event: QtC.KParts__GUIActivateEvent ```
    pub fn QBaseGuiActivateEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBaseGuiActivateEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, url: QtC.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, url: QtC.QUrl) callconv(.c) void ```
    pub fn OnSetUrl(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetUrl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, url: QtC.QUrl ```
    pub fn QBaseSetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBaseSetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn LocalFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__ReadOnlyPart_LocalFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.LocalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnLocalFilePath(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnLocalFilePath(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn QBaseLocalFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__ReadOnlyPart_QBaseLocalFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.LocalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, localFilePath: []const u8 ```
    pub fn SetLocalFilePath(self: ?*anyopaque, localFilePath: []const u8) void {
        const localFilePath_str = qtc.libqt_string{
            .len = localFilePath.len,
            .data = localFilePath.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetLocalFilePath(@ptrCast(self), localFilePath_str);
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, localFilePath: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetLocalFilePath(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetLocalFilePath(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, localFilePath: []const u8 ```
    pub fn QBaseSetLocalFilePath(self: ?*anyopaque, localFilePath: []const u8) void {
        const localFilePath_str = qtc.libqt_string{
            .len = localFilePath.len,
            .data = localFilePath.ptr,
        };
        qtc.KParts__ReadOnlyPart_QBaseSetLocalFilePath(@ptrCast(self), localFilePath_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KParts__ReadOnlyPart_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KParts__ReadOnlyPart_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#manager)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn Manager(self: ?*anyopaque) QtC.KParts__PartManager {
        return qtc.KParts__Part_Manager(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setAutoDeleteWidget)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, autoDeleteWidget: bool ```
    pub fn SetAutoDeleteWidget(self: ?*anyopaque, autoDeleteWidget: bool) void {
        qtc.KParts__Part_SetAutoDeleteWidget(@ptrCast(self), autoDeleteWidget);
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setAutoDeletePart)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, autoDeletePart: bool ```
    pub fn SetAutoDeletePart(self: ?*anyopaque, autoDeletePart: bool) void {
        qtc.KParts__Part_SetAutoDeletePart(@ptrCast(self), autoDeletePart);
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#metaData)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn MetaData(self: ?*anyopaque) QtC.KPluginMetaData {
        return qtc.KParts__Part_MetaData(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, caption: []const u8 ```
    pub fn SetWindowCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KParts__Part_SetWindowCaption(@ptrCast(self), caption_str);
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, caption: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetWindowCaption(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetWindowCaption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, text: []const u8 ```
    pub fn SetStatusBarText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KParts__Part_SetStatusBarText(@ptrCast(self), text_str);
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, text: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetStatusBarText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetStatusBarText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kparts::readonlypart.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kparts::readonlypart.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts::readonlypart.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::PartBase
    ///
    /// [Qt documentation](https://api.kde.org/kparts-partbase.html#setPartObject)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, object: QtC.QObject ```
    pub fn SetPartObject(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.KParts__PartBase_SetPartObject(@ptrCast(self), @ptrCast(object));
    }

    /// Inherited from KParts::PartBase
    ///
    /// [Qt documentation](https://api.kde.org/kparts-partbase.html#partObject)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn PartObject(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__PartBase_PartObject(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, name: []const u8 ```
    pub fn Action(self: ?*anyopaque, name: []const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KXMLGUIClient_Action(@ptrCast(self), name_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, doc: QtC.QDomDocument ```
    pub fn SetXMLGUIBuildDocument(self: ?*anyopaque, doc: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self), @ptrCast(doc));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn XmlguiBuildDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, factory: QtC.KXMLGUIFactory ```
    pub fn SetFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn Factory(self: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KXMLGUIClient_Factory(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn ParentClient(self: ?*anyopaque) QtC.KXMLGUIClient {
        return qtc.KXMLGUIClient_ParentClient(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, child: QtC.KXMLGUIClient ```
    pub fn InsertChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, child: QtC.KXMLGUIClient ```
    pub fn RemoveChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn ChildClients(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KXMLGUIClient, _arr.len) catch @panic("kparts::readonlypart.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, builder: QtC.KXMLGUIBuilder ```
    pub fn SetClientBuilder(self: ?*anyopaque, builder: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self), @ptrCast(builder));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn ClientBuilder(self: ?*anyopaque) QtC.KXMLGUIBuilder {
        return qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn ReloadXML(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, name: []const u8, actionList: []QtC.QAction ```
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
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#unplugActionList)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, name: []const u8 ```
    pub fn UnplugActionList(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self), name_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
    ///
    /// ``` files: [][]const u8, doc: []const u8, allocator: std.mem.Allocator ```
    pub fn FindMostRecentXMLFile(files: [][]const u8, doc: []const u8, allocator: std.mem.Allocator) []const u8 {
        var files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("kparts::readonlypart.FindMostRecentXMLFile: Memory allocation failed");
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
        const _str = qtc.KXMLGUIClient_FindMostRecentXMLFile(files_list, doc_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, state: []const u8, action: []const u8 ```
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
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, state: []const u8, action: []const u8 ```
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
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, state: []const u8 ```
    pub fn GetActionsToChangeForState(self: ?*anyopaque, state: []const u8) QtC.KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self), state_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, param1: QtC.QWidget ```
    pub fn BeginXMLPlug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn EndXMLPlug(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, param1: QtC.QWidget ```
    pub fn PrepareXMLUnplug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, xmlfile: []const u8, localxmlfile: []const u8 ```
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
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
    ///
    /// ``` xml: []const u8, allocator: std.mem.Allocator ```
    pub fn FindVersionNumber(xml: []const u8, allocator: std.mem.Allocator) []const u8 {
        const xml_str = qtc.libqt_string{
            .len = xml.len,
            .data = xml.ptr,
        };
        const _str = qtc.KXMLGUIClient_FindVersionNumber(xml_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, xmlfile: []const u8, localxmlfile: []const u8, merge: bool ```
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
    /// [Qt documentation](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KParts__ReadOnlyPart_Widget(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn QBaseWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KParts__ReadOnlyPart_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) QtC.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWidget) void {
        qtc.KParts__ReadOnlyPart_OnWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, manager: QtC.KParts__PartManager ```
    pub fn SetManager(self: ?*anyopaque, manager: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SetManager(@ptrCast(self), @ptrCast(manager));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, manager: QtC.KParts__PartManager ```
    pub fn QBaseSetManager(self: ?*anyopaque, manager: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBaseSetManager(@ptrCast(self), @ptrCast(manager));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, manager: QtC.KParts__PartManager) callconv(.c) void ```
    pub fn OnSetManager(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetManager(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, widget: QtC.QWidget, globalPos: QtC.QPoint ```
    pub fn HitTest(self: ?*anyopaque, widget: ?*anyopaque, globalPos: ?*anyopaque) QtC.KParts__Part {
        return qtc.KParts__ReadOnlyPart_HitTest(@ptrCast(self), @ptrCast(widget), @ptrCast(globalPos));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, widget: QtC.QWidget, globalPos: QtC.QPoint ```
    pub fn QBaseHitTest(self: ?*anyopaque, widget: ?*anyopaque, globalPos: ?*anyopaque) QtC.KParts__Part {
        return qtc.KParts__ReadOnlyPart_QBaseHitTest(@ptrCast(self), @ptrCast(widget), @ptrCast(globalPos));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, widget: QtC.QWidget, globalPos: QtC.QPoint) callconv(.c) QtC.KParts__Part ```
    pub fn OnHitTest(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.KParts__Part) void {
        qtc.KParts__ReadOnlyPart_OnHitTest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, widget: QtC.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, widget: QtC.QWidget ```
    pub fn QBaseSetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBaseSetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnSetWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, event: QtC.KParts__PartActivateEvent ```
    pub fn PartActivateEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_PartActivateEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, event: QtC.KParts__PartActivateEvent ```
    pub fn QBasePartActivateEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBasePartActivateEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, event: QtC.KParts__PartActivateEvent) callconv(.c) void ```
    pub fn OnPartActivateEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnPartActivateEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, element: QtC.QDomElement ```
    pub fn Action2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KParts__ReadOnlyPart_Action2(@ptrCast(self), @ptrCast(element));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, element: QtC.QDomElement ```
    pub fn QBaseAction2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KParts__ReadOnlyPart_QBaseAction2(@ptrCast(self), @ptrCast(element));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, element: QtC.QDomElement) callconv(.c) QtC.QAction ```
    pub fn OnAction2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAction) void {
        qtc.KParts__ReadOnlyPart_OnAction2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn ActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KParts__ReadOnlyPart_ActionCollection(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn QBaseActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KParts__ReadOnlyPart_QBaseActionCollection(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) QtC.KActionCollection ```
    pub fn OnActionCollection(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KActionCollection) void {
        qtc.KParts__ReadOnlyPart_OnActionCollection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn ComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__ReadOnlyPart_ComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn QBaseComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__ReadOnlyPart_QBaseComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnComponentName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnComponentName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn DomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KParts__ReadOnlyPart_DomDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn QBaseDomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KParts__ReadOnlyPart_QBaseDomDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) QtC.QDomDocument ```
    pub fn OnDomDocument(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDomDocument) void {
        qtc.KParts__ReadOnlyPart_OnDomDocument(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn XmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__ReadOnlyPart_XmlFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn QBaseXmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__ReadOnlyPart_QBaseXmlFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnXmlFile(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnXmlFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn LocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__ReadOnlyPart_LocalXMLFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn QBaseLocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__ReadOnlyPart_QBaseLocalXMLFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnLocalXMLFile(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnLocalXMLFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, componentName: []const u8, componentDisplayName: []const u8 ```
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

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, componentName: []const u8, componentDisplayName: []const u8 ```
    pub fn QBaseSetComponentName(self: ?*anyopaque, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__ReadOnlyPart_QBaseSetComponentName(@ptrCast(self), componentName_str, componentDisplayName_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, componentName: [*:0]const u8, componentDisplayName: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetComponentName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetComponentName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, file: []const u8, merge: bool, setXMLDoc: bool ```
    pub fn SetXMLFile(self: ?*anyopaque, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetXMLFile(@ptrCast(self), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, file: []const u8, merge: bool, setXMLDoc: bool ```
    pub fn QBaseSetXMLFile(self: ?*anyopaque, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_QBaseSetXMLFile(@ptrCast(self), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, file: [*:0]const u8, merge: bool, setXMLDoc: bool) callconv(.c) void ```
    pub fn OnSetXMLFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetXMLFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, file: []const u8 ```
    pub fn SetLocalXMLFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetLocalXMLFile(@ptrCast(self), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, file: []const u8 ```
    pub fn QBaseSetLocalXMLFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadOnlyPart_QBaseSetLocalXMLFile(@ptrCast(self), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, file: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetLocalXMLFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetLocalXMLFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, document: []const u8, merge: bool ```
    pub fn SetXML(self: ?*anyopaque, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__ReadOnlyPart_SetXML(@ptrCast(self), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, document: []const u8, merge: bool ```
    pub fn QBaseSetXML(self: ?*anyopaque, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__ReadOnlyPart_QBaseSetXML(@ptrCast(self), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, document: [*:0]const u8, merge: bool) callconv(.c) void ```
    pub fn OnSetXML(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetXML(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, document: QtC.QDomDocument, merge: bool ```
    pub fn SetDOMDocument(self: ?*anyopaque, document: ?*anyopaque, merge: bool) void {
        qtc.KParts__ReadOnlyPart_SetDOMDocument(@ptrCast(self), @ptrCast(document), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, document: QtC.QDomDocument, merge: bool ```
    pub fn QBaseSetDOMDocument(self: ?*anyopaque, document: ?*anyopaque, merge: bool) void {
        qtc.KParts__ReadOnlyPart_QBaseSetDOMDocument(@ptrCast(self), @ptrCast(document), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, document: QtC.QDomDocument, merge: bool) callconv(.c) void ```
    pub fn OnSetDOMDocument(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSetDOMDocument(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, newstate: []const u8, reverse: kxmlguiclient_enums.ReverseStateChange ```
    pub fn StateChanged(self: ?*anyopaque, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__ReadOnlyPart_StateChanged(@ptrCast(self), newstate_str, @intCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, newstate: []const u8, reverse: kxmlguiclient_enums.ReverseStateChange ```
    pub fn QBaseStateChanged(self: ?*anyopaque, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__ReadOnlyPart_QBaseStateChanged(@ptrCast(self), newstate_str, @intCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, newstate: [*:0]const u8, reverse: kxmlguiclient_enums.ReverseStateChange) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, containerName: []const u8 ```
    pub fn HostContainer(self: ?*anyopaque, containerName: []const u8) QtC.QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return qtc.KParts__ReadOnlyPart_HostContainer(@ptrCast(self), containerName_str);
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, containerName: []const u8 ```
    pub fn QBaseHostContainer(self: ?*anyopaque, containerName: []const u8) QtC.QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return qtc.KParts__ReadOnlyPart_QBaseHostContainer(@ptrCast(self), containerName_str);
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, containerName: [*:0]const u8) callconv(.c) QtC.QWidget ```
    pub fn OnHostContainer(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QWidget) void {
        qtc.KParts__ReadOnlyPart_OnHostContainer(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn SlotWidgetDestroyed(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SlotWidgetDestroyed(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn QBaseSlotWidgetDestroyed(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBaseSlotWidgetDestroyed(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) void ```
    pub fn OnSlotWidgetDestroyed(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnSlotWidgetDestroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__ReadOnlyPart_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__ReadOnlyPart_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KParts__ReadOnlyPart_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KParts__ReadOnlyPart_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KParts__ReadOnlyPart_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__ReadOnlyPart_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__ReadOnlyPart_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__ReadOnlyPart_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__ReadOnlyPart_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__ReadOnlyPart_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn StandardsXmlFileLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__ReadOnlyPart_StandardsXmlFileLocation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, allocator: std.mem.Allocator ```
    pub fn QBaseStandardsXmlFileLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__ReadOnlyPart_QBaseStandardsXmlFileLocation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::readonlypart.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnStandardsXmlFileLocation(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadOnlyPart_OnStandardsXmlFileLocation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn LoadStandardsXmlFile(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_LoadStandardsXmlFile(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn QBaseLoadStandardsXmlFile(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_QBaseLoadStandardsXmlFile(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn () callconv(.c) void ```
    pub fn OnLoadStandardsXmlFile(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_OnLoadStandardsXmlFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart, callback: *const fn (self: QtC.KParts__ReadOnlyPart, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KParts__ReadOnlyPart ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_Delete(@ptrCast(self));
    }
};
