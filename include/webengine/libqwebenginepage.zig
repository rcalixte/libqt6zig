const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qwebenginedownloadrequest_enums = @import("libqwebenginedownloadrequest.zig").enums;
const qwebenginepage_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qwebenginepage.html
pub const qwebenginepage = struct {
    /// New constructs a new QWebEnginePage object.
    ///
    ///
    pub fn New() ?*C.QWebEnginePage {
        return C.QWebEnginePage_new();
    }

    /// New2 constructs a new QWebEnginePage object.
    ///
    /// ``` profile: ?*C.QWebEngineProfile ```
    pub fn New2(profile: ?*anyopaque) ?*C.QWebEnginePage {
        return C.QWebEnginePage_new2(@ptrCast(profile));
    }

    /// New3 constructs a new QWebEnginePage object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New3(parent: ?*anyopaque) ?*C.QWebEnginePage {
        return C.QWebEnginePage_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QWebEnginePage object.
    ///
    /// ``` profile: ?*C.QWebEngineProfile, parent: ?*C.QObject ```
    pub fn New4(profile: ?*anyopaque, parent: ?*anyopaque) ?*C.QWebEnginePage {
        return C.QWebEnginePage_new4(@ptrCast(profile), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QWebEnginePage_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEnginePage, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QWebEnginePage_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QWebEnginePage, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QWebEnginePage_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QWebEnginePage_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWebEnginePage, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QWebEnginePage_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QWebEnginePage_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#history)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn History(self: ?*anyopaque) ?*C.QWebEngineHistory {
        return C.QWebEnginePage_History(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#hasSelection)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn HasSelection(self: ?*anyopaque) bool {
        return C.QWebEnginePage_HasSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#selectedText)
    ///
    /// ``` self: ?*C.QWebEnginePage, allocator: std.mem.Allocator ```
    pub fn SelectedText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEnginePage_SelectedText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#profile)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn Profile(self: ?*anyopaque) ?*C.QWebEngineProfile {
        return C.QWebEnginePage_Profile(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#action)
    ///
    /// ``` self: ?*C.QWebEnginePage, action: qwebenginepage_enums.WebAction ```
    pub fn Action(self: ?*anyopaque, action: i64) ?*C.QAction {
        return C.QWebEnginePage_Action(@ptrCast(self), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
    ///
    /// ``` self: ?*C.QWebEnginePage, action: qwebenginepage_enums.WebAction, checked: bool ```
    pub fn TriggerAction(self: ?*anyopaque, action: i64, checked: bool) void {
        C.QWebEnginePage_TriggerAction(@ptrCast(self), @intCast(action), checked);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, qwebenginepage_enums.WebAction, bool) callconv(.c) void ```
    pub fn OnTriggerAction(self: ?*anyopaque, slot: fn (?*anyopaque, i64, bool) callconv(.c) void) void {
        C.QWebEnginePage_OnTriggerAction(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWebEnginePage, action: qwebenginepage_enums.WebAction, checked: bool ```
    pub fn QBaseTriggerAction(self: ?*anyopaque, action: i64, checked: bool) void {
        C.QWebEnginePage_QBaseTriggerAction(@ptrCast(self), @intCast(action), checked);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#replaceMisspelledWord)
    ///
    /// ``` self: ?*C.QWebEnginePage, replacement: []const u8 ```
    pub fn ReplaceMisspelledWord(self: ?*anyopaque, replacement: []const u8) void {
        const replacement_str = C.struct_libqt_string{
            .len = replacement.len,
            .data = @constCast(replacement.ptr),
        };
        C.QWebEnginePage_ReplaceMisspelledWord(@ptrCast(self), replacement_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#event)
    ///
    /// ``` self: ?*C.QWebEnginePage, param1: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QWebEnginePage_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QWebEnginePage_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWebEnginePage, param1: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QWebEnginePage_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setFeaturePermission)
    ///
    /// ``` self: ?*C.QWebEnginePage, securityOrigin: ?*C.QUrl, feature: qwebenginepage_enums.Feature, policy: qwebenginepage_enums.PermissionPolicy ```
    pub fn SetFeaturePermission(self: ?*anyopaque, securityOrigin: ?*anyopaque, feature: i64, policy: i64) void {
        C.QWebEnginePage_SetFeaturePermission(@ptrCast(self), @ptrCast(securityOrigin), @intCast(feature), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#isLoading)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn IsLoading(self: ?*anyopaque) bool {
        return C.QWebEnginePage_IsLoading(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#load)
    ///
    /// ``` self: ?*C.QWebEnginePage, url: ?*C.QUrl ```
    pub fn Load(self: ?*anyopaque, url: ?*anyopaque) void {
        C.QWebEnginePage_Load(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#load)
    ///
    /// ``` self: ?*C.QWebEnginePage, request: ?*C.QWebEngineHttpRequest ```
    pub fn LoadWithRequest(self: ?*anyopaque, request: ?*anyopaque) void {
        C.QWebEnginePage_LoadWithRequest(@ptrCast(self), @ptrCast(request));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#download)
    ///
    /// ``` self: ?*C.QWebEnginePage, url: ?*C.QUrl ```
    pub fn Download(self: ?*anyopaque, url: ?*anyopaque) void {
        C.QWebEnginePage_Download(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
    ///
    /// ``` self: ?*C.QWebEnginePage, html: []const u8 ```
    pub fn SetHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = C.struct_libqt_string{
            .len = html.len,
            .data = @constCast(html.ptr),
        };
        C.QWebEnginePage_SetHtml(@ptrCast(self), html_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
    ///
    /// ``` self: ?*C.QWebEnginePage, data: []u8 ```
    pub fn SetContent(self: ?*anyopaque, data: []u8) void {
        const data_str = C.struct_libqt_string{
            .len = data.len,
            .data = @constCast(data.ptr),
        };
        C.QWebEnginePage_SetContent(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#title)
    ///
    /// ``` self: ?*C.QWebEnginePage, allocator: std.mem.Allocator ```
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEnginePage_Title(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setUrl)
    ///
    /// ``` self: ?*C.QWebEnginePage, url: ?*C.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        C.QWebEnginePage_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#url)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn Url(self: ?*anyopaque) ?*C.QUrl {
        return C.QWebEnginePage_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#requestedUrl)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn RequestedUrl(self: ?*anyopaque) ?*C.QUrl {
        return C.QWebEnginePage_RequestedUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrl)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn IconUrl(self: ?*anyopaque) ?*C.QUrl {
        return C.QWebEnginePage_IconUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#icon)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn Icon(self: ?*anyopaque) ?*C.QIcon {
        return C.QWebEnginePage_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactor)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn ZoomFactor(self: ?*anyopaque) f64 {
        return C.QWebEnginePage_ZoomFactor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setZoomFactor)
    ///
    /// ``` self: ?*C.QWebEnginePage, factor: f64 ```
    pub fn SetZoomFactor(self: ?*anyopaque, factor: f64) void {
        C.QWebEnginePage_SetZoomFactor(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPosition)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn ScrollPosition(self: ?*anyopaque) ?*C.QPointF {
        return C.QWebEnginePage_ScrollPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSize)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn ContentsSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QWebEnginePage_ContentsSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#scripts)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn Scripts(self: ?*anyopaque) ?*C.QWebEngineScriptCollection {
        return C.QWebEnginePage_Scripts(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#settings)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn Settings(self: ?*anyopaque) ?*C.QWebEngineSettings {
        return C.QWebEnginePage_Settings(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#webChannel)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn WebChannel(self: ?*anyopaque) ?*C.QWebChannel {
        return C.QWebEnginePage_WebChannel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
    ///
    /// ``` self: ?*C.QWebEnginePage, param1: ?*C.QWebChannel ```
    pub fn SetWebChannel(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWebEnginePage_SetWebChannel(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#backgroundColor)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn BackgroundColor(self: ?*anyopaque) ?*C.QColor {
        return C.QWebEnginePage_BackgroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setBackgroundColor)
    ///
    /// ``` self: ?*C.QWebEnginePage, color: ?*C.QColor ```
    pub fn SetBackgroundColor(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QWebEnginePage_SetBackgroundColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#save)
    ///
    /// ``` self: ?*C.QWebEnginePage, filePath: []const u8 ```
    pub fn Save(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = C.struct_libqt_string{
            .len = filePath.len,
            .data = @constCast(filePath.ptr),
        };
        C.QWebEnginePage_Save(@ptrCast(self), filePath_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#isAudioMuted)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn IsAudioMuted(self: ?*anyopaque) bool {
        return C.QWebEnginePage_IsAudioMuted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setAudioMuted)
    ///
    /// ``` self: ?*C.QWebEnginePage, muted: bool ```
    pub fn SetAudioMuted(self: ?*anyopaque, muted: bool) void {
        C.QWebEnginePage_SetAudioMuted(@ptrCast(self), muted);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudible)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn RecentlyAudible(self: ?*anyopaque) bool {
        return C.QWebEnginePage_RecentlyAudible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPid)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn RenderProcessPid(self: ?*anyopaque) i64 {
        return C.QWebEnginePage_RenderProcessPid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ``` self: ?*C.QWebEnginePage, filePath: []const u8 ```
    pub fn PrintToPdf(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = C.struct_libqt_string{
            .len = filePath.len,
            .data = @constCast(filePath.ptr),
        };
        C.QWebEnginePage_PrintToPdf(@ptrCast(self), filePath_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setInspectedPage)
    ///
    /// ``` self: ?*C.QWebEnginePage, page: ?*C.QWebEnginePage ```
    pub fn SetInspectedPage(self: ?*anyopaque, page: ?*anyopaque) void {
        C.QWebEnginePage_SetInspectedPage(@ptrCast(self), @ptrCast(page));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#inspectedPage)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn InspectedPage(self: ?*anyopaque) ?*C.QWebEnginePage {
        return C.QWebEnginePage_InspectedPage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setDevToolsPage)
    ///
    /// ``` self: ?*C.QWebEnginePage, page: ?*C.QWebEnginePage ```
    pub fn SetDevToolsPage(self: ?*anyopaque, page: ?*anyopaque) void {
        C.QWebEnginePage_SetDevToolsPage(@ptrCast(self), @ptrCast(page));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#devToolsPage)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn DevToolsPage(self: ?*anyopaque) ?*C.QWebEnginePage {
        return C.QWebEnginePage_DevToolsPage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setUrlRequestInterceptor)
    ///
    /// ``` self: ?*C.QWebEnginePage, interceptor: ?*C.QWebEngineUrlRequestInterceptor ```
    pub fn SetUrlRequestInterceptor(self: ?*anyopaque, interceptor: ?*anyopaque) void {
        C.QWebEnginePage_SetUrlRequestInterceptor(@ptrCast(self), @ptrCast(interceptor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleState)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn LifecycleState(self: ?*anyopaque) i64 {
        return C.QWebEnginePage_LifecycleState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setLifecycleState)
    ///
    /// ``` self: ?*C.QWebEnginePage, state: qwebenginepage_enums.LifecycleState ```
    pub fn SetLifecycleState(self: ?*anyopaque, state: i64) void {
        C.QWebEnginePage_SetLifecycleState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedState)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn RecommendedState(self: ?*anyopaque) i64 {
        return C.QWebEnginePage_RecommendedState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#isVisible)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QWebEnginePage_IsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setVisible)
    ///
    /// ``` self: ?*C.QWebEnginePage, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        C.QWebEnginePage_SetVisible(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#acceptAsNewWindow)
    ///
    /// ``` self: ?*C.QWebEnginePage, request: ?*C.QWebEngineNewWindowRequest ```
    pub fn AcceptAsNewWindow(self: ?*anyopaque, request: ?*anyopaque) void {
        C.QWebEnginePage_AcceptAsNewWindow(@ptrCast(self), @ptrCast(request));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#loadStarted)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn LoadStarted(self: ?*anyopaque) void {
        C.QWebEnginePage_LoadStarted(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage) callconv(.c) void ```
    pub fn OnLoadStarted(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_LoadStarted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#loadProgress)
    ///
    /// ``` self: ?*C.QWebEnginePage, progress: i32 ```
    pub fn LoadProgress(self: ?*anyopaque, progress: i32) void {
        C.QWebEnginePage_LoadProgress(@ptrCast(self), @intCast(progress));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, i32) callconv(.c) void ```
    pub fn OnLoadProgress(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWebEnginePage_Connect_LoadProgress(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#loadFinished)
    ///
    /// ``` self: ?*C.QWebEnginePage, ok: bool ```
    pub fn LoadFinished(self: ?*anyopaque, ok: bool) void {
        C.QWebEnginePage_LoadFinished(@ptrCast(self), ok);
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, bool) callconv(.c) void ```
    pub fn OnLoadFinished(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QWebEnginePage_Connect_LoadFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#loadingChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, loadingInfo: ?*C.QWebEngineLoadingInfo ```
    pub fn LoadingChanged(self: ?*anyopaque, loadingInfo: ?*anyopaque) void {
        C.QWebEnginePage_LoadingChanged(@ptrCast(self), @ptrCast(loadingInfo));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QWebEngineLoadingInfo) callconv(.c) void ```
    pub fn OnLoadingChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_LoadingChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#linkHovered)
    ///
    /// ``` self: ?*C.QWebEnginePage, url: []const u8 ```
    pub fn LinkHovered(self: ?*anyopaque, url: []const u8) void {
        const url_str = C.struct_libqt_string{
            .len = url.len,
            .data = @constCast(url.ptr),
        };
        C.QWebEnginePage_LinkHovered(@ptrCast(self), url_str);
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, []const u8) callconv(.c) void ```
    pub fn OnLinkHovered(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QWebEnginePage_Connect_LinkHovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#selectionChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn SelectionChanged(self: ?*anyopaque) void {
        C.QWebEnginePage_SelectionChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_SelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#geometryChangeRequested)
    ///
    /// ``` self: ?*C.QWebEnginePage, geom: ?*C.QRect ```
    pub fn GeometryChangeRequested(self: ?*anyopaque, geom: ?*anyopaque) void {
        C.QWebEnginePage_GeometryChangeRequested(@ptrCast(self), @ptrCast(geom));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QRect) callconv(.c) void ```
    pub fn OnGeometryChangeRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_GeometryChangeRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#windowCloseRequested)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn WindowCloseRequested(self: ?*anyopaque) void {
        C.QWebEnginePage_WindowCloseRequested(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage) callconv(.c) void ```
    pub fn OnWindowCloseRequested(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_WindowCloseRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequested)
    ///
    /// ``` self: ?*C.QWebEnginePage, securityOrigin: ?*C.QUrl, feature: qwebenginepage_enums.Feature ```
    pub fn FeaturePermissionRequested(self: ?*anyopaque, securityOrigin: ?*anyopaque, feature: i64) void {
        C.QWebEnginePage_FeaturePermissionRequested(@ptrCast(self), @ptrCast(securityOrigin), @intCast(feature));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QUrl, qwebenginepage_enums.Feature) callconv(.c) void ```
    pub fn OnFeaturePermissionRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QWebEnginePage_Connect_FeaturePermissionRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequestCanceled)
    ///
    /// ``` self: ?*C.QWebEnginePage, securityOrigin: ?*C.QUrl, feature: qwebenginepage_enums.Feature ```
    pub fn FeaturePermissionRequestCanceled(self: ?*anyopaque, securityOrigin: ?*anyopaque, feature: i64) void {
        C.QWebEnginePage_FeaturePermissionRequestCanceled(@ptrCast(self), @ptrCast(securityOrigin), @intCast(feature));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QUrl, qwebenginepage_enums.Feature) callconv(.c) void ```
    pub fn OnFeaturePermissionRequestCanceled(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QWebEnginePage_Connect_FeaturePermissionRequestCanceled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#fullScreenRequested)
    ///
    /// ``` self: ?*C.QWebEnginePage, fullScreenRequest: ?*C.QWebEngineFullScreenRequest ```
    pub fn FullScreenRequested(self: ?*anyopaque, fullScreenRequest: ?*C.QWebEngineFullScreenRequest) void {
        C.QWebEnginePage_FullScreenRequested(@ptrCast(self), @ptrCast(fullScreenRequest));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QWebEngineFullScreenRequest) callconv(.c) void ```
    pub fn OnFullScreenRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*C.QWebEngineFullScreenRequest) callconv(.c) void) void {
        C.QWebEnginePage_Connect_FullScreenRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#quotaRequested)
    ///
    /// ``` self: ?*C.QWebEnginePage, quotaRequest: ?*C.QWebEngineQuotaRequest ```
    pub fn QuotaRequested(self: ?*anyopaque, quotaRequest: ?*C.QWebEngineQuotaRequest) void {
        C.QWebEnginePage_QuotaRequested(@ptrCast(self), @ptrCast(quotaRequest));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QWebEngineQuotaRequest) callconv(.c) void ```
    pub fn OnQuotaRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*C.QWebEngineQuotaRequest) callconv(.c) void) void {
        C.QWebEnginePage_Connect_QuotaRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#registerProtocolHandlerRequested)
    ///
    /// ``` self: ?*C.QWebEnginePage, request: ?*C.QWebEngineRegisterProtocolHandlerRequest ```
    pub fn RegisterProtocolHandlerRequested(self: ?*anyopaque, request: ?*C.QWebEngineRegisterProtocolHandlerRequest) void {
        C.QWebEnginePage_RegisterProtocolHandlerRequested(@ptrCast(self), @ptrCast(request));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QWebEngineRegisterProtocolHandlerRequest) callconv(.c) void ```
    pub fn OnRegisterProtocolHandlerRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*C.QWebEngineRegisterProtocolHandlerRequest) callconv(.c) void) void {
        C.QWebEnginePage_Connect_RegisterProtocolHandlerRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#fileSystemAccessRequested)
    ///
    /// ``` self: ?*C.QWebEnginePage, request: ?*C.QWebEngineFileSystemAccessRequest ```
    pub fn FileSystemAccessRequested(self: ?*anyopaque, request: ?*C.QWebEngineFileSystemAccessRequest) void {
        C.QWebEnginePage_FileSystemAccessRequested(@ptrCast(self), @ptrCast(request));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QWebEngineFileSystemAccessRequest) callconv(.c) void ```
    pub fn OnFileSystemAccessRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*C.QWebEngineFileSystemAccessRequest) callconv(.c) void) void {
        C.QWebEnginePage_Connect_FileSystemAccessRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#selectClientCertificate)
    ///
    /// ``` self: ?*C.QWebEnginePage, clientCertSelection: ?*C.QWebEngineClientCertificateSelection ```
    pub fn SelectClientCertificate(self: ?*anyopaque, clientCertSelection: ?*C.QWebEngineClientCertificateSelection) void {
        C.QWebEnginePage_SelectClientCertificate(@ptrCast(self), @ptrCast(clientCertSelection));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QWebEngineClientCertificateSelection) callconv(.c) void ```
    pub fn OnSelectClientCertificate(self: ?*anyopaque, slot: fn (?*anyopaque, ?*C.QWebEngineClientCertificateSelection) callconv(.c) void) void {
        C.QWebEnginePage_Connect_SelectClientCertificate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#authenticationRequired)
    ///
    /// ``` self: ?*C.QWebEnginePage, requestUrl: ?*C.QUrl, authenticator: ?*C.QAuthenticator ```
    pub fn AuthenticationRequired(self: ?*anyopaque, requestUrl: ?*anyopaque, authenticator: ?*anyopaque) void {
        C.QWebEnginePage_AuthenticationRequired(@ptrCast(self), @ptrCast(requestUrl), @ptrCast(authenticator));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QUrl, ?*C.QAuthenticator) callconv(.c) void ```
    pub fn OnAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_AuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#proxyAuthenticationRequired)
    ///
    /// ``` self: ?*C.QWebEnginePage, requestUrl: ?*C.QUrl, authenticator: ?*C.QAuthenticator, proxyHost: []const u8 ```
    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, requestUrl: ?*anyopaque, authenticator: ?*anyopaque, proxyHost: []const u8) void {
        const proxyHost_str = C.struct_libqt_string{
            .len = proxyHost.len,
            .data = @constCast(proxyHost.ptr),
        };
        C.QWebEnginePage_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(requestUrl), @ptrCast(authenticator), proxyHost_str);
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QUrl, ?*C.QAuthenticator, []const u8) callconv(.c) void ```
    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, []const u8) callconv(.c) void) void {
        C.QWebEnginePage_Connect_ProxyAuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessTerminated)
    ///
    /// ``` self: ?*C.QWebEnginePage, terminationStatus: qwebenginepage_enums.RenderProcessTerminationStatus, exitCode: i32 ```
    pub fn RenderProcessTerminated(self: ?*anyopaque, terminationStatus: i64, exitCode: i32) void {
        C.QWebEnginePage_RenderProcessTerminated(@ptrCast(self), @intCast(terminationStatus), @intCast(exitCode));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, qwebenginepage_enums.RenderProcessTerminationStatus, i32) callconv(.c) void ```
    pub fn OnRenderProcessTerminated(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32) callconv(.c) void) void {
        C.QWebEnginePage_Connect_RenderProcessTerminated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#certificateError)
    ///
    /// ``` self: ?*C.QWebEnginePage, certificateError: ?*C.QWebEngineCertificateError ```
    pub fn CertificateError(self: ?*anyopaque, certificateError: ?*anyopaque) void {
        C.QWebEnginePage_CertificateError(@ptrCast(self), @ptrCast(certificateError));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QWebEngineCertificateError) callconv(.c) void ```
    pub fn OnCertificateError(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_CertificateError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#navigationRequested)
    ///
    /// ``` self: ?*C.QWebEnginePage, request: ?*C.QWebEngineNavigationRequest ```
    pub fn NavigationRequested(self: ?*anyopaque, request: ?*anyopaque) void {
        C.QWebEnginePage_NavigationRequested(@ptrCast(self), @ptrCast(request));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QWebEngineNavigationRequest) callconv(.c) void ```
    pub fn OnNavigationRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_NavigationRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#newWindowRequested)
    ///
    /// ``` self: ?*C.QWebEnginePage, request: ?*C.QWebEngineNewWindowRequest ```
    pub fn NewWindowRequested(self: ?*anyopaque, request: ?*anyopaque) void {
        C.QWebEnginePage_NewWindowRequested(@ptrCast(self), @ptrCast(request));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QWebEngineNewWindowRequest) callconv(.c) void ```
    pub fn OnNewWindowRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_NewWindowRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#titleChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, title: []const u8 ```
    pub fn TitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QWebEnginePage_TitleChanged(@ptrCast(self), title_str);
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, []const u8) callconv(.c) void ```
    pub fn OnTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QWebEnginePage_Connect_TitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#urlChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, url: ?*C.QUrl ```
    pub fn UrlChanged(self: ?*anyopaque, url: ?*anyopaque) void {
        C.QWebEnginePage_UrlChanged(@ptrCast(self), @ptrCast(url));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QUrl) callconv(.c) void ```
    pub fn OnUrlChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_UrlChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrlChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, url: ?*C.QUrl ```
    pub fn IconUrlChanged(self: ?*anyopaque, url: ?*anyopaque) void {
        C.QWebEnginePage_IconUrlChanged(@ptrCast(self), @ptrCast(url));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QUrl) callconv(.c) void ```
    pub fn OnIconUrlChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_IconUrlChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#iconChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, icon: ?*C.QIcon ```
    pub fn IconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        C.QWebEnginePage_IconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QIcon) callconv(.c) void ```
    pub fn OnIconChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_IconChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPositionChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, position: ?*C.QPointF ```
    pub fn ScrollPositionChanged(self: ?*anyopaque, position: ?*anyopaque) void {
        C.QWebEnginePage_ScrollPositionChanged(@ptrCast(self), @ptrCast(position));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QPointF) callconv(.c) void ```
    pub fn OnScrollPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_ScrollPositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSizeChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, size: ?*C.QSizeF ```
    pub fn ContentsSizeChanged(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QWebEnginePage_ContentsSizeChanged(@ptrCast(self), @ptrCast(size));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QSizeF) callconv(.c) void ```
    pub fn OnContentsSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_ContentsSizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#audioMutedChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, muted: bool ```
    pub fn AudioMutedChanged(self: ?*anyopaque, muted: bool) void {
        C.QWebEnginePage_AudioMutedChanged(@ptrCast(self), muted);
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, bool) callconv(.c) void ```
    pub fn OnAudioMutedChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QWebEnginePage_Connect_AudioMutedChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudibleChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, recentlyAudible: bool ```
    pub fn RecentlyAudibleChanged(self: ?*anyopaque, recentlyAudible: bool) void {
        C.QWebEnginePage_RecentlyAudibleChanged(@ptrCast(self), recentlyAudible);
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, bool) callconv(.c) void ```
    pub fn OnRecentlyAudibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QWebEnginePage_Connect_RecentlyAudibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPidChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, pid: i64 ```
    pub fn RenderProcessPidChanged(self: ?*anyopaque, pid: i64) void {
        C.QWebEnginePage_RenderProcessPidChanged(@ptrCast(self), @intCast(pid));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, i64) callconv(.c) void ```
    pub fn OnRenderProcessPidChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QWebEnginePage_Connect_RenderProcessPidChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#pdfPrintingFinished)
    ///
    /// ``` self: ?*C.QWebEnginePage, filePath: []const u8, success: bool ```
    pub fn PdfPrintingFinished(self: ?*anyopaque, filePath: []const u8, success: bool) void {
        const filePath_str = C.struct_libqt_string{
            .len = filePath.len,
            .data = @constCast(filePath.ptr),
        };
        C.QWebEnginePage_PdfPrintingFinished(@ptrCast(self), filePath_str, success);
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, []const u8, bool) callconv(.c) void ```
    pub fn OnPdfPrintingFinished(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, bool) callconv(.c) void) void {
        C.QWebEnginePage_Connect_PdfPrintingFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#printRequested)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn PrintRequested(self: ?*anyopaque) void {
        C.QWebEnginePage_PrintRequested(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage) callconv(.c) void ```
    pub fn OnPrintRequested(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_PrintRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#visibleChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, visible: bool ```
    pub fn VisibleChanged(self: ?*anyopaque, visible: bool) void {
        C.QWebEnginePage_VisibleChanged(@ptrCast(self), visible);
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, bool) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QWebEnginePage_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleStateChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, state: qwebenginepage_enums.LifecycleState ```
    pub fn LifecycleStateChanged(self: ?*anyopaque, state: i64) void {
        C.QWebEnginePage_LifecycleStateChanged(@ptrCast(self), @intCast(state));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, qwebenginepage_enums.LifecycleState) callconv(.c) void ```
    pub fn OnLifecycleStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QWebEnginePage_Connect_LifecycleStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedStateChanged)
    ///
    /// ``` self: ?*C.QWebEnginePage, state: qwebenginepage_enums.LifecycleState ```
    pub fn RecommendedStateChanged(self: ?*anyopaque, state: i64) void {
        C.QWebEnginePage_RecommendedStateChanged(@ptrCast(self), @intCast(state));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, qwebenginepage_enums.LifecycleState) callconv(.c) void ```
    pub fn OnRecommendedStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QWebEnginePage_Connect_RecommendedStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#findTextFinished)
    ///
    /// ``` self: ?*C.QWebEnginePage, result: ?*C.QWebEngineFindTextResult ```
    pub fn FindTextFinished(self: ?*anyopaque, result: ?*anyopaque) void {
        C.QWebEnginePage_FindTextFinished(@ptrCast(self), @ptrCast(result));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QWebEngineFindTextResult) callconv(.c) void ```
    pub fn OnFindTextFinished(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_FindTextFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#_q_aboutToDelete)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn QAboutToDelete(self: ?*anyopaque) void {
        C.QWebEnginePage_QAboutToDelete(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage) callconv(.c) void ```
    pub fn OnQAboutToDelete(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_Connect_QAboutToDelete(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
    ///
    /// ``` self: ?*C.QWebEnginePage, typeVal: qwebenginepage_enums.WebWindowType ```
    pub fn CreateWindow(self: ?*anyopaque, typeVal: i64) ?*C.QWebEnginePage {
        return C.QWebEnginePage_CreateWindow(@ptrCast(self), @intCast(typeVal));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, qwebenginepage_enums.WebWindowType) callconv(.c) ?*C.QWebEnginePage ```
    pub fn OnCreateWindow(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*C.QWebEnginePage) void {
        C.QWebEnginePage_OnCreateWindow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWebEnginePage, typeVal: qwebenginepage_enums.WebWindowType ```
    pub fn QBaseCreateWindow(self: ?*anyopaque, typeVal: i64) ?*C.QWebEnginePage {
        return C.QWebEnginePage_QBaseCreateWindow(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#chooseFiles)
    ///
    /// ``` self: ?*C.QWebEnginePage, mode: qwebenginepage_enums.FileSelectionMode, oldFiles: [][]const u8, acceptedMimeTypes: [][]const u8, allocator: std.mem.Allocator ```
    pub fn ChooseFiles(self: ?*anyopaque, mode: i64, oldFiles: [][]const u8, acceptedMimeTypes: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        var oldFiles_arr = allocator.alloc(C.struct_libqt_string, oldFiles.len) catch @panic("Memory allocation failed");
        defer allocator.free(oldFiles_arr);
        for (oldFiles, 0..oldFiles.len) |item, _i| {
            oldFiles_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const oldFiles_list = C.struct_libqt_list{
            .len = oldFiles.len,
            .data = oldFiles_arr.ptr,
        };
        var acceptedMimeTypes_arr = allocator.alloc(C.struct_libqt_string, acceptedMimeTypes.len) catch @panic("Memory allocation failed");
        defer allocator.free(acceptedMimeTypes_arr);
        for (acceptedMimeTypes, 0..acceptedMimeTypes.len) |item, _i| {
            acceptedMimeTypes_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const acceptedMimeTypes_list = C.struct_libqt_list{
            .len = acceptedMimeTypes.len,
            .data = acceptedMimeTypes_arr.ptr,
        };
        const _arr: C.struct_libqt_list = C.QWebEnginePage_ChooseFiles(@ptrCast(self), @intCast(mode), oldFiles_list, acceptedMimeTypes_list);
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, qwebenginepage_enums.FileSelectionMode, [][]const u8, [][]const u8) callconv(.c) [][]const u8 ```
    pub fn OnChooseFiles(self: ?*anyopaque, slot: fn (?*anyopaque, i64, [][]const u8, [][]const u8) callconv(.c) [][]const u8) void {
        C.QWebEnginePage_OnChooseFiles(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWebEnginePage, mode: qwebenginepage_enums.FileSelectionMode, oldFiles: [][]const u8, acceptedMimeTypes: [][]const u8, allocator: std.mem.Allocator ```
    pub fn QBaseChooseFiles(self: ?*anyopaque, mode: i64, oldFiles: [][]const u8, acceptedMimeTypes: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        var oldFiles_arr = allocator.alloc(C.struct_libqt_string, oldFiles.len) catch @panic("Memory allocation failed");
        defer allocator.free(oldFiles_arr);
        for (oldFiles, 0..oldFiles.len) |item, _i| {
            oldFiles_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const oldFiles_list = C.struct_libqt_list{
            .len = oldFiles.len,
            .data = oldFiles_arr.ptr,
        };
        var acceptedMimeTypes_arr = allocator.alloc(C.struct_libqt_string, acceptedMimeTypes.len) catch @panic("Memory allocation failed");
        defer allocator.free(acceptedMimeTypes_arr);
        for (acceptedMimeTypes, 0..acceptedMimeTypes.len) |item, _i| {
            acceptedMimeTypes_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const acceptedMimeTypes_list = C.struct_libqt_list{
            .len = acceptedMimeTypes.len,
            .data = acceptedMimeTypes_arr.ptr,
        };
        const _arr: C.struct_libqt_list = C.QWebEnginePage_QBaseChooseFiles(@ptrCast(self), @intCast(mode), oldFiles_list, acceptedMimeTypes_list);
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptAlert)
    ///
    /// ``` self: ?*C.QWebEnginePage, securityOrigin: ?*C.QUrl, msg: []const u8 ```
    pub fn JavaScriptAlert(self: ?*anyopaque, securityOrigin: ?*anyopaque, msg: []const u8) void {
        const msg_str = C.struct_libqt_string{
            .len = msg.len,
            .data = @constCast(msg.ptr),
        };
        C.QWebEnginePage_JavaScriptAlert(@ptrCast(self), @ptrCast(securityOrigin), msg_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QUrl, []const u8) callconv(.c) void ```
    pub fn OnJavaScriptAlert(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []const u8) callconv(.c) void) void {
        C.QWebEnginePage_OnJavaScriptAlert(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWebEnginePage, securityOrigin: ?*C.QUrl, msg: []const u8 ```
    pub fn QBaseJavaScriptAlert(self: ?*anyopaque, securityOrigin: ?*anyopaque, msg: []const u8) void {
        const msg_str = C.struct_libqt_string{
            .len = msg.len,
            .data = @constCast(msg.ptr),
        };
        C.QWebEnginePage_QBaseJavaScriptAlert(@ptrCast(self), @ptrCast(securityOrigin), msg_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConfirm)
    ///
    /// ``` self: ?*C.QWebEnginePage, securityOrigin: ?*C.QUrl, msg: []const u8 ```
    pub fn JavaScriptConfirm(self: ?*anyopaque, securityOrigin: ?*anyopaque, msg: []const u8) bool {
        const msg_str = C.struct_libqt_string{
            .len = msg.len,
            .data = @constCast(msg.ptr),
        };
        return C.QWebEnginePage_JavaScriptConfirm(@ptrCast(self), @ptrCast(securityOrigin), msg_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QUrl, []const u8) callconv(.c) bool ```
    pub fn OnJavaScriptConfirm(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []const u8) callconv(.c) bool) void {
        C.QWebEnginePage_OnJavaScriptConfirm(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWebEnginePage, securityOrigin: ?*C.QUrl, msg: []const u8 ```
    pub fn QBaseJavaScriptConfirm(self: ?*anyopaque, securityOrigin: ?*anyopaque, msg: []const u8) bool {
        const msg_str = C.struct_libqt_string{
            .len = msg.len,
            .data = @constCast(msg.ptr),
        };
        return C.QWebEnginePage_QBaseJavaScriptConfirm(@ptrCast(self), @ptrCast(securityOrigin), msg_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConsoleMessage)
    ///
    /// ``` self: ?*C.QWebEnginePage, level: qwebenginepage_enums.JavaScriptConsoleMessageLevel, message: []const u8, lineNumber: i32, sourceID: []const u8 ```
    pub fn JavaScriptConsoleMessage(self: ?*anyopaque, level: i64, message: []const u8, lineNumber: i32, sourceID: []const u8) void {
        const message_str = C.struct_libqt_string{
            .len = message.len,
            .data = @constCast(message.ptr),
        };
        const sourceID_str = C.struct_libqt_string{
            .len = sourceID.len,
            .data = @constCast(sourceID.ptr),
        };
        C.QWebEnginePage_JavaScriptConsoleMessage(@ptrCast(self), @intCast(level), message_str, @intCast(lineNumber), sourceID_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, qwebenginepage_enums.JavaScriptConsoleMessageLevel, []const u8, i32, []const u8) callconv(.c) void ```
    pub fn OnJavaScriptConsoleMessage(self: ?*anyopaque, slot: fn (?*anyopaque, i64, []const u8, i32, []const u8) callconv(.c) void) void {
        C.QWebEnginePage_OnJavaScriptConsoleMessage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWebEnginePage, level: qwebenginepage_enums.JavaScriptConsoleMessageLevel, message: []const u8, lineNumber: i32, sourceID: []const u8 ```
    pub fn QBaseJavaScriptConsoleMessage(self: ?*anyopaque, level: i64, message: []const u8, lineNumber: i32, sourceID: []const u8) void {
        const message_str = C.struct_libqt_string{
            .len = message.len,
            .data = @constCast(message.ptr),
        };
        const sourceID_str = C.struct_libqt_string{
            .len = sourceID.len,
            .data = @constCast(sourceID.ptr),
        };
        C.QWebEnginePage_QBaseJavaScriptConsoleMessage(@ptrCast(self), @intCast(level), message_str, @intCast(lineNumber), sourceID_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
    ///
    /// ``` self: ?*C.QWebEnginePage, url: ?*C.QUrl, typeVal: qwebenginepage_enums.NavigationType, isMainFrame: bool ```
    pub fn AcceptNavigationRequest(self: ?*anyopaque, url: ?*anyopaque, typeVal: i64, isMainFrame: bool) bool {
        return C.QWebEnginePage_AcceptNavigationRequest(@ptrCast(self), @ptrCast(url), @intCast(typeVal), isMainFrame);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QUrl, qwebenginepage_enums.NavigationType, bool) callconv(.c) bool ```
    pub fn OnAcceptNavigationRequest(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64, bool) callconv(.c) bool) void {
        C.QWebEnginePage_OnAcceptNavigationRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWebEnginePage, url: ?*C.QUrl, typeVal: qwebenginepage_enums.NavigationType, isMainFrame: bool ```
    pub fn QBaseAcceptNavigationRequest(self: ?*anyopaque, url: ?*anyopaque, typeVal: i64, isMainFrame: bool) bool {
        return C.QWebEnginePage_QBaseAcceptNavigationRequest(@ptrCast(self), @ptrCast(url), @intCast(typeVal), isMainFrame);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QWebEnginePage_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QWebEnginePage_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#download)
    ///
    /// ``` self: ?*C.QWebEnginePage, url: ?*C.QUrl, filename: []const u8 ```
    pub fn Download2(self: ?*anyopaque, url: ?*anyopaque, filename: []const u8) void {
        const filename_str = C.struct_libqt_string{
            .len = filename.len,
            .data = @constCast(filename.ptr),
        };
        C.QWebEnginePage_Download2(@ptrCast(self), @ptrCast(url), filename_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
    ///
    /// ``` self: ?*C.QWebEnginePage, html: []const u8, baseUrl: ?*C.QUrl ```
    pub fn SetHtml2(self: ?*anyopaque, html: []const u8, baseUrl: ?*anyopaque) void {
        const html_str = C.struct_libqt_string{
            .len = html.len,
            .data = @constCast(html.ptr),
        };
        C.QWebEnginePage_SetHtml2(@ptrCast(self), html_str, @ptrCast(baseUrl));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
    ///
    /// ``` self: ?*C.QWebEnginePage, data: []u8, mimeType: []const u8 ```
    pub fn SetContent2(self: ?*anyopaque, data: []u8, mimeType: []const u8) void {
        const data_str = C.struct_libqt_string{
            .len = data.len,
            .data = @constCast(data.ptr),
        };
        const mimeType_str = C.struct_libqt_string{
            .len = mimeType.len,
            .data = @constCast(mimeType.ptr),
        };
        C.QWebEnginePage_SetContent2(@ptrCast(self), data_str, mimeType_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
    ///
    /// ``` self: ?*C.QWebEnginePage, data: []u8, mimeType: []const u8, baseUrl: ?*C.QUrl ```
    pub fn SetContent3(self: ?*anyopaque, data: []u8, mimeType: []const u8, baseUrl: ?*anyopaque) void {
        const data_str = C.struct_libqt_string{
            .len = data.len,
            .data = @constCast(data.ptr),
        };
        const mimeType_str = C.struct_libqt_string{
            .len = mimeType.len,
            .data = @constCast(mimeType.ptr),
        };
        C.QWebEnginePage_SetContent3(@ptrCast(self), data_str, mimeType_str, @ptrCast(baseUrl));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
    ///
    /// ``` self: ?*C.QWebEnginePage, param1: ?*C.QWebChannel, worldId: u32 ```
    pub fn SetWebChannel2(self: ?*anyopaque, param1: ?*anyopaque, worldId: u32) void {
        C.QWebEnginePage_SetWebChannel2(@ptrCast(self), @ptrCast(param1), @intCast(worldId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#save)
    ///
    /// ``` self: ?*C.QWebEnginePage, filePath: []const u8, format: qwebenginedownloadrequest_enums.SavePageFormat ```
    pub fn Save2(self: ?*anyopaque, filePath: []const u8, format: i64) void {
        const filePath_str = C.struct_libqt_string{
            .len = filePath.len,
            .data = @constCast(filePath.ptr),
        };
        C.QWebEnginePage_Save2(@ptrCast(self), filePath_str, @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ``` self: ?*C.QWebEnginePage, filePath: []const u8, layout: ?*C.QPageLayout ```
    pub fn PrintToPdf2(self: ?*anyopaque, filePath: []const u8, layout: ?*anyopaque) void {
        const filePath_str = C.struct_libqt_string{
            .len = filePath.len,
            .data = @constCast(filePath.ptr),
        };
        C.QWebEnginePage_PrintToPdf2(@ptrCast(self), filePath_str, @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ``` self: ?*C.QWebEnginePage, filePath: []const u8, layout: ?*C.QPageLayout, ranges: ?*C.QPageRanges ```
    pub fn PrintToPdf3(self: ?*anyopaque, filePath: []const u8, layout: ?*anyopaque, ranges: ?*anyopaque) void {
        const filePath_str = C.struct_libqt_string{
            .len = filePath.len,
            .data = @constCast(filePath.ptr),
        };
        C.QWebEnginePage_PrintToPdf3(@ptrCast(self), filePath_str, @ptrCast(layout), @ptrCast(ranges));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QWebEnginePage, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QWebEnginePage, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QWebEnginePage, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QWebEnginePage, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QWebEnginePage, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QWebEnginePage, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QWebEnginePage, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QWebEnginePage, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QWebEnginePage, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QWebEnginePage, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QWebEnginePage, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QWebEnginePage, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QWebEnginePage, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QWebEnginePage, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QWebEnginePage, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QWebEnginePage, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QWebEnginePage, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QWebEnginePage, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QWebEnginePage_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QWebEnginePage_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QWebEnginePage_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWebEnginePage_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWebEnginePage_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWebEnginePage_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWebEnginePage_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWebEnginePage_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWebEnginePage_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QWebEnginePage_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QWebEnginePage_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QWebEnginePage_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QWebEnginePage_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEnginePage_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QWebEnginePage_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QWebEnginePage_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QWebEnginePage_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QWebEnginePage_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QWebEnginePage_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QWebEnginePage_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QWebEnginePage_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QWebEnginePage_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QWebEnginePage_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QWebEnginePage_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QWebEnginePage_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEnginePage, slot: fn (?*C.QWebEnginePage, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QWebEnginePage_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QWebEnginePage ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QWebEnginePage_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwebenginepage.html#types
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
        pub const WebActionCount: i32 = 45;
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

    pub const PermissionPolicy = enum {
        pub const PermissionUnknown: i32 = 0;
        pub const PermissionGrantedByUser: i32 = 1;
        pub const PermissionDeniedByUser: i32 = 2;
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
        pub const MediaVideoCapture: i32 = 3;
        pub const MediaAudioVideoCapture: i32 = 4;
        pub const MouseLock: i32 = 5;
        pub const DesktopVideoCapture: i32 = 6;
        pub const DesktopAudioVideoCapture: i32 = 7;
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
