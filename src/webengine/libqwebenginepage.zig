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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEnginePage object in C++ memory
    ///
    pub fn new() QWebEnginePage {
        return .{ .ptr = qtc.QWebEnginePage_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebEnginePage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _profile: QWebEngineProfile `
    ///
    pub fn new2(_profile: anytype) QWebEnginePage {
        comptime _ = @TypeOf(_profile)._is_QWebEngineProfile;
        return .{ .ptr = qtc.QWebEnginePage_new2(@ptrCast(_profile.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QWebEnginePage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QWebEnginePage {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QWebEnginePage_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QWebEnginePage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _profile: QWebEngineProfile `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_profile: anytype, _parent: anytype) QWebEnginePage {
        comptime _ = @TypeOf(_profile)._is_QWebEngineProfile;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QWebEnginePage_new4(@ptrCast(_profile.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn metaObject(self: QWebEnginePage) QMetaObject {
        return .{ .ptr = qtc.QWebEnginePage_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QWebEnginePage, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QWebEnginePage_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    pub fn superMetaObject(self: QWebEnginePage) QMetaObject {
        return .{ .ptr = qtc.QWebEnginePage_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QWebEnginePage, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEnginePage_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QWebEnginePage, callback: *const fn (QWebEnginePage, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QWebEnginePage_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QWebEnginePage, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEnginePage_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QWebEnginePage, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEnginePage_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QWebEnginePage_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QWebEnginePage, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEnginePage_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEnginePage.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `history` instead
    ///
    pub const History = history;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#history)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn history(self: QWebEnginePage) QWebEngineHistory {
        return .{ .ptr = qtc.QWebEnginePage_History(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasSelection` instead
    ///
    pub const HasSelection = hasSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#hasSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn hasSelection(self: QWebEnginePage) bool {
        return qtc.QWebEnginePage_HasSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedText` instead
    ///
    pub const SelectedText = selectedText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedText(self: QWebEnginePage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEnginePage_SelectedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEnginePage.selectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `profile` instead
    ///
    pub const Profile = profile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#profile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn profile(self: QWebEnginePage) QWebEngineProfile {
        return .{ .ptr = qtc.QWebEnginePage_Profile(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _action: qwebenginepage_enums.WebAction `
    ///
    pub fn action(self: QWebEnginePage, _action: i32) QAction {
        return .{ .ptr = qtc.QWebEnginePage_Action(@ptrCast(self.ptr), @bitCast(_action)) };
    }

    /// ### DEPRECATED: Use `triggerAction` instead
    ///
    pub const TriggerAction = triggerAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _action: qwebenginepage_enums.WebAction `
    ///
    /// ` checked: bool `
    ///
    pub fn triggerAction(self: QWebEnginePage, _action: i32, checked: bool) void {
        qtc.QWebEnginePage_TriggerAction(@ptrCast(self.ptr), @bitCast(_action), checked);
    }

    /// ### DEPRECATED: Use `onTriggerAction` instead
    ///
    pub const OnTriggerAction = onTriggerAction;

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
    pub fn onTriggerAction(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_OnTriggerAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTriggerAction` instead
    ///
    pub const SuperTriggerAction = superTriggerAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _action: qwebenginepage_enums.WebAction `
    ///
    /// ` checked: bool `
    ///
    pub fn superTriggerAction(self: QWebEnginePage, _action: i32, checked: bool) void {
        qtc.QWebEnginePage_SuperTriggerAction(@ptrCast(self.ptr), @bitCast(_action), checked);
    }

    /// ### DEPRECATED: Use `replaceMisspelledWord` instead
    ///
    pub const ReplaceMisspelledWord = replaceMisspelledWord;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#replaceMisspelledWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` replacement: []const u8 `
    ///
    pub fn replaceMisspelledWord(self: QWebEnginePage, replacement: []const u8) void {
        const replacement_str = qtc.libqt_string{
            .len = replacement.len,
            .data = replacement.ptr,
        };
        qtc.QWebEnginePage_ReplaceMisspelledWord(@ptrCast(self.ptr), replacement_str);
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: QWebEnginePage, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QWebEnginePage_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QEvent) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    pub fn superEvent(self: QWebEnginePage, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QWebEnginePage_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `findText` instead
    ///
    pub const FindText = findText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` subString: []const u8 `
    ///
    pub fn findText(self: QWebEnginePage, subString: []const u8) void {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        qtc.QWebEnginePage_FindText(@ptrCast(self.ptr), subString_str);
    }

    /// ### DEPRECATED: Use `isLoading` instead
    ///
    pub const IsLoading = isLoading;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#isLoading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn isLoading(self: QWebEnginePage) bool {
        return qtc.QWebEnginePage_IsLoading(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _url: QUrl `
    ///
    pub fn load(self: QWebEnginePage, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QWebEnginePage_Load(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `load2` instead
    ///
    pub const Load2 = load2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineHttpRequest `
    ///
    pub fn load2(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineHttpRequest;
        qtc.QWebEnginePage_Load2(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### DEPRECATED: Use `download` instead
    ///
    pub const Download = download;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#download)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _url: QUrl `
    ///
    pub fn download(self: QWebEnginePage, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QWebEnginePage_Download(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `setHtml` instead
    ///
    pub const SetHtml = setHtml;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` html: []const u8 `
    ///
    pub fn setHtml(self: QWebEnginePage, html: []const u8) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QWebEnginePage_SetHtml(@ptrCast(self.ptr), html_str);
    }

    /// ### DEPRECATED: Use `setContent` instead
    ///
    pub const SetContent = setContent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` data: []u8 `
    ///
    pub fn setContent(self: QWebEnginePage, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QWebEnginePage_SetContent(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `toHtml` instead
    ///
    pub const ToHtml = toHtml;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#toHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` resultCallback: *const fn (funcparam1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn toHtml(self: QWebEnginePage, resultCallback: *const fn ([*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_ToHtml(@ptrCast(self.ptr), @bitCast(@intFromPtr(resultCallback)));
    }

    /// ### DEPRECATED: Use `toPlainText` instead
    ///
    pub const ToPlainText = toPlainText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` resultCallback: *const fn (funcparam1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn toPlainText(self: QWebEnginePage, resultCallback: *const fn ([*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_ToPlainText(@ptrCast(self.ptr), @bitCast(@intFromPtr(resultCallback)));
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: QWebEnginePage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEnginePage_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEnginePage.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: QWebEnginePage, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QWebEnginePage_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn url(self: QWebEnginePage) QUrl {
        return .{ .ptr = qtc.QWebEnginePage_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `requestedUrl` instead
    ///
    pub const RequestedUrl = requestedUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#requestedUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn requestedUrl(self: QWebEnginePage) QUrl {
        return .{ .ptr = qtc.QWebEnginePage_RequestedUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `iconUrl` instead
    ///
    pub const IconUrl = iconUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn iconUrl(self: QWebEnginePage) QUrl {
        return .{ .ptr = qtc.QWebEnginePage_IconUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn icon(self: QWebEnginePage) QIcon {
        return .{ .ptr = qtc.QWebEnginePage_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `zoomFactor` instead
    ///
    pub const ZoomFactor = zoomFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn zoomFactor(self: QWebEnginePage) f64 {
        return qtc.QWebEnginePage_ZoomFactor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setZoomFactor` instead
    ///
    pub const SetZoomFactor = setZoomFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setZoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` factor: f64 `
    ///
    pub fn setZoomFactor(self: QWebEnginePage, factor: f64) void {
        qtc.QWebEnginePage_SetZoomFactor(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `scrollPosition` instead
    ///
    pub const ScrollPosition = scrollPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn scrollPosition(self: QWebEnginePage) QPointF {
        return .{ .ptr = qtc.QWebEnginePage_ScrollPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsSize` instead
    ///
    pub const ContentsSize = contentsSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn contentsSize(self: QWebEnginePage) QSizeF {
        return .{ .ptr = qtc.QWebEnginePage_ContentsSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `runJavaScript` instead
    ///
    pub const RunJavaScript = runJavaScript;

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
    pub fn runJavaScript(self: QWebEnginePage, scriptSource: []const u8, resultCallback: *const fn (QVariant) callconv(.c) void) void {
        const scriptSource_str = qtc.libqt_string{
            .len = scriptSource.len,
            .data = scriptSource.ptr,
        };
        qtc.QWebEnginePage_RunJavaScript(@ptrCast(self.ptr), scriptSource_str, @bitCast(@intFromPtr(resultCallback)));
    }

    /// ### DEPRECATED: Use `runJavaScript2` instead
    ///
    pub const RunJavaScript2 = runJavaScript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#runJavaScript)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` scriptSource: []const u8 `
    ///
    pub fn runJavaScript2(self: QWebEnginePage, scriptSource: []const u8) void {
        const scriptSource_str = qtc.libqt_string{
            .len = scriptSource.len,
            .data = scriptSource.ptr,
        };
        qtc.QWebEnginePage_RunJavaScript2(@ptrCast(self.ptr), scriptSource_str);
    }

    /// ### DEPRECATED: Use `scripts` instead
    ///
    pub const Scripts = scripts;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scripts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn scripts(self: QWebEnginePage) QWebEngineScriptCollection {
        return .{ .ptr = qtc.QWebEnginePage_Scripts(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `settings` instead
    ///
    pub const Settings = settings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#settings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn settings(self: QWebEnginePage) QWebEngineSettings {
        return .{ .ptr = qtc.QWebEnginePage_Settings(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `webChannel` instead
    ///
    pub const WebChannel = webChannel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#webChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn webChannel(self: QWebEnginePage) QWebChannel {
        return .{ .ptr = qtc.QWebEnginePage_WebChannel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWebChannel` instead
    ///
    pub const SetWebChannel = setWebChannel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: QWebChannel `
    ///
    pub fn setWebChannel(self: QWebEnginePage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWebChannel;
        qtc.QWebEnginePage_SetWebChannel(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn backgroundColor(self: QWebEnginePage) QColor {
        return .{ .ptr = qtc.QWebEnginePage_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundColor` instead
    ///
    pub const SetBackgroundColor = setBackgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` color: QColor `
    ///
    pub fn setBackgroundColor(self: QWebEnginePage, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QWebEnginePage_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn save(self: QWebEnginePage, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_Save(@ptrCast(self.ptr), filePath_str);
    }

    /// ### DEPRECATED: Use `isAudioMuted` instead
    ///
    pub const IsAudioMuted = isAudioMuted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#isAudioMuted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn isAudioMuted(self: QWebEnginePage) bool {
        return qtc.QWebEnginePage_IsAudioMuted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAudioMuted` instead
    ///
    pub const SetAudioMuted = setAudioMuted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setAudioMuted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` muted: bool `
    ///
    pub fn setAudioMuted(self: QWebEnginePage, muted: bool) void {
        qtc.QWebEnginePage_SetAudioMuted(@ptrCast(self.ptr), muted);
    }

    /// ### DEPRECATED: Use `recentlyAudible` instead
    ///
    pub const RecentlyAudible = recentlyAudible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn recentlyAudible(self: QWebEnginePage) bool {
        return qtc.QWebEnginePage_RecentlyAudible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `renderProcessPid` instead
    ///
    pub const RenderProcessPid = renderProcessPid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn renderProcessPid(self: QWebEnginePage) i64 {
        return qtc.QWebEnginePage_RenderProcessPid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `printToPdf` instead
    ///
    pub const PrintToPdf = printToPdf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn printToPdf(self: QWebEnginePage, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_PrintToPdf(@ptrCast(self.ptr), filePath_str);
    }

    /// ### DEPRECATED: Use `printToPdf2` instead
    ///
    pub const PrintToPdf2 = printToPdf2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` resultCallback: *const fn (funcparam1: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn printToPdf2(self: QWebEnginePage, resultCallback: *const fn (qtc.libqt_string) callconv(.c) void) void {
        qtc.QWebEnginePage_PrintToPdf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(resultCallback)));
    }

    /// ### DEPRECATED: Use `setInspectedPage` instead
    ///
    pub const SetInspectedPage = setInspectedPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setInspectedPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` page: QWebEnginePage `
    ///
    pub fn setInspectedPage(self: QWebEnginePage, page: anytype) void {
        comptime _ = @TypeOf(page)._is_QWebEnginePage;
        qtc.QWebEnginePage_SetInspectedPage(@ptrCast(self.ptr), @ptrCast(page.ptr));
    }

    /// ### DEPRECATED: Use `inspectedPage` instead
    ///
    pub const InspectedPage = inspectedPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#inspectedPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn inspectedPage(self: QWebEnginePage) QWebEnginePage {
        return .{ .ptr = qtc.QWebEnginePage_InspectedPage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDevToolsPage` instead
    ///
    pub const SetDevToolsPage = setDevToolsPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setDevToolsPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` page: QWebEnginePage `
    ///
    pub fn setDevToolsPage(self: QWebEnginePage, page: anytype) void {
        comptime _ = @TypeOf(page)._is_QWebEnginePage;
        qtc.QWebEnginePage_SetDevToolsPage(@ptrCast(self.ptr), @ptrCast(page.ptr));
    }

    /// ### DEPRECATED: Use `devToolsPage` instead
    ///
    pub const DevToolsPage = devToolsPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#devToolsPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn devToolsPage(self: QWebEnginePage) QWebEnginePage {
        return .{ .ptr = qtc.QWebEnginePage_DevToolsPage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `devToolsId` instead
    ///
    pub const DevToolsId = devToolsId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#devToolsId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn devToolsId(self: QWebEnginePage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEnginePage_DevToolsId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEnginePage.devToolsId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUrlRequestInterceptor` instead
    ///
    pub const SetUrlRequestInterceptor = setUrlRequestInterceptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setUrlRequestInterceptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` interceptor: QWebEngineUrlRequestInterceptor `
    ///
    pub fn setUrlRequestInterceptor(self: QWebEnginePage, interceptor: anytype) void {
        comptime _ = @TypeOf(interceptor)._is_QWebEngineUrlRequestInterceptor;
        qtc.QWebEnginePage_SetUrlRequestInterceptor(@ptrCast(self.ptr), @ptrCast(interceptor.ptr));
    }

    /// ### DEPRECATED: Use `lifecycleState` instead
    ///
    pub const LifecycleState = lifecycleState;

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
    pub fn lifecycleState(self: QWebEnginePage) i32 {
        return qtc.QWebEnginePage_LifecycleState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLifecycleState` instead
    ///
    pub const SetLifecycleState = setLifecycleState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setLifecycleState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` state: qwebenginepage_enums.LifecycleState `
    ///
    pub fn setLifecycleState(self: QWebEnginePage, state: i32) void {
        qtc.QWebEnginePage_SetLifecycleState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `recommendedState` instead
    ///
    pub const RecommendedState = recommendedState;

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
    pub fn recommendedState(self: QWebEnginePage) i32 {
        return qtc.QWebEnginePage_RecommendedState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn isVisible(self: QWebEnginePage) bool {
        return qtc.QWebEnginePage_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QWebEnginePage, visible: bool) void {
        qtc.QWebEnginePage_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `mainFrame` instead
    ///
    pub const MainFrame = mainFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#mainFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn mainFrame(self: QWebEnginePage) QWebEngineFrame {
        return .{ .ptr = qtc.QWebEnginePage_MainFrame(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `findFrameByName` instead
    ///
    pub const FindFrameByName = findFrameByName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findFrameByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` name: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` QWebEngineFrame ` (NOTE: The `ptr` field could be `null`.)
    ///
    pub fn findFrameByName(self: QWebEnginePage, name: []const u8) QWebEngineFrame {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QWebEnginePage_FindFrameByName(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `acceptAsNewWindow` instead
    ///
    pub const AcceptAsNewWindow = acceptAsNewWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptAsNewWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineNewWindowRequest `
    ///
    pub fn acceptAsNewWindow(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineNewWindowRequest;
        qtc.QWebEnginePage_AcceptAsNewWindow(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### DEPRECATED: Use `loadStarted` instead
    ///
    pub const LoadStarted = loadStarted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn loadStarted(self: QWebEnginePage) void {
        qtc.QWebEnginePage_LoadStarted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLoadStarted` instead
    ///
    pub const OnLoadStarted = onLoadStarted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadStarted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage) callconv(.c) void `
    ///
    pub fn onLoadStarted(self: QWebEnginePage, callback: *const fn (QWebEnginePage) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LoadStarted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loadProgress` instead
    ///
    pub const LoadProgress = loadProgress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` progress: i32 `
    ///
    pub fn loadProgress(self: QWebEnginePage, progress: i32) void {
        qtc.QWebEnginePage_LoadProgress(@ptrCast(self.ptr), @bitCast(progress));
    }

    /// ### DEPRECATED: Use `onLoadProgress` instead
    ///
    pub const OnLoadProgress = onLoadProgress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadProgress)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, progress: i32) callconv(.c) void `
    ///
    pub fn onLoadProgress(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LoadProgress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loadFinished` instead
    ///
    pub const LoadFinished = loadFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` ok: bool `
    ///
    pub fn loadFinished(self: QWebEnginePage, ok: bool) void {
        qtc.QWebEnginePage_LoadFinished(@ptrCast(self.ptr), ok);
    }

    /// ### DEPRECATED: Use `onLoadFinished` instead
    ///
    pub const OnLoadFinished = onLoadFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, ok: bool) callconv(.c) void `
    ///
    pub fn onLoadFinished(self: QWebEnginePage, callback: *const fn (QWebEnginePage, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LoadFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loadingChanged` instead
    ///
    pub const LoadingChanged = loadingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` loadingInfo: QWebEngineLoadingInfo `
    ///
    pub fn loadingChanged(self: QWebEnginePage, loadingInfo: anytype) void {
        comptime _ = @TypeOf(loadingInfo)._is_QWebEngineLoadingInfo;
        qtc.QWebEnginePage_LoadingChanged(@ptrCast(self.ptr), @ptrCast(loadingInfo.ptr));
    }

    /// ### DEPRECATED: Use `onLoadingChanged` instead
    ///
    pub const OnLoadingChanged = onLoadingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, loadingInfo: QWebEngineLoadingInfo) callconv(.c) void `
    ///
    pub fn onLoadingChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineLoadingInfo) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LoadingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `linkHovered` instead
    ///
    pub const LinkHovered = linkHovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#linkHovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _url: []const u8 `
    ///
    pub fn linkHovered(self: QWebEnginePage, _url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        qtc.QWebEnginePage_LinkHovered(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `onLinkHovered` instead
    ///
    pub const OnLinkHovered = onLinkHovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#linkHovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, url: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onLinkHovered(self: QWebEnginePage, callback: *const fn (QWebEnginePage, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LinkHovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn selectionChanged(self: QWebEnginePage) void {
        qtc.QWebEnginePage_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage) callconv(.c) void `
    ///
    pub fn onSelectionChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `geometryChangeRequested` instead
    ///
    pub const GeometryChangeRequested = geometryChangeRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#geometryChangeRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` geom: QRect `
    ///
    pub fn geometryChangeRequested(self: QWebEnginePage, geom: anytype) void {
        comptime _ = @TypeOf(geom)._is_QRect;
        qtc.QWebEnginePage_GeometryChangeRequested(@ptrCast(self.ptr), @ptrCast(geom.ptr));
    }

    /// ### DEPRECATED: Use `onGeometryChangeRequested` instead
    ///
    pub const OnGeometryChangeRequested = onGeometryChangeRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#geometryChangeRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, geom: QRect) callconv(.c) void `
    ///
    pub fn onGeometryChangeRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QRect) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_GeometryChangeRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowCloseRequested` instead
    ///
    pub const WindowCloseRequested = windowCloseRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#windowCloseRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn windowCloseRequested(self: QWebEnginePage) void {
        qtc.QWebEnginePage_WindowCloseRequested(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWindowCloseRequested` instead
    ///
    pub const OnWindowCloseRequested = onWindowCloseRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#windowCloseRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage) callconv(.c) void `
    ///
    pub fn onWindowCloseRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_WindowCloseRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `featurePermissionRequested` instead
    ///
    pub const FeaturePermissionRequested = featurePermissionRequested;

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
    pub fn featurePermissionRequested(self: QWebEnginePage, securityOrigin: anytype, feature: i32) void {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        qtc.QWebEnginePage_FeaturePermissionRequested(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), @bitCast(feature));
    }

    /// ### DEPRECATED: Use `onFeaturePermissionRequested` instead
    ///
    pub const OnFeaturePermissionRequested = onFeaturePermissionRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, securityOrigin: QUrl, feature: qwebenginepage_enums.Feature) callconv(.c) void `
    ///
    pub fn onFeaturePermissionRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FeaturePermissionRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `featurePermissionRequestCanceled` instead
    ///
    pub const FeaturePermissionRequestCanceled = featurePermissionRequestCanceled;

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
    pub fn featurePermissionRequestCanceled(self: QWebEnginePage, securityOrigin: anytype, feature: i32) void {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        qtc.QWebEnginePage_FeaturePermissionRequestCanceled(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), @bitCast(feature));
    }

    /// ### DEPRECATED: Use `onFeaturePermissionRequestCanceled` instead
    ///
    pub const OnFeaturePermissionRequestCanceled = onFeaturePermissionRequestCanceled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequestCanceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, securityOrigin: QUrl, feature: qwebenginepage_enums.Feature) callconv(.c) void `
    ///
    pub fn onFeaturePermissionRequestCanceled(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FeaturePermissionRequestCanceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fullScreenRequested` instead
    ///
    pub const FullScreenRequested = fullScreenRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fullScreenRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` fullScreenRequest: QWebEngineFullScreenRequest `
    ///
    pub fn fullScreenRequested(self: QWebEnginePage, fullScreenRequest: anytype) void {
        comptime _ = @TypeOf(fullScreenRequest)._is_QWebEngineFullScreenRequest;
        qtc.QWebEnginePage_FullScreenRequested(@ptrCast(self.ptr), @ptrCast(fullScreenRequest.ptr));
    }

    /// ### DEPRECATED: Use `onFullScreenRequested` instead
    ///
    pub const OnFullScreenRequested = onFullScreenRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fullScreenRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, fullScreenRequest: QWebEngineFullScreenRequest) callconv(.c) void `
    ///
    pub fn onFullScreenRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineFullScreenRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FullScreenRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `permissionRequested` instead
    ///
    pub const PermissionRequested = permissionRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#permissionRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` permissionRequest: QWebEnginePermission `
    ///
    pub fn permissionRequested(self: QWebEnginePage, permissionRequest: anytype) void {
        comptime _ = @TypeOf(permissionRequest)._is_QWebEnginePermission;
        qtc.QWebEnginePage_PermissionRequested(@ptrCast(self.ptr), @ptrCast(permissionRequest.ptr));
    }

    /// ### DEPRECATED: Use `onPermissionRequested` instead
    ///
    pub const OnPermissionRequested = onPermissionRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#permissionRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, permissionRequest: QWebEnginePermission) callconv(.c) void `
    ///
    pub fn onPermissionRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEnginePermission) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_PermissionRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `quotaRequested` instead
    ///
    pub const QuotaRequested = quotaRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#quotaRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` quotaRequest: QWebEngineQuotaRequest `
    ///
    pub fn quotaRequested(self: QWebEnginePage, quotaRequest: anytype) void {
        comptime _ = @TypeOf(quotaRequest)._is_QWebEngineQuotaRequest;
        qtc.QWebEnginePage_QuotaRequested(@ptrCast(self.ptr), @ptrCast(quotaRequest.ptr));
    }

    /// ### DEPRECATED: Use `onQuotaRequested` instead
    ///
    pub const OnQuotaRequested = onQuotaRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#quotaRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, quotaRequest: QWebEngineQuotaRequest) callconv(.c) void `
    ///
    pub fn onQuotaRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineQuotaRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_QuotaRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `registerProtocolHandlerRequested` instead
    ///
    pub const RegisterProtocolHandlerRequested = registerProtocolHandlerRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#registerProtocolHandlerRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn registerProtocolHandlerRequested(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineRegisterProtocolHandlerRequest;
        qtc.QWebEnginePage_RegisterProtocolHandlerRequested(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### DEPRECATED: Use `onRegisterProtocolHandlerRequested` instead
    ///
    pub const OnRegisterProtocolHandlerRequested = onRegisterProtocolHandlerRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#registerProtocolHandlerRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, request: QWebEngineRegisterProtocolHandlerRequest) callconv(.c) void `
    ///
    pub fn onRegisterProtocolHandlerRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineRegisterProtocolHandlerRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RegisterProtocolHandlerRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fileSystemAccessRequested` instead
    ///
    pub const FileSystemAccessRequested = fileSystemAccessRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fileSystemAccessRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineFileSystemAccessRequest `
    ///
    pub fn fileSystemAccessRequested(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineFileSystemAccessRequest;
        qtc.QWebEnginePage_FileSystemAccessRequested(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### DEPRECATED: Use `onFileSystemAccessRequested` instead
    ///
    pub const OnFileSystemAccessRequested = onFileSystemAccessRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fileSystemAccessRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, request: QWebEngineFileSystemAccessRequest) callconv(.c) void `
    ///
    pub fn onFileSystemAccessRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineFileSystemAccessRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FileSystemAccessRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectClientCertificate` instead
    ///
    pub const SelectClientCertificate = selectClientCertificate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectClientCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` clientCertSelection: QWebEngineClientCertificateSelection `
    ///
    pub fn selectClientCertificate(self: QWebEnginePage, clientCertSelection: anytype) void {
        comptime _ = @TypeOf(clientCertSelection)._is_QWebEngineClientCertificateSelection;
        qtc.QWebEnginePage_SelectClientCertificate(@ptrCast(self.ptr), @ptrCast(clientCertSelection.ptr));
    }

    /// ### DEPRECATED: Use `onSelectClientCertificate` instead
    ///
    pub const OnSelectClientCertificate = onSelectClientCertificate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectClientCertificate)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, clientCertSelection: QWebEngineClientCertificateSelection) callconv(.c) void `
    ///
    pub fn onSelectClientCertificate(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineClientCertificateSelection) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_SelectClientCertificate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `authenticationRequired` instead
    ///
    pub const AuthenticationRequired = authenticationRequired;

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
    pub fn authenticationRequired(self: QWebEnginePage, requestUrl: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(requestUrl)._is_QUrl;
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        qtc.QWebEnginePage_AuthenticationRequired(@ptrCast(self.ptr), @ptrCast(requestUrl.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### DEPRECATED: Use `onAuthenticationRequired` instead
    ///
    pub const OnAuthenticationRequired = onAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#authenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, requestUrl: QUrl, authenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn onAuthenticationRequired(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, QAuthenticator) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_AuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `proxyAuthenticationRequired` instead
    ///
    pub const ProxyAuthenticationRequired = proxyAuthenticationRequired;

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
    pub fn proxyAuthenticationRequired(self: QWebEnginePage, requestUrl: anytype, authenticator: anytype, proxyHost: []const u8) void {
        comptime _ = @TypeOf(requestUrl)._is_QUrl;
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        const proxyHost_str = qtc.libqt_string{
            .len = proxyHost.len,
            .data = proxyHost.ptr,
        };
        qtc.QWebEnginePage_ProxyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(requestUrl.ptr), @ptrCast(authenticator.ptr), proxyHost_str);
    }

    /// ### DEPRECATED: Use `onProxyAuthenticationRequired` instead
    ///
    pub const OnProxyAuthenticationRequired = onProxyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, requestUrl: QUrl, authenticator: QAuthenticator, proxyHost: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onProxyAuthenticationRequired(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, QAuthenticator, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_ProxyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `renderProcessTerminated` instead
    ///
    pub const RenderProcessTerminated = renderProcessTerminated;

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
    pub fn renderProcessTerminated(self: QWebEnginePage, terminationStatus: i32, exitCode: i32) void {
        qtc.QWebEnginePage_RenderProcessTerminated(@ptrCast(self.ptr), @bitCast(terminationStatus), @bitCast(exitCode));
    }

    /// ### DEPRECATED: Use `onRenderProcessTerminated` instead
    ///
    pub const OnRenderProcessTerminated = onRenderProcessTerminated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessTerminated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, terminationStatus: qwebenginepage_enums.RenderProcessTerminationStatus, exitCode: i32) callconv(.c) void `
    ///
    pub fn onRenderProcessTerminated(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RenderProcessTerminated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `desktopMediaRequested` instead
    ///
    pub const DesktopMediaRequested = desktopMediaRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#desktopMediaRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineDesktopMediaRequest `
    ///
    pub fn desktopMediaRequested(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineDesktopMediaRequest;
        qtc.QWebEnginePage_DesktopMediaRequested(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### DEPRECATED: Use `onDesktopMediaRequested` instead
    ///
    pub const OnDesktopMediaRequested = onDesktopMediaRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#desktopMediaRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, request: QWebEngineDesktopMediaRequest) callconv(.c) void `
    ///
    pub fn onDesktopMediaRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineDesktopMediaRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_DesktopMediaRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `certificateError` instead
    ///
    pub const CertificateError = certificateError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#certificateError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _certificateError: QWebEngineCertificateError `
    ///
    pub fn certificateError(self: QWebEnginePage, _certificateError: anytype) void {
        comptime _ = @TypeOf(_certificateError)._is_QWebEngineCertificateError;
        qtc.QWebEnginePage_CertificateError(@ptrCast(self.ptr), @ptrCast(_certificateError.ptr));
    }

    /// ### DEPRECATED: Use `onCertificateError` instead
    ///
    pub const OnCertificateError = onCertificateError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#certificateError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, certificateError: QWebEngineCertificateError) callconv(.c) void `
    ///
    pub fn onCertificateError(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineCertificateError) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_CertificateError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `navigationRequested` instead
    ///
    pub const NavigationRequested = navigationRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#navigationRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineNavigationRequest `
    ///
    pub fn navigationRequested(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineNavigationRequest;
        qtc.QWebEnginePage_NavigationRequested(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### DEPRECATED: Use `onNavigationRequested` instead
    ///
    pub const OnNavigationRequested = onNavigationRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#navigationRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, request: QWebEngineNavigationRequest) callconv(.c) void `
    ///
    pub fn onNavigationRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineNavigationRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_NavigationRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `newWindowRequested` instead
    ///
    pub const NewWindowRequested = newWindowRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#newWindowRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineNewWindowRequest `
    ///
    pub fn newWindowRequested(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineNewWindowRequest;
        qtc.QWebEnginePage_NewWindowRequested(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### DEPRECATED: Use `onNewWindowRequested` instead
    ///
    pub const OnNewWindowRequested = onNewWindowRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#newWindowRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, request: QWebEngineNewWindowRequest) callconv(.c) void `
    ///
    pub fn onNewWindowRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineNewWindowRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_NewWindowRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleChanged` instead
    ///
    pub const TitleChanged = titleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#titleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn titleChanged(self: QWebEnginePage, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QWebEnginePage_TitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `onTitleChanged` instead
    ///
    pub const OnTitleChanged = onTitleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#titleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTitleChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_TitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `urlChanged` instead
    ///
    pub const UrlChanged = urlChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#urlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _url: QUrl `
    ///
    pub fn urlChanged(self: QWebEnginePage, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QWebEnginePage_UrlChanged(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `onUrlChanged` instead
    ///
    pub const OnUrlChanged = onUrlChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#urlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, url: QUrl) callconv(.c) void `
    ///
    pub fn onUrlChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_UrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `iconUrlChanged` instead
    ///
    pub const IconUrlChanged = iconUrlChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _url: QUrl `
    ///
    pub fn iconUrlChanged(self: QWebEnginePage, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QWebEnginePage_IconUrlChanged(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `onIconUrlChanged` instead
    ///
    pub const OnIconUrlChanged = onIconUrlChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, url: QUrl) callconv(.c) void `
    ///
    pub fn onIconUrlChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_IconUrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `iconChanged` instead
    ///
    pub const IconChanged = iconChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn iconChanged(self: QWebEnginePage, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QWebEnginePage_IconChanged(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `onIconChanged` instead
    ///
    pub const OnIconChanged = onIconChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, icon: QIcon) callconv(.c) void `
    ///
    pub fn onIconChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QIcon) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_IconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zoomFactorChanged` instead
    ///
    pub const ZoomFactorChanged = zoomFactorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` factor: f64 `
    ///
    pub fn zoomFactorChanged(self: QWebEnginePage, factor: f64) void {
        qtc.QWebEnginePage_ZoomFactorChanged(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `onZoomFactorChanged` instead
    ///
    pub const OnZoomFactorChanged = onZoomFactorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, factor: f64) callconv(.c) void `
    ///
    pub fn onZoomFactorChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, f64) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_ZoomFactorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollPositionChanged` instead
    ///
    pub const ScrollPositionChanged = scrollPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` position: QPointF `
    ///
    pub fn scrollPositionChanged(self: QWebEnginePage, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        qtc.QWebEnginePage_ScrollPositionChanged(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `onScrollPositionChanged` instead
    ///
    pub const OnScrollPositionChanged = onScrollPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, position: QPointF) callconv(.c) void `
    ///
    pub fn onScrollPositionChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QPointF) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_ScrollPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contentsSizeChanged` instead
    ///
    pub const ContentsSizeChanged = contentsSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` size: QSizeF `
    ///
    pub fn contentsSizeChanged(self: QWebEnginePage, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QWebEnginePage_ContentsSizeChanged(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `onContentsSizeChanged` instead
    ///
    pub const OnContentsSizeChanged = onContentsSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, size: QSizeF) callconv(.c) void `
    ///
    pub fn onContentsSizeChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QSizeF) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_ContentsSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `audioMutedChanged` instead
    ///
    pub const AudioMutedChanged = audioMutedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#audioMutedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` muted: bool `
    ///
    pub fn audioMutedChanged(self: QWebEnginePage, muted: bool) void {
        qtc.QWebEnginePage_AudioMutedChanged(@ptrCast(self.ptr), muted);
    }

    /// ### DEPRECATED: Use `onAudioMutedChanged` instead
    ///
    pub const OnAudioMutedChanged = onAudioMutedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#audioMutedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, muted: bool) callconv(.c) void `
    ///
    pub fn onAudioMutedChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_AudioMutedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `recentlyAudibleChanged` instead
    ///
    pub const RecentlyAudibleChanged = recentlyAudibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _recentlyAudible: bool `
    ///
    pub fn recentlyAudibleChanged(self: QWebEnginePage, _recentlyAudible: bool) void {
        qtc.QWebEnginePage_RecentlyAudibleChanged(@ptrCast(self.ptr), _recentlyAudible);
    }

    /// ### DEPRECATED: Use `onRecentlyAudibleChanged` instead
    ///
    pub const OnRecentlyAudibleChanged = onRecentlyAudibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, recentlyAudible: bool) callconv(.c) void `
    ///
    pub fn onRecentlyAudibleChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RecentlyAudibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `renderProcessPidChanged` instead
    ///
    pub const RenderProcessPidChanged = renderProcessPidChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPidChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` pid: i64 `
    ///
    pub fn renderProcessPidChanged(self: QWebEnginePage, pid: i64) void {
        qtc.QWebEnginePage_RenderProcessPidChanged(@ptrCast(self.ptr), @bitCast(pid));
    }

    /// ### DEPRECATED: Use `onRenderProcessPidChanged` instead
    ///
    pub const OnRenderProcessPidChanged = onRenderProcessPidChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPidChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, pid: i64) callconv(.c) void `
    ///
    pub fn onRenderProcessPidChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i64) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RenderProcessPidChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pdfPrintingFinished` instead
    ///
    pub const PdfPrintingFinished = pdfPrintingFinished;

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
    pub fn pdfPrintingFinished(self: QWebEnginePage, filePath: []const u8, success: bool) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_PdfPrintingFinished(@ptrCast(self.ptr), filePath_str, success);
    }

    /// ### DEPRECATED: Use `onPdfPrintingFinished` instead
    ///
    pub const OnPdfPrintingFinished = onPdfPrintingFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#pdfPrintingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, filePath: [*:0]const u8, success: bool) callconv(.c) void `
    ///
    pub fn onPdfPrintingFinished(self: QWebEnginePage, callback: *const fn (QWebEnginePage, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_PdfPrintingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `printRequested` instead
    ///
    pub const PrintRequested = printRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn printRequested(self: QWebEnginePage) void {
        qtc.QWebEnginePage_PrintRequested(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPrintRequested` instead
    ///
    pub const OnPrintRequested = onPrintRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage) callconv(.c) void `
    ///
    pub fn onPrintRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_PrintRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `printRequestedByFrame` instead
    ///
    pub const PrintRequestedByFrame = printRequestedByFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequestedByFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` frame: QWebEngineFrame `
    ///
    pub fn printRequestedByFrame(self: QWebEnginePage, frame: anytype) void {
        comptime _ = @TypeOf(frame)._is_QWebEngineFrame;
        qtc.QWebEnginePage_PrintRequestedByFrame(@ptrCast(self.ptr), @ptrCast(frame.ptr));
    }

    /// ### DEPRECATED: Use `onPrintRequestedByFrame` instead
    ///
    pub const OnPrintRequestedByFrame = onPrintRequestedByFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequestedByFrame)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, frame: QWebEngineFrame) callconv(.c) void `
    ///
    pub fn onPrintRequestedByFrame(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineFrame) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_PrintRequestedByFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` visible: bool `
    ///
    pub fn visibleChanged(self: QWebEnginePage, visible: bool) void {
        qtc.QWebEnginePage_VisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, visible: bool) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lifecycleStateChanged` instead
    ///
    pub const LifecycleStateChanged = lifecycleStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` state: qwebenginepage_enums.LifecycleState `
    ///
    pub fn lifecycleStateChanged(self: QWebEnginePage, state: i32) void {
        qtc.QWebEnginePage_LifecycleStateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onLifecycleStateChanged` instead
    ///
    pub const OnLifecycleStateChanged = onLifecycleStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, state: qwebenginepage_enums.LifecycleState) callconv(.c) void `
    ///
    pub fn onLifecycleStateChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LifecycleStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `recommendedStateChanged` instead
    ///
    pub const RecommendedStateChanged = recommendedStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` state: qwebenginepage_enums.LifecycleState `
    ///
    pub fn recommendedStateChanged(self: QWebEnginePage, state: i32) void {
        qtc.QWebEnginePage_RecommendedStateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onRecommendedStateChanged` instead
    ///
    pub const OnRecommendedStateChanged = onRecommendedStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, state: qwebenginepage_enums.LifecycleState) callconv(.c) void `
    ///
    pub fn onRecommendedStateChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RecommendedStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `findTextFinished` instead
    ///
    pub const FindTextFinished = findTextFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findTextFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` result: QWebEngineFindTextResult `
    ///
    pub fn findTextFinished(self: QWebEnginePage, result: anytype) void {
        comptime _ = @TypeOf(result)._is_QWebEngineFindTextResult;
        qtc.QWebEnginePage_FindTextFinished(@ptrCast(self.ptr), @ptrCast(result.ptr));
    }

    /// ### DEPRECATED: Use `onFindTextFinished` instead
    ///
    pub const OnFindTextFinished = onFindTextFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findTextFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, result: QWebEngineFindTextResult) callconv(.c) void `
    ///
    pub fn onFindTextFinished(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineFindTextResult) callconv(.c) void) void {
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

    /// ### DEPRECATED: Use `onQAboutToDelete` instead
    ///
    pub const OnQAboutToDelete = onQAboutToDelete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#_q_aboutToDelete)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage) callconv(.c) void `
    ///
    pub fn onQAboutToDelete(self: QWebEnginePage, callback: *const fn (QWebEnginePage) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_QAboutToDelete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `webAuthUxRequested` instead
    ///
    pub const WebAuthUxRequested = webAuthUxRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#webAuthUxRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` request: QWebEngineWebAuthUxRequest `
    ///
    pub fn webAuthUxRequested(self: QWebEnginePage, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QWebEngineWebAuthUxRequest;
        qtc.QWebEnginePage_WebAuthUxRequested(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### DEPRECATED: Use `onWebAuthUxRequested` instead
    ///
    pub const OnWebAuthUxRequested = onWebAuthUxRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#webAuthUxRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, request: QWebEngineWebAuthUxRequest) callconv(.c) void `
    ///
    pub fn onWebAuthUxRequested(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QWebEngineWebAuthUxRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_WebAuthUxRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createWindow` instead
    ///
    pub const CreateWindow = createWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` typeVal: qwebenginepage_enums.WebWindowType `
    ///
    pub fn createWindow(self: QWebEnginePage, typeVal: i32) QWebEnginePage {
        return .{ .ptr = qtc.QWebEnginePage_CreateWindow(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `onCreateWindow` instead
    ///
    pub const OnCreateWindow = onCreateWindow;

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
    pub fn onCreateWindow(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32) callconv(.c) QWebEnginePage) void {
        qtc.QWebEnginePage_OnCreateWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateWindow` instead
    ///
    pub const SuperCreateWindow = superCreateWindow;

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
    pub fn superCreateWindow(self: QWebEnginePage, typeVal: i32) QWebEnginePage {
        return .{ .ptr = qtc.QWebEnginePage_SuperCreateWindow(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `chooseFiles` instead
    ///
    pub const ChooseFiles = chooseFiles;

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
    pub fn chooseFiles(self: QWebEnginePage, allocator: std.mem.Allocator, mode: i32, oldFiles: []const []const u8, acceptedMimeTypes: []const []const u8) []const []const u8 {
        const oldFiles_arr = allocator.alloc(qtc.libqt_string, oldFiles.len) catch @panic("QWebEnginePage.chooseFiles: Memory allocation failed");
        defer allocator.free(oldFiles_arr);
        for (oldFiles, 0..oldFiles.len) |str_item, i|
            oldFiles_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const oldFiles_list = qtc.libqt_list{
            .len = oldFiles.len,
            .data = oldFiles_arr.ptr,
        };
        const acceptedMimeTypes_arr = allocator.alloc(qtc.libqt_string, acceptedMimeTypes.len) catch @panic("QWebEnginePage.chooseFiles: Memory allocation failed");
        defer allocator.free(acceptedMimeTypes_arr);
        for (acceptedMimeTypes, 0..acceptedMimeTypes.len) |str_item, i|
            acceptedMimeTypes_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QWebEnginePage.chooseFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebEnginePage.chooseFiles: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onChooseFiles` instead
    ///
    pub const OnChooseFiles = onChooseFiles;

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
    pub fn onChooseFiles(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32, ?[*:null]?[*:0]const u8, ?[*:null]?[*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QWebEnginePage_OnChooseFiles(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChooseFiles` instead
    ///
    pub const SuperChooseFiles = superChooseFiles;

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
    pub fn superChooseFiles(self: QWebEnginePage, allocator: std.mem.Allocator, mode: i32, oldFiles: []const []const u8, acceptedMimeTypes: []const []const u8) []const []const u8 {
        const oldFiles_arr = allocator.alloc(qtc.libqt_string, oldFiles.len) catch @panic("QWebEnginePage.chooseFiles: Memory allocation failed");
        defer allocator.free(oldFiles_arr);
        for (oldFiles, 0..oldFiles.len) |str_item, i|
            oldFiles_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const oldFiles_list = qtc.libqt_list{
            .len = oldFiles.len,
            .data = oldFiles_arr.ptr,
        };
        const acceptedMimeTypes_arr = allocator.alloc(qtc.libqt_string, acceptedMimeTypes.len) catch @panic("QWebEnginePage.chooseFiles: Memory allocation failed");
        defer allocator.free(acceptedMimeTypes_arr);
        for (acceptedMimeTypes, 0..acceptedMimeTypes.len) |str_item, i|
            acceptedMimeTypes_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QWebEnginePage.chooseFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebEnginePage.chooseFiles: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `javaScriptAlert` instead
    ///
    pub const JavaScriptAlert = javaScriptAlert;

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
    pub fn javaScriptAlert(self: QWebEnginePage, securityOrigin: anytype, msg: []const u8) void {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QWebEnginePage_JavaScriptAlert(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), msg_str);
    }

    /// ### DEPRECATED: Use `onJavaScriptAlert` instead
    ///
    pub const OnJavaScriptAlert = onJavaScriptAlert;

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
    pub fn onJavaScriptAlert(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_OnJavaScriptAlert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superJavaScriptAlert` instead
    ///
    pub const SuperJavaScriptAlert = superJavaScriptAlert;

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
    pub fn superJavaScriptAlert(self: QWebEnginePage, securityOrigin: anytype, msg: []const u8) void {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QWebEnginePage_SuperJavaScriptAlert(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), msg_str);
    }

    /// ### DEPRECATED: Use `javaScriptConfirm` instead
    ///
    pub const JavaScriptConfirm = javaScriptConfirm;

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
    pub fn javaScriptConfirm(self: QWebEnginePage, securityOrigin: anytype, msg: []const u8) bool {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return qtc.QWebEnginePage_JavaScriptConfirm(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), msg_str);
    }

    /// ### DEPRECATED: Use `onJavaScriptConfirm` instead
    ///
    pub const OnJavaScriptConfirm = onJavaScriptConfirm;

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
    pub fn onJavaScriptConfirm(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, [*:0]const u8) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnJavaScriptConfirm(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superJavaScriptConfirm` instead
    ///
    pub const SuperJavaScriptConfirm = superJavaScriptConfirm;

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
    pub fn superJavaScriptConfirm(self: QWebEnginePage, securityOrigin: anytype, msg: []const u8) bool {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return qtc.QWebEnginePage_SuperJavaScriptConfirm(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), msg_str);
    }

    /// ### DEPRECATED: Use `javaScriptConsoleMessage` instead
    ///
    pub const JavaScriptConsoleMessage = javaScriptConsoleMessage;

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
    pub fn javaScriptConsoleMessage(self: QWebEnginePage, level: i32, message: []const u8, lineNumber: i32, sourceID: []const u8) void {
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

    /// ### DEPRECATED: Use `onJavaScriptConsoleMessage` instead
    ///
    pub const OnJavaScriptConsoleMessage = onJavaScriptConsoleMessage;

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
    pub fn onJavaScriptConsoleMessage(self: QWebEnginePage, callback: *const fn (QWebEnginePage, i32, [*:0]const u8, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_OnJavaScriptConsoleMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superJavaScriptConsoleMessage` instead
    ///
    pub const SuperJavaScriptConsoleMessage = superJavaScriptConsoleMessage;

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
    pub fn superJavaScriptConsoleMessage(self: QWebEnginePage, level: i32, message: []const u8, lineNumber: i32, sourceID: []const u8) void {
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

    /// ### DEPRECATED: Use `acceptNavigationRequest` instead
    ///
    pub const AcceptNavigationRequest = acceptNavigationRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _url: QUrl `
    ///
    /// ` typeVal: qwebenginepage_enums.NavigationType `
    ///
    /// ` isMainFrame: bool `
    ///
    pub fn acceptNavigationRequest(self: QWebEnginePage, _url: anytype, typeVal: i32, isMainFrame: bool) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.QWebEnginePage_AcceptNavigationRequest(@ptrCast(self.ptr), @ptrCast(_url.ptr), @bitCast(typeVal), isMainFrame);
    }

    /// ### DEPRECATED: Use `onAcceptNavigationRequest` instead
    ///
    pub const OnAcceptNavigationRequest = onAcceptNavigationRequest;

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
    pub fn onAcceptNavigationRequest(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QUrl, i32, bool) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnAcceptNavigationRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAcceptNavigationRequest` instead
    ///
    pub const SuperAcceptNavigationRequest = superAcceptNavigationRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _url: QUrl `
    ///
    /// ` typeVal: qwebenginepage_enums.NavigationType `
    ///
    /// ` isMainFrame: bool `
    ///
    pub fn superAcceptNavigationRequest(self: QWebEnginePage, _url: anytype, typeVal: i32, isMainFrame: bool) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.QWebEnginePage_SuperAcceptNavigationRequest(@ptrCast(self.ptr), @ptrCast(_url.ptr), @bitCast(typeVal), isMainFrame);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEnginePage.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEnginePage.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `findText2` instead
    ///
    pub const FindText2 = findText2;

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
    pub fn findText2(self: QWebEnginePage, subString: []const u8, options: i32) void {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        qtc.QWebEnginePage_FindText2(@ptrCast(self.ptr), subString_str, @bitCast(options));
    }

    /// ### DEPRECATED: Use `findText3` instead
    ///
    pub const FindText3 = findText3;

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
    pub fn findText3(self: QWebEnginePage, subString: []const u8, options: i32, resultCallback: *const fn (QWebEngineFindTextResult) callconv(.c) void) void {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        qtc.QWebEnginePage_FindText3(@ptrCast(self.ptr), subString_str, @bitCast(options), @bitCast(@intFromPtr(resultCallback)));
    }

    /// ### DEPRECATED: Use `download2` instead
    ///
    pub const Download2 = download2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#download)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePage `
    ///
    /// ` _url: QUrl `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn download2(self: QWebEnginePage, _url: anytype, filename: []const u8) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QWebEnginePage_Download2(@ptrCast(self.ptr), @ptrCast(_url.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `setHtml2` instead
    ///
    pub const SetHtml2 = setHtml2;

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
    pub fn setHtml2(self: QWebEnginePage, html: []const u8, baseUrl: anytype) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        qtc.QWebEnginePage_SetHtml2(@ptrCast(self.ptr), html_str, @ptrCast(baseUrl.ptr));
    }

    /// ### DEPRECATED: Use `setContent2` instead
    ///
    pub const SetContent2 = setContent2;

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
    pub fn setContent2(self: QWebEnginePage, data: []u8, mimeType: []const u8) void {
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

    /// ### DEPRECATED: Use `setContent3` instead
    ///
    pub const SetContent3 = setContent3;

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
    pub fn setContent3(self: QWebEnginePage, data: []u8, mimeType: []const u8, baseUrl: anytype) void {
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

    /// ### DEPRECATED: Use `runJavaScript22` instead
    ///
    pub const RunJavaScript22 = runJavaScript22;

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
    pub fn runJavaScript22(self: QWebEnginePage, scriptSource: []const u8, worldId: u32) void {
        const scriptSource_str = qtc.libqt_string{
            .len = scriptSource.len,
            .data = scriptSource.ptr,
        };
        qtc.QWebEnginePage_RunJavaScript22(@ptrCast(self.ptr), scriptSource_str, @bitCast(worldId));
    }

    /// ### DEPRECATED: Use `runJavaScript3` instead
    ///
    pub const RunJavaScript3 = runJavaScript3;

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
    pub fn runJavaScript3(self: QWebEnginePage, scriptSource: []const u8, worldId: u32, resultCallback: *const fn (QVariant) callconv(.c) void) void {
        const scriptSource_str = qtc.libqt_string{
            .len = scriptSource.len,
            .data = scriptSource.ptr,
        };
        qtc.QWebEnginePage_RunJavaScript3(@ptrCast(self.ptr), scriptSource_str, @bitCast(worldId), @bitCast(@intFromPtr(resultCallback)));
    }

    /// ### DEPRECATED: Use `setWebChannel2` instead
    ///
    pub const SetWebChannel2 = setWebChannel2;

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
    pub fn setWebChannel2(self: QWebEnginePage, param1: anytype, worldId: u32) void {
        comptime _ = @TypeOf(param1)._is_QWebChannel;
        qtc.QWebEnginePage_SetWebChannel2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(worldId));
    }

    /// ### DEPRECATED: Use `save2` instead
    ///
    pub const Save2 = save2;

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
    pub fn save2(self: QWebEnginePage, filePath: []const u8, format: i32) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_Save2(@ptrCast(self.ptr), filePath_str, @bitCast(format));
    }

    /// ### DEPRECATED: Use `printToPdf22` instead
    ///
    pub const PrintToPdf22 = printToPdf22;

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
    pub fn printToPdf22(self: QWebEnginePage, filePath: []const u8, layout: anytype) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        comptime _ = @TypeOf(layout)._is_QPageLayout;
        qtc.QWebEnginePage_PrintToPdf22(@ptrCast(self.ptr), filePath_str, @ptrCast(layout.ptr));
    }

    /// ### DEPRECATED: Use `printToPdf3` instead
    ///
    pub const PrintToPdf3 = printToPdf3;

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
    pub fn printToPdf3(self: QWebEnginePage, filePath: []const u8, layout: anytype, ranges: anytype) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        comptime _ = @TypeOf(layout)._is_QPageLayout;
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QWebEnginePage_PrintToPdf3(@ptrCast(self.ptr), filePath_str, @ptrCast(layout.ptr), @ptrCast(ranges.ptr));
    }

    /// ### DEPRECATED: Use `printToPdf23` instead
    ///
    pub const PrintToPdf23 = printToPdf23;

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
    pub fn printToPdf23(self: QWebEnginePage, resultCallback: *const fn (qtc.libqt_string) callconv(.c) void, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QPageLayout;
        qtc.QWebEnginePage_PrintToPdf23(@ptrCast(self.ptr), @bitCast(@intFromPtr(resultCallback)), @ptrCast(layout.ptr));
    }

    /// ### DEPRECATED: Use `printToPdf32` instead
    ///
    pub const PrintToPdf32 = printToPdf32;

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
    pub fn printToPdf32(self: QWebEnginePage, resultCallback: *const fn (qtc.libqt_string) callconv(.c) void, layout: anytype, ranges: anytype) void {
        comptime _ = @TypeOf(layout)._is_QPageLayout;
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QWebEnginePage_PrintToPdf32(@ptrCast(self.ptr), @bitCast(@intFromPtr(resultCallback)), @ptrCast(layout.ptr), @ptrCast(ranges.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QWebEnginePage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEnginePage.objectName: Memory allocation failed");
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
    /// ` self: QWebEnginePage `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QWebEnginePage, name: []const u8) void {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn isWidgetType(self: QWebEnginePage) bool {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn isWindowType(self: QWebEnginePage) bool {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn isQuickItemType(self: QWebEnginePage) bool {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn signalsBlocked(self: QWebEnginePage) bool {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QWebEnginePage, b: bool) bool {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn thread(self: QWebEnginePage) QThread {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QWebEnginePage, _thread: anytype) bool {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QWebEnginePage, interval: i32) i32 {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QWebEnginePage, time: i64) i32 {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QWebEnginePage, id: i32) void {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QWebEnginePage, id: i32) void {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QWebEnginePage, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QWebEnginePage.children: Memory allocation failed");
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
    /// ` self: QWebEnginePage `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QWebEnginePage, _parent: anytype) void {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QWebEnginePage, filterObj: anytype) void {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QWebEnginePage, obj: anytype) void {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QWebEnginePage, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn disconnect3(self: QWebEnginePage) bool {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QWebEnginePage, receiver: anytype) bool {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn dumpObjectTree(self: QWebEnginePage) void {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn dumpObjectInfo(self: QWebEnginePage) void {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QWebEnginePage, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QWebEnginePage, name: [:0]const u8) QVariant {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QWebEnginePage, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QWebEnginePage.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebEnginePage.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebEnginePage `
    ///
    pub fn bindingStorage(self: QWebEnginePage) QBindingStorage {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn bindingStorage2(self: QWebEnginePage) QBindingStorage {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn destroyed(self: QWebEnginePage) void {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QWebEnginePage, callback: *const fn (QWebEnginePage) callconv(.c) void) void {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn parent(self: QWebEnginePage) QObject {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QWebEnginePage, classname: [:0]const u8) bool {
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
    /// ` self: QWebEnginePage `
    ///
    pub fn deleteLater(self: QWebEnginePage) void {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QWebEnginePage, interval: i32, timerType: i32) i32 {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QWebEnginePage, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QWebEnginePage, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QWebEnginePage, signal: [:0]const u8) bool {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QWebEnginePage, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QWebEnginePage, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QWebEnginePage, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QWebEnginePage, param1: anytype) void {
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
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QWebEnginePage, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebEnginePage_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QWebEnginePage, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebEnginePage_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QObject, QEvent) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QWebEnginePage, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QWebEnginePage_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QWebEnginePage, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QWebEnginePage_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QTimerEvent) callconv(.c) void) void {
        qtc.QWebEnginePage_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QWebEnginePage, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QWebEnginePage_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QWebEnginePage, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QWebEnginePage_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QChildEvent) callconv(.c) void) void {
        qtc.QWebEnginePage_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QWebEnginePage, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QWebEnginePage_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QWebEnginePage, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QWebEnginePage_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QEvent) callconv(.c) void) void {
        qtc.QWebEnginePage_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QWebEnginePage, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEnginePage_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QWebEnginePage, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEnginePage_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QMetaMethod) callconv(.c) void) void {
        qtc.QWebEnginePage_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QWebEnginePage, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEnginePage_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QWebEnginePage, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEnginePage_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QMetaMethod) callconv(.c) void) void {
        qtc.QWebEnginePage_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    pub fn sender(self: QWebEnginePage) QObject {
        return .{ .ptr = qtc.QWebEnginePage_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QWebEnginePage `
    ///
    pub fn superSender(self: QWebEnginePage) QObject {
        return .{ .ptr = qtc.QWebEnginePage_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QWebEnginePage, callback: *const fn () callconv(.c) QObject) void {
        qtc.QWebEnginePage_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    pub fn senderSignalIndex(self: QWebEnginePage) i32 {
        return qtc.QWebEnginePage_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    pub fn superSenderSignalIndex(self: QWebEnginePage) i32 {
        return qtc.QWebEnginePage_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QWebEnginePage, callback: *const fn () callconv(.c) i32) void {
        qtc.QWebEnginePage_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QWebEnginePage, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebEnginePage_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QWebEnginePage, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebEnginePage_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QWebEnginePage, callback: *const fn (QWebEnginePage, [*:0]const u8) callconv(.c) i32) void {
        qtc.QWebEnginePage_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QWebEnginePage, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebEnginePage_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QWebEnginePage, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebEnginePage_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QWebEnginePage, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QWebEnginePage, callback: *const fn (QWebEnginePage, QMetaMethod) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QWebEnginePage, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QWebEnginePage, callback: *const fn (QWebEnginePage, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#dtor.QWebEnginePage)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEnginePage `
    ///
    pub fn delete(self: QWebEnginePage) void {
        qtc.QWebEnginePage_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#public-types)
pub const enums = struct {
    pub const WebAction = enum {
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

    pub const FindFlag = enum {
        pub const FindBackward: i32 = 1;
        pub const FindCaseSensitively: i32 = 2;
    };

    pub const WebWindowType = enum {
        pub const WebBrowserWindow: i32 = 0;
        pub const WebBrowserTab: i32 = 1;
        pub const WebDialog: i32 = 2;
        pub const WebBrowserBackgroundTab: i32 = 3;
    };

    pub const NavigationType = enum {
        pub const NavigationTypeLinkClicked: i32 = 0;
        pub const NavigationTypeTyped: i32 = 1;
        pub const NavigationTypeFormSubmitted: i32 = 2;
        pub const NavigationTypeBackForward: i32 = 3;
        pub const NavigationTypeReload: i32 = 4;
        pub const NavigationTypeOther: i32 = 5;
        pub const NavigationTypeRedirect: i32 = 6;
    };

    pub const Feature = enum {
        pub const Notifications: i32 = 0;
        pub const Geolocation: i32 = 1;
        pub const MediaAudioCapture: i32 = 2;
    };

    pub const FileSelectionMode = enum {
        pub const FileSelectOpen: i32 = 0;
        pub const FileSelectOpenMultiple: i32 = 1;
        pub const FileSelectUploadFolder: i32 = 2;
        pub const FileSelectSave: i32 = 3;
    };

    pub const JavaScriptConsoleMessageLevel = enum {
        pub const InfoMessageLevel: i32 = 0;
        pub const WarningMessageLevel: i32 = 1;
        pub const ErrorMessageLevel: i32 = 2;
    };

    pub const RenderProcessTerminationStatus = enum {
        pub const NormalTerminationStatus: i32 = 0;
        pub const AbnormalTerminationStatus: i32 = 1;
        pub const CrashedTerminationStatus: i32 = 2;
        pub const KilledTerminationStatus: i32 = 3;
    };

    pub const LifecycleState = enum {
        pub const Active: i32 = 0;
        pub const Frozen: i32 = 1;
        pub const Discarded: i32 = 2;
    };
};
