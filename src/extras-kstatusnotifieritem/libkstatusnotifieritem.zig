const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIcon = @import("libqt6").QIcon;
const QMenu = @import("libqt6").QMenu;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWindow = @import("libqt6").QWindow;
const kstatusnotifieritem_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html)
pub const KStatusNotifierItem = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStatusNotifierItem,

    pub const _is_KStatusNotifierItem = {};
    pub const _is_QObject = {};

    /// New constructs a new KStatusNotifierItem object.
    ///
    pub fn New() KStatusNotifierItem {
        return .{ .ptr = qtc.KStatusNotifierItem_new() };
    }

    /// New2 constructs a new KStatusNotifierItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` id: []const u8 `
    ///
    pub fn New2(id: []const u8) KStatusNotifierItem {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return .{ .ptr = qtc.KStatusNotifierItem_new2(id_str) };
    }

    /// New3 constructs a new KStatusNotifierItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) KStatusNotifierItem {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStatusNotifierItem_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new KStatusNotifierItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` id: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(id: []const u8, parent: anytype) KStatusNotifierItem {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStatusNotifierItem_new4(id_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn MetaObject(self: KStatusNotifierItem) QMetaObject {
        return .{ .ptr = qtc.KStatusNotifierItem_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KStatusNotifierItem, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KStatusNotifierItem_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn SuperMetaObject(self: KStatusNotifierItem) QMetaObject {
        return .{ .ptr = qtc.KStatusNotifierItem_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KStatusNotifierItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KStatusNotifierItem_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KStatusNotifierItem_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KStatusNotifierItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KStatusNotifierItem_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KStatusNotifierItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KStatusNotifierItem_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KStatusNotifierItem_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KStatusNotifierItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KStatusNotifierItem_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` category: kstatusnotifieritem_enums.ItemCategory `
    ///
    pub fn SetCategory(self: KStatusNotifierItem, category: i32) void {
        qtc.KStatusNotifierItem_SetCategory(@ptrCast(self.ptr), @bitCast(category));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ## Returns:
    ///
    /// ` kstatusnotifieritem_enums.ItemCategory `
    ///
    pub fn Category(self: KStatusNotifierItem) i32 {
        return qtc.KStatusNotifierItem_Category(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: KStatusNotifierItem, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KStatusNotifierItem_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` status: kstatusnotifieritem_enums.ItemStatus `
    ///
    pub fn SetStatus(self: KStatusNotifierItem, status: i32) void {
        qtc.KStatusNotifierItem_SetStatus(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ## Returns:
    ///
    /// ` kstatusnotifieritem_enums.ItemStatus `
    ///
    pub fn Status(self: KStatusNotifierItem) i32 {
        return qtc.KStatusNotifierItem_Status(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setIconByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetIconByName(self: KStatusNotifierItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStatusNotifierItem_SetIconByName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setIconByPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIconByPixmap(self: KStatusNotifierItem, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KStatusNotifierItem_SetIconByPixmap(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#iconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn IconPixmap(self: KStatusNotifierItem) QIcon {
        return .{ .ptr = qtc.KStatusNotifierItem_IconPixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setOverlayIconByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetOverlayIconByName(self: KStatusNotifierItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStatusNotifierItem_SetOverlayIconByName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#overlayIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OverlayIconName(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_OverlayIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.OverlayIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setOverlayIconByPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetOverlayIconByPixmap(self: KStatusNotifierItem, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KStatusNotifierItem_SetOverlayIconByPixmap(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#overlayIconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn OverlayIconPixmap(self: KStatusNotifierItem) QIcon {
        return .{ .ptr = qtc.KStatusNotifierItem_OverlayIconPixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAttentionIconByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAttentionIconByName(self: KStatusNotifierItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStatusNotifierItem_SetAttentionIconByName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#attentionIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttentionIconName(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_AttentionIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.AttentionIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAttentionIconByPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetAttentionIconByPixmap(self: KStatusNotifierItem, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KStatusNotifierItem_SetAttentionIconByPixmap(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#attentionIconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn AttentionIconPixmap(self: KStatusNotifierItem) QIcon {
        return .{ .ptr = qtc.KStatusNotifierItem_AttentionIconPixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAttentionMovieByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAttentionMovieByName(self: KStatusNotifierItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStatusNotifierItem_SetAttentionMovieByName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#attentionMovieName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttentionMovieName(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_AttentionMovieName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.AttentionMovieName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` subTitle: []const u8 `
    ///
    pub fn SetToolTip(self: KStatusNotifierItem, iconName: []const u8, title: []const u8, subTitle: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const subTitle_str = qtc.libqt_string{
            .len = subTitle.len,
            .data = subTitle.ptr,
        };
        qtc.KStatusNotifierItem_SetToolTip(@ptrCast(self.ptr), iconName_str, title_str, subTitle_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` icon: QIcon `
    ///
    /// ` title: []const u8 `
    ///
    /// ` subTitle: []const u8 `
    ///
    pub fn SetToolTip2(self: KStatusNotifierItem, icon: anytype, title: []const u8, subTitle: []const u8) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const subTitle_str = qtc.libqt_string{
            .len = subTitle.len,
            .data = subTitle.ptr,
        };
        qtc.KStatusNotifierItem_SetToolTip2(@ptrCast(self.ptr), @ptrCast(icon.ptr), title_str, subTitle_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipIconByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetToolTipIconByName(self: KStatusNotifierItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStatusNotifierItem_SetToolTipIconByName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTipIconName(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_ToolTipIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.ToolTipIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipIconByPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetToolTipIconByPixmap(self: KStatusNotifierItem, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KStatusNotifierItem_SetToolTipIconByPixmap(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipIconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn ToolTipIconPixmap(self: KStatusNotifierItem) QIcon {
        return .{ .ptr = qtc.KStatusNotifierItem_ToolTipIconPixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetToolTipTitle(self: KStatusNotifierItem, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KStatusNotifierItem_SetToolTipTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTipTitle(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_ToolTipTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.ToolTipTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipSubTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` subTitle: []const u8 `
    ///
    pub fn SetToolTipSubTitle(self: KStatusNotifierItem, subTitle: []const u8) void {
        const subTitle_str = qtc.libqt_string{
            .len = subTitle.len,
            .data = subTitle.ptr,
        };
        qtc.KStatusNotifierItem_SetToolTipSubTitle(@ptrCast(self.ptr), subTitle_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipSubTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTipSubTitle(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_ToolTipSubTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.ToolTipSubTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` menu: QMenu `
    ///
    pub fn SetContextMenu(self: KStatusNotifierItem, menu: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.KStatusNotifierItem_SetContextMenu(@ptrCast(self.ptr), @ptrCast(menu.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#contextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn ContextMenu(self: KStatusNotifierItem) QMenu {
        return .{ .ptr = qtc.KStatusNotifierItem_ContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAssociatedWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` window: QWindow `
    ///
    pub fn SetAssociatedWindow(self: KStatusNotifierItem, window: anytype) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        qtc.KStatusNotifierItem_SetAssociatedWindow(@ptrCast(self.ptr), @ptrCast(window.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#associatedWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn AssociatedWindow(self: KStatusNotifierItem) QWindow {
        return .{ .ptr = qtc.KStatusNotifierItem_AssociatedWindow(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#actionCollection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionCollection(self: KStatusNotifierItem, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KStatusNotifierItem_ActionCollection(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kstatusnotifieritem.ActionCollection: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KStatusNotifierItem, name: []const u8, action: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KStatusNotifierItem_AddAction(@ptrCast(self.ptr), name_str, @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn RemoveAction(self: KStatusNotifierItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStatusNotifierItem_RemoveAction(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Action(self: KStatusNotifierItem, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KStatusNotifierItem_Action(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setStandardActionsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetStandardActionsEnabled(self: KStatusNotifierItem, enabled: bool) void {
        qtc.KStatusNotifierItem_SetStandardActionsEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#standardActionsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn StandardActionsEnabled(self: KStatusNotifierItem) bool {
        return qtc.KStatusNotifierItem_StandardActionsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#showMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` title: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn ShowMessage(self: KStatusNotifierItem, title: []const u8, message: []const u8, icon: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.KStatusNotifierItem_ShowMessage(@ptrCast(self.ptr), title_str, message_str, icon_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#providedToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProvidedToken(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_ProvidedToken(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.ProvidedToken: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#abortQuit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn AbortQuit(self: KStatusNotifierItem) void {
        qtc.KStatusNotifierItem_AbortQuit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` pos: QPoint `
    ///
    pub fn Activate(self: KStatusNotifierItem, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.KStatusNotifierItem_Activate(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnActivate(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QPoint) callconv(.c) void) void {
        qtc.KStatusNotifierItem_OnActivate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActivate` instead
    ///
    pub const QBaseActivate = SuperActivate;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SuperActivate(self: KStatusNotifierItem, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.KStatusNotifierItem_SuperActivate(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#hideAssociatedWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn HideAssociatedWindow(self: KStatusNotifierItem) void {
        qtc.KStatusNotifierItem_HideAssociatedWindow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#scrollRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` delta: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn ScrollRequested(self: KStatusNotifierItem, delta: i32, orientation: i32) void {
        qtc.KStatusNotifierItem_ScrollRequested(@ptrCast(self.ptr), @bitCast(delta), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#scrollRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, delta: i32, orientation: qnamespace_enums.Orientation) callconv(.c) void `
    ///
    pub fn OnScrollRequested(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, i32, i32) callconv(.c) void) void {
        qtc.KStatusNotifierItem_Connect_ScrollRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activateRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` active: bool `
    ///
    /// ` pos: QPoint `
    ///
    pub fn ActivateRequested(self: KStatusNotifierItem, active: bool, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.KStatusNotifierItem_ActivateRequested(@ptrCast(self.ptr), active, @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activateRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, active: bool, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnActivateRequested(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, bool, QPoint) callconv(.c) void) void {
        qtc.KStatusNotifierItem_Connect_ActivateRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#secondaryActivateRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SecondaryActivateRequested(self: KStatusNotifierItem, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.KStatusNotifierItem_SecondaryActivateRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#secondaryActivateRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnSecondaryActivateRequested(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QPoint) callconv(.c) void) void {
        qtc.KStatusNotifierItem_Connect_SecondaryActivateRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#quitRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn QuitRequested(self: KStatusNotifierItem) void {
        qtc.KStatusNotifierItem_QuitRequested(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#quitRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem) callconv(.c) void `
    ///
    pub fn OnQuitRequested(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem) callconv(.c) void) void {
        qtc.KStatusNotifierItem_Connect_QuitRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KStatusNotifierItem, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KStatusNotifierItem_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QObject, QEvent) callconv(.c) bool) void {
        qtc.KStatusNotifierItem_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KStatusNotifierItem, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KStatusNotifierItem_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#showMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` title: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` icon: []const u8 `
    ///
    /// ` timeout: i32 `
    ///
    pub fn ShowMessage4(self: KStatusNotifierItem, title: []const u8, message: []const u8, icon: []const u8, timeout: i32) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.KStatusNotifierItem_ShowMessage4(@ptrCast(self.ptr), title_str, message_str, icon_str, @bitCast(timeout));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusnotifieritem.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KStatusNotifierItem, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn IsWidgetType(self: KStatusNotifierItem) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn IsWindowType(self: KStatusNotifierItem) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn IsQuickItemType(self: KStatusNotifierItem) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn SignalsBlocked(self: KStatusNotifierItem) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KStatusNotifierItem, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn Thread(self: KStatusNotifierItem) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KStatusNotifierItem, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KStatusNotifierItem, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KStatusNotifierItem, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KStatusNotifierItem, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KStatusNotifierItem, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KStatusNotifierItem, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kstatusnotifieritem.Children: Memory allocation failed");
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KStatusNotifierItem, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KStatusNotifierItem, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KStatusNotifierItem, obj: anytype) void {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KStatusNotifierItem, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn Disconnect3(self: KStatusNotifierItem) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KStatusNotifierItem, receiver: anytype) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn DumpObjectTree(self: KStatusNotifierItem) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn DumpObjectInfo(self: KStatusNotifierItem) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KStatusNotifierItem, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KStatusNotifierItem, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KStatusNotifierItem, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kstatusnotifieritem.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kstatusnotifieritem.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn BindingStorage(self: KStatusNotifierItem) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn BindingStorage2(self: KStatusNotifierItem) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn Destroyed(self: KStatusNotifierItem) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn Parent(self: KStatusNotifierItem) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KStatusNotifierItem, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn DeleteLater(self: KStatusNotifierItem) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KStatusNotifierItem, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KStatusNotifierItem, time: i64, timerType: i32) i32 {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KStatusNotifierItem, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KStatusNotifierItem, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KStatusNotifierItem, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KStatusNotifierItem, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KStatusNotifierItem, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KStatusNotifierItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KStatusNotifierItem, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KStatusNotifierItem_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KStatusNotifierItem, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KStatusNotifierItem_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QEvent) callconv(.c) bool) void {
        qtc.KStatusNotifierItem_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KStatusNotifierItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KStatusNotifierItem_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KStatusNotifierItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KStatusNotifierItem_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QTimerEvent) callconv(.c) void) void {
        qtc.KStatusNotifierItem_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KStatusNotifierItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KStatusNotifierItem_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KStatusNotifierItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KStatusNotifierItem_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QChildEvent) callconv(.c) void) void {
        qtc.KStatusNotifierItem_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KStatusNotifierItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KStatusNotifierItem_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KStatusNotifierItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KStatusNotifierItem_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QEvent) callconv(.c) void) void {
        qtc.KStatusNotifierItem_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KStatusNotifierItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStatusNotifierItem_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KStatusNotifierItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStatusNotifierItem_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QMetaMethod) callconv(.c) void) void {
        qtc.KStatusNotifierItem_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KStatusNotifierItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStatusNotifierItem_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KStatusNotifierItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStatusNotifierItem_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QMetaMethod) callconv(.c) void) void {
        qtc.KStatusNotifierItem_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn Sender(self: KStatusNotifierItem) QObject {
        return .{ .ptr = qtc.KStatusNotifierItem_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn SuperSender(self: KStatusNotifierItem) QObject {
        return .{ .ptr = qtc.KStatusNotifierItem_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KStatusNotifierItem, callback: *const fn () callconv(.c) QObject) void {
        qtc.KStatusNotifierItem_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn SenderSignalIndex(self: KStatusNotifierItem) i32 {
        return qtc.KStatusNotifierItem_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn SuperSenderSignalIndex(self: KStatusNotifierItem) i32 {
        return qtc.KStatusNotifierItem_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KStatusNotifierItem, callback: *const fn () callconv(.c) i32) void {
        qtc.KStatusNotifierItem_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KStatusNotifierItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KStatusNotifierItem_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KStatusNotifierItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KStatusNotifierItem_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, [*:0]const u8) callconv(.c) i32) void {
        qtc.KStatusNotifierItem_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KStatusNotifierItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KStatusNotifierItem_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KStatusNotifierItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KStatusNotifierItem_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QMetaMethod) callconv(.c) bool) void {
        qtc.KStatusNotifierItem_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#dtor.KStatusNotifierItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn Delete(self: KStatusNotifierItem) void {
        qtc.KStatusNotifierItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#public-types)
pub const enums = struct {
    pub const ItemStatus = enum(i32) {
        pub const Passive: i32 = 1;
        pub const Active: i32 = 2;
        pub const NeedsAttention: i32 = 3;
    };

    pub const ItemCategory = enum(i32) {
        pub const ApplicationStatus: i32 = 1;
        pub const Communications: i32 = 2;
        pub const SystemServices: i32 = 3;
        pub const Hardware: i32 = 4;
        pub const Reserved: i32 = 129;
    };
};
