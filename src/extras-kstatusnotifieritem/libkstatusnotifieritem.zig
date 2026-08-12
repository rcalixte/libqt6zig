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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KStatusNotifierItem object in C++ memory
    ///
    pub fn new() KStatusNotifierItem {
        return .{ .ptr = qtc.KStatusNotifierItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KStatusNotifierItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _id: []const u8 `
    ///
    pub fn new2(_id: []const u8) KStatusNotifierItem {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        return .{ .ptr = qtc.KStatusNotifierItem_new2(id_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KStatusNotifierItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) KStatusNotifierItem {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KStatusNotifierItem_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KStatusNotifierItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _id: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_id: []const u8, _parent: anytype) KStatusNotifierItem {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KStatusNotifierItem_new4(id_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn metaObject(self: KStatusNotifierItem) QMetaObject {
        return .{ .ptr = qtc.KStatusNotifierItem_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KStatusNotifierItem, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KStatusNotifierItem_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn superMetaObject(self: KStatusNotifierItem) QMetaObject {
        return .{ .ptr = qtc.KStatusNotifierItem_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KStatusNotifierItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KStatusNotifierItem_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KStatusNotifierItem_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KStatusNotifierItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KStatusNotifierItem_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KStatusNotifierItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KStatusNotifierItem_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KStatusNotifierItem_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KStatusNotifierItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KStatusNotifierItem_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCategory` instead
    ///
    pub const SetCategory = setCategory;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _category: kstatusnotifieritem_enums.ItemCategory `
    ///
    pub fn setCategory(self: KStatusNotifierItem, _category: i32) void {
        qtc.KStatusNotifierItem_SetCategory(@ptrCast(self.ptr), @bitCast(_category));
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

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
    pub fn category(self: KStatusNotifierItem) i32 {
        return qtc.KStatusNotifierItem_Category(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: KStatusNotifierItem, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.KStatusNotifierItem_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStatus` instead
    ///
    pub const SetStatus = setStatus;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _status: kstatusnotifieritem_enums.ItemStatus `
    ///
    pub fn setStatus(self: KStatusNotifierItem, _status: i32) void {
        qtc.KStatusNotifierItem_SetStatus(@ptrCast(self.ptr), @bitCast(_status));
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

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
    pub fn status(self: KStatusNotifierItem) i32 {
        return qtc.KStatusNotifierItem_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIconByName` instead
    ///
    pub const SetIconByName = setIconByName;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setIconByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setIconByName(self: KStatusNotifierItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStatusNotifierItem_SetIconByName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIconByPixmap` instead
    ///
    pub const SetIconByPixmap = setIconByPixmap;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setIconByPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setIconByPixmap(self: KStatusNotifierItem, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KStatusNotifierItem_SetIconByPixmap(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `iconPixmap` instead
    ///
    pub const IconPixmap = iconPixmap;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#iconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn iconPixmap(self: KStatusNotifierItem) QIcon {
        return .{ .ptr = qtc.KStatusNotifierItem_IconPixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOverlayIconByName` instead
    ///
    pub const SetOverlayIconByName = setOverlayIconByName;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setOverlayIconByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setOverlayIconByName(self: KStatusNotifierItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStatusNotifierItem_SetOverlayIconByName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `overlayIconName` instead
    ///
    pub const OverlayIconName = overlayIconName;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#overlayIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn overlayIconName(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_OverlayIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.overlayIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOverlayIconByPixmap` instead
    ///
    pub const SetOverlayIconByPixmap = setOverlayIconByPixmap;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setOverlayIconByPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setOverlayIconByPixmap(self: KStatusNotifierItem, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KStatusNotifierItem_SetOverlayIconByPixmap(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `overlayIconPixmap` instead
    ///
    pub const OverlayIconPixmap = overlayIconPixmap;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#overlayIconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn overlayIconPixmap(self: KStatusNotifierItem) QIcon {
        return .{ .ptr = qtc.KStatusNotifierItem_OverlayIconPixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAttentionIconByName` instead
    ///
    pub const SetAttentionIconByName = setAttentionIconByName;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAttentionIconByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAttentionIconByName(self: KStatusNotifierItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStatusNotifierItem_SetAttentionIconByName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `attentionIconName` instead
    ///
    pub const AttentionIconName = attentionIconName;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#attentionIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn attentionIconName(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_AttentionIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.attentionIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttentionIconByPixmap` instead
    ///
    pub const SetAttentionIconByPixmap = setAttentionIconByPixmap;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAttentionIconByPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setAttentionIconByPixmap(self: KStatusNotifierItem, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KStatusNotifierItem_SetAttentionIconByPixmap(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `attentionIconPixmap` instead
    ///
    pub const AttentionIconPixmap = attentionIconPixmap;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#attentionIconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn attentionIconPixmap(self: KStatusNotifierItem) QIcon {
        return .{ .ptr = qtc.KStatusNotifierItem_AttentionIconPixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAttentionMovieByName` instead
    ///
    pub const SetAttentionMovieByName = setAttentionMovieByName;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAttentionMovieByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAttentionMovieByName(self: KStatusNotifierItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStatusNotifierItem_SetAttentionMovieByName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `attentionMovieName` instead
    ///
    pub const AttentionMovieName = attentionMovieName;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#attentionMovieName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn attentionMovieName(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_AttentionMovieName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.attentionMovieName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _iconName: []const u8 `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` subTitle: []const u8 `
    ///
    pub fn setToolTip(self: KStatusNotifierItem, _iconName: []const u8, _title: []const u8, subTitle: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const subTitle_str = qtc.libqt_string{
            .len = subTitle.len,
            .data = subTitle.ptr,
        };
        qtc.KStatusNotifierItem_SetToolTip(@ptrCast(self.ptr), iconName_str, title_str, subTitle_str);
    }

    /// ### DEPRECATED: Use `setToolTip2` instead
    ///
    pub const SetToolTip2 = setToolTip2;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` icon: QIcon `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` subTitle: []const u8 `
    ///
    pub fn setToolTip2(self: KStatusNotifierItem, icon: anytype, _title: []const u8, subTitle: []const u8) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const subTitle_str = qtc.libqt_string{
            .len = subTitle.len,
            .data = subTitle.ptr,
        };
        qtc.KStatusNotifierItem_SetToolTip2(@ptrCast(self.ptr), @ptrCast(icon.ptr), title_str, subTitle_str);
    }

    /// ### DEPRECATED: Use `setToolTipIconByName` instead
    ///
    pub const SetToolTipIconByName = setToolTipIconByName;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipIconByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setToolTipIconByName(self: KStatusNotifierItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStatusNotifierItem_SetToolTipIconByName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `toolTipIconName` instead
    ///
    pub const ToolTipIconName = toolTipIconName;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTipIconName(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_ToolTipIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.toolTipIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTipIconByPixmap` instead
    ///
    pub const SetToolTipIconByPixmap = setToolTipIconByPixmap;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipIconByPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setToolTipIconByPixmap(self: KStatusNotifierItem, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KStatusNotifierItem_SetToolTipIconByPixmap(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `toolTipIconPixmap` instead
    ///
    pub const ToolTipIconPixmap = toolTipIconPixmap;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipIconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn toolTipIconPixmap(self: KStatusNotifierItem) QIcon {
        return .{ .ptr = qtc.KStatusNotifierItem_ToolTipIconPixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setToolTipTitle` instead
    ///
    pub const SetToolTipTitle = setToolTipTitle;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setToolTipTitle(self: KStatusNotifierItem, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.KStatusNotifierItem_SetToolTipTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `toolTipTitle` instead
    ///
    pub const ToolTipTitle = toolTipTitle;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTipTitle(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_ToolTipTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.toolTipTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTipSubTitle` instead
    ///
    pub const SetToolTipSubTitle = setToolTipSubTitle;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipSubTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` subTitle: []const u8 `
    ///
    pub fn setToolTipSubTitle(self: KStatusNotifierItem, subTitle: []const u8) void {
        const subTitle_str = qtc.libqt_string{
            .len = subTitle.len,
            .data = subTitle.ptr,
        };
        qtc.KStatusNotifierItem_SetToolTipSubTitle(@ptrCast(self.ptr), subTitle_str);
    }

    /// ### DEPRECATED: Use `toolTipSubTitle` instead
    ///
    pub const ToolTipSubTitle = toolTipSubTitle;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipSubTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTipSubTitle(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_ToolTipSubTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.toolTipSubTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContextMenu` instead
    ///
    pub const SetContextMenu = setContextMenu;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` menu: QMenu `
    ///
    pub fn setContextMenu(self: KStatusNotifierItem, menu: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.KStatusNotifierItem_SetContextMenu(@ptrCast(self.ptr), @ptrCast(menu.ptr));
    }

    /// ### DEPRECATED: Use `contextMenu` instead
    ///
    pub const ContextMenu = contextMenu;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#contextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn contextMenu(self: KStatusNotifierItem) QMenu {
        return .{ .ptr = qtc.KStatusNotifierItem_ContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAssociatedWindow` instead
    ///
    pub const SetAssociatedWindow = setAssociatedWindow;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAssociatedWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` window: QWindow `
    ///
    pub fn setAssociatedWindow(self: KStatusNotifierItem, window: anytype) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        qtc.KStatusNotifierItem_SetAssociatedWindow(@ptrCast(self.ptr), @ptrCast(window.ptr));
    }

    /// ### DEPRECATED: Use `associatedWindow` instead
    ///
    pub const AssociatedWindow = associatedWindow;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#associatedWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn associatedWindow(self: KStatusNotifierItem) QWindow {
        return .{ .ptr = qtc.KStatusNotifierItem_AssociatedWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionCollection` instead
    ///
    pub const ActionCollection = actionCollection;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#actionCollection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actionCollection(self: KStatusNotifierItem, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KStatusNotifierItem_ActionCollection(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KStatusNotifierItem.actionCollection: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _action: QAction `
    ///
    pub fn addAction(self: KStatusNotifierItem, name: []const u8, _action: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KStatusNotifierItem_AddAction(@ptrCast(self.ptr), name_str, @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn removeAction(self: KStatusNotifierItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStatusNotifierItem_RemoveAction(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn action(self: KStatusNotifierItem, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KStatusNotifierItem_Action(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setStandardActionsEnabled` instead
    ///
    pub const SetStandardActionsEnabled = setStandardActionsEnabled;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setStandardActionsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setStandardActionsEnabled(self: KStatusNotifierItem, enabled: bool) void {
        qtc.KStatusNotifierItem_SetStandardActionsEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `standardActionsEnabled` instead
    ///
    pub const StandardActionsEnabled = standardActionsEnabled;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#standardActionsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn standardActionsEnabled(self: KStatusNotifierItem) bool {
        return qtc.KStatusNotifierItem_StandardActionsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMessage` instead
    ///
    pub const ShowMessage = showMessage;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#showMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn showMessage(self: KStatusNotifierItem, _title: []const u8, message: []const u8, icon: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
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

    /// ### DEPRECATED: Use `providedToken` instead
    ///
    pub const ProvidedToken = providedToken;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#providedToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn providedToken(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStatusNotifierItem_ProvidedToken(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.providedToken: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `abortQuit` instead
    ///
    pub const AbortQuit = abortQuit;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#abortQuit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn abortQuit(self: KStatusNotifierItem) void {
        qtc.KStatusNotifierItem_AbortQuit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activate` instead
    ///
    pub const Activate = activate;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` pos: QPoint `
    ///
    pub fn activate(self: KStatusNotifierItem, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.KStatusNotifierItem_Activate(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `onActivate` instead
    ///
    pub const OnActivate = onActivate;

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
    pub fn onActivate(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QPoint) callconv(.c) void) void {
        qtc.KStatusNotifierItem_OnActivate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActivate` instead
    ///
    pub const SuperActivate = superActivate;

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
    pub fn superActivate(self: KStatusNotifierItem, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.KStatusNotifierItem_SuperActivate(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `hideAssociatedWindow` instead
    ///
    pub const HideAssociatedWindow = hideAssociatedWindow;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#hideAssociatedWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn hideAssociatedWindow(self: KStatusNotifierItem) void {
        qtc.KStatusNotifierItem_HideAssociatedWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scrollRequested` instead
    ///
    pub const ScrollRequested = scrollRequested;

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
    pub fn scrollRequested(self: KStatusNotifierItem, delta: i32, orientation: i32) void {
        qtc.KStatusNotifierItem_ScrollRequested(@ptrCast(self.ptr), @bitCast(delta), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `onScrollRequested` instead
    ///
    pub const OnScrollRequested = onScrollRequested;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#scrollRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, delta: i32, orientation: qnamespace_enums.Orientation) callconv(.c) void `
    ///
    pub fn onScrollRequested(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, i32, i32) callconv(.c) void) void {
        qtc.KStatusNotifierItem_Connect_ScrollRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activateRequested` instead
    ///
    pub const ActivateRequested = activateRequested;

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
    pub fn activateRequested(self: KStatusNotifierItem, active: bool, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.KStatusNotifierItem_ActivateRequested(@ptrCast(self.ptr), active, @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `onActivateRequested` instead
    ///
    pub const OnActivateRequested = onActivateRequested;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activateRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, active: bool, pos: QPoint) callconv(.c) void `
    ///
    pub fn onActivateRequested(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, bool, QPoint) callconv(.c) void) void {
        qtc.KStatusNotifierItem_Connect_ActivateRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `secondaryActivateRequested` instead
    ///
    pub const SecondaryActivateRequested = secondaryActivateRequested;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#secondaryActivateRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` pos: QPoint `
    ///
    pub fn secondaryActivateRequested(self: KStatusNotifierItem, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.KStatusNotifierItem_SecondaryActivateRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `onSecondaryActivateRequested` instead
    ///
    pub const OnSecondaryActivateRequested = onSecondaryActivateRequested;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#secondaryActivateRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, pos: QPoint) callconv(.c) void `
    ///
    pub fn onSecondaryActivateRequested(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QPoint) callconv(.c) void) void {
        qtc.KStatusNotifierItem_Connect_SecondaryActivateRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `quitRequested` instead
    ///
    pub const QuitRequested = quitRequested;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#quitRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn quitRequested(self: KStatusNotifierItem) void {
        qtc.KStatusNotifierItem_QuitRequested(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onQuitRequested` instead
    ///
    pub const OnQuitRequested = onQuitRequested;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#quitRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem) callconv(.c) void `
    ///
    pub fn onQuitRequested(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem) callconv(.c) void) void {
        qtc.KStatusNotifierItem_Connect_QuitRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KStatusNotifierItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KStatusNotifierItem_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QObject, QEvent) callconv(.c) bool) void {
        qtc.KStatusNotifierItem_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KStatusNotifierItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KStatusNotifierItem_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `showMessage4` instead
    ///
    pub const ShowMessage4 = showMessage4;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#showMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` icon: []const u8 `
    ///
    /// ` timeout: i32 `
    ///
    pub fn showMessage4(self: KStatusNotifierItem, _title: []const u8, message: []const u8, icon: []const u8, timeout: i32) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
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

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: KStatusNotifierItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusNotifierItem.objectName: Memory allocation failed");
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KStatusNotifierItem, name: []const u8) void {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn isWidgetType(self: KStatusNotifierItem) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn isWindowType(self: KStatusNotifierItem) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn isQuickItemType(self: KStatusNotifierItem) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn signalsBlocked(self: KStatusNotifierItem) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KStatusNotifierItem, b: bool) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn thread(self: KStatusNotifierItem) QThread {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KStatusNotifierItem, _thread: anytype) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KStatusNotifierItem, interval: i32) i32 {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KStatusNotifierItem, time: i64) i32 {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _id: i32 `
    ///
    pub fn killTimer(self: KStatusNotifierItem, _id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(_id));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KStatusNotifierItem, _id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(_id));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KStatusNotifierItem, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KStatusNotifierItem.children: Memory allocation failed");
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KStatusNotifierItem, _parent: anytype) void {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KStatusNotifierItem, filterObj: anytype) void {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KStatusNotifierItem, obj: anytype) void {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KStatusNotifierItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn disconnect3(self: KStatusNotifierItem) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KStatusNotifierItem, receiver: anytype) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn dumpObjectTree(self: KStatusNotifierItem) void {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn dumpObjectInfo(self: KStatusNotifierItem) void {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KStatusNotifierItem, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KStatusNotifierItem, name: [:0]const u8) QVariant {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KStatusNotifierItem, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KStatusNotifierItem.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KStatusNotifierItem.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn bindingStorage(self: KStatusNotifierItem) QBindingStorage {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn bindingStorage2(self: KStatusNotifierItem) QBindingStorage {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn destroyed(self: KStatusNotifierItem) void {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem) callconv(.c) void) void {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn parent(self: KStatusNotifierItem) QObject {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KStatusNotifierItem, classname: [:0]const u8) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn deleteLater(self: KStatusNotifierItem) void {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KStatusNotifierItem, interval: i32, timerType: i32) i32 {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KStatusNotifierItem, time: i64, timerType: i32) i32 {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KStatusNotifierItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KStatusNotifierItem, signal: [:0]const u8) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KStatusNotifierItem, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KStatusNotifierItem, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KStatusNotifierItem, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KStatusNotifierItem, param1: anytype) void {
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: KStatusNotifierItem, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KStatusNotifierItem_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KStatusNotifierItem, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KStatusNotifierItem_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QEvent) callconv(.c) bool) void {
        qtc.KStatusNotifierItem_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KStatusNotifierItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KStatusNotifierItem_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KStatusNotifierItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KStatusNotifierItem_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QTimerEvent) callconv(.c) void) void {
        qtc.KStatusNotifierItem_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KStatusNotifierItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KStatusNotifierItem_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KStatusNotifierItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KStatusNotifierItem_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QChildEvent) callconv(.c) void) void {
        qtc.KStatusNotifierItem_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KStatusNotifierItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KStatusNotifierItem_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KStatusNotifierItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KStatusNotifierItem_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QEvent) callconv(.c) void) void {
        qtc.KStatusNotifierItem_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KStatusNotifierItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStatusNotifierItem_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KStatusNotifierItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStatusNotifierItem_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QMetaMethod) callconv(.c) void) void {
        qtc.KStatusNotifierItem_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KStatusNotifierItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStatusNotifierItem_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KStatusNotifierItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStatusNotifierItem_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QMetaMethod) callconv(.c) void) void {
        qtc.KStatusNotifierItem_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn sender(self: KStatusNotifierItem) QObject {
        return .{ .ptr = qtc.KStatusNotifierItem_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn superSender(self: KStatusNotifierItem) QObject {
        return .{ .ptr = qtc.KStatusNotifierItem_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KStatusNotifierItem, callback: *const fn () callconv(.c) QObject) void {
        qtc.KStatusNotifierItem_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn senderSignalIndex(self: KStatusNotifierItem) i32 {
        return qtc.KStatusNotifierItem_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    pub fn superSenderSignalIndex(self: KStatusNotifierItem) i32 {
        return qtc.KStatusNotifierItem_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KStatusNotifierItem, callback: *const fn () callconv(.c) i32) void {
        qtc.KStatusNotifierItem_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KStatusNotifierItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KStatusNotifierItem_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KStatusNotifierItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KStatusNotifierItem_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, [*:0]const u8) callconv(.c) i32) void {
        qtc.KStatusNotifierItem_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KStatusNotifierItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KStatusNotifierItem_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KStatusNotifierItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KStatusNotifierItem_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStatusNotifierItem`
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, QMetaMethod) callconv(.c) bool) void {
        qtc.KStatusNotifierItem_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusNotifierItem `
    ///
    /// ` callback: *const fn (self: KStatusNotifierItem, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KStatusNotifierItem, callback: *const fn (KStatusNotifierItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#dtor.KStatusNotifierItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KStatusNotifierItem `
    ///
    pub fn delete(self: KStatusNotifierItem) void {
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
