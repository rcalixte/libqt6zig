const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qwebenginedownloadrequest_enums = @import("libqwebenginedownloadrequest.zig").enums;
const qwebenginepage_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html)
pub const qwebenginepage = struct {
    /// New constructs a new QWebEnginePage object.
    ///
    pub fn New() QtC.QWebEnginePage {
        return qtc.QWebEnginePage_new();
    }

    /// New2 constructs a new QWebEnginePage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` profile: QtC.QWebEngineProfile `
    ///
    pub fn New2(profile: ?*anyopaque) QtC.QWebEnginePage {
        return qtc.QWebEnginePage_new2(@ptrCast(profile));
    }

    /// New3 constructs a new QWebEnginePage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New3(parent: ?*anyopaque) QtC.QWebEnginePage {
        return qtc.QWebEnginePage_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QWebEnginePage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` profile: QtC.QWebEngineProfile `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New4(profile: ?*anyopaque, parent: ?*anyopaque) QtC.QWebEnginePage {
        return qtc.QWebEnginePage_new4(@ptrCast(profile), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QWebEnginePage_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEnginePage_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: ?**anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?**anyopaque) i32 {
        return qtc.QWebEnginePage_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, param1: qobjectdefs_enums.Call, param2: i32, param3: ?**anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?**anyopaque) callconv(.c) i32) void {
        qtc.QWebEnginePage_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: ?**anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?**anyopaque) i32 {
        return qtc.QWebEnginePage_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn History(self: ?*anyopaque) QtC.QWebEngineHistory {
        return qtc.QWebEnginePage_History(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#hasSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn HasSelection(self: ?*anyopaque) bool {
        return qtc.QWebEnginePage_HasSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEnginePage_SelectedText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginepage.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#profile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn Profile(self: ?*anyopaque) QtC.QWebEngineProfile {
        return qtc.QWebEnginePage_Profile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` action: qwebenginepage_enums.WebAction `
    ///
    pub fn Action(self: ?*anyopaque, action: i32) QtC.QAction {
        return qtc.QWebEnginePage_Action(@ptrCast(self), @intCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` action: qwebenginepage_enums.WebAction `
    ///
    /// ` checked: bool `
    ///
    pub fn TriggerAction(self: ?*anyopaque, action: i32, checked: bool) void {
        qtc.QWebEnginePage_TriggerAction(@ptrCast(self), @intCast(action), checked);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, action: qwebenginepage_enums.WebAction, checked: bool) callconv(.c) void `
    ///
    pub fn OnTriggerAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_OnTriggerAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` action: qwebenginepage_enums.WebAction `
    ///
    /// ` checked: bool `
    ///
    pub fn QBaseTriggerAction(self: ?*anyopaque, action: i32, checked: bool) void {
        qtc.QWebEnginePage_QBaseTriggerAction(@ptrCast(self), @intCast(action), checked);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#replaceMisspelledWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` replacement: []const u8 `
    ///
    pub fn ReplaceMisspelledWord(self: ?*anyopaque, replacement: []const u8) void {
        const replacement_str = qtc.libqt_string{
            .len = replacement.len,
            .data = replacement.ptr,
        };
        qtc.QWebEnginePage_ReplaceMisspelledWord(@ptrCast(self), replacement_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWebEnginePage_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, param1: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWebEnginePage_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#isLoading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn IsLoading(self: ?*anyopaque) bool {
        return qtc.QWebEnginePage_IsLoading(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn Load(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QWebEnginePage_Load(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` request: QtC.QWebEngineHttpRequest `
    ///
    pub fn Load2(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.QWebEnginePage_Load2(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#download)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn Download(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QWebEnginePage_Download(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` html: []const u8 `
    ///
    pub fn SetHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QWebEnginePage_SetHtml(@ptrCast(self), html_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetContent(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QWebEnginePage_SetContent(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEnginePage_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginepage.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QWebEnginePage_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEnginePage_Url(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#requestedUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn RequestedUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEnginePage_RequestedUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn IconUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEnginePage_IconUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWebEnginePage_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn ZoomFactor(self: ?*anyopaque) f64 {
        return qtc.QWebEnginePage_ZoomFactor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setZoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` factor: f64 `
    ///
    pub fn SetZoomFactor(self: ?*anyopaque, factor: f64) void {
        qtc.QWebEnginePage_SetZoomFactor(@ptrCast(self), @floatCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn ScrollPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QWebEnginePage_ScrollPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn ContentsSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QWebEnginePage_ContentsSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scripts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn Scripts(self: ?*anyopaque) QtC.QWebEngineScriptCollection {
        return qtc.QWebEnginePage_Scripts(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#settings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn Settings(self: ?*anyopaque) QtC.QWebEngineSettings {
        return qtc.QWebEnginePage_Settings(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#webChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn WebChannel(self: ?*anyopaque) QtC.QWebChannel {
        return qtc.QWebEnginePage_WebChannel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` param1: QtC.QWebChannel `
    ///
    pub fn SetWebChannel(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWebEnginePage_SetWebChannel(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QWebEnginePage_BackgroundColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetBackgroundColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QWebEnginePage_SetBackgroundColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn Save(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_Save(@ptrCast(self), filePath_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#isAudioMuted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn IsAudioMuted(self: ?*anyopaque) bool {
        return qtc.QWebEnginePage_IsAudioMuted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setAudioMuted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` muted: bool `
    ///
    pub fn SetAudioMuted(self: ?*anyopaque, muted: bool) void {
        qtc.QWebEnginePage_SetAudioMuted(@ptrCast(self), muted);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn RecentlyAudible(self: ?*anyopaque) bool {
        return qtc.QWebEnginePage_RecentlyAudible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn RenderProcessPid(self: ?*anyopaque) i64 {
        return qtc.QWebEnginePage_RenderProcessPid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn PrintToPdf(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_PrintToPdf(@ptrCast(self), filePath_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setInspectedPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` page: QtC.QWebEnginePage `
    ///
    pub fn SetInspectedPage(self: ?*anyopaque, page: ?*anyopaque) void {
        qtc.QWebEnginePage_SetInspectedPage(@ptrCast(self), @ptrCast(page));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#inspectedPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn InspectedPage(self: ?*anyopaque) QtC.QWebEnginePage {
        return qtc.QWebEnginePage_InspectedPage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setDevToolsPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` page: QtC.QWebEnginePage `
    ///
    pub fn SetDevToolsPage(self: ?*anyopaque, page: ?*anyopaque) void {
        qtc.QWebEnginePage_SetDevToolsPage(@ptrCast(self), @ptrCast(page));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#devToolsPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn DevToolsPage(self: ?*anyopaque) QtC.QWebEnginePage {
        return qtc.QWebEnginePage_DevToolsPage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#devToolsId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DevToolsId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEnginePage_DevToolsId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginepage.DevToolsId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setUrlRequestInterceptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` interceptor: QtC.QWebEngineUrlRequestInterceptor `
    ///
    pub fn SetUrlRequestInterceptor(self: ?*anyopaque, interceptor: ?*anyopaque) void {
        qtc.QWebEnginePage_SetUrlRequestInterceptor(@ptrCast(self), @ptrCast(interceptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginepage_enums.LifecycleState `
    ///
    pub fn LifecycleState(self: ?*anyopaque) i32 {
        return qtc.QWebEnginePage_LifecycleState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setLifecycleState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` state: qwebenginepage_enums.LifecycleState `
    ///
    pub fn SetLifecycleState(self: ?*anyopaque, state: i32) void {
        qtc.QWebEnginePage_SetLifecycleState(@ptrCast(self), @intCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginepage_enums.LifecycleState `
    ///
    pub fn RecommendedState(self: ?*anyopaque) i32 {
        return qtc.QWebEnginePage_RecommendedState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWebEnginePage_IsVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QWebEnginePage_SetVisible(@ptrCast(self), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#mainFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn MainFrame(self: ?*anyopaque) QtC.QWebEngineFrame {
        return qtc.QWebEnginePage_MainFrame(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptAsNewWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` request: QtC.QWebEngineNewWindowRequest `
    ///
    pub fn AcceptAsNewWindow(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.QWebEnginePage_AcceptAsNewWindow(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn LoadStarted(self: ?*anyopaque) void {
        qtc.QWebEnginePage_LoadStarted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadStarted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage) callconv(.c) void `
    ///
    pub fn OnLoadStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LoadStarted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` progress: i32 `
    ///
    pub fn LoadProgress(self: ?*anyopaque, progress: i32) void {
        qtc.QWebEnginePage_LoadProgress(@ptrCast(self), @intCast(progress));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadProgress)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageprogress: i32) callconv(.c) void `
    ///
    pub fn OnLoadProgress(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LoadProgress(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` ok: bool `
    ///
    pub fn LoadFinished(self: ?*anyopaque, ok: bool) void {
        qtc.QWebEnginePage_LoadFinished(@ptrCast(self), ok);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageok: bool) callconv(.c) void `
    ///
    pub fn OnLoadFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LoadFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` loadingInfo: QtC.QWebEngineLoadingInfo `
    ///
    pub fn LoadingChanged(self: ?*anyopaque, loadingInfo: ?*anyopaque) void {
        qtc.QWebEnginePage_LoadingChanged(@ptrCast(self), @ptrCast(loadingInfo));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageloadingInfo: QtC.QWebEngineLoadingInfo) callconv(.c) void `
    ///
    pub fn OnLoadingChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LoadingChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#linkHovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` url: []const u8 `
    ///
    pub fn LinkHovered(self: ?*anyopaque, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.QWebEnginePage_LinkHovered(@ptrCast(self), url_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#linkHovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageurl: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnLinkHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LinkHovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn SelectionChanged(self: ?*anyopaque) void {
        qtc.QWebEnginePage_SelectionChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_SelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#geometryChangeRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` geom: QtC.QRect `
    ///
    pub fn GeometryChangeRequested(self: ?*anyopaque, geom: ?*anyopaque) void {
        qtc.QWebEnginePage_GeometryChangeRequested(@ptrCast(self), @ptrCast(geom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#geometryChangeRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagegeom: QtC.QRect) callconv(.c) void `
    ///
    pub fn OnGeometryChangeRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_GeometryChangeRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#windowCloseRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn WindowCloseRequested(self: ?*anyopaque) void {
        qtc.QWebEnginePage_WindowCloseRequested(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#windowCloseRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage) callconv(.c) void `
    ///
    pub fn OnWindowCloseRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_WindowCloseRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` securityOrigin: QtC.QUrl `
    ///
    /// ` feature: qwebenginepage_enums.Feature `
    ///
    pub fn FeaturePermissionRequested(self: ?*anyopaque, securityOrigin: ?*anyopaque, feature: i32) void {
        qtc.QWebEnginePage_FeaturePermissionRequested(@ptrCast(self), @ptrCast(securityOrigin), @intCast(feature));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagesecurityOrigin: QtC.QUrl, feature: qwebenginepage_enums.Feature) callconv(.c) void `
    ///
    pub fn OnFeaturePermissionRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FeaturePermissionRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequestCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` securityOrigin: QtC.QUrl `
    ///
    /// ` feature: qwebenginepage_enums.Feature `
    ///
    pub fn FeaturePermissionRequestCanceled(self: ?*anyopaque, securityOrigin: ?*anyopaque, feature: i32) void {
        qtc.QWebEnginePage_FeaturePermissionRequestCanceled(@ptrCast(self), @ptrCast(securityOrigin), @intCast(feature));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequestCanceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagesecurityOrigin: QtC.QUrl, feature: qwebenginepage_enums.Feature) callconv(.c) void `
    ///
    pub fn OnFeaturePermissionRequestCanceled(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FeaturePermissionRequestCanceled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fullScreenRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` fullScreenRequest: QtC.QWebEngineFullScreenRequest `
    ///
    pub fn FullScreenRequested(self: ?*anyopaque, fullScreenRequest: QtC.QWebEngineFullScreenRequest) void {
        qtc.QWebEnginePage_FullScreenRequested(@ptrCast(self), @ptrCast(fullScreenRequest));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fullScreenRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagefullScreenRequest: QtC.QWebEngineFullScreenRequest) callconv(.c) void `
    ///
    pub fn OnFullScreenRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QWebEngineFullScreenRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FullScreenRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#permissionRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` permissionRequest: QtC.QWebEnginePermission `
    ///
    pub fn PermissionRequested(self: ?*anyopaque, permissionRequest: QtC.QWebEnginePermission) void {
        qtc.QWebEnginePage_PermissionRequested(@ptrCast(self), @ptrCast(permissionRequest));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#permissionRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagepermissionRequest: QtC.QWebEnginePermission) callconv(.c) void `
    ///
    pub fn OnPermissionRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QWebEnginePermission) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_PermissionRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#quotaRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` quotaRequest: QtC.QWebEngineQuotaRequest `
    ///
    pub fn QuotaRequested(self: ?*anyopaque, quotaRequest: QtC.QWebEngineQuotaRequest) void {
        qtc.QWebEnginePage_QuotaRequested(@ptrCast(self), @ptrCast(quotaRequest));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#quotaRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagequotaRequest: QtC.QWebEngineQuotaRequest) callconv(.c) void `
    ///
    pub fn OnQuotaRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QWebEngineQuotaRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_QuotaRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#registerProtocolHandlerRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` request: QtC.QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn RegisterProtocolHandlerRequested(self: ?*anyopaque, request: QtC.QWebEngineRegisterProtocolHandlerRequest) void {
        qtc.QWebEnginePage_RegisterProtocolHandlerRequested(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#registerProtocolHandlerRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagerequest: QtC.QWebEngineRegisterProtocolHandlerRequest) callconv(.c) void `
    ///
    pub fn OnRegisterProtocolHandlerRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QWebEngineRegisterProtocolHandlerRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RegisterProtocolHandlerRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fileSystemAccessRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` request: QtC.QWebEngineFileSystemAccessRequest `
    ///
    pub fn FileSystemAccessRequested(self: ?*anyopaque, request: QtC.QWebEngineFileSystemAccessRequest) void {
        qtc.QWebEnginePage_FileSystemAccessRequested(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fileSystemAccessRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagerequest: QtC.QWebEngineFileSystemAccessRequest) callconv(.c) void `
    ///
    pub fn OnFileSystemAccessRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QWebEngineFileSystemAccessRequest) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FileSystemAccessRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectClientCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` clientCertSelection: QtC.QWebEngineClientCertificateSelection `
    ///
    pub fn SelectClientCertificate(self: ?*anyopaque, clientCertSelection: QtC.QWebEngineClientCertificateSelection) void {
        qtc.QWebEnginePage_SelectClientCertificate(@ptrCast(self), @ptrCast(clientCertSelection));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectClientCertificate)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageclientCertSelection: QtC.QWebEngineClientCertificateSelection) callconv(.c) void `
    ///
    pub fn OnSelectClientCertificate(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QWebEngineClientCertificateSelection) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_SelectClientCertificate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#authenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` requestUrl: QtC.QUrl `
    ///
    /// ` authenticator: QtC.QAuthenticator `
    ///
    pub fn AuthenticationRequired(self: ?*anyopaque, requestUrl: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QWebEnginePage_AuthenticationRequired(@ptrCast(self), @ptrCast(requestUrl), @ptrCast(authenticator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#authenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagerequestUrl: QtC.QUrl, authenticator: QtC.QAuthenticator) callconv(.c) void `
    ///
    pub fn OnAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_AuthenticationRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` requestUrl: QtC.QUrl `
    ///
    /// ` authenticator: QtC.QAuthenticator `
    ///
    /// ` proxyHost: []const u8 `
    ///
    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, requestUrl: ?*anyopaque, authenticator: ?*anyopaque, proxyHost: []const u8) void {
        const proxyHost_str = qtc.libqt_string{
            .len = proxyHost.len,
            .data = proxyHost.ptr,
        };
        qtc.QWebEnginePage_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(requestUrl), @ptrCast(authenticator), proxyHost_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagerequestUrl: QtC.QUrl, authenticator: QtC.QAuthenticator, proxyHost: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_ProxyAuthenticationRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessTerminated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` terminationStatus: qwebenginepage_enums.RenderProcessTerminationStatus `
    ///
    /// ` exitCode: i32 `
    ///
    pub fn RenderProcessTerminated(self: ?*anyopaque, terminationStatus: i32, exitCode: i32) void {
        qtc.QWebEnginePage_RenderProcessTerminated(@ptrCast(self), @intCast(terminationStatus), @intCast(exitCode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessTerminated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageterminationStatus: qwebenginepage_enums.RenderProcessTerminationStatus, exitCode: i32) callconv(.c) void `
    ///
    pub fn OnRenderProcessTerminated(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RenderProcessTerminated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#desktopMediaRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` request: QtC.QWebEngineDesktopMediaRequest `
    ///
    pub fn DesktopMediaRequested(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.QWebEnginePage_DesktopMediaRequested(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#desktopMediaRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagerequest: QtC.QWebEngineDesktopMediaRequest) callconv(.c) void `
    ///
    pub fn OnDesktopMediaRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_DesktopMediaRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#certificateError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` certificateError: QtC.QWebEngineCertificateError `
    ///
    pub fn CertificateError(self: ?*anyopaque, certificateError: ?*anyopaque) void {
        qtc.QWebEnginePage_CertificateError(@ptrCast(self), @ptrCast(certificateError));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#certificateError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagecertificateError: QtC.QWebEngineCertificateError) callconv(.c) void `
    ///
    pub fn OnCertificateError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_CertificateError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#navigationRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` request: QtC.QWebEngineNavigationRequest `
    ///
    pub fn NavigationRequested(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.QWebEnginePage_NavigationRequested(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#navigationRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagerequest: QtC.QWebEngineNavigationRequest) callconv(.c) void `
    ///
    pub fn OnNavigationRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_NavigationRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#newWindowRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` request: QtC.QWebEngineNewWindowRequest `
    ///
    pub fn NewWindowRequested(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.QWebEnginePage_NewWindowRequested(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#newWindowRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagerequest: QtC.QWebEngineNewWindowRequest) callconv(.c) void `
    ///
    pub fn OnNewWindowRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_NewWindowRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#titleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` title: []const u8 `
    ///
    pub fn TitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWebEnginePage_TitleChanged(@ptrCast(self), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#titleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagetitle: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_TitleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#urlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn UrlChanged(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QWebEnginePage_UrlChanged(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#urlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageurl: QtC.QUrl) callconv(.c) void `
    ///
    pub fn OnUrlChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_UrlChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn IconUrlChanged(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QWebEnginePage_IconUrlChanged(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageurl: QtC.QUrl) callconv(.c) void `
    ///
    pub fn OnIconUrlChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_IconUrlChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn IconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWebEnginePage_IconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageicon: QtC.QIcon) callconv(.c) void `
    ///
    pub fn OnIconChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_IconChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` factor: f64 `
    ///
    pub fn ZoomFactorChanged(self: ?*anyopaque, factor: f64) void {
        qtc.QWebEnginePage_ZoomFactorChanged(@ptrCast(self), @floatCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagefactor: f64) callconv(.c) void `
    ///
    pub fn OnZoomFactorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_ZoomFactorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` position: QtC.QPointF `
    ///
    pub fn ScrollPositionChanged(self: ?*anyopaque, position: ?*anyopaque) void {
        qtc.QWebEnginePage_ScrollPositionChanged(@ptrCast(self), @ptrCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageposition: QtC.QPointF) callconv(.c) void `
    ///
    pub fn OnScrollPositionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_ScrollPositionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn ContentsSizeChanged(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWebEnginePage_ContentsSizeChanged(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagesize: QtC.QSizeF) callconv(.c) void `
    ///
    pub fn OnContentsSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_ContentsSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#audioMutedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` muted: bool `
    ///
    pub fn AudioMutedChanged(self: ?*anyopaque, muted: bool) void {
        qtc.QWebEnginePage_AudioMutedChanged(@ptrCast(self), muted);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#audioMutedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagemuted: bool) callconv(.c) void `
    ///
    pub fn OnAudioMutedChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_AudioMutedChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` recentlyAudible: bool `
    ///
    pub fn RecentlyAudibleChanged(self: ?*anyopaque, recentlyAudible: bool) void {
        qtc.QWebEnginePage_RecentlyAudibleChanged(@ptrCast(self), recentlyAudible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagerecentlyAudible: bool) callconv(.c) void `
    ///
    pub fn OnRecentlyAudibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RecentlyAudibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPidChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` pid: i64 `
    ///
    pub fn RenderProcessPidChanged(self: ?*anyopaque, pid: i64) void {
        qtc.QWebEnginePage_RenderProcessPidChanged(@ptrCast(self), @intCast(pid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPidChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagepid: i64) callconv(.c) void `
    ///
    pub fn OnRenderProcessPidChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RenderProcessPidChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#pdfPrintingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` success: bool `
    ///
    pub fn PdfPrintingFinished(self: ?*anyopaque, filePath: []const u8, success: bool) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_PdfPrintingFinished(@ptrCast(self), filePath_str, success);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#pdfPrintingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagefilePath: [*:0]const u8, success: bool) callconv(.c) void `
    ///
    pub fn OnPdfPrintingFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_PdfPrintingFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn PrintRequested(self: ?*anyopaque) void {
        qtc.QWebEnginePage_PrintRequested(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage) callconv(.c) void `
    ///
    pub fn OnPrintRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_PrintRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequestedByFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` frame: QtC.QWebEngineFrame `
    ///
    pub fn PrintRequestedByFrame(self: ?*anyopaque, frame: QtC.QWebEngineFrame) void {
        qtc.QWebEnginePage_PrintRequestedByFrame(@ptrCast(self), @ptrCast(frame));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequestedByFrame)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageframe: QtC.QWebEngineFrame) callconv(.c) void `
    ///
    pub fn OnPrintRequestedByFrame(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QWebEngineFrame) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_PrintRequestedByFrame(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` visible: bool `
    ///
    pub fn VisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QWebEnginePage_VisibleChanged(@ptrCast(self), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagevisible: bool) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` state: qwebenginepage_enums.LifecycleState `
    ///
    pub fn LifecycleStateChanged(self: ?*anyopaque, state: i32) void {
        qtc.QWebEnginePage_LifecycleStateChanged(@ptrCast(self), @intCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagestate: qwebenginepage_enums.LifecycleState) callconv(.c) void `
    ///
    pub fn OnLifecycleStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_LifecycleStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` state: qwebenginepage_enums.LifecycleState `
    ///
    pub fn RecommendedStateChanged(self: ?*anyopaque, state: i32) void {
        qtc.QWebEnginePage_RecommendedStateChanged(@ptrCast(self), @intCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagestate: qwebenginepage_enums.LifecycleState) callconv(.c) void `
    ///
    pub fn OnRecommendedStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_RecommendedStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findTextFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` result: QtC.QWebEngineFindTextResult `
    ///
    pub fn FindTextFinished(self: ?*anyopaque, result: ?*anyopaque) void {
        qtc.QWebEnginePage_FindTextFinished(@ptrCast(self), @ptrCast(result));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findTextFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageresult: QtC.QWebEngineFindTextResult) callconv(.c) void `
    ///
    pub fn OnFindTextFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_FindTextFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#_q_aboutToDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn QAboutToDelete(self: ?*anyopaque) void {
        qtc.QWebEnginePage_QAboutToDelete(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#_q_aboutToDelete)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage) callconv(.c) void `
    ///
    pub fn OnQAboutToDelete(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_QAboutToDelete(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#webAuthUxRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` request: QtC.QWebEngineWebAuthUxRequest `
    ///
    pub fn WebAuthUxRequested(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.QWebEnginePage_WebAuthUxRequested(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#webAuthUxRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePagerequest: QtC.QWebEngineWebAuthUxRequest) callconv(.c) void `
    ///
    pub fn OnWebAuthUxRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_Connect_WebAuthUxRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` typeVal: qwebenginepage_enums.WebWindowType `
    ///
    pub fn CreateWindow(self: ?*anyopaque, typeVal: i32) QtC.QWebEnginePage {
        return qtc.QWebEnginePage_CreateWindow(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, typeVal: qwebenginepage_enums.WebWindowType) callconv(.c) QtC.QWebEnginePage `
    ///
    pub fn OnCreateWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QWebEnginePage) void {
        qtc.QWebEnginePage_OnCreateWindow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` typeVal: qwebenginepage_enums.WebWindowType `
    ///
    pub fn QBaseCreateWindow(self: ?*anyopaque, typeVal: i32) QtC.QWebEnginePage {
        return qtc.QWebEnginePage_QBaseCreateWindow(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#chooseFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` mode: qwebenginepage_enums.FileSelectionMode `
    ///
    /// ` oldFiles: [][]const u8 `
    ///
    /// ` acceptedMimeTypes: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChooseFiles(self: ?*anyopaque, mode: i32, oldFiles: [][]const u8, acceptedMimeTypes: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        var oldFiles_arr = allocator.alloc(qtc.libqt_string, oldFiles.len) catch @panic("qwebenginepage.ChooseFiles: Memory allocation failed");
        defer allocator.free(oldFiles_arr);
        for (oldFiles, 0..oldFiles.len) |item, i| {
            oldFiles_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const oldFiles_list = qtc.libqt_list{
            .len = oldFiles.len,
            .data = oldFiles_arr.ptr,
        };
        var acceptedMimeTypes_arr = allocator.alloc(qtc.libqt_string, acceptedMimeTypes.len) catch @panic("qwebenginepage.ChooseFiles: Memory allocation failed");
        defer allocator.free(acceptedMimeTypes_arr);
        for (acceptedMimeTypes, 0..acceptedMimeTypes.len) |item, i| {
            acceptedMimeTypes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const acceptedMimeTypes_list = qtc.libqt_list{
            .len = acceptedMimeTypes.len,
            .data = acceptedMimeTypes_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QWebEnginePage_ChooseFiles(@ptrCast(self), @intCast(mode), oldFiles_list, acceptedMimeTypes_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, mode: qwebenginepage_enums.FileSelectionMode, oldFiles: [*][*:0]const u8, acceptedMimeTypes: [*][*:0]const u8) callconv(.c) [*][*:0]const u8 `
    ///
    pub fn OnChooseFiles(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*][*:0]const u8, [*][*:0]const u8) callconv(.c) [*][*:0]const u8) void {
        qtc.QWebEnginePage_OnChooseFiles(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#chooseFiles)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` mode: qwebenginepage_enums.FileSelectionMode `
    ///
    /// ` oldFiles: [][]const u8 `
    ///
    /// ` acceptedMimeTypes: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseChooseFiles(self: ?*anyopaque, mode: i32, oldFiles: [][]const u8, acceptedMimeTypes: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        var oldFiles_arr = allocator.alloc(qtc.libqt_string, oldFiles.len) catch @panic("qwebenginepage.ChooseFiles: Memory allocation failed");
        defer allocator.free(oldFiles_arr);
        for (oldFiles, 0..oldFiles.len) |item, i| {
            oldFiles_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const oldFiles_list = qtc.libqt_list{
            .len = oldFiles.len,
            .data = oldFiles_arr.ptr,
        };
        var acceptedMimeTypes_arr = allocator.alloc(qtc.libqt_string, acceptedMimeTypes.len) catch @panic("qwebenginepage.ChooseFiles: Memory allocation failed");
        defer allocator.free(acceptedMimeTypes_arr);
        for (acceptedMimeTypes, 0..acceptedMimeTypes.len) |item, i| {
            acceptedMimeTypes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const acceptedMimeTypes_list = qtc.libqt_list{
            .len = acceptedMimeTypes.len,
            .data = acceptedMimeTypes_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QWebEnginePage_QBaseChooseFiles(@ptrCast(self), @intCast(mode), oldFiles_list, acceptedMimeTypes_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` securityOrigin: QtC.QUrl `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn JavaScriptAlert(self: ?*anyopaque, securityOrigin: ?*anyopaque, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QWebEnginePage_JavaScriptAlert(@ptrCast(self), @ptrCast(securityOrigin), msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptAlert)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, securityOrigin: QtC.QUrl, msg: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnJavaScriptAlert(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_OnJavaScriptAlert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptAlert)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` securityOrigin: QtC.QUrl `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn QBaseJavaScriptAlert(self: ?*anyopaque, securityOrigin: ?*anyopaque, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QWebEnginePage_QBaseJavaScriptAlert(@ptrCast(self), @ptrCast(securityOrigin), msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConfirm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` securityOrigin: QtC.QUrl `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn JavaScriptConfirm(self: ?*anyopaque, securityOrigin: ?*anyopaque, msg: []const u8) bool {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return qtc.QWebEnginePage_JavaScriptConfirm(@ptrCast(self), @ptrCast(securityOrigin), msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConfirm)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, securityOrigin: QtC.QUrl, msg: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnJavaScriptConfirm(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnJavaScriptConfirm(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConfirm)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` securityOrigin: QtC.QUrl `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn QBaseJavaScriptConfirm(self: ?*anyopaque, securityOrigin: ?*anyopaque, msg: []const u8) bool {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return qtc.QWebEnginePage_QBaseJavaScriptConfirm(@ptrCast(self), @ptrCast(securityOrigin), msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConsoleMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` level: qwebenginepage_enums.JavaScriptConsoleMessageLevel `
    ///
    /// ` message: []const u8 `
    ///
    /// ` lineNumber: i32 `
    ///
    /// ` sourceID: []const u8 `
    ///
    pub fn JavaScriptConsoleMessage(self: ?*anyopaque, level: i32, message: []const u8, lineNumber: i32, sourceID: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const sourceID_str = qtc.libqt_string{
            .len = sourceID.len,
            .data = sourceID.ptr,
        };
        qtc.QWebEnginePage_JavaScriptConsoleMessage(@ptrCast(self), @intCast(level), message_str, @intCast(lineNumber), sourceID_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConsoleMessage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, level: qwebenginepage_enums.JavaScriptConsoleMessageLevel, message: [*:0]const u8, lineNumber: i32, sourceID: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnJavaScriptConsoleMessage(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebEnginePage_OnJavaScriptConsoleMessage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConsoleMessage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` level: qwebenginepage_enums.JavaScriptConsoleMessageLevel `
    ///
    /// ` message: []const u8 `
    ///
    /// ` lineNumber: i32 `
    ///
    /// ` sourceID: []const u8 `
    ///
    pub fn QBaseJavaScriptConsoleMessage(self: ?*anyopaque, level: i32, message: []const u8, lineNumber: i32, sourceID: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const sourceID_str = qtc.libqt_string{
            .len = sourceID.len,
            .data = sourceID.ptr,
        };
        qtc.QWebEnginePage_QBaseJavaScriptConsoleMessage(@ptrCast(self), @intCast(level), message_str, @intCast(lineNumber), sourceID_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` typeVal: qwebenginepage_enums.NavigationType `
    ///
    /// ` isMainFrame: bool `
    ///
    pub fn AcceptNavigationRequest(self: ?*anyopaque, url: ?*anyopaque, typeVal: i32, isMainFrame: bool) bool {
        return qtc.QWebEnginePage_AcceptNavigationRequest(@ptrCast(self), @ptrCast(url), @intCast(typeVal), isMainFrame);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, url: QtC.QUrl, typeVal: qwebenginepage_enums.NavigationType, isMainFrame: bool) callconv(.c) bool `
    ///
    pub fn OnAcceptNavigationRequest(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, bool) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnAcceptNavigationRequest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` typeVal: qwebenginepage_enums.NavigationType `
    ///
    /// ` isMainFrame: bool `
    ///
    pub fn QBaseAcceptNavigationRequest(self: ?*anyopaque, url: ?*anyopaque, typeVal: i32, isMainFrame: bool) bool {
        return qtc.QWebEnginePage_QBaseAcceptNavigationRequest(@ptrCast(self), @ptrCast(url), @intCast(typeVal), isMainFrame);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` c: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: []const u8 `
    ///
    /// ` c: []const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginepage.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#download)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn Download2(self: ?*anyopaque, url: ?*anyopaque, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QWebEnginePage_Download2(@ptrCast(self), @ptrCast(url), filename_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` html: []const u8 `
    ///
    /// ` baseUrl: QtC.QUrl `
    ///
    pub fn SetHtml2(self: ?*anyopaque, html: []const u8, baseUrl: ?*anyopaque) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QWebEnginePage_SetHtml2(@ptrCast(self), html_str, @ptrCast(baseUrl));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` data: []u8 `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn SetContent2(self: ?*anyopaque, data: []u8, mimeType: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.QWebEnginePage_SetContent2(@ptrCast(self), data_str, mimeType_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` data: []u8 `
    ///
    /// ` mimeType: []const u8 `
    ///
    /// ` baseUrl: QtC.QUrl `
    ///
    pub fn SetContent3(self: ?*anyopaque, data: []u8, mimeType: []const u8, baseUrl: ?*anyopaque) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.QWebEnginePage_SetContent3(@ptrCast(self), data_str, mimeType_str, @ptrCast(baseUrl));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` param1: QtC.QWebChannel `
    ///
    /// ` worldId: u32 `
    ///
    pub fn SetWebChannel2(self: ?*anyopaque, param1: ?*anyopaque, worldId: u32) void {
        qtc.QWebEnginePage_SetWebChannel2(@ptrCast(self), @ptrCast(param1), @intCast(worldId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` format: qwebenginedownloadrequest_enums.SavePageFormat `
    ///
    pub fn Save2(self: ?*anyopaque, filePath: []const u8, format: i32) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_Save2(@ptrCast(self), filePath_str, @intCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` layout: QtC.QPageLayout `
    ///
    pub fn PrintToPdf2(self: ?*anyopaque, filePath: []const u8, layout: ?*anyopaque) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_PrintToPdf2(@ptrCast(self), filePath_str, @ptrCast(layout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` layout: QtC.QPageLayout `
    ///
    /// ` ranges: QtC.QPageRanges `
    ///
    pub fn PrintToPdf3(self: ?*anyopaque, filePath: []const u8, layout: ?*anyopaque, ranges: ?*anyopaque) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEnginePage_PrintToPdf3(@ptrCast(self), filePath_str, @ptrCast(layout), @ptrCast(ranges));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qwebenginepage.Children: Memory allocation failed");
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: []const u8 `
    ///
    /// ` member: []const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
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
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` classname: []const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` thread: QtC.QThread `
    ///
    /// ` param2: QtC.Disambiguated_t `
    ///
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
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
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: []const u8 `
    ///
    /// ` member: []const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
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
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageparam1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebEnginePage_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebEnginePage_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebEnginePage_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebEnginePage_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebEnginePage_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebEnginePage_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebEnginePage_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebEnginePage_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebEnginePage_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebEnginePage_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebEnginePage_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebEnginePage_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEnginePage_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QWebEnginePage_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QWebEnginePage_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QWebEnginePage_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QWebEnginePage_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QWebEnginePage_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QWebEnginePage_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` signal: []const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebEnginePage_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` signal: []const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebEnginePage_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QWebEnginePage_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QWebEnginePage_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QWebEnginePage_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage`
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePage, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWebEnginePage_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    /// ` callback: *const fn (self: QtC.QWebEnginePageobjectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#dtor.QWebEnginePage)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebEnginePage `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEnginePage_Delete(@ptrCast(self));
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
