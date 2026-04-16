const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QAuthenticator = @import("libqt6").QAuthenticator;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPageLayout = @import("libqt6").QPageLayout;
const QPageRanges = @import("libqt6").QPageRanges;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QSizeF = @import("libqt6").QSizeF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWebChannel = @import("libqt6").QWebChannel;
const QWebEngineCertificateError = @import("libqt6").QWebEngineCertificateError;
const QWebEngineClientCertificateSelection = @import("libqt6").QWebEngineClientCertificateSelection;
const QWebEngineDesktopMediaRequest = @import("libqt6").QWebEngineDesktopMediaRequest;
const QWebEngineFileSystemAccessRequest = @import("libqt6").QWebEngineFileSystemAccessRequest;
const QWebEngineFindTextResult = @import("libqt6").QWebEngineFindTextResult;
const QWebEngineFrame = @import("libqt6").QWebEngineFrame;
const QWebEngineFullScreenRequest = @import("libqt6").QWebEngineFullScreenRequest;
const QWebEngineHistory = @import("libqt6").QWebEngineHistory;
const QWebEngineHttpRequest = @import("libqt6").QWebEngineHttpRequest;
const QWebEngineLoadingInfo = @import("libqt6").QWebEngineLoadingInfo;
const QWebEngineNavigationRequest = @import("libqt6").QWebEngineNavigationRequest;
const QWebEngineNewWindowRequest = @import("libqt6").QWebEngineNewWindowRequest;
const QWebEnginePermission = @import("libqt6").QWebEnginePermission;
const QWebEngineProfile = @import("libqt6").QWebEngineProfile;
const QWebEngineQuotaRequest = @import("libqt6").QWebEngineQuotaRequest;
const QWebEngineRegisterProtocolHandlerRequest = @import("libqt6").QWebEngineRegisterProtocolHandlerRequest;
const QWebEngineScriptCollection = @import("libqt6").QWebEngineScriptCollection;
const QWebEngineSettings = @import("libqt6").QWebEngineSettings;
const QWebEngineUrlRequestInterceptor = @import("libqt6").QWebEngineUrlRequestInterceptor;
const QWebEngineWebAuthUxRequest = @import("libqt6").QWebEngineWebAuthUxRequest;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qwebenginedownloadrequest_enums = @import("libqwebenginedownloadrequest.zig").enums;
const qwebenginepage_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html)
pub const QWebEnginePage = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEnginePage,

    pub const _is_QWebEnginePage = {};
    pub const _is_QObject = {};

    /// New constructs a new QWebEnginePage object.
    ///
    pub fn New() QWebEnginePage {
        return .{ .ptr = qtc.QWebEnginePage_new() };
    }

    /// New2 constructs a new QWebEnginePage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` profile: QWebEngineProfile `
    ///
    pub fn New2(profile: anytype) QWebEnginePage {
        comptime _ = @TypeOf(profile)._is_QWebEngineProfile;
        return .{ .ptr = qtc.QWebEnginePage_new2(@ptrCast(profile.ptr)) };
    }

    /// New3 constructs a new QWebEnginePage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QWebEnginePage {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QWebEnginePage_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QWebEnginePage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` profile: QWebEngineProfile `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(profile: anytype, parent: anytype) QWebEnginePage {
        comptime _ = @TypeOf(profile)._is_QWebEngineProfile;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QWebEnginePage_new4(@ptrCast(profile.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn MetaObject(self: QWebEnginePage) QMetaObject {
        return .{ .ptr = qtc.QWebEnginePage_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QWebEnginePage, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QWebEnginePage_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    pub fn SuperMetaObject(self: QWebEnginePage) QMetaObject {
        return .{ .ptr = qtc.QWebEnginePage_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QWebEnginePage, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEnginePage_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QWebEnginePage, callback: *const fn (QWebEnginePage, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QWebEnginePage_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QWebEnginePage, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEnginePage_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QWebEnginePage, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEnginePage_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QWebEnginePage_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QWebEnginePage, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEnginePage_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginepage.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#history)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn History(self: QWebEnginePage) QWebEngineHistory {
        return .{ .ptr = qtc.QWebEnginePage_History(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#hasSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn HasSelection(self: QWebEnginePage) bool {
        return qtc.QWebEnginePage_HasSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedText(self: QWebEnginePage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEnginePage_SelectedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginepage.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#profile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn Profile(self: QWebEnginePage) QWebEngineProfile {
        return .{ .ptr = qtc.QWebEnginePage_Profile(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` action: qwebenginepage_enums.WebAction `
    ///
    pub fn Action(self: QWebEnginePage, action: i32) QAction {
        return .{ .ptr = qtc.QWebEnginePage_Action(@ptrCast(self.ptr), @bitCast(action)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` action: qwebenginepage_enums.WebAction `
    ///
    /// ` checked: bool `
    ///
    pub fn TriggerAction(self: QWebEnginePage, action: i32, checked: bool) void {
        qtc.QWebEnginePage_TriggerAction(@ptrCast(self.ptr), @bitCast(action), checked);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, action: qwebenginepage_enums.WebAction, checked: bool) callconv(.c) void `
    ///
    pub fn OnTriggerAction(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_OnTriggerAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTriggerAction` instead
    ///
    pub const QBaseTriggerAction = SuperTriggerAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` action: qwebenginepage_enums.WebAction `
    ///
    /// ` checked: bool `
    ///
    pub fn SuperTriggerAction(self: QWebEnginePage, action: i32, checked: bool) void {
        qtc.QWebEnginePage_SuperTriggerAction(@ptrCast(self.ptr), @bitCast(action), checked);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#replaceMisspelledWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` replacement: []const u8 `
    ///
    pub fn ReplaceMisspelledWord(self: QWebEnginePage, replacement: []const u8) void {
        const replacement_str = qtc.libqt_string{
            .len = replacement.len,
            .data = replacement.ptr,
        };
        qtc.QWebEnginePage_ReplaceMisspelledWord(@ptrCast(self.ptr), replacement_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: QEvent `
    ///
    pub fn Event(self: QWebEnginePage, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QWebEnginePage_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QEvent) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperEvent(self: QWebEnginePage, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QWebEnginePage_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` subString: []const u8 `
    ///
    pub fn FindText(self: QWebEnginePage, subString: []const u8) void {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        qtc.QWebEnginePage_FindText(@ptrCast(self.ptr), subString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#isLoading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn IsLoading(self: QWebEnginePage) bool {
        return qtc.QWebEnginePage_IsLoading(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` url: QUrl `
    ///
    pub fn Load(self: QWebEnginePage, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEnginePage_Load(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineHttpRequest `
    ///
    pub fn Load2(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineHttpRequest;
        qtc.QWebEnginePage_Load2(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#download)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` url: QUrl `
    ///
    pub fn Download(self: QWebEnginePage, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEnginePage_Download(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` html: []const u8 `
    ///
    pub fn SetHtml(self: QWebEnginePage, html: []const u8) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QWebEnginePage_SetHtml(@ptrCast(self.ptr), html_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetContent(self: QWebEnginePage, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QWebEnginePage_SetContent(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#toHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` resultCallback: *const fn (funcparam1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn ToHtml(self: QWebEnginePage, resultCallback: *const fn ([*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_ToHtml(@ptrCast(self.ptr), @bitCast(@intFromPtr(resultCallback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` resultCallback: *const fn (funcparam1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn ToPlainText(self: QWebEnginePage, resultCallback: *const fn ([*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_ToPlainText(@ptrCast(self.ptr), @bitCast(@intFromPtr(resultCallback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: QWebEnginePage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEnginePage_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginepage.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: QWebEnginePage, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEnginePage_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn Url(self: QWebEnginePage) QUrl {
        return .{ .ptr = qtc.QWebEnginePage_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#requestedUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn RequestedUrl(self: QWebEnginePage) QUrl {
        return .{ .ptr = qtc.QWebEnginePage_RequestedUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn IconUrl(self: QWebEnginePage) QUrl {
        return .{ .ptr = qtc.QWebEnginePage_IconUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn Icon(self: QWebEnginePage) QIcon {
        return .{ .ptr = qtc.QWebEnginePage_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn ZoomFactor(self: QWebEnginePage) f64 {
        return qtc.QWebEnginePage_ZoomFactor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setZoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` factor: f64 `
    ///
    pub fn SetZoomFactor(self: QWebEnginePage, factor: f64) void {
        qtc.QWebEnginePage_SetZoomFactor(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn ScrollPosition(self: QWebEnginePage) QPointF {
        return .{ .ptr = qtc.QWebEnginePage_ScrollPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn ContentsSize(self: QWebEnginePage) QSizeF {
        return .{ .ptr = qtc.QWebEnginePage_ContentsSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#runJavaScript)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` scriptSource: []const u8 `
    ///
    /// ` resultCallback: *const fn (funcparam1: QVariant) callconv(.c) void `
    ///
    pub fn RunJavaScript(self: QWebEnginePage, scriptSource: []const u8, resultCallback: *const fn (QVariant) callconv(.c) void) void {
        const scriptSource_str = qtc.libqt_string{
            .len = scriptSource.len,
            .data = scriptSource.ptr,
        };
        qtc.QWebEnginePage_RunJavaScript(@ptrCast(self.ptr), scriptSource_str, @bitCast(@intFromPtr(resultCallback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#runJavaScript)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` scriptSource: []const u8 `
    ///
    pub fn RunJavaScript2(self: QWebEnginePage, scriptSource: []const u8) void {
        const scriptSource_str = qtc.libqt_string{
            .len = scriptSource.len,
            .data = scriptSource.ptr,
        };
        qtc.QWebEnginePage_RunJavaScript2(@ptrCast(self.ptr), scriptSource_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scripts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn Scripts(self: QWebEnginePage) QWebEngineScriptCollection {
        return .{ .ptr = qtc.QWebEnginePage_Scripts(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#settings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn Settings(self: QWebEnginePage) QWebEngineSettings {
        return .{ .ptr = qtc.QWebEnginePage_Settings(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#webChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn WebChannel(self: QWebEnginePage) QWebChannel {
        return .{ .ptr = qtc.QWebEnginePage_WebChannel(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: QWebChannel `
    ///
    pub fn SetWebChannel(self: QWebEnginePage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWebChannel;
        qtc.QWebEnginePage_SetWebChannel(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn BackgroundColor(self: QWebEnginePage) QColor {
        return .{ .ptr = qtc.QWebEnginePage_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBackgroundColor(self: QWebEnginePage, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QWebEnginePage_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn Save(self: QWebEnginePage, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_Save(@ptrCast(self.ptr), filePath_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#isAudioMuted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn IsAudioMuted(self: QWebEnginePage) bool {
        return qtc.QWebEnginePage_IsAudioMuted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setAudioMuted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` muted: bool `
    ///
    pub fn SetAudioMuted(self: QWebEnginePage, muted: bool) void {
        qtc.QWebEnginePage_SetAudioMuted(@ptrCast(self.ptr), muted);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn RecentlyAudible(self: QWebEnginePage) bool {
        return qtc.QWebEnginePage_RecentlyAudible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn RenderProcessPid(self: QWebEnginePage) i64 {
        return qtc.QWebEnginePage_RenderProcessPid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn PrintToPdf(self: QWebEnginePage, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_PrintToPdf(@ptrCast(self.ptr), filePath_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` resultCallback: *const fn (funcparam1: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn PrintToPdf2(self: QWebEnginePage, resultCallback: *const fn (qtc.libqt_string) callconv(.c) void) void {
        qtc.QWebEnginePage_PrintToPdf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(resultCallback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setInspectedPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` page: QWebEnginePage `
    ///
    pub fn SetInspectedPage(self: QWebEnginePage, page: anytype) void {
        comptime _ = @TypeOf(page)._is_QWebEnginePage;
        qtc.QWebEnginePage_SetInspectedPage(@ptrCast(self.ptr), @ptrCast(page.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#inspectedPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn InspectedPage(self: QWebEnginePage) QWebEnginePage {
        return .{ .ptr = qtc.QWebEnginePage_InspectedPage(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setDevToolsPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` page: QWebEnginePage `
    ///
    pub fn SetDevToolsPage(self: QWebEnginePage, page: anytype) void {
        comptime _ = @TypeOf(page)._is_QWebEnginePage;
        qtc.QWebEnginePage_SetDevToolsPage(@ptrCast(self.ptr), @ptrCast(page.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#devToolsPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn DevToolsPage(self: QWebEnginePage) QWebEnginePage {
        return .{ .ptr = qtc.QWebEnginePage_DevToolsPage(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#devToolsId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DevToolsId(self: QWebEnginePage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEnginePage_DevToolsId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginepage.DevToolsId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setUrlRequestInterceptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` interceptor: QWebEngineUrlRequestInterceptor `
    ///
    pub fn SetUrlRequestInterceptor(self: QWebEnginePage, interceptor: anytype) void {
        comptime _ = @TypeOf(interceptor)._is_QWebEngineUrlRequestInterceptor;
        qtc.QWebEnginePage_SetUrlRequestInterceptor(@ptrCast(self.ptr), @ptrCast(interceptor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginepage_enums.LifecycleState `
    ///
    pub fn LifecycleState(self: QWebEnginePage) i32 {
        return qtc.QWebEnginePage_LifecycleState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setLifecycleState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` state: qwebenginepage_enums.LifecycleState `
    ///
    pub fn SetLifecycleState(self: QWebEnginePage, state: i32) void {
        qtc.QWebEnginePage_SetLifecycleState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginepage_enums.LifecycleState `
    ///
    pub fn RecommendedState(self: QWebEnginePage) i32 {
        return qtc.QWebEnginePage_RecommendedState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn IsVisible(self: QWebEnginePage) bool {
        return qtc.QWebEnginePage_IsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QWebEnginePage, visible: bool) void {
        qtc.QWebEnginePage_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#mainFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn MainFrame(self: QWebEnginePage) QWebEngineFrame {
        return .{ .ptr = qtc.QWebEnginePage_MainFrame(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptAsNewWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineNewWindowRequest `
    ///
    pub fn AcceptAsNewWindow(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineNewWindowRequest;
        qtc.QWebEnginePage_AcceptAsNewWindow(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn LoadStarted(self: QWebEnginePage) void {
        qtc.QWebEnginePage_LoadStarted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadStarted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage) callconv(.c) void `
    ///
    pub fn OnLoadStarted(self: QWebEnginePage, callback: *const fn (QWebEnginePage) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LoadStarted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` progress: i32 `
    ///
    pub fn LoadProgress(self: QWebEnginePage, progress: i32) void {
        qtc.QWebEnginePage_LoadProgress(@ptrCast(self.ptr), @bitCast(progress));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadProgress)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, progress: i32) callconv(.c) void `
    ///
    pub fn OnLoadProgress(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LoadProgress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` ok: bool `
    ///
    pub fn LoadFinished(self: QWebEnginePage, ok: bool) void {
        qtc.QWebEnginePage_LoadFinished(@ptrCast(self.ptr), ok);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, ok: bool) callconv(.c) void `
    ///
    pub fn OnLoadFinished(self: QWebEnginePage, callback: *const fn (QWebEnginePage, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LoadFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` loadingInfo: QWebEngineLoadingInfo `
    ///
    pub fn LoadingChanged(self: QWebEnginePage, loadingInfo: anytype) void {
        comptime _ = @TypeOf(loadingInfo)._is_QWebEngineLoadingInfo;
        qtc.QWebEnginePage_LoadingChanged(@ptrCast(self.ptr), @ptrCast(loadingInfo.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, loadingInfo: QWebEngineLoadingInfo) callconv(.c) void `
    ///
    pub fn OnLoadingChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineLoadingInfo) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LoadingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#linkHovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` url: []const u8 `
    ///
    pub fn LinkHovered(self: QWebEnginePage, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.QWebEnginePage_LinkHovered(@ptrCast(self.ptr), url_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#linkHovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, url: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnLinkHovered(self: QWebEnginePage, callback: *const fn (QWebEnginePage, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LinkHovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn SelectionChanged(self: QWebEnginePage) void {
        qtc.QWebEnginePage_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#geometryChangeRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` geom: QRect `
    ///
    pub fn GeometryChangeRequested(self: QWebEnginePage, geom: anytype) void {
        comptime _ = @TypeOf(geom)._is_QRect;
        qtc.QWebEnginePage_GeometryChangeRequested(@ptrCast(self.ptr), @ptrCast(geom.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#geometryChangeRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, geom: QRect) callconv(.c) void `
    ///
    pub fn OnGeometryChangeRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QRect) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_GeometryChangeRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#windowCloseRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn WindowCloseRequested(self: QWebEnginePage) void {
        qtc.QWebEnginePage_WindowCloseRequested(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#windowCloseRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage) callconv(.c) void `
    ///
    pub fn OnWindowCloseRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_WindowCloseRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` securityOrigin: QUrl `
    ///
    /// ` feature: qwebenginepage_enums.Feature `
    ///
    pub fn FeaturePermissionRequested(self: QWebEnginePage, securityOrigin: anytype, feature: i32) void {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        qtc.QWebEnginePage_FeaturePermissionRequested(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), @bitCast(feature));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, securityOrigin: QUrl, feature: qwebenginepage_enums.Feature) callconv(.c) void `
    ///
    pub fn OnFeaturePermissionRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FeaturePermissionRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequestCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` securityOrigin: QUrl `
    ///
    /// ` feature: qwebenginepage_enums.Feature `
    ///
    pub fn FeaturePermissionRequestCanceled(self: QWebEnginePage, securityOrigin: anytype, feature: i32) void {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        qtc.QWebEnginePage_FeaturePermissionRequestCanceled(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), @bitCast(feature));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequestCanceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, securityOrigin: QUrl, feature: qwebenginepage_enums.Feature) callconv(.c) void `
    ///
    pub fn OnFeaturePermissionRequestCanceled(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FeaturePermissionRequestCanceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fullScreenRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` fullScreenRequest: QWebEngineFullScreenRequest `
    ///
    pub fn FullScreenRequested(self: QWebEnginePage, fullScreenRequest: anytype) void {
        comptime _ = @TypeOf(fullScreenRequest)._is_QWebEngineFullScreenRequest;
        qtc.QWebEnginePage_FullScreenRequested(@ptrCast(self.ptr), @ptrCast(fullScreenRequest.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fullScreenRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, fullScreenRequest: QWebEngineFullScreenRequest) callconv(.c) void `
    ///
    pub fn OnFullScreenRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineFullScreenRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FullScreenRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#permissionRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` permissionRequest: QWebEnginePermission `
    ///
    pub fn PermissionRequested(self: QWebEnginePage, permissionRequest: anytype) void {
        comptime _ = @TypeOf(permissionRequest)._is_QWebEnginePermission;
        qtc.QWebEnginePage_PermissionRequested(@ptrCast(self.ptr), @ptrCast(permissionRequest.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#permissionRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, permissionRequest: QWebEnginePermission) callconv(.c) void `
    ///
    pub fn OnPermissionRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEnginePermission) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_PermissionRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#quotaRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` quotaRequest: QWebEngineQuotaRequest `
    ///
    pub fn QuotaRequested(self: QWebEnginePage, quotaRequest: anytype) void {
        comptime _ = @TypeOf(quotaRequest)._is_QWebEngineQuotaRequest;
        qtc.QWebEnginePage_QuotaRequested(@ptrCast(self.ptr), @ptrCast(quotaRequest.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#quotaRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, quotaRequest: QWebEngineQuotaRequest) callconv(.c) void `
    ///
    pub fn OnQuotaRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineQuotaRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_QuotaRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#registerProtocolHandlerRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn RegisterProtocolHandlerRequested(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineRegisterProtocolHandlerRequest;
        qtc.QWebEnginePage_RegisterProtocolHandlerRequested(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#registerProtocolHandlerRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, request: QWebEngineRegisterProtocolHandlerRequest) callconv(.c) void `
    ///
    pub fn OnRegisterProtocolHandlerRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineRegisterProtocolHandlerRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RegisterProtocolHandlerRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fileSystemAccessRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineFileSystemAccessRequest `
    ///
    pub fn FileSystemAccessRequested(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineFileSystemAccessRequest;
        qtc.QWebEnginePage_FileSystemAccessRequested(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fileSystemAccessRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, request: QWebEngineFileSystemAccessRequest) callconv(.c) void `
    ///
    pub fn OnFileSystemAccessRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineFileSystemAccessRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FileSystemAccessRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectClientCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` clientCertSelection: QWebEngineClientCertificateSelection `
    ///
    pub fn SelectClientCertificate(self: QWebEnginePage, clientCertSelection: anytype) void {
        comptime _ = @TypeOf(clientCertSelection)._is_QWebEngineClientCertificateSelection;
        qtc.QWebEnginePage_SelectClientCertificate(@ptrCast(self.ptr), @ptrCast(clientCertSelection.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectClientCertificate)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, clientCertSelection: QWebEngineClientCertificateSelection) callconv(.c) void `
    ///
    pub fn OnSelectClientCertificate(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineClientCertificateSelection) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_SelectClientCertificate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#authenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` requestUrl: QUrl `
    ///
    /// ` authenticator: QAuthenticator `
    ///
    pub fn AuthenticationRequired(self: QWebEnginePage, requestUrl: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(requestUrl)._is_QUrl;
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        qtc.QWebEnginePage_AuthenticationRequired(@ptrCast(self.ptr), @ptrCast(requestUrl.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#authenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, requestUrl: QUrl, authenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn OnAuthenticationRequired(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, QAuthenticator) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_AuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` requestUrl: QUrl `
    ///
    /// ` authenticator: QAuthenticator `
    ///
    /// ` proxyHost: []const u8 `
    ///
    pub fn ProxyAuthenticationRequired(self: QWebEnginePage, requestUrl: anytype, authenticator: anytype, proxyHost: []const u8) void {
        comptime _ = @TypeOf(requestUrl)._is_QUrl;
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        const proxyHost_str = qtc.libqt_string{
            .len = proxyHost.len,
            .data = proxyHost.ptr,
        };
        qtc.QWebEnginePage_ProxyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(requestUrl.ptr), @ptrCast(authenticator.ptr), proxyHost_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, requestUrl: QUrl, authenticator: QAuthenticator, proxyHost: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnProxyAuthenticationRequired(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, QAuthenticator, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_ProxyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessTerminated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` terminationStatus: qwebenginepage_enums.RenderProcessTerminationStatus `
    ///
    /// ` exitCode: i32 `
    ///
    pub fn RenderProcessTerminated(self: QWebEnginePage, terminationStatus: i32, exitCode: i32) void {
        qtc.QWebEnginePage_RenderProcessTerminated(@ptrCast(self.ptr), @bitCast(terminationStatus), @bitCast(exitCode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessTerminated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, terminationStatus: qwebenginepage_enums.RenderProcessTerminationStatus, exitCode: i32) callconv(.c) void `
    ///
    pub fn OnRenderProcessTerminated(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RenderProcessTerminated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#desktopMediaRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineDesktopMediaRequest `
    ///
    pub fn DesktopMediaRequested(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineDesktopMediaRequest;
        qtc.QWebEnginePage_DesktopMediaRequested(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#desktopMediaRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, request: QWebEngineDesktopMediaRequest) callconv(.c) void `
    ///
    pub fn OnDesktopMediaRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineDesktopMediaRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_DesktopMediaRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#certificateError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` certificateError: QWebEngineCertificateError `
    ///
    pub fn CertificateError(self: QWebEnginePage, certificateError: anytype) void {
        comptime _ = @TypeOf(certificateError)._is_QWebEngineCertificateError;
        qtc.QWebEnginePage_CertificateError(@ptrCast(self.ptr), @ptrCast(certificateError.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#certificateError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, certificateError: QWebEngineCertificateError) callconv(.c) void `
    ///
    pub fn OnCertificateError(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineCertificateError) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_CertificateError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#navigationRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineNavigationRequest `
    ///
    pub fn NavigationRequested(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineNavigationRequest;
        qtc.QWebEnginePage_NavigationRequested(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#navigationRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, request: QWebEngineNavigationRequest) callconv(.c) void `
    ///
    pub fn OnNavigationRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineNavigationRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_NavigationRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#newWindowRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineNewWindowRequest `
    ///
    pub fn NewWindowRequested(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineNewWindowRequest;
        qtc.QWebEnginePage_NewWindowRequested(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#newWindowRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, request: QWebEngineNewWindowRequest) callconv(.c) void `
    ///
    pub fn OnNewWindowRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineNewWindowRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_NewWindowRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#titleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` title: []const u8 `
    ///
    pub fn TitleChanged(self: QWebEnginePage, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWebEnginePage_TitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#titleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTitleChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_TitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#urlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` url: QUrl `
    ///
    pub fn UrlChanged(self: QWebEnginePage, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEnginePage_UrlChanged(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#urlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, url: QUrl) callconv(.c) void `
    ///
    pub fn OnUrlChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_UrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` url: QUrl `
    ///
    pub fn IconUrlChanged(self: QWebEnginePage, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEnginePage_IconUrlChanged(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, url: QUrl) callconv(.c) void `
    ///
    pub fn OnIconUrlChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_IconUrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` icon: QIcon `
    ///
    pub fn IconChanged(self: QWebEnginePage, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWebEnginePage_IconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnIconChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QIcon) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_IconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` factor: f64 `
    ///
    pub fn ZoomFactorChanged(self: QWebEnginePage, factor: f64) void {
        qtc.QWebEnginePage_ZoomFactorChanged(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, factor: f64) callconv(.c) void `
    ///
    pub fn OnZoomFactorChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, f64) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_ZoomFactorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` position: QPointF `
    ///
    pub fn ScrollPositionChanged(self: QWebEnginePage, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        qtc.QWebEnginePage_ScrollPositionChanged(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, position: QPointF) callconv(.c) void `
    ///
    pub fn OnScrollPositionChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QPointF) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_ScrollPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` size: QSizeF `
    ///
    pub fn ContentsSizeChanged(self: QWebEnginePage, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QWebEnginePage_ContentsSizeChanged(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, size: QSizeF) callconv(.c) void `
    ///
    pub fn OnContentsSizeChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QSizeF) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_ContentsSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#audioMutedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` muted: bool `
    ///
    pub fn AudioMutedChanged(self: QWebEnginePage, muted: bool) void {
        qtc.QWebEnginePage_AudioMutedChanged(@ptrCast(self.ptr), muted);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#audioMutedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, muted: bool) callconv(.c) void `
    ///
    pub fn OnAudioMutedChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_AudioMutedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` recentlyAudible: bool `
    ///
    pub fn RecentlyAudibleChanged(self: QWebEnginePage, recentlyAudible: bool) void {
        qtc.QWebEnginePage_RecentlyAudibleChanged(@ptrCast(self.ptr), recentlyAudible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, recentlyAudible: bool) callconv(.c) void `
    ///
    pub fn OnRecentlyAudibleChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RecentlyAudibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPidChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` pid: i64 `
    ///
    pub fn RenderProcessPidChanged(self: QWebEnginePage, pid: i64) void {
        qtc.QWebEnginePage_RenderProcessPidChanged(@ptrCast(self.ptr), @bitCast(pid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPidChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, pid: i64) callconv(.c) void `
    ///
    pub fn OnRenderProcessPidChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i64) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RenderProcessPidChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#pdfPrintingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` success: bool `
    ///
    pub fn PdfPrintingFinished(self: QWebEnginePage, filePath: []const u8, success: bool) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_PdfPrintingFinished(@ptrCast(self.ptr), filePath_str, success);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#pdfPrintingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, filePath: [*:0]const u8, success: bool) callconv(.c) void `
    ///
    pub fn OnPdfPrintingFinished(self: QWebEnginePage, callback: *const fn (QWebEnginePage, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_PdfPrintingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn PrintRequested(self: QWebEnginePage) void {
        qtc.QWebEnginePage_PrintRequested(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage) callconv(.c) void `
    ///
    pub fn OnPrintRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_PrintRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequestedByFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` frame: QWebEngineFrame `
    ///
    pub fn PrintRequestedByFrame(self: QWebEnginePage, frame: anytype) void {
        comptime _ = @TypeOf(frame)._is_QWebEngineFrame;
        qtc.QWebEnginePage_PrintRequestedByFrame(@ptrCast(self.ptr), @ptrCast(frame.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequestedByFrame)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, frame: QWebEngineFrame) callconv(.c) void `
    ///
    pub fn OnPrintRequestedByFrame(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineFrame) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_PrintRequestedByFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` visible: bool `
    ///
    pub fn VisibleChanged(self: QWebEnginePage, visible: bool) void {
        qtc.QWebEnginePage_VisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, visible: bool) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` state: qwebenginepage_enums.LifecycleState `
    ///
    pub fn LifecycleStateChanged(self: QWebEnginePage, state: i32) void {
        qtc.QWebEnginePage_LifecycleStateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, state: qwebenginepage_enums.LifecycleState) callconv(.c) void `
    ///
    pub fn OnLifecycleStateChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LifecycleStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` state: qwebenginepage_enums.LifecycleState `
    ///
    pub fn RecommendedStateChanged(self: QWebEnginePage, state: i32) void {
        qtc.QWebEnginePage_RecommendedStateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, state: qwebenginepage_enums.LifecycleState) callconv(.c) void `
    ///
    pub fn OnRecommendedStateChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RecommendedStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findTextFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` result: QWebEngineFindTextResult `
    ///
    pub fn FindTextFinished(self: QWebEnginePage, result: anytype) void {
        comptime _ = @TypeOf(result)._is_QWebEngineFindTextResult;
        qtc.QWebEnginePage_FindTextFinished(@ptrCast(self.ptr), @ptrCast(result.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findTextFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, result: QWebEngineFindTextResult) callconv(.c) void `
    ///
    pub fn OnFindTextFinished(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineFindTextResult) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FindTextFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#_q_aboutToDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn QAboutToDelete(self: QWebEnginePage) void {
        qtc.QWebEnginePage_QAboutToDelete(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#_q_aboutToDelete)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage) callconv(.c) void `
    ///
    pub fn OnQAboutToDelete(self: QWebEnginePage, callback: *const fn (QWebEnginePage) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_QAboutToDelete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#webAuthUxRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineWebAuthUxRequest `
    ///
    pub fn WebAuthUxRequested(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineWebAuthUxRequest;
        qtc.QWebEnginePage_WebAuthUxRequested(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#webAuthUxRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, request: QWebEngineWebAuthUxRequest) callconv(.c) void `
    ///
    pub fn OnWebAuthUxRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineWebAuthUxRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_WebAuthUxRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` typeVal: qwebenginepage_enums.WebWindowType `
    ///
    pub fn CreateWindow(self: QWebEnginePage, typeVal: i32) QWebEnginePage {
        return .{ .ptr = qtc.QWebEnginePage_CreateWindow(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, typeVal: qwebenginepage_enums.WebWindowType) callconv(.c) QWebEnginePage `
    ///
    pub fn OnCreateWindow(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32) callconv(.c) QWebEnginePage) void {
        qtc.QWebEnginePage_OnCreateWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateWindow` instead
    ///
    pub const QBaseCreateWindow = SuperCreateWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` typeVal: qwebenginepage_enums.WebWindowType `
    ///
    pub fn SuperCreateWindow(self: QWebEnginePage, typeVal: i32) QWebEnginePage {
        return .{ .ptr = qtc.QWebEnginePage_SuperCreateWindow(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#chooseFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qwebenginepage_enums.FileSelectionMode `
    ///
    /// ` oldFiles: []const []const u8 `
    ///
    /// ` acceptedMimeTypes: []const []const u8 `
    ///
    pub fn ChooseFiles(self: QWebEnginePage, allocator: std.mem.Allocator, mode: i32, oldFiles: []const []const u8, acceptedMimeTypes: []const []const u8) []const []const u8 {
        const oldFiles_arr = allocator.alloc(qtc.libqt_string, oldFiles.len) catch @panic("qwebenginepage.ChooseFiles: Memory allocation failed");
        defer allocator.free(oldFiles_arr);
        for (oldFiles, 0..oldFiles.len) |item, i|
            oldFiles_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const oldFiles_list = qtc.libqt_list{
            .len = oldFiles.len,
            .data = oldFiles_arr.ptr,
        };
        const acceptedMimeTypes_arr = allocator.alloc(qtc.libqt_string, acceptedMimeTypes.len) catch @panic("qwebenginepage.ChooseFiles: Memory allocation failed");
        defer allocator.free(acceptedMimeTypes_arr);
        for (acceptedMimeTypes, 0..acceptedMimeTypes.len) |item, i|
            acceptedMimeTypes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const acceptedMimeTypes_list = qtc.libqt_list{
            .len = acceptedMimeTypes.len,
            .data = acceptedMimeTypes_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QWebEnginePage_ChooseFiles(@ptrCast(self.ptr), @bitCast(mode), oldFiles_list, acceptedMimeTypes_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qwebenginepage.ChooseFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebenginepage.ChooseFiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#chooseFiles)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, mode: qwebenginepage_enums.FileSelectionMode, oldFiles: ?[*:null]?[*:0]const u8, acceptedMimeTypes: ?[*:null]?[*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnChooseFiles(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32, ?[*:null]?[*:0]const u8, ?[*:null]?[*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QWebEnginePage_OnChooseFiles(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChooseFiles` instead
    ///
    pub const QBaseChooseFiles = SuperChooseFiles;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#chooseFiles)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qwebenginepage_enums.FileSelectionMode `
    ///
    /// ` oldFiles: []const []const u8 `
    ///
    /// ` acceptedMimeTypes: []const []const u8 `
    ///
    pub fn SuperChooseFiles(self: QWebEnginePage, allocator: std.mem.Allocator, mode: i32, oldFiles: []const []const u8, acceptedMimeTypes: []const []const u8) []const []const u8 {
        const oldFiles_arr = allocator.alloc(qtc.libqt_string, oldFiles.len) catch @panic("qwebenginepage.ChooseFiles: Memory allocation failed");
        defer allocator.free(oldFiles_arr);
        for (oldFiles, 0..oldFiles.len) |item, i|
            oldFiles_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const oldFiles_list = qtc.libqt_list{
            .len = oldFiles.len,
            .data = oldFiles_arr.ptr,
        };
        const acceptedMimeTypes_arr = allocator.alloc(qtc.libqt_string, acceptedMimeTypes.len) catch @panic("qwebenginepage.ChooseFiles: Memory allocation failed");
        defer allocator.free(acceptedMimeTypes_arr);
        for (acceptedMimeTypes, 0..acceptedMimeTypes.len) |item, i|
            acceptedMimeTypes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const acceptedMimeTypes_list = qtc.libqt_list{
            .len = acceptedMimeTypes.len,
            .data = acceptedMimeTypes_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QWebEnginePage_SuperChooseFiles(@ptrCast(self.ptr), @bitCast(mode), oldFiles_list, acceptedMimeTypes_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qwebenginepage.ChooseFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebenginepage.ChooseFiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptAlert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` securityOrigin: QUrl `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn JavaScriptAlert(self: QWebEnginePage, securityOrigin: anytype, msg: []const u8) void {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QWebEnginePage_JavaScriptAlert(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptAlert)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, securityOrigin: QUrl, msg: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnJavaScriptAlert(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_OnJavaScriptAlert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperJavaScriptAlert` instead
    ///
    pub const QBaseJavaScriptAlert = SuperJavaScriptAlert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptAlert)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` securityOrigin: QUrl `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn SuperJavaScriptAlert(self: QWebEnginePage, securityOrigin: anytype, msg: []const u8) void {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QWebEnginePage_SuperJavaScriptAlert(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConfirm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` securityOrigin: QUrl `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn JavaScriptConfirm(self: QWebEnginePage, securityOrigin: anytype, msg: []const u8) bool {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return qtc.QWebEnginePage_JavaScriptConfirm(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConfirm)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, securityOrigin: QUrl, msg: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnJavaScriptConfirm(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, [*:0]const u8) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnJavaScriptConfirm(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperJavaScriptConfirm` instead
    ///
    pub const QBaseJavaScriptConfirm = SuperJavaScriptConfirm;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConfirm)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` securityOrigin: QUrl `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn SuperJavaScriptConfirm(self: QWebEnginePage, securityOrigin: anytype, msg: []const u8) bool {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return qtc.QWebEnginePage_SuperJavaScriptConfirm(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConsoleMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` level: qwebenginepage_enums.JavaScriptConsoleMessageLevel `
    ///
    /// ` message: []const u8 `
    ///
    /// ` lineNumber: i32 `
    ///
    /// ` sourceID: []const u8 `
    ///
    pub fn JavaScriptConsoleMessage(self: QWebEnginePage, level: i32, message: []const u8, lineNumber: i32, sourceID: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const sourceID_str = qtc.libqt_string{
            .len = sourceID.len,
            .data = sourceID.ptr,
        };
        qtc.QWebEnginePage_JavaScriptConsoleMessage(@ptrCast(self.ptr), @bitCast(level), message_str, @bitCast(lineNumber), sourceID_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConsoleMessage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, level: qwebenginepage_enums.JavaScriptConsoleMessageLevel, message: [*:0]const u8, lineNumber: i32, sourceID: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnJavaScriptConsoleMessage(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32, [*:0]const u8, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_OnJavaScriptConsoleMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperJavaScriptConsoleMessage` instead
    ///
    pub const QBaseJavaScriptConsoleMessage = SuperJavaScriptConsoleMessage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConsoleMessage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` level: qwebenginepage_enums.JavaScriptConsoleMessageLevel `
    ///
    /// ` message: []const u8 `
    ///
    /// ` lineNumber: i32 `
    ///
    /// ` sourceID: []const u8 `
    ///
    pub fn SuperJavaScriptConsoleMessage(self: QWebEnginePage, level: i32, message: []const u8, lineNumber: i32, sourceID: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const sourceID_str = qtc.libqt_string{
            .len = sourceID.len,
            .data = sourceID.ptr,
        };
        qtc.QWebEnginePage_SuperJavaScriptConsoleMessage(@ptrCast(self.ptr), @bitCast(level), message_str, @bitCast(lineNumber), sourceID_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` url: QUrl `
    ///
    /// ` typeVal: qwebenginepage_enums.NavigationType `
    ///
    /// ` isMainFrame: bool `
    ///
    pub fn AcceptNavigationRequest(self: QWebEnginePage, url: anytype, typeVal: i32, isMainFrame: bool) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QWebEnginePage_AcceptNavigationRequest(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(typeVal), isMainFrame);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, url: QUrl, typeVal: qwebenginepage_enums.NavigationType, isMainFrame: bool) callconv(.c) bool `
    ///
    pub fn OnAcceptNavigationRequest(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, i32, bool) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnAcceptNavigationRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAcceptNavigationRequest` instead
    ///
    pub const QBaseAcceptNavigationRequest = SuperAcceptNavigationRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` url: QUrl `
    ///
    /// ` typeVal: qwebenginepage_enums.NavigationType `
    ///
    /// ` isMainFrame: bool `
    ///
    pub fn SuperAcceptNavigationRequest(self: QWebEnginePage, url: anytype, typeVal: i32, isMainFrame: bool) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QWebEnginePage_SuperAcceptNavigationRequest(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(typeVal), isMainFrame);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginepage.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginepage.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` subString: []const u8 `
    ///
    /// ` options: flag of qwebenginepage_enums.FindFlag `
    ///
    pub fn FindText2(self: QWebEnginePage, subString: []const u8, options: i32) void {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        qtc.QWebEnginePage_FindText2(@ptrCast(self.ptr), subString_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` subString: []const u8 `
    ///
    /// ` options: flag of qwebenginepage_enums.FindFlag `
    ///
    /// ` resultCallback: *const fn (funcparam1: QWebEngineFindTextResult) callconv(.c) void `
    ///
    pub fn FindText3(self: QWebEnginePage, subString: []const u8, options: i32, resultCallback: *const fn (QWebEngineFindTextResult) callconv(.c) void) void {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        qtc.QWebEnginePage_FindText3(@ptrCast(self.ptr), subString_str, @bitCast(options), @bitCast(@intFromPtr(resultCallback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#download)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` url: QUrl `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn Download2(self: QWebEnginePage, url: anytype, filename: []const u8) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QWebEnginePage_Download2(@ptrCast(self.ptr), @ptrCast(url.ptr), filename_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` html: []const u8 `
    ///
    /// ` baseUrl: QUrl `
    ///
    pub fn SetHtml2(self: QWebEnginePage, html: []const u8, baseUrl: anytype) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        qtc.QWebEnginePage_SetHtml2(@ptrCast(self.ptr), html_str, @ptrCast(baseUrl.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` data: []u8 `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn SetContent2(self: QWebEnginePage, data: []u8, mimeType: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.QWebEnginePage_SetContent2(@ptrCast(self.ptr), data_str, mimeType_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` data: []u8 `
    ///
    /// ` mimeType: []const u8 `
    ///
    /// ` baseUrl: QUrl `
    ///
    pub fn SetContent3(self: QWebEnginePage, data: []u8, mimeType: []const u8, baseUrl: anytype) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        qtc.QWebEnginePage_SetContent3(@ptrCast(self.ptr), data_str, mimeType_str, @ptrCast(baseUrl.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#runJavaScript)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` scriptSource: []const u8 `
    ///
    /// ` worldId: u32 `
    ///
    pub fn RunJavaScript22(self: QWebEnginePage, scriptSource: []const u8, worldId: u32) void {
        const scriptSource_str = qtc.libqt_string{
            .len = scriptSource.len,
            .data = scriptSource.ptr,
        };
        qtc.QWebEnginePage_RunJavaScript22(@ptrCast(self.ptr), scriptSource_str, @bitCast(worldId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#runJavaScript)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` scriptSource: []const u8 `
    ///
    /// ` worldId: u32 `
    ///
    /// ` resultCallback: *const fn (funcparam1: QVariant) callconv(.c) void `
    ///
    pub fn RunJavaScript3(self: QWebEnginePage, scriptSource: []const u8, worldId: u32, resultCallback: *const fn (QVariant) callconv(.c) void) void {
        const scriptSource_str = qtc.libqt_string{
            .len = scriptSource.len,
            .data = scriptSource.ptr,
        };
        qtc.QWebEnginePage_RunJavaScript3(@ptrCast(self.ptr), scriptSource_str, @bitCast(worldId), @bitCast(@intFromPtr(resultCallback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: QWebChannel `
    ///
    /// ` worldId: u32 `
    ///
    pub fn SetWebChannel2(self: QWebEnginePage, param1: anytype, worldId: u32) void {
        comptime _ = @TypeOf(param1)._is_QWebChannel;
        qtc.QWebEnginePage_SetWebChannel2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(worldId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` format: qwebenginedownloadrequest_enums.SavePageFormat `
    ///
    pub fn Save2(self: QWebEnginePage, filePath: []const u8, format: i32) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_Save2(@ptrCast(self.ptr), filePath_str, @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` layout: QPageLayout `
    ///
    pub fn PrintToPdf22(self: QWebEnginePage, filePath: []const u8, layout: anytype) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        comptime _ = @TypeOf(layout)._is_QPageLayout;
        qtc.QWebEnginePage_PrintToPdf22(@ptrCast(self.ptr), filePath_str, @ptrCast(layout.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` layout: QPageLayout `
    ///
    /// ` ranges: QPageRanges `
    ///
    pub fn PrintToPdf3(self: QWebEnginePage, filePath: []const u8, layout: anytype, ranges: anytype) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        comptime _ = @TypeOf(layout)._is_QPageLayout;
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QWebEnginePage_PrintToPdf3(@ptrCast(self.ptr), filePath_str, @ptrCast(layout.ptr), @ptrCast(ranges.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` resultCallback: *const fn (funcparam1: qtc.libqt_string) callconv(.c) void `
    ///
    /// ` layout: QPageLayout `
    ///
    pub fn PrintToPdf23(self: QWebEnginePage, resultCallback: *const fn (qtc.libqt_string) callconv(.c) void, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QPageLayout;
        qtc.QWebEnginePage_PrintToPdf23(@ptrCast(self.ptr), @bitCast(@intFromPtr(resultCallback)), @ptrCast(layout.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` resultCallback: *const fn (funcparam1: qtc.libqt_string) callconv(.c) void `
    ///
    /// ` layout: QPageLayout `
    ///
    /// ` ranges: QPageRanges `
    ///
    pub fn PrintToPdf32(self: QWebEnginePage, resultCallback: *const fn (qtc.libqt_string) callconv(.c) void, layout: anytype, ranges: anytype) void {
        comptime _ = @TypeOf(layout)._is_QPageLayout;
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QWebEnginePage_PrintToPdf32(@ptrCast(self.ptr), @bitCast(@intFromPtr(resultCallback)), @ptrCast(layout.ptr), @ptrCast(ranges.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QWebEnginePage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginepage.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QWebEnginePage, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn IsWidgetType(self: QWebEnginePage) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn IsWindowType(self: QWebEnginePage) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn IsQuickItemType(self: QWebEnginePage) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn SignalsBlocked(self: QWebEnginePage) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QWebEnginePage, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn Thread(self: QWebEnginePage) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QWebEnginePage, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QWebEnginePage, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QWebEnginePage, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QWebEnginePage, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QWebEnginePage, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QWebEnginePage, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qwebenginepage.Children: Memory allocation failed");
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
    /// ` self: QWebEnginePage `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QWebEnginePage, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QWebEnginePage, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QWebEnginePage, obj: anytype) void {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QWebEnginePage, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn Disconnect3(self: QWebEnginePage) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QWebEnginePage, receiver: anytype) bool {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn DumpObjectTree(self: QWebEnginePage) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn DumpObjectInfo(self: QWebEnginePage) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QWebEnginePage, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QWebEnginePage, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QWebEnginePage, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qwebenginepage.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebenginepage.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebEnginePage `
    ///
    pub fn BindingStorage(self: QWebEnginePage) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn BindingStorage2(self: QWebEnginePage) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn Destroyed(self: QWebEnginePage) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QWebEnginePage, callback: *const fn (QWebEnginePage) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn Parent(self: QWebEnginePage) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QWebEnginePage, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn DeleteLater(self: QWebEnginePage) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QWebEnginePage, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QWebEnginePage, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QWebEnginePage, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QWebEnginePage, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QWebEnginePage, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QWebEnginePage, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QWebEnginePage, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QWebEnginePage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QWebEnginePage, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebEnginePage_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QWebEnginePage, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebEnginePage_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QObject, QEvent) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QWebEnginePage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QWebEnginePage_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QWebEnginePage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QWebEnginePage_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QTimerEvent) callconv(.c) void) void {
        qtc.QWebEnginePage_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QWebEnginePage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QWebEnginePage_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QWebEnginePage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QWebEnginePage_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QChildEvent) callconv(.c) void) void {
        qtc.QWebEnginePage_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QWebEnginePage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QWebEnginePage_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QWebEnginePage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QWebEnginePage_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QEvent) callconv(.c) void) void {
        qtc.QWebEnginePage_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QWebEnginePage, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEnginePage_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QWebEnginePage, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEnginePage_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QMetaMethod) callconv(.c) void) void {
        qtc.QWebEnginePage_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QWebEnginePage, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEnginePage_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QWebEnginePage, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEnginePage_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QMetaMethod) callconv(.c) void) void {
        qtc.QWebEnginePage_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn Sender(self: QWebEnginePage) QObject {
        return .{ .ptr = qtc.QWebEnginePage_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QWebEnginePage `
    ///
    pub fn SuperSender(self: QWebEnginePage) QObject {
        return .{ .ptr = qtc.QWebEnginePage_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QWebEnginePage, callback: *const fn () callconv(.c) QObject) void {
        qtc.QWebEnginePage_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn SenderSignalIndex(self: QWebEnginePage) i32 {
        return qtc.QWebEnginePage_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    pub fn SuperSenderSignalIndex(self: QWebEnginePage) i32 {
        return qtc.QWebEnginePage_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QWebEnginePage, callback: *const fn () callconv(.c) i32) void {
        qtc.QWebEnginePage_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QWebEnginePage, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebEnginePage_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QWebEnginePage, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebEnginePage_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QWebEnginePage, callback: *const fn (QWebEnginePage, [*:0]const u8) callconv(.c) i32) void {
        qtc.QWebEnginePage_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QWebEnginePage, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebEnginePage_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QWebEnginePage, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebEnginePage_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QMetaMethod) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#dtor.QWebEnginePage)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn Delete(self: QWebEnginePage) void {
        qtc.QWebEnginePage_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#public-types)
pub const enums = struct {
    pub const WebAction = enum(i32) {
        pub const NoWebAction: i32 = -1;
        pub const Back: i32 = 0;
        pub const Forward: i32 = 1;
        pub const Stop: i32 = 2;
        pub const Reload: i32 = 3;
        pub const Cut: i32 = 4;
        pub const Copy: i32 = 5;
        pub const Paste: i32 = 6;
        pub const Undo: i32 = 7;
        pub const Redo: i32 = 8;
        pub const SelectAll: i32 = 9;
        pub const ReloadAndBypassCache: i32 = 10;
        pub const PasteAndMatchStyle: i32 = 11;
        pub const OpenLinkInThisWindow: i32 = 12;
        pub const OpenLinkInNewWindow: i32 = 13;
        pub const OpenLinkInNewTab: i32 = 14;
        pub const CopyLinkToClipboard: i32 = 15;
        pub const DownloadLinkToDisk: i32 = 16;
        pub const CopyImageToClipboard: i32 = 17;
        pub const CopyImageUrlToClipboard: i32 = 18;
        pub const DownloadImageToDisk: i32 = 19;
        pub const CopyMediaUrlToClipboard: i32 = 20;
        pub const ToggleMediaControls: i32 = 21;
        pub const ToggleMediaLoop: i32 = 22;
        pub const ToggleMediaPlayPause: i32 = 23;
        pub const ToggleMediaMute: i32 = 24;
        pub const DownloadMediaToDisk: i32 = 25;
        pub const InspectElement: i32 = 26;
        pub const ExitFullScreen: i32 = 27;
        pub const RequestClose: i32 = 28;
        pub const Unselect: i32 = 29;
        pub const SavePage: i32 = 30;
        pub const OpenLinkInNewBackgroundTab: i32 = 31;
        pub const ViewSource: i32 = 32;
        pub const ToggleBold: i32 = 33;
        pub const ToggleItalic: i32 = 34;
        pub const ToggleUnderline: i32 = 35;
        pub const ToggleStrikethrough: i32 = 36;
        pub const AlignLeft: i32 = 37;
        pub const AlignCenter: i32 = 38;
        pub const AlignRight: i32 = 39;
        pub const AlignJustified: i32 = 40;
        pub const Indent: i32 = 41;
        pub const Outdent: i32 = 42;
        pub const InsertOrderedList: i32 = 43;
        pub const InsertUnorderedList: i32 = 44;
        pub const ChangeTextDirectionLTR: i32 = 45;
        pub const ChangeTextDirectionRTL: i32 = 46;
        pub const WebActionCount: i32 = 47;
    };

    pub const FindFlag = enum(i32) {
        pub const FindBackward: i32 = 1;
        pub const FindCaseSensitively: i32 = 2;
    };

    pub const WebWindowType = enum(i32) {
        pub const WebBrowserWindow: i32 = 0;
        pub const WebBrowserTab: i32 = 1;
        pub const WebDialog: i32 = 2;
        pub const WebBrowserBackgroundTab: i32 = 3;
    };

    pub const NavigationType = enum(i32) {
        pub const NavigationTypeLinkClicked: i32 = 0;
        pub const NavigationTypeTyped: i32 = 1;
        pub const NavigationTypeFormSubmitted: i32 = 2;
        pub const NavigationTypeBackForward: i32 = 3;
        pub const NavigationTypeReload: i32 = 4;
        pub const NavigationTypeOther: i32 = 5;
        pub const NavigationTypeRedirect: i32 = 6;
    };

    pub const Feature = enum(i32) {
        pub const Notifications: i32 = 0;
        pub const Geolocation: i32 = 1;
        pub const MediaAudioCapture: i32 = 2;
    };

    pub const FileSelectionMode = enum(i32) {
        pub const FileSelectOpen: i32 = 0;
        pub const FileSelectOpenMultiple: i32 = 1;
        pub const FileSelectUploadFolder: i32 = 2;
        pub const FileSelectSave: i32 = 3;
    };

    pub const JavaScriptConsoleMessageLevel = enum(i32) {
        pub const InfoMessageLevel: i32 = 0;
        pub const WarningMessageLevel: i32 = 1;
        pub const ErrorMessageLevel: i32 = 2;
    };

    pub const RenderProcessTerminationStatus = enum(i32) {
        pub const NormalTerminationStatus: i32 = 0;
        pub const AbnormalTerminationStatus: i32 = 1;
        pub const CrashedTerminationStatus: i32 = 2;
        pub const KilledTerminationStatus: i32 = 3;
    };

    pub const LifecycleState = enum(i32) {
        pub const Active: i32 = 0;
        pub const Frozen: i32 = 1;
        pub const Discarded: i32 = 2;
    };
};
