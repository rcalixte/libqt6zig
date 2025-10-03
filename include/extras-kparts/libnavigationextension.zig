const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const navigationextension_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_constu8_anyopaque = std.StringHashMapUnmanaged([]?*anyopaque);
pub const map_constu8_qtcqaction = std.StringHashMapUnmanaged([]QtC.QAction);

/// https://api.kde.org/kparts-navigationextension.html
pub const kparts__navigationextension = struct {
    /// New constructs a new KParts::NavigationExtension object.
    ///
    /// ``` parent: QtC.KParts__ReadOnlyPart ```
    pub fn New(parent: ?*anyopaque) QtC.KParts__NavigationExtension {
        return qtc.KParts__NavigationExtension_new(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KParts__NavigationExtension_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KParts__NavigationExtension, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__NavigationExtension_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KParts__NavigationExtension, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KParts__NavigationExtension_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__NavigationExtension, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KParts__NavigationExtension_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KParts__NavigationExtension_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::navigationextension.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#xOffset)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn XOffset(self: ?*anyopaque) i32 {
        return qtc.KParts__NavigationExtension_XOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#xOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn () callconv(.c) i32 ```
    pub fn OnXOffset(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnXOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#xOffset)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn QBaseXOffset(self: ?*anyopaque) i32 {
        return qtc.KParts__NavigationExtension_QBaseXOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#yOffset)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn YOffset(self: ?*anyopaque) i32 {
        return qtc.KParts__NavigationExtension_YOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#yOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn () callconv(.c) i32 ```
    pub fn OnYOffset(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnYOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#yOffset)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn QBaseYOffset(self: ?*anyopaque) i32 {
        return qtc.KParts__NavigationExtension_QBaseYOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#saveState)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, stream: QtC.QDataStream ```
    pub fn SaveState(self: ?*anyopaque, stream: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_SaveState(@ptrCast(self), @ptrCast(stream));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#saveState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, stream: QtC.QDataStream) callconv(.c) void ```
    pub fn OnSaveState(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnSaveState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#saveState)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__NavigationExtension, stream: QtC.QDataStream ```
    pub fn QBaseSaveState(self: ?*anyopaque, stream: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_QBaseSaveState(@ptrCast(self), @ptrCast(stream));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#restoreState)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, stream: QtC.QDataStream ```
    pub fn RestoreState(self: ?*anyopaque, stream: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_RestoreState(@ptrCast(self), @ptrCast(stream));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#restoreState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, stream: QtC.QDataStream) callconv(.c) void ```
    pub fn OnRestoreState(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnRestoreState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#restoreState)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__NavigationExtension, stream: QtC.QDataStream ```
    pub fn QBaseRestoreState(self: ?*anyopaque, stream: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_QBaseRestoreState(@ptrCast(self), @ptrCast(stream));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#isURLDropHandlingEnabled)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn IsURLDropHandlingEnabled(self: ?*anyopaque) bool {
        return qtc.KParts__NavigationExtension_IsURLDropHandlingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#setURLDropHandlingEnabled)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, enable: bool ```
    pub fn SetURLDropHandlingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.KParts__NavigationExtension_SetURLDropHandlingEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#isActionEnabled)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, name: []const u8 ```
    pub fn IsActionEnabled(self: ?*anyopaque, name: []const u8) bool {
        const name_Cstring = name.ptr;
        return qtc.KParts__NavigationExtension_IsActionEnabled(@ptrCast(self), name_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#actionText)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, name: []const u8, allocator: std.mem.Allocator ```
    pub fn ActionText(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_Cstring = name.ptr;
        const _str = qtc.KParts__NavigationExtension_ActionText(@ptrCast(self), name_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::navigationextension.ActionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#childObject)
    ///
    /// ``` obj: QtC.QObject ```
    pub fn ChildObject(obj: ?*anyopaque) QtC.KParts__NavigationExtension {
        return qtc.KParts__NavigationExtension_ChildObject(@ptrCast(obj));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#pasteRequest)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn PasteRequest(self: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_PasteRequest(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#enableAction)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, name: []const u8, enabled: bool ```
    pub fn EnableAction(self: ?*anyopaque, name: []const u8, enabled: bool) void {
        const name_Cstring = name.ptr;
        qtc.KParts__NavigationExtension_EnableAction(@ptrCast(self), name_Cstring, enabled);
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#setActionText)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, name: []const u8, text: []const u8 ```
    pub fn SetActionText(self: ?*anyopaque, name: []const u8, text: []const u8) void {
        const name_Cstring = name.ptr;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KParts__NavigationExtension_SetActionText(@ptrCast(self), name_Cstring, text_str);
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#openUrlRequest)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, url: QtC.QUrl ```
    pub fn OpenUrlRequest(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_OpenUrlRequest(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#openUrlRequestDelayed)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, url: QtC.QUrl, arguments: QtC.KParts__OpenUrlArguments ```
    pub fn OpenUrlRequestDelayed(self: ?*anyopaque, url: ?*anyopaque, arguments: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_OpenUrlRequestDelayed(@ptrCast(self), @ptrCast(url), @ptrCast(arguments));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#openUrlNotify)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn OpenUrlNotify(self: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_OpenUrlNotify(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#setLocationBarUrl)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, url: []const u8 ```
    pub fn SetLocationBarUrl(self: ?*anyopaque, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KParts__NavigationExtension_SetLocationBarUrl(@ptrCast(self), url_str);
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#setIconUrl)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, url: QtC.QUrl ```
    pub fn SetIconUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_SetIconUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#createNewWindow)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, url: QtC.QUrl ```
    pub fn CreateNewWindow(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_CreateNewWindow(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#loadingProgress)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, percent: i32 ```
    pub fn LoadingProgress(self: ?*anyopaque, percent: i32) void {
        qtc.KParts__NavigationExtension_LoadingProgress(@ptrCast(self), @intCast(percent));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#speedProgress)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, bytesPerSecond: i32 ```
    pub fn SpeedProgress(self: ?*anyopaque, bytesPerSecond: i32) void {
        qtc.KParts__NavigationExtension_SpeedProgress(@ptrCast(self), @intCast(bytesPerSecond));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#infoMessage)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, param1: []const u8 ```
    pub fn InfoMessage(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KParts__NavigationExtension_InfoMessage(@ptrCast(self), param1_str);
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, global: QtC.QPoint, items: QtC.KFileItemList ```
    pub fn PopupMenu(self: ?*anyopaque, global: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_PopupMenu(@ptrCast(self), @ptrCast(global), @ptrCast(items));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, global: QtC.QPoint, url: QtC.QUrl ```
    pub fn PopupMenu2(self: ?*anyopaque, global: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_PopupMenu2(@ptrCast(self), @ptrCast(global), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#selectionInfo)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, items: QtC.KFileItemList ```
    pub fn SelectionInfo(self: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_SelectionInfo(@ptrCast(self), @ptrCast(items));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#mouseOverInfo)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, item: QtC.KFileItem ```
    pub fn MouseOverInfo(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_MouseOverInfo(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#addWebSideBar)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, url: QtC.QUrl, name: []const u8 ```
    pub fn AddWebSideBar(self: ?*anyopaque, url: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KParts__NavigationExtension_AddWebSideBar(@ptrCast(self), @ptrCast(url), name_str);
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#moveTopLevelWidget)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, x: i32, y: i32 ```
    pub fn MoveTopLevelWidget(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.KParts__NavigationExtension_MoveTopLevelWidget(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#resizeTopLevelWidget)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, w: i32, h: i32 ```
    pub fn ResizeTopLevelWidget(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.KParts__NavigationExtension_ResizeTopLevelWidget(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#requestFocus)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, part: QtC.KParts__ReadOnlyPart ```
    pub fn RequestFocus(self: ?*anyopaque, part: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_RequestFocus(@ptrCast(self), @ptrCast(part));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#setPageSecurity)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, pageSecurity: i32 ```
    pub fn SetPageSecurity(self: ?*anyopaque, pageSecurity: i32) void {
        qtc.KParts__NavigationExtension_SetPageSecurity(@ptrCast(self), @intCast(pageSecurity));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#itemsRemoved)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, items: QtC.KFileItemList ```
    pub fn ItemsRemoved(self: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_ItemsRemoved(@ptrCast(self), @ptrCast(items));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KParts__NavigationExtension_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::navigationextension.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KParts__NavigationExtension_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::navigationextension.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#openUrlRequest)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, url: QtC.QUrl, arguments: QtC.KParts__OpenUrlArguments ```
    pub fn OpenUrlRequest2(self: ?*anyopaque, url: ?*anyopaque, arguments: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_OpenUrlRequest2(@ptrCast(self), @ptrCast(url), @ptrCast(arguments));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, global: QtC.QPoint, items: QtC.KFileItemList, arguments: QtC.KParts__OpenUrlArguments ```
    pub fn PopupMenu3(self: ?*anyopaque, global: ?*anyopaque, items: ?*anyopaque, arguments: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_PopupMenu3(@ptrCast(self), @ptrCast(global), @ptrCast(items), @ptrCast(arguments));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, global: QtC.QPoint, items: QtC.KFileItemList, arguments: QtC.KParts__OpenUrlArguments, flags: flag of navigationextension_enums.PopupFlag ```
    pub fn PopupMenu4(self: ?*anyopaque, global: ?*anyopaque, items: ?*anyopaque, arguments: ?*anyopaque, flags: i32) void {
        qtc.KParts__NavigationExtension_PopupMenu4(@ptrCast(self), @ptrCast(global), @ptrCast(items), @ptrCast(arguments), @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, global: QtC.QPoint, items: QtC.KFileItemList, arguments: QtC.KParts__OpenUrlArguments, flags: flag of navigationextension_enums.PopupFlag, actionGroups: map_constu8_qtcqaction, allocator: std.mem.Allocator ```
    pub fn PopupMenu5(self: ?*anyopaque, global: ?*anyopaque, items: ?*anyopaque, arguments: ?*anyopaque, flags: i32, actionGroups: map_constu8_anyopaque, allocator: std.mem.Allocator) void {
        const actionGroups_keys = allocator.alloc(qtc.libqt_string, actionGroups.count()) catch @panic("kparts::navigationextension.PopupMenu5: Memory allocation failed");
        defer allocator.free(actionGroups_keys);
        const actionGroups_values = allocator.alloc([]QtC.QAction, actionGroups.count()) catch @panic("kparts::navigationextension.PopupMenu5: Memory allocation failed");
        defer allocator.free(actionGroups_values);
        var i: usize = 0;
        var actionGroups_it = actionGroups.iterator();
        while (actionGroups_it.next()) |entry| {
            const key = entry.key_ptr.*;
            actionGroups_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            actionGroups_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const actionGroups_map = qtc.libqt_map{
            .len = actionGroups.count(),
            .keys = @ptrCast(actionGroups_keys.ptr),
            .values = @ptrCast(actionGroups_values.ptr),
        };
        qtc.KParts__NavigationExtension_PopupMenu5(@ptrCast(self), @ptrCast(global), @ptrCast(items), @ptrCast(arguments), @intCast(flags), actionGroups_map);
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, global: QtC.QPoint, url: QtC.QUrl, mode: u32 ```
    pub fn PopupMenu32(self: ?*anyopaque, global: ?*anyopaque, url: ?*anyopaque, mode: u32) void {
        qtc.KParts__NavigationExtension_PopupMenu32(@ptrCast(self), @ptrCast(global), @ptrCast(url), mode);
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, global: QtC.QPoint, url: QtC.QUrl, mode: u32, arguments: QtC.KParts__OpenUrlArguments ```
    pub fn PopupMenu42(self: ?*anyopaque, global: ?*anyopaque, url: ?*anyopaque, mode: u32, arguments: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_PopupMenu42(@ptrCast(self), @ptrCast(global), @ptrCast(url), mode, @ptrCast(arguments));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, global: QtC.QPoint, url: QtC.QUrl, mode: u32, arguments: QtC.KParts__OpenUrlArguments, flags: flag of navigationextension_enums.PopupFlag ```
    pub fn PopupMenu52(self: ?*anyopaque, global: ?*anyopaque, url: ?*anyopaque, mode: u32, arguments: ?*anyopaque, flags: i32) void {
        qtc.KParts__NavigationExtension_PopupMenu52(@ptrCast(self), @ptrCast(global), @ptrCast(url), mode, @ptrCast(arguments), @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, global: QtC.QPoint, url: QtC.QUrl, mode: u32, arguments: QtC.KParts__OpenUrlArguments, flags: flag of navigationextension_enums.PopupFlag, actionGroups: map_constu8_qtcqaction, allocator: std.mem.Allocator ```
    pub fn PopupMenu6(self: ?*anyopaque, global: ?*anyopaque, url: ?*anyopaque, mode: u32, arguments: ?*anyopaque, flags: i32, actionGroups: map_constu8_anyopaque, allocator: std.mem.Allocator) void {
        const actionGroups_keys = allocator.alloc(qtc.libqt_string, actionGroups.count()) catch @panic("kparts::navigationextension.PopupMenu6: Memory allocation failed");
        defer allocator.free(actionGroups_keys);
        const actionGroups_values = allocator.alloc([]QtC.QAction, actionGroups.count()) catch @panic("kparts::navigationextension.PopupMenu6: Memory allocation failed");
        defer allocator.free(actionGroups_values);
        var i: usize = 0;
        var actionGroups_it = actionGroups.iterator();
        while (actionGroups_it.next()) |entry| {
            const key = entry.key_ptr.*;
            actionGroups_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            actionGroups_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const actionGroups_map = qtc.libqt_map{
            .len = actionGroups.count(),
            .keys = @ptrCast(actionGroups_keys.ptr),
            .values = @ptrCast(actionGroups_values.ptr),
        };
        qtc.KParts__NavigationExtension_PopupMenu6(@ptrCast(self), @ptrCast(global), @ptrCast(url), mode, @ptrCast(arguments), @intCast(flags), actionGroups_map);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::navigationextension.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, name: []const u8 ```
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
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kparts::navigationextension.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, obj: QtC.QObject ```
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
    /// ``` self: QtC.KParts__NavigationExtension, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kparts::navigationextension.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts::navigationextension.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KParts__NavigationExtension, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__NavigationExtension_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__NavigationExtension_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__NavigationExtension_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__NavigationExtension_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__NavigationExtension_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__NavigationExtension_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__NavigationExtension_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__NavigationExtension_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KParts__NavigationExtension_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KParts__NavigationExtension_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KParts__NavigationExtension_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__NavigationExtension_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__NavigationExtension_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KParts__NavigationExtension_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KParts__NavigationExtension_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__NavigationExtension_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KParts__NavigationExtension, callback: *const fn (self: QtC.KParts__NavigationExtension, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KParts__NavigationExtension ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KParts__NavigationExtension_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kparts-navigationextension.html#types
pub const enums = struct {
    pub const PopupFlag = enum {
        pub const DefaultPopupItems: i32 = 0;
        pub const ShowBookmark: i32 = 8;
        pub const ShowCreateDirectory: i32 = 16;
        pub const ShowTextSelectionItems: i32 = 32;
        pub const NoDeletion: i32 = 64;
        pub const IsLink: i32 = 128;
        pub const ShowUrlOperations: i32 = 256;
        pub const ShowProperties: i32 = 512;
    };
};
