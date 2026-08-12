const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfigGroup = @import("libqt6").KConfigGroup;
const QAction = @import("libqt6").QAction;
const QActionGroup = @import("libqt6").QActionGroup;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QIcon = @import("libqt6").QIcon;
const QKeySequence = @import("libqt6").QKeySequence;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMimeType = @import("libqt6").QMimeType;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const kselectaction_enums = @import("../extras-kwidgetsaddons/libkselectaction.zig").enums;
const qaction_enums = @import("../libqaction.zig").enums;
const qkeysequence_enums = @import("../libqkeysequence.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qtoolbutton_enums = @import("../libqtoolbutton.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html)
pub const KRecentFilesAction = extern struct {
    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KRecentFilesAction,

    pub const _is_KRecentFilesAction = {};
    pub const _is_KSelectAction = {};
    pub const _is_QWidgetAction = {};
    pub const _is_QAction = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KRecentFilesAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new(_parent: anytype) KRecentFilesAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KRecentFilesAction_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KRecentFilesAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_text: []const u8, _parent: anytype) KRecentFilesAction {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KRecentFilesAction_new2(text_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KRecentFilesAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_icon: anytype, _text: []const u8, _parent: anytype) KRecentFilesAction {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KRecentFilesAction_new3(@ptrCast(_icon.ptr), text_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn metaObject(self: KRecentFilesAction) QMetaObject {
        return .{ .ptr = qtc.KRecentFilesAction_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KRecentFilesAction, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KRecentFilesAction_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn superMetaObject(self: KRecentFilesAction) QMetaObject {
        return .{ .ptr = qtc.KRecentFilesAction_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KRecentFilesAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KRecentFilesAction_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KRecentFilesAction_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KRecentFilesAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KRecentFilesAction_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KRecentFilesAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KRecentFilesAction_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KRecentFilesAction_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KRecentFilesAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KRecentFilesAction_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KRecentFilesAction.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _action: QAction `
    ///
    /// ` url: QUrl `
    ///
    /// ` name: []const u8 `
    ///
    pub fn addAction(self: KRecentFilesAction, _action: anytype, url: anytype, name: []const u8) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        comptime _ = @TypeOf(url)._is_QUrl;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KRecentFilesAction_AddAction(@ptrCast(self.ptr), @ptrCast(_action.ptr), @ptrCast(url.ptr), name_str);
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn removeAction(self: KRecentFilesAction, _action: anytype) QAction {
        comptime _ = @TypeOf(_action)._is_QAction;
        return .{ .ptr = qtc.KRecentFilesAction_RemoveAction(@ptrCast(self.ptr), @ptrCast(_action.ptr)) };
    }

    /// ### DEPRECATED: Use `onRemoveAction` instead
    ///
    pub const OnRemoveAction = onRemoveAction;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#removeAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, action: QAction) callconv(.c) QAction `
    ///
    pub fn onRemoveAction(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QAction) callconv(.c) QAction) void {
        qtc.KRecentFilesAction_OnRemoveAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveAction` instead
    ///
    pub const SuperRemoveAction = superRemoveAction;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#removeAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn superRemoveAction(self: KRecentFilesAction, _action: anytype) QAction {
        comptime _ = @TypeOf(_action)._is_QAction;
        return .{ .ptr = qtc.KRecentFilesAction_SuperRemoveAction(@ptrCast(self.ptr), @ptrCast(_action.ptr)) };
    }

    /// ### DEPRECATED: Use `maxItems` instead
    ///
    pub const MaxItems = maxItems;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#maxItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn maxItems(self: KRecentFilesAction) i32 {
        return qtc.KRecentFilesAction_MaxItems(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxItems` instead
    ///
    pub const SetMaxItems = setMaxItems;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#setMaxItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _maxItems: i32 `
    ///
    pub fn setMaxItems(self: KRecentFilesAction, _maxItems: i32) void {
        qtc.KRecentFilesAction_SetMaxItems(@ptrCast(self.ptr), @bitCast(_maxItems));
    }

    /// ### DEPRECATED: Use `loadEntries` instead
    ///
    pub const LoadEntries = loadEntries;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#loadEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn loadEntries(self: KRecentFilesAction, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KRecentFilesAction_LoadEntries(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `saveEntries` instead
    ///
    pub const SaveEntries = saveEntries;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#saveEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn saveEntries(self: KRecentFilesAction, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KRecentFilesAction_SaveEntries(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `addUrl` instead
    ///
    pub const AddUrl = addUrl;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#addUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` url: QUrl `
    ///
    pub fn addUrl(self: KRecentFilesAction, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KRecentFilesAction_AddUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `addUrl2` instead
    ///
    pub const AddUrl2 = addUrl2;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#addUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` url: QUrl `
    ///
    /// ` name: []const u8 `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn addUrl2(self: KRecentFilesAction, url: anytype, name: []const u8, mimeType: []const u8) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.KRecentFilesAction_AddUrl2(@ptrCast(self.ptr), @ptrCast(url.ptr), name_str, mimeType_str);
    }

    /// ### DEPRECATED: Use `removeUrl` instead
    ///
    pub const RemoveUrl = removeUrl;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#removeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` url: QUrl `
    ///
    pub fn removeUrl(self: KRecentFilesAction, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KRecentFilesAction_RemoveUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `urls` instead
    ///
    pub const Urls = urls;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#urls)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn urls(self: KRecentFilesAction, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KRecentFilesAction_Urls(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("KRecentFilesAction.urls: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn clear(self: KRecentFilesAction) void {
        qtc.KRecentFilesAction_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClear` instead
    ///
    pub const OnClear = onClear;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClear(self: KRecentFilesAction, callback: *const fn () callconv(.c) void) void {
        qtc.KRecentFilesAction_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClear` instead
    ///
    pub const SuperClear = superClear;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn superClear(self: KRecentFilesAction) void {
        qtc.KRecentFilesAction_SuperClear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `urlSelected` instead
    ///
    pub const UrlSelected = urlSelected;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#urlSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` url: QUrl `
    ///
    pub fn urlSelected(self: KRecentFilesAction, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KRecentFilesAction_UrlSelected(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `onUrlSelected` instead
    ///
    pub const OnUrlSelected = onUrlSelected;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#urlSelected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, url: QUrl) callconv(.c) void `
    ///
    pub fn onUrlSelected(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QUrl) callconv(.c) void) void {
        qtc.KRecentFilesAction_Connect_UrlSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `recentListCleared` instead
    ///
    pub const RecentListCleared = recentListCleared;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#recentListCleared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn recentListCleared(self: KRecentFilesAction) void {
        qtc.KRecentFilesAction_RecentListCleared(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRecentListCleared` instead
    ///
    pub const OnRecentListCleared = onRecentListCleared;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#recentListCleared)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction) callconv(.c) void `
    ///
    pub fn onRecentListCleared(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction) callconv(.c) void) void {
        qtc.KRecentFilesAction_Connect_RecentListCleared(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KRecentFilesAction.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KRecentFilesAction.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addAction4` instead
    ///
    pub const AddAction4 = addAction4;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _action: QAction `
    ///
    /// ` url: QUrl `
    ///
    /// ` name: []const u8 `
    ///
    /// ` mimeType: QMimeType `
    ///
    pub fn addAction4(self: KRecentFilesAction, _action: anytype, url: anytype, name: []const u8, mimeType: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        comptime _ = @TypeOf(url)._is_QUrl;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(mimeType)._is_QMimeType;
        qtc.KRecentFilesAction_AddAction4(@ptrCast(self.ptr), @ptrCast(_action.ptr), @ptrCast(url.ptr), name_str, @ptrCast(mimeType.ptr));
    }

    /// ### DEPRECATED: Use `addUrl22` instead
    ///
    pub const AddUrl22 = addUrl22;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#addUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` url: QUrl `
    ///
    /// ` name: []const u8 `
    ///
    pub fn addUrl22(self: KRecentFilesAction, url: anytype, name: []const u8) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KRecentFilesAction_AddUrl22(@ptrCast(self.ptr), @ptrCast(url.ptr), name_str);
    }

    /// ### DEPRECATED: Use `toolBarMode` instead
    ///
    pub const ToolBarMode = toolBarMode;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#toolBarMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ## Returns:
    ///
    /// ` kselectaction_enums.ToolBarMode `
    ///
    pub fn toolBarMode(self: KRecentFilesAction) i32 {
        return qtc.KSelectAction_ToolBarMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolBarMode` instead
    ///
    pub const SetToolBarMode = setToolBarMode;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setToolBarMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` mode: kselectaction_enums.ToolBarMode `
    ///
    pub fn setToolBarMode(self: KRecentFilesAction, mode: i32) void {
        qtc.KSelectAction_SetToolBarMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `toolButtonPopupMode` instead
    ///
    pub const ToolButtonPopupMode = toolButtonPopupMode;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#toolButtonPopupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ## Returns:
    ///
    /// ` qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn toolButtonPopupMode(self: KRecentFilesAction) i32 {
        return qtc.KSelectAction_ToolButtonPopupMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolButtonPopupMode` instead
    ///
    pub const SetToolButtonPopupMode = setToolButtonPopupMode;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setToolButtonPopupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` mode: qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn setToolButtonPopupMode(self: KRecentFilesAction, mode: i32) void {
        qtc.KSelectAction_SetToolButtonPopupMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `selectableActionGroup` instead
    ///
    pub const SelectableActionGroup = selectableActionGroup;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#selectableActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn selectableActionGroup(self: KRecentFilesAction) QActionGroup {
        return .{ .ptr = qtc.KSelectAction_SelectableActionGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentAction` instead
    ///
    pub const CurrentAction = currentAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#currentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn currentAction(self: KRecentFilesAction) QAction {
        return .{ .ptr = qtc.KSelectAction_CurrentAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentItem` instead
    ///
    pub const CurrentItem = currentItem;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#currentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn currentItem(self: KRecentFilesAction) i32 {
        return qtc.KSelectAction_CurrentItem(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentText` instead
    ///
    pub const CurrentText = currentText;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#currentText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentText(self: KRecentFilesAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSelectAction_CurrentText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KRecentFilesAction.currentText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: KRecentFilesAction, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KSelectAction_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KRecentFilesAction.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` index: i32 `
    ///
    pub fn action(self: KRecentFilesAction, index: i32) QAction {
        return .{ .ptr = qtc.KSelectAction_Action(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `action2` instead
    ///
    pub const Action2 = action2;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn action2(self: KRecentFilesAction, _text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_Action2(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `setCurrentAction` instead
    ///
    pub const SetCurrentAction = setCurrentAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn setCurrentAction(self: KRecentFilesAction, _action: anytype) bool {
        comptime _ = @TypeOf(_action)._is_QAction;
        return qtc.KSelectAction_SetCurrentAction(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentItem` instead
    ///
    pub const SetCurrentItem = setCurrentItem;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` index: i32 `
    ///
    pub fn setCurrentItem(self: KRecentFilesAction, index: i32) bool {
        return qtc.KSelectAction_SetCurrentItem(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setCurrentAction2` instead
    ///
    pub const SetCurrentAction2 = setCurrentAction2;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setCurrentAction2(self: KRecentFilesAction, _text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return qtc.KSelectAction_SetCurrentAction2(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `addAction2` instead
    ///
    pub const AddAction2 = addAction2;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn addAction2(self: KRecentFilesAction, _text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_AddAction2(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `addAction3` instead
    ///
    pub const AddAction3 = addAction3;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn addAction3(self: KRecentFilesAction, _icon: anytype, _text: []const u8) QAction {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_AddAction3(@ptrCast(self.ptr), @ptrCast(_icon.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `setItems` instead
    ///
    pub const SetItems = setItems;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lst: []const []const u8 `
    ///
    pub fn setItems(self: KRecentFilesAction, allocator: std.mem.Allocator, lst: []const []const u8) void {
        const lst_arr = allocator.alloc(qtc.libqt_string, lst.len) catch @panic("KRecentFilesAction.setItems: Memory allocation failed");
        defer allocator.free(lst_arr);
        for (lst, 0..lst.len) |str_item, i|
            lst_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const lst_list = qtc.libqt_list{
            .len = lst.len,
            .data = lst_arr.ptr,
        };
        qtc.KSelectAction_SetItems(@ptrCast(self.ptr), lst_list);
    }

    /// ### DEPRECATED: Use `items` instead
    ///
    pub const Items = items;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn items(self: KRecentFilesAction, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSelectAction_Items(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KRecentFilesAction.items: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KRecentFilesAction.items: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isEditable` instead
    ///
    pub const IsEditable = isEditable;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#isEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn isEditable(self: KRecentFilesAction) bool {
        return qtc.KSelectAction_IsEditable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEditable` instead
    ///
    pub const SetEditable = setEditable;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` editable: bool `
    ///
    pub fn setEditable(self: KRecentFilesAction, editable: bool) void {
        qtc.KSelectAction_SetEditable(@ptrCast(self.ptr), editable);
    }

    /// ### DEPRECATED: Use `comboWidth` instead
    ///
    pub const ComboWidth = comboWidth;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#comboWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn comboWidth(self: KRecentFilesAction) i32 {
        return qtc.KSelectAction_ComboWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setComboWidth` instead
    ///
    pub const SetComboWidth = setComboWidth;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setComboWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` width: i32 `
    ///
    pub fn setComboWidth(self: KRecentFilesAction, width: i32) void {
        qtc.KSelectAction_SetComboWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `setMaxComboViewCount` instead
    ///
    pub const SetMaxComboViewCount = setMaxComboViewCount;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setMaxComboViewCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` n: i32 `
    ///
    pub fn setMaxComboViewCount(self: KRecentFilesAction, n: i32) void {
        qtc.KSelectAction_SetMaxComboViewCount(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### DEPRECATED: Use `removeAllActions` instead
    ///
    pub const RemoveAllActions = removeAllActions;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAllActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn removeAllActions(self: KRecentFilesAction) void {
        qtc.KSelectAction_RemoveAllActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMenuAccelsEnabled` instead
    ///
    pub const SetMenuAccelsEnabled = setMenuAccelsEnabled;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setMenuAccelsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` b: bool `
    ///
    pub fn setMenuAccelsEnabled(self: KRecentFilesAction, b: bool) void {
        qtc.KSelectAction_SetMenuAccelsEnabled(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `menuAccelsEnabled` instead
    ///
    pub const MenuAccelsEnabled = menuAccelsEnabled;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#menuAccelsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn menuAccelsEnabled(self: KRecentFilesAction) bool {
        return qtc.KSelectAction_MenuAccelsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `changeItem` instead
    ///
    pub const ChangeItem = changeItem;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#changeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` index: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn changeItem(self: KRecentFilesAction, index: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.KSelectAction_ChangeItem(@ptrCast(self.ptr), @bitCast(index), text_str);
    }

    /// ### DEPRECATED: Use `actionTriggered` instead
    ///
    pub const ActionTriggered = actionTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn actionTriggered(self: KRecentFilesAction, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KSelectAction_ActionTriggered(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `onActionTriggered` instead
    ///
    pub const OnActionTriggered = onActionTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, action: QAction) callconv(.c) void `
    ///
    pub fn onActionTriggered(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QAction) callconv(.c) void) void {
        qtc.KSelectAction_Connect_ActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexTriggered` instead
    ///
    pub const IndexTriggered = indexTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` index: i32 `
    ///
    pub fn indexTriggered(self: KRecentFilesAction, index: i32) void {
        qtc.KSelectAction_IndexTriggered(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onIndexTriggered` instead
    ///
    pub const OnIndexTriggered = onIndexTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, index: i32) callconv(.c) void `
    ///
    pub fn onIndexTriggered(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, i32) callconv(.c) void) void {
        qtc.KSelectAction_Connect_IndexTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textTriggered` instead
    ///
    pub const TextTriggered = textTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn textTriggered(self: KRecentFilesAction, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.KSelectAction_TextTriggered(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onTextTriggered` instead
    ///
    pub const OnTextTriggered = onTextTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTextTriggered(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, [*:0]const u8) callconv(.c) void) void {
        qtc.KSelectAction_Connect_TextTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `action22` instead
    ///
    pub const Action22 = action22;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn action22(self: KRecentFilesAction, _text: []const u8, cs: i32) QAction {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_Action22(@ptrCast(self.ptr), text_str, @bitCast(cs)) };
    }

    /// ### DEPRECATED: Use `setCurrentAction22` instead
    ///
    pub const SetCurrentAction22 = setCurrentAction22;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setCurrentAction22(self: KRecentFilesAction, _text: []const u8, cs: i32) bool {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return qtc.KSelectAction_SetCurrentAction22(@ptrCast(self.ptr), text_str, @bitCast(cs));
    }

    /// ### DEPRECATED: Use `setDefaultWidget` instead
    ///
    pub const SetDefaultWidget = setDefaultWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` w: QWidget `
    ///
    pub fn setDefaultWidget(self: KRecentFilesAction, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QWidgetAction_SetDefaultWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `defaultWidget` instead
    ///
    pub const DefaultWidget = defaultWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn defaultWidget(self: KRecentFilesAction) QWidget {
        return .{ .ptr = qtc.QWidgetAction_DefaultWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `requestWidget` instead
    ///
    pub const RequestWidget = requestWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn requestWidget(self: KRecentFilesAction, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QWidgetAction_RequestWidget(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `releaseWidget` instead
    ///
    pub const ReleaseWidget = releaseWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn releaseWidget(self: KRecentFilesAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QWidgetAction_ReleaseWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `associatedObjects` instead
    ///
    pub const AssociatedObjects = associatedObjects;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn associatedObjects(self: KRecentFilesAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QAction_AssociatedObjects(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KRecentFilesAction.associatedObjects: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setActionGroup` instead
    ///
    pub const SetActionGroup = setActionGroup;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` group: QActionGroup `
    ///
    pub fn setActionGroup(self: KRecentFilesAction, group: anytype) void {
        comptime _ = @TypeOf(group)._is_QActionGroup;
        qtc.QAction_SetActionGroup(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### DEPRECATED: Use `actionGroup` instead
    ///
    pub const ActionGroup = actionGroup;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn actionGroup(self: KRecentFilesAction) QActionGroup {
        return .{ .ptr = qtc.QAction_ActionGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: KRecentFilesAction, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QAction_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn icon(self: KRecentFilesAction) QIcon {
        return .{ .ptr = qtc.QAction_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: KRecentFilesAction, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAction_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: KRecentFilesAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KRecentFilesAction.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIconText` instead
    ///
    pub const SetIconText = setIconText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setIconText(self: KRecentFilesAction, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAction_SetIconText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `iconText` instead
    ///
    pub const IconText = iconText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconText(self: KRecentFilesAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_IconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KRecentFilesAction.iconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn setToolTip(self: KRecentFilesAction, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QAction_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: KRecentFilesAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KRecentFilesAction.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStatusTip` instead
    ///
    pub const SetStatusTip = setStatusTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: KRecentFilesAction, _statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = _statusTip.len,
            .data = _statusTip.ptr,
        };
        qtc.QAction_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// ### DEPRECATED: Use `statusTip` instead
    ///
    pub const StatusTip = statusTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: KRecentFilesAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KRecentFilesAction.statusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` what: []const u8 `
    ///
    pub fn setWhatsThis(self: KRecentFilesAction, what: []const u8) void {
        const what_str = qtc.libqt_string{
            .len = what.len,
            .data = what.ptr,
        };
        qtc.QAction_SetWhatsThis(@ptrCast(self.ptr), what_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: KRecentFilesAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KRecentFilesAction.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPriority` instead
    ///
    pub const SetPriority = setPriority;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _priority: qaction_enums.Priority `
    ///
    pub fn setPriority(self: KRecentFilesAction, _priority: i32) void {
        qtc.QAction_SetPriority(@ptrCast(self.ptr), @bitCast(_priority));
    }

    /// ### DEPRECATED: Use `priority` instead
    ///
    pub const Priority = priority;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.Priority `
    ///
    pub fn priority(self: KRecentFilesAction) i32 {
        return qtc.QAction_Priority(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSeparator` instead
    ///
    pub const SetSeparator = setSeparator;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` b: bool `
    ///
    pub fn setSeparator(self: KRecentFilesAction, b: bool) void {
        qtc.QAction_SetSeparator(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `isSeparator` instead
    ///
    pub const IsSeparator = isSeparator;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn isSeparator(self: KRecentFilesAction) bool {
        return qtc.QAction_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShortcut` instead
    ///
    pub const SetShortcut = setShortcut;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _shortcut: QKeySequence `
    ///
    pub fn setShortcut(self: KRecentFilesAction, _shortcut: anytype) void {
        comptime _ = @TypeOf(_shortcut)._is_QKeySequence;
        qtc.QAction_SetShortcut(@ptrCast(self.ptr), @ptrCast(_shortcut.ptr));
    }

    /// ### DEPRECATED: Use `shortcut` instead
    ///
    pub const Shortcut = shortcut;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn shortcut(self: KRecentFilesAction) QKeySequence {
        return .{ .ptr = qtc.QAction_Shortcut(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShortcuts` instead
    ///
    pub const SetShortcuts = setShortcuts;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _shortcuts: []QKeySequence `
    ///
    pub fn setShortcuts(self: KRecentFilesAction, _shortcuts: []QKeySequence) void {
        const shortcuts_list = qtc.libqt_list{
            .len = _shortcuts.len,
            .data = @ptrCast(_shortcuts.ptr),
        };
        qtc.QAction_SetShortcuts(@ptrCast(self.ptr), shortcuts_list);
    }

    /// ### DEPRECATED: Use `setShortcuts2` instead
    ///
    pub const SetShortcuts2 = setShortcuts2;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _shortcuts: qkeysequence_enums.StandardKey `
    ///
    pub fn setShortcuts2(self: KRecentFilesAction, _shortcuts: i32) void {
        qtc.QAction_SetShortcuts2(@ptrCast(self.ptr), @bitCast(_shortcuts));
    }

    /// ### DEPRECATED: Use `shortcuts` instead
    ///
    pub const Shortcuts = shortcuts;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn shortcuts(self: KRecentFilesAction, allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.QAction_Shortcuts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KRecentFilesAction.shortcuts: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setShortcutContext` instead
    ///
    pub const SetShortcutContext = setShortcutContext;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn setShortcutContext(self: KRecentFilesAction, context: i32) void {
        qtc.QAction_SetShortcutContext(@ptrCast(self.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `shortcutContext` instead
    ///
    pub const ShortcutContext = shortcutContext;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ShortcutContext `
    ///
    pub fn shortcutContext(self: KRecentFilesAction) i32 {
        return qtc.QAction_ShortcutContext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoRepeat` instead
    ///
    pub const SetAutoRepeat = setAutoRepeat;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _autoRepeat: bool `
    ///
    pub fn setAutoRepeat(self: KRecentFilesAction, _autoRepeat: bool) void {
        qtc.QAction_SetAutoRepeat(@ptrCast(self.ptr), _autoRepeat);
    }

    /// ### DEPRECATED: Use `autoRepeat` instead
    ///
    pub const AutoRepeat = autoRepeat;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn autoRepeat(self: KRecentFilesAction) bool {
        return qtc.QAction_AutoRepeat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: KRecentFilesAction, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QAction_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn font(self: KRecentFilesAction) QFont {
        return .{ .ptr = qtc.QAction_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCheckable` instead
    ///
    pub const SetCheckable = setCheckable;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` checkable: bool `
    ///
    pub fn setCheckable(self: KRecentFilesAction, checkable: bool) void {
        qtc.QAction_SetCheckable(@ptrCast(self.ptr), checkable);
    }

    /// ### DEPRECATED: Use `isCheckable` instead
    ///
    pub const IsCheckable = isCheckable;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn isCheckable(self: KRecentFilesAction) bool {
        return qtc.QAction_IsCheckable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn data(self: KRecentFilesAction) QVariant {
        return .{ .ptr = qtc.QAction_Data(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` varVal: QVariant `
    ///
    pub fn setData(self: KRecentFilesAction, varVal: anytype) void {
        comptime _ = @TypeOf(varVal)._is_QVariant;
        qtc.QAction_SetData(@ptrCast(self.ptr), @ptrCast(varVal.ptr));
    }

    /// ### DEPRECATED: Use `isChecked` instead
    ///
    pub const IsChecked = isChecked;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn isChecked(self: KRecentFilesAction) bool {
        return qtc.QAction_IsChecked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn isEnabled(self: KRecentFilesAction) bool {
        return qtc.QAction_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn isVisible(self: KRecentFilesAction) bool {
        return qtc.QAction_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activate` instead
    ///
    pub const Activate = activate;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _event: qaction_enums.ActionEvent `
    ///
    pub fn activate(self: KRecentFilesAction, _event: i32) void {
        qtc.QAction_Activate(@ptrCast(self.ptr), @bitCast(_event));
    }

    /// ### DEPRECATED: Use `setMenuRole` instead
    ///
    pub const SetMenuRole = setMenuRole;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _menuRole: qaction_enums.MenuRole `
    ///
    pub fn setMenuRole(self: KRecentFilesAction, _menuRole: i32) void {
        qtc.QAction_SetMenuRole(@ptrCast(self.ptr), @bitCast(_menuRole));
    }

    /// ### DEPRECATED: Use `menuRole` instead
    ///
    pub const MenuRole = menuRole;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.MenuRole `
    ///
    pub fn menuRole(self: KRecentFilesAction) i32 {
        return qtc.QAction_MenuRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIconVisibleInMenu` instead
    ///
    pub const SetIconVisibleInMenu = setIconVisibleInMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` visible: bool `
    ///
    pub fn setIconVisibleInMenu(self: KRecentFilesAction, visible: bool) void {
        qtc.QAction_SetIconVisibleInMenu(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isIconVisibleInMenu` instead
    ///
    pub const IsIconVisibleInMenu = isIconVisibleInMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn isIconVisibleInMenu(self: KRecentFilesAction) bool {
        return qtc.QAction_IsIconVisibleInMenu(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShortcutVisibleInContextMenu` instead
    ///
    pub const SetShortcutVisibleInContextMenu = setShortcutVisibleInContextMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` show: bool `
    ///
    pub fn setShortcutVisibleInContextMenu(self: KRecentFilesAction, show: bool) void {
        qtc.QAction_SetShortcutVisibleInContextMenu(@ptrCast(self.ptr), show);
    }

    /// ### DEPRECATED: Use `isShortcutVisibleInContextMenu` instead
    ///
    pub const IsShortcutVisibleInContextMenu = isShortcutVisibleInContextMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn isShortcutVisibleInContextMenu(self: KRecentFilesAction) bool {
        return qtc.QAction_IsShortcutVisibleInContextMenu(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showStatusText` instead
    ///
    pub const ShowStatusText = showStatusText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn showStatusText(self: KRecentFilesAction) bool {
        return qtc.QAction_ShowStatusText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `trigger` instead
    ///
    pub const Trigger = trigger;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn trigger(self: KRecentFilesAction) void {
        qtc.QAction_Trigger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hover` instead
    ///
    pub const Hover = hover;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn hover(self: KRecentFilesAction) void {
        qtc.QAction_Hover(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChecked` instead
    ///
    pub const SetChecked = setChecked;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` checked: bool `
    ///
    pub fn setChecked(self: KRecentFilesAction, checked: bool) void {
        qtc.QAction_SetChecked(@ptrCast(self.ptr), checked);
    }

    /// ### DEPRECATED: Use `toggle` instead
    ///
    pub const Toggle = toggle;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn toggle(self: KRecentFilesAction) void {
        qtc.QAction_Toggle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: KRecentFilesAction, enabled: bool) void {
        qtc.QAction_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `resetEnabled` instead
    ///
    pub const ResetEnabled = resetEnabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn resetEnabled(self: KRecentFilesAction) void {
        qtc.QAction_ResetEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDisabled` instead
    ///
    pub const SetDisabled = setDisabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` b: bool `
    ///
    pub fn setDisabled(self: KRecentFilesAction, b: bool) void {
        qtc.QAction_SetDisabled(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: KRecentFilesAction, visible: bool) void {
        qtc.QAction_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `changed` instead
    ///
    pub const Changed = changed;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn changed(self: KRecentFilesAction) void {
        qtc.QAction_Changed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChanged` instead
    ///
    pub const OnChanged = onChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction) callconv(.c) void `
    ///
    pub fn onChanged(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction) callconv(.c) void) void {
        qtc.QAction_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` enabled: bool `
    ///
    pub fn enabledChanged(self: KRecentFilesAction, enabled: bool) void {
        qtc.QAction_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, enabled: bool) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `checkableChanged` instead
    ///
    pub const CheckableChanged = checkableChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` checkable: bool `
    ///
    pub fn checkableChanged(self: KRecentFilesAction, checkable: bool) void {
        qtc.QAction_CheckableChanged(@ptrCast(self.ptr), checkable);
    }

    /// ### DEPRECATED: Use `onCheckableChanged` instead
    ///
    pub const OnCheckableChanged = onCheckableChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, checkable: bool) callconv(.c) void `
    ///
    pub fn onCheckableChanged(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_CheckableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn visibleChanged(self: KRecentFilesAction) void {
        qtc.QAction_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction) callconv(.c) void) void {
        qtc.QAction_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `triggered` instead
    ///
    pub const Triggered = triggered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn triggered(self: KRecentFilesAction) void {
        qtc.QAction_Triggered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTriggered` instead
    ///
    pub const OnTriggered = onTriggered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction) callconv(.c) void `
    ///
    pub fn onTriggered(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn hovered(self: KRecentFilesAction) void {
        qtc.QAction_Hovered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction) callconv(.c) void `
    ///
    pub fn onHovered(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction) callconv(.c) void) void {
        qtc.QAction_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `toggled` instead
    ///
    pub const Toggled = toggled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` param1: bool `
    ///
    pub fn toggled(self: KRecentFilesAction, param1: bool) void {
        qtc.QAction_Toggled(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onToggled` instead
    ///
    pub const OnToggled = onToggled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, param1: bool) callconv(.c) void `
    ///
    pub fn onToggled(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Toggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showStatusText1` instead
    ///
    pub const ShowStatusText1 = showStatusText1;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` object: QObject `
    ///
    pub fn showStatusText1(self: KRecentFilesAction, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAction_ShowStatusText1(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `triggered1` instead
    ///
    pub const Triggered1 = triggered1;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` checked: bool `
    ///
    pub fn triggered1(self: KRecentFilesAction, checked: bool) void {
        qtc.QAction_Triggered1(@ptrCast(self.ptr), checked);
    }

    /// ### DEPRECATED: Use `onTriggered1` instead
    ///
    pub const OnTriggered1 = onTriggered1;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, checked: bool) callconv(.c) void `
    ///
    pub fn onTriggered1(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KRecentFilesAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KRecentFilesAction.objectName: Memory allocation failed");
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KRecentFilesAction, name: []const u8) void {
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn isWidgetType(self: KRecentFilesAction) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn isWindowType(self: KRecentFilesAction) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn isQuickItemType(self: KRecentFilesAction) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn signalsBlocked(self: KRecentFilesAction) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KRecentFilesAction, b: bool) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn thread(self: KRecentFilesAction) QThread {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KRecentFilesAction, _thread: anytype) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KRecentFilesAction, interval: i32) i32 {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KRecentFilesAction, time: i64) i32 {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KRecentFilesAction, id: i32) void {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KRecentFilesAction, id: i32) void {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KRecentFilesAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KRecentFilesAction.children: Memory allocation failed");
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KRecentFilesAction, _parent: anytype) void {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KRecentFilesAction, filterObj: anytype) void {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KRecentFilesAction, obj: anytype) void {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KRecentFilesAction, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn disconnect3(self: KRecentFilesAction) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KRecentFilesAction, receiver: anytype) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn dumpObjectTree(self: KRecentFilesAction) void {
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn dumpObjectInfo(self: KRecentFilesAction) void {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KRecentFilesAction, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KRecentFilesAction, name: [:0]const u8) QVariant {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KRecentFilesAction, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KRecentFilesAction.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KRecentFilesAction.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn bindingStorage(self: KRecentFilesAction) QBindingStorage {
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn bindingStorage2(self: KRecentFilesAction) QBindingStorage {
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn destroyed(self: KRecentFilesAction) void {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction) callconv(.c) void) void {
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn parent(self: KRecentFilesAction) QObject {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KRecentFilesAction, classname: [:0]const u8) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn deleteLater(self: KRecentFilesAction) void {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KRecentFilesAction, interval: i32, timerType: i32) i32 {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KRecentFilesAction, time: i64, timerType: i32) i32 {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KRecentFilesAction, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KRecentFilesAction, signal: [:0]const u8) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KRecentFilesAction, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KRecentFilesAction, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KRecentFilesAction, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KRecentFilesAction, param1: anytype) void {
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertAction` instead
    ///
    pub const InsertAction = insertAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` before: QAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn insertAction(self: KRecentFilesAction, before: anytype, _action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KRecentFilesAction_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `superInsertAction` instead
    ///
    pub const SuperInsertAction = superInsertAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` before: QAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn superInsertAction(self: KRecentFilesAction, before: anytype, _action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KRecentFilesAction_SuperInsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `onInsertAction` instead
    ///
    pub const OnInsertAction = onInsertAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, before: QAction, action: QAction) callconv(.c) void `
    ///
    pub fn onInsertAction(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QAction, QAction) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnInsertAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `slotActionTriggered` instead
    ///
    pub const SlotActionTriggered = slotActionTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotActionTriggered)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn slotActionTriggered(self: KRecentFilesAction, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KRecentFilesAction_SlotActionTriggered(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `superSlotActionTriggered` instead
    ///
    pub const SuperSlotActionTriggered = superSlotActionTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotActionTriggered)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn superSlotActionTriggered(self: KRecentFilesAction, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KRecentFilesAction_SuperSlotActionTriggered(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `onSlotActionTriggered` instead
    ///
    pub const OnSlotActionTriggered = onSlotActionTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotActionTriggered)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, action: QAction) callconv(.c) void `
    ///
    pub fn onSlotActionTriggered(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QAction) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnSlotActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createWidget` instead
    ///
    pub const CreateWidget = createWidget;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn createWidget(self: KRecentFilesAction, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KRecentFilesAction_CreateWidget(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `superCreateWidget` instead
    ///
    pub const SuperCreateWidget = superCreateWidget;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn superCreateWidget(self: KRecentFilesAction, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KRecentFilesAction_SuperCreateWidget(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateWidget` instead
    ///
    pub const OnCreateWidget = onCreateWidget;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, parent: QWidget) callconv(.c) QWidget `
    ///
    pub fn onCreateWidget(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QWidget) callconv(.c) QWidget) void {
        qtc.KRecentFilesAction_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `deleteWidget` instead
    ///
    pub const DeleteWidget = deleteWidget;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn deleteWidget(self: KRecentFilesAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KRecentFilesAction_DeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `superDeleteWidget` instead
    ///
    pub const SuperDeleteWidget = superDeleteWidget;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superDeleteWidget(self: KRecentFilesAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KRecentFilesAction_SuperDeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onDeleteWidget` instead
    ///
    pub const OnDeleteWidget = onDeleteWidget;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, widget: QWidget) callconv(.c) void `
    ///
    pub fn onDeleteWidget(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QWidget) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnDeleteWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KRecentFilesAction, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KRecentFilesAction_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KRecentFilesAction, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KRecentFilesAction_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QEvent) callconv(.c) bool) void {
        qtc.KRecentFilesAction_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KRecentFilesAction, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KRecentFilesAction_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KRecentFilesAction, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KRecentFilesAction_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QObject, QEvent) callconv(.c) bool) void {
        qtc.KRecentFilesAction_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KRecentFilesAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KRecentFilesAction_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KRecentFilesAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KRecentFilesAction_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QTimerEvent) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KRecentFilesAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KRecentFilesAction_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KRecentFilesAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KRecentFilesAction_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QChildEvent) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KRecentFilesAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KRecentFilesAction_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KRecentFilesAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KRecentFilesAction_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QEvent) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KRecentFilesAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KRecentFilesAction_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KRecentFilesAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KRecentFilesAction_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QMetaMethod) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KRecentFilesAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KRecentFilesAction_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KRecentFilesAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KRecentFilesAction_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QMetaMethod) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `slotToggled` instead
    ///
    pub const SlotToggled = slotToggled;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` param1: bool `
    ///
    pub fn slotToggled(self: KRecentFilesAction, param1: bool) void {
        qtc.KRecentFilesAction_SlotToggled(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `superSlotToggled` instead
    ///
    pub const SuperSlotToggled = superSlotToggled;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` param1: bool `
    ///
    pub fn superSlotToggled(self: KRecentFilesAction, param1: bool) void {
        qtc.KRecentFilesAction_SuperSlotToggled(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onSlotToggled` instead
    ///
    pub const OnSlotToggled = onSlotToggled;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, param1: bool) callconv(.c) void `
    ///
    pub fn onSlotToggled(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, bool) callconv(.c) void) void {
        qtc.KRecentFilesAction_OnSlotToggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createdWidgets` instead
    ///
    pub const CreatedWidgets = createdWidgets;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn createdWidgets(self: KRecentFilesAction, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KRecentFilesAction_CreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("KRecentFilesAction.createdWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superCreatedWidgets` instead
    ///
    pub const SuperCreatedWidgets = superCreatedWidgets;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superCreatedWidgets(self: KRecentFilesAction, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KRecentFilesAction_SuperCreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("KRecentFilesAction.createdWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onCreatedWidgets` instead
    ///
    pub const OnCreatedWidgets = onCreatedWidgets;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QWidget `
    ///
    pub fn onCreatedWidgets(self: KRecentFilesAction, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KRecentFilesAction_OnCreatedWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn sender(self: KRecentFilesAction) QObject {
        return .{ .ptr = qtc.KRecentFilesAction_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn superSender(self: KRecentFilesAction) QObject {
        return .{ .ptr = qtc.KRecentFilesAction_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KRecentFilesAction, callback: *const fn () callconv(.c) QObject) void {
        qtc.KRecentFilesAction_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn senderSignalIndex(self: KRecentFilesAction) i32 {
        return qtc.KRecentFilesAction_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KRecentFilesAction `
    ///
    pub fn superSenderSignalIndex(self: KRecentFilesAction) i32 {
        return qtc.KRecentFilesAction_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KRecentFilesAction, callback: *const fn () callconv(.c) i32) void {
        qtc.KRecentFilesAction_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KRecentFilesAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KRecentFilesAction_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KRecentFilesAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KRecentFilesAction_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, [*:0]const u8) callconv(.c) i32) void {
        qtc.KRecentFilesAction_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KRecentFilesAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KRecentFilesAction_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KRecentFilesAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KRecentFilesAction_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KRecentFilesAction`
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, QMetaMethod) callconv(.c) bool) void {
        qtc.KRecentFilesAction_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesAction `
    ///
    /// ` callback: *const fn (self: KRecentFilesAction, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KRecentFilesAction, callback: *const fn (KRecentFilesAction, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesaction.html#dtor.KRecentFilesAction)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KRecentFilesAction `
    ///
    pub fn delete(self: KRecentFilesAction) void {
        qtc.KRecentFilesAction_Delete(@ptrCast(self.ptr));
    }
};
