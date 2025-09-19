const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kselectaction_enums = @import("../extras-kwidgetsaddons/libkselectaction.zig").enums;
const qaction_enums = @import("../libqaction.zig").enums;
const qkeysequence_enums = @import("../libqkeysequence.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qtoolbutton_enums = @import("../libqtoolbutton.zig").enums;
const std = @import("std");

/// https://api.kde.org/krecentfilesaction.html
pub const krecentfilesaction = struct {
    /// New constructs a new KRecentFilesAction object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New(parent: ?*anyopaque) QtC.KRecentFilesAction {
        return qtc.KRecentFilesAction_new(@ptrCast(parent));
    }

    /// New2 constructs a new KRecentFilesAction object.
    ///
    /// ``` text: []const u8, parent: QtC.QObject ```
    pub fn New2(text: []const u8, parent: ?*anyopaque) QtC.KRecentFilesAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KRecentFilesAction_new2(text_str, @ptrCast(parent));
    }

    /// New3 constructs a new KRecentFilesAction object.
    ///
    /// ``` icon: QtC.QIcon, text: []const u8, parent: QtC.QObject ```
    pub fn New3(icon: ?*anyopaque, text: []const u8, parent: ?*anyopaque) QtC.KRecentFilesAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KRecentFilesAction_new3(@ptrCast(icon), text_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KRecentFilesAction_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KRecentFilesAction, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KRecentFilesAction_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KRecentFilesAction, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KRecentFilesAction_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KRecentFilesAction_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KRecentFilesAction, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KRecentFilesAction_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KRecentFilesAction_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesaction.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#addAction)
    ///
    /// ``` self: QtC.KRecentFilesAction, action: QtC.QAction, url: QtC.QUrl, name: []const u8 ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque, url: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KRecentFilesAction_AddAction(@ptrCast(self), @ptrCast(action), @ptrCast(url), name_str);
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#removeAction)
    ///
    /// ``` self: QtC.KRecentFilesAction, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) QtC.QAction {
        return qtc.KRecentFilesAction_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#removeAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, action: QtC.QAction) callconv(.c) QtC.QAction ```
    pub fn OnRemoveAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAction) void {
        qtc.KRecentFilesAction_OnRemoveAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#removeAction)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRecentFilesAction, action: QtC.QAction ```
    pub fn QBaseRemoveAction(self: ?*anyopaque, action: ?*anyopaque) QtC.QAction {
        return qtc.KRecentFilesAction_QBaseRemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#maxItems)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn MaxItems(self: ?*anyopaque) i32 {
        return qtc.KRecentFilesAction_MaxItems(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#setMaxItems)
    ///
    /// ``` self: QtC.KRecentFilesAction, maxItems: i32 ```
    pub fn SetMaxItems(self: ?*anyopaque, maxItems: i32) void {
        qtc.KRecentFilesAction_SetMaxItems(@ptrCast(self), @intCast(maxItems));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#loadEntries)
    ///
    /// ``` self: QtC.KRecentFilesAction, config: QtC.KConfigGroup ```
    pub fn LoadEntries(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KRecentFilesAction_LoadEntries(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#saveEntries)
    ///
    /// ``` self: QtC.KRecentFilesAction, config: QtC.KConfigGroup ```
    pub fn SaveEntries(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KRecentFilesAction_SaveEntries(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#addUrl)
    ///
    /// ``` self: QtC.KRecentFilesAction, url: QtC.QUrl ```
    pub fn AddUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KRecentFilesAction_AddUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#addUrl)
    ///
    /// ``` self: QtC.KRecentFilesAction, url: QtC.QUrl, name: []const u8, mimeType: []const u8 ```
    pub fn AddUrl2(self: ?*anyopaque, url: ?*anyopaque, name: []const u8, mimeType: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.KRecentFilesAction_AddUrl2(@ptrCast(self), @ptrCast(url), name_str, mimeType_str);
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#removeUrl)
    ///
    /// ``` self: QtC.KRecentFilesAction, url: QtC.QUrl ```
    pub fn RemoveUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KRecentFilesAction_RemoveUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#urls)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn Urls(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.KRecentFilesAction_Urls(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("krecentfilesaction.Urls: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#clear)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.KRecentFilesAction_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn () callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KRecentFilesAction_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn QBaseClear(self: ?*anyopaque) void {
        qtc.KRecentFilesAction_QBaseClear(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#urlSelected)
    ///
    /// ``` self: QtC.KRecentFilesAction, url: QtC.QUrl ```
    pub fn UrlSelected(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KRecentFilesAction_UrlSelected(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#urlSelected)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, url: QtC.QUrl) callconv(.c) void ```
    pub fn OnUrlSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRecentFilesAction_Connect_UrlSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#recentListCleared)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn RecentListCleared(self: ?*anyopaque) void {
        qtc.KRecentFilesAction_RecentListCleared(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#recentListCleared)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction) callconv(.c) void ```
    pub fn OnRecentListCleared(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KRecentFilesAction_Connect_RecentListCleared(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KRecentFilesAction_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesaction.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KRecentFilesAction_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesaction.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#addAction)
    ///
    /// ``` self: QtC.KRecentFilesAction, action: QtC.QAction, url: QtC.QUrl, name: []const u8, mimeType: QtC.QMimeType ```
    pub fn AddAction4(self: ?*anyopaque, action: ?*anyopaque, url: ?*anyopaque, name: []const u8, mimeType: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KRecentFilesAction_AddAction4(@ptrCast(self), @ptrCast(action), @ptrCast(url), name_str, @ptrCast(mimeType));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#addUrl)
    ///
    /// ``` self: QtC.KRecentFilesAction, url: QtC.QUrl, name: []const u8 ```
    pub fn AddUrl22(self: ?*anyopaque, url: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KRecentFilesAction_AddUrl22(@ptrCast(self), @ptrCast(url), name_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#toolBarMode)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    ///
    /// Returns: ``` kselectaction_enums.ToolBarMode ```
    pub fn ToolBarMode(self: ?*anyopaque) i32 {
        return qtc.KSelectAction_ToolBarMode(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#setToolBarMode)
    ///
    /// ``` self: QtC.KRecentFilesAction, mode: kselectaction_enums.ToolBarMode ```
    pub fn SetToolBarMode(self: ?*anyopaque, mode: i32) void {
        qtc.KSelectAction_SetToolBarMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#toolButtonPopupMode)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    ///
    /// Returns: ``` qtoolbutton_enums.ToolButtonPopupMode ```
    pub fn ToolButtonPopupMode(self: ?*anyopaque) i32 {
        return qtc.KSelectAction_ToolButtonPopupMode(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#setToolButtonPopupMode)
    ///
    /// ``` self: QtC.KRecentFilesAction, mode: qtoolbutton_enums.ToolButtonPopupMode ```
    pub fn SetToolButtonPopupMode(self: ?*anyopaque, mode: i32) void {
        qtc.KSelectAction_SetToolButtonPopupMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#selectableActionGroup)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn SelectableActionGroup(self: ?*anyopaque) QtC.QActionGroup {
        return qtc.KSelectAction_SelectableActionGroup(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#currentAction)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn CurrentAction(self: ?*anyopaque) QtC.QAction {
        return qtc.KSelectAction_CurrentAction(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#currentItem)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn CurrentItem(self: ?*anyopaque) i32 {
        return qtc.KSelectAction_CurrentItem(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#currentText)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn CurrentText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSelectAction_CurrentText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesaction.CurrentText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#actions)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.KSelectAction_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("krecentfilesaction.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#action)
    ///
    /// ``` self: QtC.KRecentFilesAction, index: i32 ```
    pub fn Action(self: ?*anyopaque, index: i32) QtC.QAction {
        return qtc.KSelectAction_Action(@ptrCast(self), @intCast(index));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#action)
    ///
    /// ``` self: QtC.KRecentFilesAction, text: []const u8 ```
    pub fn Action2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_Action2(@ptrCast(self), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ``` self: QtC.KRecentFilesAction, action: QtC.QAction ```
    pub fn SetCurrentAction(self: ?*anyopaque, action: ?*anyopaque) bool {
        return qtc.KSelectAction_SetCurrentAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#setCurrentItem)
    ///
    /// ``` self: QtC.KRecentFilesAction, index: i32 ```
    pub fn SetCurrentItem(self: ?*anyopaque, index: i32) bool {
        return qtc.KSelectAction_SetCurrentItem(@ptrCast(self), @intCast(index));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ``` self: QtC.KRecentFilesAction, text: []const u8 ```
    pub fn SetCurrentAction2(self: ?*anyopaque, text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_SetCurrentAction2(@ptrCast(self), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ``` self: QtC.KRecentFilesAction, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_AddAction2(@ptrCast(self), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ``` self: QtC.KRecentFilesAction, icon: QtC.QIcon, text: []const u8 ```
    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#setItems)
    ///
    /// ``` self: QtC.KRecentFilesAction, lst: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetItems(self: ?*anyopaque, lst: [][]const u8, allocator: std.mem.Allocator) void {
        var lst_arr = allocator.alloc(qtc.libqt_string, lst.len) catch @panic("krecentfilesaction.SetItems: Memory allocation failed");
        defer allocator.free(lst_arr);
        for (lst, 0..lst.len) |item, i| {
            lst_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const lst_list = qtc.libqt_list{
            .len = lst.len,
            .data = lst_arr.ptr,
        };
        qtc.KSelectAction_SetItems(@ptrCast(self), lst_list);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#items)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn Items(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KSelectAction_Items(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("krecentfilesaction.Items: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("krecentfilesaction.Items: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#isEditable)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn IsEditable(self: ?*anyopaque) bool {
        return qtc.KSelectAction_IsEditable(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#setEditable)
    ///
    /// ``` self: QtC.KRecentFilesAction, editable: bool ```
    pub fn SetEditable(self: ?*anyopaque, editable: bool) void {
        qtc.KSelectAction_SetEditable(@ptrCast(self), editable);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#comboWidth)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn ComboWidth(self: ?*anyopaque) i32 {
        return qtc.KSelectAction_ComboWidth(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#setComboWidth)
    ///
    /// ``` self: QtC.KRecentFilesAction, width: i32 ```
    pub fn SetComboWidth(self: ?*anyopaque, width: i32) void {
        qtc.KSelectAction_SetComboWidth(@ptrCast(self), @intCast(width));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#setMaxComboViewCount)
    ///
    /// ``` self: QtC.KRecentFilesAction, n: i32 ```
    pub fn SetMaxComboViewCount(self: ?*anyopaque, n: i32) void {
        qtc.KSelectAction_SetMaxComboViewCount(@ptrCast(self), @intCast(n));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#removeAllActions)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn RemoveAllActions(self: ?*anyopaque) void {
        qtc.KSelectAction_RemoveAllActions(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#setMenuAccelsEnabled)
    ///
    /// ``` self: QtC.KRecentFilesAction, b: bool ```
    pub fn SetMenuAccelsEnabled(self: ?*anyopaque, b: bool) void {
        qtc.KSelectAction_SetMenuAccelsEnabled(@ptrCast(self), b);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#menuAccelsEnabled)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn MenuAccelsEnabled(self: ?*anyopaque) bool {
        return qtc.KSelectAction_MenuAccelsEnabled(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#changeItem)
    ///
    /// ``` self: QtC.KRecentFilesAction, index: i32, text: []const u8 ```
    pub fn ChangeItem(self: ?*anyopaque, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSelectAction_ChangeItem(@ptrCast(self), @intCast(index), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#actionTriggered)
    ///
    /// ``` self: QtC.KRecentFilesAction, action: QtC.QAction ```
    pub fn ActionTriggered(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KSelectAction_ActionTriggered(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#actionTriggered)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, action: QtC.QAction) callconv(.c) void ```
    pub fn OnActionTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSelectAction_Connect_ActionTriggered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#indexTriggered)
    ///
    /// ``` self: QtC.KRecentFilesAction, index: i32 ```
    pub fn IndexTriggered(self: ?*anyopaque, index: i32) void {
        qtc.KSelectAction_IndexTriggered(@ptrCast(self), @intCast(index));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#indexTriggered)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, index: i32) callconv(.c) void ```
    pub fn OnIndexTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KSelectAction_Connect_IndexTriggered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#textTriggered)
    ///
    /// ``` self: QtC.KRecentFilesAction, text: []const u8 ```
    pub fn TextTriggered(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSelectAction_TextTriggered(@ptrCast(self), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#textTriggered)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, text: [*:0]const u8) callconv(.c) void ```
    pub fn OnTextTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KSelectAction_Connect_TextTriggered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#action)
    ///
    /// ``` self: QtC.KRecentFilesAction, text: []const u8, cs: qnamespace_enums.CaseSensitivity ```
    pub fn Action22(self: ?*anyopaque, text: []const u8, cs: i32) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_Action22(@ptrCast(self), text_str, @intCast(cs));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ``` self: QtC.KRecentFilesAction, text: []const u8, cs: qnamespace_enums.CaseSensitivity ```
    pub fn SetCurrentAction22(self: ?*anyopaque, text: []const u8, cs: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_SetCurrentAction22(@ptrCast(self), text_str, @intCast(cs));
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
    ///
    /// ``` self: QtC.KRecentFilesAction, w: QtC.QWidget ```
    pub fn SetDefaultWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QWidgetAction_SetDefaultWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn DefaultWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetAction_DefaultWidget(@ptrCast(self));
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
    ///
    /// ``` self: QtC.KRecentFilesAction, parent: QtC.QWidget ```
    pub fn RequestWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetAction_RequestWidget(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
    ///
    /// ``` self: QtC.KRecentFilesAction, widget: QtC.QWidget ```
    pub fn ReleaseWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QWidgetAction_ReleaseWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn AssociatedObjects(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QAction_AssociatedObjects(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("krecentfilesaction.AssociatedObjects: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
    ///
    /// ``` self: QtC.KRecentFilesAction, group: QtC.QActionGroup ```
    pub fn SetActionGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QAction_SetActionGroup(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#actionGroup)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn ActionGroup(self: ?*anyopaque) QtC.QActionGroup {
        return qtc.QAction_ActionGroup(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIcon)
    ///
    /// ``` self: QtC.KRecentFilesAction, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QAction_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#icon)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QAction_Icon(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setText)
    ///
    /// ``` self: QtC.KRecentFilesAction, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAction_SetText(@ptrCast(self), text_str);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#text)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesaction.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconText)
    ///
    /// ``` self: QtC.KRecentFilesAction, text: []const u8 ```
    pub fn SetIconText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAction_SetIconText(@ptrCast(self), text_str);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#iconText)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn IconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_IconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesaction.IconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setToolTip)
    ///
    /// ``` self: QtC.KRecentFilesAction, tip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QAction_SetToolTip(@ptrCast(self), tip_str);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toolTip)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesaction.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
    ///
    /// ``` self: QtC.KRecentFilesAction, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QAction_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#statusTip)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesaction.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
    ///
    /// ``` self: QtC.KRecentFilesAction, what: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, what: []const u8) void {
        const what_str = qtc.libqt_string{
            .len = what.len,
            .data = what.ptr,
        };
        qtc.QAction_SetWhatsThis(@ptrCast(self), what_str);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#whatsThis)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesaction.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setPriority)
    ///
    /// ``` self: QtC.KRecentFilesAction, priority: qaction_enums.Priority ```
    pub fn SetPriority(self: ?*anyopaque, priority: i32) void {
        qtc.QAction_SetPriority(@ptrCast(self), @intCast(priority));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#priority)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    ///
    /// Returns: ``` qaction_enums.Priority ```
    pub fn Priority(self: ?*anyopaque) i32 {
        return qtc.QAction_Priority(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setSeparator)
    ///
    /// ``` self: QtC.KRecentFilesAction, b: bool ```
    pub fn SetSeparator(self: ?*anyopaque, b: bool) void {
        qtc.QAction_SetSeparator(@ptrCast(self), b);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isSeparator)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn IsSeparator(self: ?*anyopaque) bool {
        return qtc.QAction_IsSeparator(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcut)
    ///
    /// ``` self: QtC.KRecentFilesAction, shortcut: QtC.QKeySequence ```
    pub fn SetShortcut(self: ?*anyopaque, shortcut: ?*anyopaque) void {
        qtc.QAction_SetShortcut(@ptrCast(self), @ptrCast(shortcut));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcut)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Shortcut(self: ?*anyopaque) QtC.QKeySequence {
        return qtc.QAction_Shortcut(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ``` self: QtC.KRecentFilesAction, shortcuts: []QtC.QKeySequence ```
    pub fn SetShortcuts(self: ?*anyopaque, shortcuts: []QtC.QKeySequence) void {
        const shortcuts_list = qtc.libqt_list{
            .len = shortcuts.len,
            .data = @ptrCast(shortcuts.ptr),
        };
        qtc.QAction_SetShortcuts(@ptrCast(self), shortcuts_list);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ``` self: QtC.KRecentFilesAction, shortcuts: qkeysequence_enums.StandardKey ```
    pub fn SetShortcuts2(self: ?*anyopaque, shortcuts: i32) void {
        qtc.QAction_SetShortcuts2(@ptrCast(self), @intCast(shortcuts));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcuts)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn Shortcuts(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.QAction_Shortcuts(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("krecentfilesaction.Shortcuts: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
    ///
    /// ``` self: QtC.KRecentFilesAction, context: qnamespace_enums.ShortcutContext ```
    pub fn SetShortcutContext(self: ?*anyopaque, context: i32) void {
        qtc.QAction_SetShortcutContext(@ptrCast(self), @intCast(context));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    ///
    /// Returns: ``` qnamespace_enums.ShortcutContext ```
    pub fn ShortcutContext(self: ?*anyopaque) i32 {
        return qtc.QAction_ShortcutContext(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
    ///
    /// ``` self: QtC.KRecentFilesAction, autoRepeat: bool ```
    pub fn SetAutoRepeat(self: ?*anyopaque, autoRepeat: bool) void {
        qtc.QAction_SetAutoRepeat(@ptrCast(self), autoRepeat);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn AutoRepeat(self: ?*anyopaque) bool {
        return qtc.QAction_AutoRepeat(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setFont)
    ///
    /// ``` self: QtC.KRecentFilesAction, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAction_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#font)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QAction_Font(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setCheckable)
    ///
    /// ``` self: QtC.KRecentFilesAction, checkable: bool ```
    pub fn SetCheckable(self: ?*anyopaque, checkable: bool) void {
        qtc.QAction_SetCheckable(@ptrCast(self), checkable);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isCheckable)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn IsCheckable(self: ?*anyopaque) bool {
        return qtc.QAction_IsCheckable(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#data)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Data(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAction_Data(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setData)
    ///
    /// ``` self: QtC.KRecentFilesAction, varVal: QtC.QVariant ```
    pub fn SetData(self: ?*anyopaque, varVal: ?*anyopaque) void {
        qtc.QAction_SetData(@ptrCast(self), @ptrCast(varVal));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isChecked)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn IsChecked(self: ?*anyopaque) bool {
        return qtc.QAction_IsChecked(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isEnabled)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QAction_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isVisible)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAction_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#activate)
    ///
    /// ``` self: QtC.KRecentFilesAction, event: qaction_enums.ActionEvent ```
    pub fn Activate(self: ?*anyopaque, event: i32) void {
        qtc.QAction_Activate(@ptrCast(self), @intCast(event));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
    ///
    /// ``` self: QtC.KRecentFilesAction, menuRole: qaction_enums.MenuRole ```
    pub fn SetMenuRole(self: ?*anyopaque, menuRole: i32) void {
        qtc.QAction_SetMenuRole(@ptrCast(self), @intCast(menuRole));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#menuRole)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    ///
    /// Returns: ``` qaction_enums.MenuRole ```
    pub fn MenuRole(self: ?*anyopaque) i32 {
        return qtc.QAction_MenuRole(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
    ///
    /// ``` self: QtC.KRecentFilesAction, visible: bool ```
    pub fn SetIconVisibleInMenu(self: ?*anyopaque, visible: bool) void {
        qtc.QAction_SetIconVisibleInMenu(@ptrCast(self), visible);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn IsIconVisibleInMenu(self: ?*anyopaque) bool {
        return qtc.QAction_IsIconVisibleInMenu(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
    ///
    /// ``` self: QtC.KRecentFilesAction, show: bool ```
    pub fn SetShortcutVisibleInContextMenu(self: ?*anyopaque, show: bool) void {
        qtc.QAction_SetShortcutVisibleInContextMenu(@ptrCast(self), show);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn IsShortcutVisibleInContextMenu(self: ?*anyopaque) bool {
        return qtc.QAction_IsShortcutVisibleInContextMenu(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn ShowStatusText(self: ?*anyopaque) bool {
        return qtc.QAction_ShowStatusText(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#trigger)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Trigger(self: ?*anyopaque) void {
        qtc.QAction_Trigger(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hover)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Hover(self: ?*anyopaque) void {
        qtc.QAction_Hover(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setChecked)
    ///
    /// ``` self: QtC.KRecentFilesAction, checked: bool ```
    pub fn SetChecked(self: ?*anyopaque, checked: bool) void {
        qtc.QAction_SetChecked(@ptrCast(self), checked);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggle)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Toggle(self: ?*anyopaque) void {
        qtc.QAction_Toggle(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setEnabled)
    ///
    /// ``` self: QtC.KRecentFilesAction, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QAction_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn ResetEnabled(self: ?*anyopaque) void {
        qtc.QAction_ResetEnabled(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setDisabled)
    ///
    /// ``` self: QtC.KRecentFilesAction, b: bool ```
    pub fn SetDisabled(self: ?*anyopaque, b: bool) void {
        qtc.QAction_SetDisabled(@ptrCast(self), b);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setVisible)
    ///
    /// ``` self: QtC.KRecentFilesAction, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QAction_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Changed(self: ?*anyopaque) void {
        qtc.QAction_Changed(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction) callconv(.c) void ```
    pub fn OnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_Changed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ``` self: QtC.KRecentFilesAction, enabled: bool ```
    pub fn EnabledChanged(self: ?*anyopaque, enabled: bool) void {
        qtc.QAction_EnabledChanged(@ptrCast(self), enabled);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, enabled: bool) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_EnabledChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ``` self: QtC.KRecentFilesAction, checkable: bool ```
    pub fn CheckableChanged(self: ?*anyopaque, checkable: bool) void {
        qtc.QAction_CheckableChanged(@ptrCast(self), checkable);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, checkable: bool) callconv(.c) void ```
    pub fn OnCheckableChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_CheckableChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QAction_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Triggered(self: ?*anyopaque) void {
        qtc.QAction_Triggered(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction) callconv(.c) void ```
    pub fn OnTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Hovered(self: ?*anyopaque) void {
        qtc.QAction_Hovered(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ``` self: QtC.KRecentFilesAction, param1: bool ```
    pub fn Toggled(self: ?*anyopaque, param1: bool) void {
        qtc.QAction_Toggled(@ptrCast(self), param1);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, param1: bool) callconv(.c) void ```
    pub fn OnToggled(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Toggled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ``` self: QtC.KRecentFilesAction, object: QtC.QObject ```
    pub fn ShowStatusText1(self: ?*anyopaque, object: ?*anyopaque) bool {
        return qtc.QAction_ShowStatusText1(@ptrCast(self), @ptrCast(object));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ``` self: QtC.KRecentFilesAction, checked: bool ```
    pub fn Triggered1(self: ?*anyopaque, checked: bool) void {
        qtc.QAction_Triggered1(@ptrCast(self), checked);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, checked: bool) callconv(.c) void ```
    pub fn OnTriggered1(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesaction.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KRecentFilesAction, name: []const u8 ```
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
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KRecentFilesAction, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KRecentFilesAction, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KRecentFilesAction, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KRecentFilesAction, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KRecentFilesAction, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("krecentfilesaction.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KRecentFilesAction, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KRecentFilesAction, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KRecentFilesAction, obj: QtC.QObject ```
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
    /// ``` self: QtC.KRecentFilesAction, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KRecentFilesAction, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KRecentFilesAction, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("krecentfilesaction.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("krecentfilesaction.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KRecentFilesAction, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KRecentFilesAction, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KRecentFilesAction, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KRecentFilesAction, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KRecentFilesAction, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KRecentFilesAction_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, before: QtC.QAction, action: QtC.QAction ```
    pub fn QBaseInsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KRecentFilesAction_QBaseInsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, before: QtC.QAction, action: QtC.QAction) callconv(.c) void ```
    pub fn OnInsertAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnInsertAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#slotActionTriggered)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, action: QtC.QAction ```
    pub fn SlotActionTriggered(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KRecentFilesAction_SlotActionTriggered(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#slotActionTriggered)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, action: QtC.QAction ```
    pub fn QBaseSlotActionTriggered(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KRecentFilesAction_QBaseSlotActionTriggered(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#slotActionTriggered)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, action: QtC.QAction) callconv(.c) void ```
    pub fn OnSlotActionTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnSlotActionTriggered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#createWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, parent: QtC.QWidget ```
    pub fn CreateWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.KRecentFilesAction_CreateWidget(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#createWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, parent: QtC.QWidget ```
    pub fn QBaseCreateWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.KRecentFilesAction_QBaseCreateWidget(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#createWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, parent: QtC.QWidget) callconv(.c) QtC.QWidget ```
    pub fn OnCreateWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.KRecentFilesAction_OnCreateWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, widget: QtC.QWidget ```
    pub fn DeleteWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KRecentFilesAction_DeleteWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, widget: QtC.QWidget ```
    pub fn QBaseDeleteWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KRecentFilesAction_QBaseDeleteWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnDeleteWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnDeleteWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KRecentFilesAction_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KRecentFilesAction_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRecentFilesAction_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KRecentFilesAction_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KRecentFilesAction_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRecentFilesAction_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRecentFilesAction_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRecentFilesAction_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRecentFilesAction_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRecentFilesAction_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRecentFilesAction_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRecentFilesAction_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KRecentFilesAction_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KRecentFilesAction_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KRecentFilesAction_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KRecentFilesAction_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, param1: bool ```
    pub fn SlotToggled(self: ?*anyopaque, param1: bool) void {
        qtc.KRecentFilesAction_SlotToggled(@ptrCast(self), param1);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, param1: bool ```
    pub fn QBaseSlotToggled(self: ?*anyopaque, param1: bool) void {
        qtc.KRecentFilesAction_QBaseSlotToggled(@ptrCast(self), param1);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, param1: bool) callconv(.c) void ```
    pub fn OnSlotToggled(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnSlotToggled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn CreatedWidgets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.KRecentFilesAction_CreatedWidgets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("krecentfilesaction.CreatedWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, allocator: std.mem.Allocator ```
    pub fn QBaseCreatedWidgets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.KRecentFilesAction_QBaseCreatedWidgets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("krecentfilesaction.CreatedWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn () callconv(.c) [*:null]QtC.QWidget ```
    pub fn OnCreatedWidgets(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.QWidget) void {
        qtc.KRecentFilesAction_OnCreatedWidgets(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KRecentFilesAction_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KRecentFilesAction_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KRecentFilesAction_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KRecentFilesAction_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KRecentFilesAction_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KRecentFilesAction_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KRecentFilesAction_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KRecentFilesAction_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KRecentFilesAction_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KRecentFilesAction_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KRecentFilesAction_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRecentFilesAction_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRecentFilesAction, callback: *const fn (self: QtC.KRecentFilesAction, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krecentfilesaction.html#dtor.KRecentFilesAction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KRecentFilesAction ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KRecentFilesAction_Delete(@ptrCast(self));
    }
};
