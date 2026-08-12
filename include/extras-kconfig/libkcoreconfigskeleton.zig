const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfig = @import("libqt6").KConfig;
const KConfigGroup = @import("libqt6").KConfigGroup;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const kconfigbase_enums = @import("libkconfigbase.zig").enums;
const kcoreconfigskeleton_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html)
pub const KConfigSkeletonItem = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigSkeletonItem,

    pub const _is_KConfigSkeletonItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KConfigSkeletonItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn new(_group: []const u8, _key: []const u8) KConfigSkeletonItem {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KConfigSkeletonItem_new(_group_str, _key_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KConfigSkeletonItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KConfigSkeletonItem `
    ///
    pub fn new2(param1: anytype) KConfigSkeletonItem {
        comptime _ = @TypeOf(param1)._is_KConfigSkeletonItem;
        return .{ .ptr = qtc.KConfigSkeletonItem_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `setGroup` instead
    ///
    pub const SetGroup = setGroup;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn setGroup(self: KConfigSkeletonItem, _group: []const u8) void {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigSkeletonItem_SetGroup(@ptrCast(self.ptr), _group_str);
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn group(self: KConfigSkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigSkeletonItem.group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setGroup2` instead
    ///
    pub const SetGroup2 = setGroup2;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` cg: KConfigGroup `
    ///
    pub fn setGroup2(self: KConfigSkeletonItem, cg: anytype) void {
        comptime _ = @TypeOf(cg)._is_KConfigGroup;
        qtc.KConfigSkeletonItem_SetGroup2(@ptrCast(self.ptr), @ptrCast(cg.ptr));
    }

    /// ### DEPRECATED: Use `configGroup` instead
    ///
    pub const ConfigGroup = configGroup;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#configGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` config: KConfig `
    ///
    pub fn configGroup(self: KConfigSkeletonItem, config: anytype) KConfigGroup {
        comptime _ = @TypeOf(config)._is_KConfig;
        return .{ .ptr = qtc.KConfigSkeletonItem_ConfigGroup(@ptrCast(self.ptr), @ptrCast(config.ptr)) };
    }

    /// ### DEPRECATED: Use `setKey` instead
    ///
    pub const SetKey = setKey;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn setKey(self: KConfigSkeletonItem, _key: []const u8) void {
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.KConfigSkeletonItem_SetKey(@ptrCast(self.ptr), _key_str);
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn key(self: KConfigSkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigSkeletonItem.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KConfigSkeletonItem, _name: []const u8) void {
        const _name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KConfigSkeletonItem_SetName(@ptrCast(self.ptr), _name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KConfigSkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigSkeletonItem.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabel` instead
    ///
    pub const SetLabel = setLabel;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` l: []const u8 `
    ///
    pub fn setLabel(self: KConfigSkeletonItem, l: []const u8) void {
        const l_str = qtc.libqt_string{
            .len = l.len,
            .data = l.ptr,
        };
        qtc.KConfigSkeletonItem_SetLabel(@ptrCast(self.ptr), l_str);
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: KConfigSkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigSkeletonItem.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` t: []const u8 `
    ///
    pub fn setToolTip(self: KConfigSkeletonItem, t: []const u8) void {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KConfigSkeletonItem_SetToolTip(@ptrCast(self.ptr), t_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: KConfigSkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigSkeletonItem.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` w: []const u8 `
    ///
    pub fn setWhatsThis(self: KConfigSkeletonItem, w: []const u8) void {
        const w_str = qtc.libqt_string{
            .len = w.len,
            .data = w.ptr,
        };
        qtc.KConfigSkeletonItem_SetWhatsThis(@ptrCast(self.ptr), w_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: KConfigSkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigSkeletonItem.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWriteFlags` instead
    ///
    pub const SetWriteFlags = setWriteFlags;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWriteFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn setWriteFlags(self: KConfigSkeletonItem, flags: i32) void {
        qtc.KConfigSkeletonItem_SetWriteFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `writeFlags` instead
    ///
    pub const WriteFlags = writeFlags;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn writeFlags(self: KConfigSkeletonItem) i32 {
        return qtc.KConfigSkeletonItem_WriteFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn readConfig(self: KConfigSkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigSkeletonItem_ReadConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` callback: *const fn (self: KConfigSkeletonItem, param1: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KConfigSkeletonItem, callback: *const fn (KConfigSkeletonItem, KConfig) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn superReadConfig(self: KConfigSkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigSkeletonItem_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn writeConfig(self: KConfigSkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigSkeletonItem_WriteConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onWriteConfig` instead
    ///
    pub const OnWriteConfig = onWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` callback: *const fn (self: KConfigSkeletonItem, param1: KConfig) callconv(.c) void `
    ///
    pub fn onWriteConfig(self: KConfigSkeletonItem, callback: *const fn (KConfigSkeletonItem, KConfig) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteConfig` instead
    ///
    pub const SuperWriteConfig = superWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn superWriteConfig(self: KConfigSkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigSkeletonItem_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `readDefault` instead
    ///
    pub const ReadDefault = readDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn readDefault(self: KConfigSkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigSkeletonItem_ReadDefault(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onReadDefault` instead
    ///
    pub const OnReadDefault = onReadDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readDefault)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` callback: *const fn (self: KConfigSkeletonItem, param1: KConfig) callconv(.c) void `
    ///
    pub fn onReadDefault(self: KConfigSkeletonItem, callback: *const fn (KConfigSkeletonItem, KConfig) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnReadDefault(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadDefault` instead
    ///
    pub const SuperReadDefault = superReadDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn superReadDefault(self: KConfigSkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigSkeletonItem_SuperReadDefault(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KConfigSkeletonItem, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KConfigSkeletonItem_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` callback: *const fn (self: KConfigSkeletonItem, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KConfigSkeletonItem, callback: *const fn (KConfigSkeletonItem, QVariant) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KConfigSkeletonItem, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KConfigSkeletonItem_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KConfigSkeletonItem, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KConfigSkeletonItem_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` callback: *const fn (self: KConfigSkeletonItem, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KConfigSkeletonItem, callback: *const fn (KConfigSkeletonItem, QVariant) callconv(.c) bool) void {
        qtc.KConfigSkeletonItem_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KConfigSkeletonItem, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KConfigSkeletonItem_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn property(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KConfigSkeletonItem, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KConfigSkeletonItem_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn superProperty(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minValue` instead
    ///
    pub const MinValue = minValue;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn minValue(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_MinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinValue` instead
    ///
    pub const OnMinValue = onMinValue;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinValue(self: KConfigSkeletonItem, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KConfigSkeletonItem_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinValue` instead
    ///
    pub const SuperMinValue = superMinValue;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn superMinValue(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maxValue` instead
    ///
    pub const MaxValue = maxValue;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn maxValue(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_MaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaxValue` instead
    ///
    pub const OnMaxValue = onMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaxValue(self: KConfigSkeletonItem, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KConfigSkeletonItem_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMaxValue` instead
    ///
    pub const SuperMaxValue = superMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn superMaxValue(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDefault` instead
    ///
    pub const SetDefault = setDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn setDefault(self: KConfigSkeletonItem) void {
        qtc.KConfigSkeletonItem_SetDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSetDefault` instead
    ///
    pub const OnSetDefault = onSetDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setDefault)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSetDefault(self: KConfigSkeletonItem, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnSetDefault(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDefault` instead
    ///
    pub const SuperSetDefault = superSetDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn superSetDefault(self: KConfigSkeletonItem) void {
        qtc.KConfigSkeletonItem_SuperSetDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `swapDefault` instead
    ///
    pub const SwapDefault = swapDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#swapDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn swapDefault(self: KConfigSkeletonItem) void {
        qtc.KConfigSkeletonItem_SwapDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSwapDefault` instead
    ///
    pub const OnSwapDefault = onSwapDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#swapDefault)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSwapDefault(self: KConfigSkeletonItem, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnSwapDefault(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSwapDefault` instead
    ///
    pub const SuperSwapDefault = superSwapDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#swapDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn superSwapDefault(self: KConfigSkeletonItem) void {
        qtc.KConfigSkeletonItem_SuperSwapDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImmutable` instead
    ///
    pub const IsImmutable = isImmutable;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn isImmutable(self: KConfigSkeletonItem) bool {
        return qtc.KConfigSkeletonItem_IsImmutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDefault` instead
    ///
    pub const IsDefault = isDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn isDefault(self: KConfigSkeletonItem) bool {
        return qtc.KConfigSkeletonItem_IsDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSaveNeeded` instead
    ///
    pub const IsSaveNeeded = isSaveNeeded;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn isSaveNeeded(self: KConfigSkeletonItem) bool {
        return qtc.KConfigSkeletonItem_IsSaveNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getDefault` instead
    ///
    pub const GetDefault = getDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#getDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn getDefault(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_GetDefault(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `readImmutability` instead
    ///
    pub const ReadImmutability = readImmutability;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` _group: KConfigGroup `
    ///
    pub fn readImmutability(self: KConfigSkeletonItem, _group: anytype) void {
        comptime _ = @TypeOf(_group)._is_KConfigGroup;
        qtc.KConfigSkeletonItem_ReadImmutability(@ptrCast(self.ptr), @ptrCast(_group.ptr));
    }

    /// ### DEPRECATED: Use `onReadImmutability` instead
    ///
    pub const OnReadImmutability = onReadImmutability;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` callback: *const fn (self: KConfigSkeletonItem, group: KConfigGroup) callconv(.c) void `
    ///
    pub fn onReadImmutability(self: KConfigSkeletonItem, callback: *const fn (KConfigSkeletonItem, KConfigGroup) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnReadImmutability(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadImmutability` instead
    ///
    pub const SuperReadImmutability = superReadImmutability;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` _group: KConfigGroup `
    ///
    pub fn superReadImmutability(self: KConfigSkeletonItem, _group: anytype) void {
        comptime _ = @TypeOf(_group)._is_KConfigGroup;
        qtc.KConfigSkeletonItem_SuperReadImmutability(@ptrCast(self.ptr), @ptrCast(_group.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#dtor.KConfigSkeletonItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn delete(self: KConfigSkeletonItem) void {
        qtc.KConfigSkeletonItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html)
pub const KPropertySkeletonItem = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KPropertySkeletonItem,

    pub const _is_KPropertySkeletonItem = {};
    pub const _is_KConfigSkeletonItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KPropertySkeletonItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QObject `
    ///
    /// ` propertyName: []u8 `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn new(object: anytype, propertyName: []u8, defaultValue: anytype) KPropertySkeletonItem {
        comptime _ = @TypeOf(object)._is_QObject;
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.KPropertySkeletonItem_new(@ptrCast(object.ptr), propertyName_str, @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KPropertySkeletonItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KPropertySkeletonItem `
    ///
    pub fn new2(param1: anytype) KPropertySkeletonItem {
        comptime _ = @TypeOf(param1)._is_KPropertySkeletonItem;
        return .{ .ptr = qtc.KPropertySkeletonItem_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn property(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KPropertySkeletonItem_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KPropertySkeletonItem, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KPropertySkeletonItem_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn superProperty(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KPropertySkeletonItem_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KPropertySkeletonItem, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KPropertySkeletonItem_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` callback: *const fn (self: KPropertySkeletonItem, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KPropertySkeletonItem, callback: *const fn (KPropertySkeletonItem, QVariant) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KPropertySkeletonItem, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KPropertySkeletonItem_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KPropertySkeletonItem, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KPropertySkeletonItem_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` callback: *const fn (self: KPropertySkeletonItem, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KPropertySkeletonItem, callback: *const fn (KPropertySkeletonItem, QVariant) callconv(.c) bool) void {
        qtc.KPropertySkeletonItem_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KPropertySkeletonItem, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KPropertySkeletonItem_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn readConfig(self: KPropertySkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KPropertySkeletonItem_ReadConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` callback: *const fn (self: KPropertySkeletonItem, param1: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KPropertySkeletonItem, callback: *const fn (KPropertySkeletonItem, KConfig) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn superReadConfig(self: KPropertySkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KPropertySkeletonItem_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn writeConfig(self: KPropertySkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KPropertySkeletonItem_WriteConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onWriteConfig` instead
    ///
    pub const OnWriteConfig = onWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` callback: *const fn (self: KPropertySkeletonItem, param1: KConfig) callconv(.c) void `
    ///
    pub fn onWriteConfig(self: KPropertySkeletonItem, callback: *const fn (KPropertySkeletonItem, KConfig) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteConfig` instead
    ///
    pub const SuperWriteConfig = superWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn superWriteConfig(self: KPropertySkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KPropertySkeletonItem_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `readDefault` instead
    ///
    pub const ReadDefault = readDefault;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn readDefault(self: KPropertySkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KPropertySkeletonItem_ReadDefault(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onReadDefault` instead
    ///
    pub const OnReadDefault = onReadDefault;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readDefault)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` callback: *const fn (self: KPropertySkeletonItem, param1: KConfig) callconv(.c) void `
    ///
    pub fn onReadDefault(self: KPropertySkeletonItem, callback: *const fn (KPropertySkeletonItem, KConfig) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnReadDefault(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadDefault` instead
    ///
    pub const SuperReadDefault = superReadDefault;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn superReadDefault(self: KPropertySkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KPropertySkeletonItem_SuperReadDefault(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setDefault` instead
    ///
    pub const SetDefault = setDefault;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn setDefault(self: KPropertySkeletonItem) void {
        qtc.KPropertySkeletonItem_SetDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSetDefault` instead
    ///
    pub const OnSetDefault = onSetDefault;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setDefault)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSetDefault(self: KPropertySkeletonItem, callback: *const fn () callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnSetDefault(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDefault` instead
    ///
    pub const SuperSetDefault = superSetDefault;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn superSetDefault(self: KPropertySkeletonItem) void {
        qtc.KPropertySkeletonItem_SuperSetDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `swapDefault` instead
    ///
    pub const SwapDefault = swapDefault;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#swapDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn swapDefault(self: KPropertySkeletonItem) void {
        qtc.KPropertySkeletonItem_SwapDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSwapDefault` instead
    ///
    pub const OnSwapDefault = onSwapDefault;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#swapDefault)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSwapDefault(self: KPropertySkeletonItem, callback: *const fn () callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnSwapDefault(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSwapDefault` instead
    ///
    pub const SuperSwapDefault = superSwapDefault;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#swapDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn superSwapDefault(self: KPropertySkeletonItem) void {
        qtc.KPropertySkeletonItem_SuperSwapDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNotifyFunction` instead
    ///
    pub const SetNotifyFunction = setNotifyFunction;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setNotifyFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` impl: *const fn () callconv(.c) void `
    ///
    pub fn setNotifyFunction(self: KPropertySkeletonItem, impl: *const fn () callconv(.c) void) void {
        qtc.KPropertySkeletonItem_SetNotifyFunction(@ptrCast(self.ptr), @bitCast(@intFromPtr(impl)));
    }

    /// ### DEPRECATED: Use `setGroup` instead
    ///
    pub const SetGroup = setGroup;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn setGroup(self: KPropertySkeletonItem, _group: []const u8) void {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigSkeletonItem_SetGroup(@ptrCast(self.ptr), _group_str);
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn group(self: KPropertySkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPropertySkeletonItem.group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setGroup2` instead
    ///
    pub const SetGroup2 = setGroup2;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` cg: KConfigGroup `
    ///
    pub fn setGroup2(self: KPropertySkeletonItem, cg: anytype) void {
        comptime _ = @TypeOf(cg)._is_KConfigGroup;
        qtc.KConfigSkeletonItem_SetGroup2(@ptrCast(self.ptr), @ptrCast(cg.ptr));
    }

    /// ### DEPRECATED: Use `configGroup` instead
    ///
    pub const ConfigGroup = configGroup;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#configGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` config: KConfig `
    ///
    pub fn configGroup(self: KPropertySkeletonItem, config: anytype) KConfigGroup {
        comptime _ = @TypeOf(config)._is_KConfig;
        return .{ .ptr = qtc.KConfigSkeletonItem_ConfigGroup(@ptrCast(self.ptr), @ptrCast(config.ptr)) };
    }

    /// ### DEPRECATED: Use `setKey` instead
    ///
    pub const SetKey = setKey;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn setKey(self: KPropertySkeletonItem, _key: []const u8) void {
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.KConfigSkeletonItem_SetKey(@ptrCast(self.ptr), _key_str);
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn key(self: KPropertySkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPropertySkeletonItem.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KPropertySkeletonItem, _name: []const u8) void {
        const _name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KConfigSkeletonItem_SetName(@ptrCast(self.ptr), _name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KPropertySkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPropertySkeletonItem.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabel` instead
    ///
    pub const SetLabel = setLabel;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` l: []const u8 `
    ///
    pub fn setLabel(self: KPropertySkeletonItem, l: []const u8) void {
        const l_str = qtc.libqt_string{
            .len = l.len,
            .data = l.ptr,
        };
        qtc.KConfigSkeletonItem_SetLabel(@ptrCast(self.ptr), l_str);
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: KPropertySkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPropertySkeletonItem.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` t: []const u8 `
    ///
    pub fn setToolTip(self: KPropertySkeletonItem, t: []const u8) void {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KConfigSkeletonItem_SetToolTip(@ptrCast(self.ptr), t_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: KPropertySkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPropertySkeletonItem.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` w: []const u8 `
    ///
    pub fn setWhatsThis(self: KPropertySkeletonItem, w: []const u8) void {
        const w_str = qtc.libqt_string{
            .len = w.len,
            .data = w.ptr,
        };
        qtc.KConfigSkeletonItem_SetWhatsThis(@ptrCast(self.ptr), w_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: KPropertySkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPropertySkeletonItem.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWriteFlags` instead
    ///
    pub const SetWriteFlags = setWriteFlags;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWriteFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn setWriteFlags(self: KPropertySkeletonItem, flags: i32) void {
        qtc.KConfigSkeletonItem_SetWriteFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `writeFlags` instead
    ///
    pub const WriteFlags = writeFlags;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn writeFlags(self: KPropertySkeletonItem) i32 {
        return qtc.KConfigSkeletonItem_WriteFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImmutable` instead
    ///
    pub const IsImmutable = isImmutable;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn isImmutable(self: KPropertySkeletonItem) bool {
        return qtc.KConfigSkeletonItem_IsImmutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDefault` instead
    ///
    pub const IsDefault = isDefault;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn isDefault(self: KPropertySkeletonItem) bool {
        return qtc.KConfigSkeletonItem_IsDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSaveNeeded` instead
    ///
    pub const IsSaveNeeded = isSaveNeeded;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn isSaveNeeded(self: KPropertySkeletonItem) bool {
        return qtc.KConfigSkeletonItem_IsSaveNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getDefault` instead
    ///
    pub const GetDefault = getDefault;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#getDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn getDefault(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_GetDefault(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minValue` instead
    ///
    pub const MinValue = minValue;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn minValue(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KPropertySkeletonItem_MinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMinValue` instead
    ///
    pub const SuperMinValue = superMinValue;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn superMinValue(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KPropertySkeletonItem_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinValue` instead
    ///
    pub const OnMinValue = onMinValue;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPropertySkeletonItem`
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinValue(self: KPropertySkeletonItem, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KPropertySkeletonItem_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maxValue` instead
    ///
    pub const MaxValue = maxValue;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn maxValue(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KPropertySkeletonItem_MaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMaxValue` instead
    ///
    pub const SuperMaxValue = superMaxValue;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn superMaxValue(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KPropertySkeletonItem_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaxValue` instead
    ///
    pub const OnMaxValue = onMaxValue;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPropertySkeletonItem`
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaxValue(self: KPropertySkeletonItem, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KPropertySkeletonItem_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readImmutability` instead
    ///
    pub const ReadImmutability = readImmutability;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` _group: KConfigGroup `
    ///
    pub fn readImmutability(self: KPropertySkeletonItem, _group: anytype) void {
        comptime _ = @TypeOf(_group)._is_KConfigGroup;
        qtc.KPropertySkeletonItem_ReadImmutability(@ptrCast(self.ptr), @ptrCast(_group.ptr));
    }

    /// ### DEPRECATED: Use `superReadImmutability` instead
    ///
    pub const SuperReadImmutability = superReadImmutability;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` _group: KConfigGroup `
    ///
    pub fn superReadImmutability(self: KPropertySkeletonItem, _group: anytype) void {
        comptime _ = @TypeOf(_group)._is_KConfigGroup;
        qtc.KPropertySkeletonItem_SuperReadImmutability(@ptrCast(self.ptr), @ptrCast(_group.ptr));
    }

    /// ### DEPRECATED: Use `onReadImmutability` instead
    ///
    pub const OnReadImmutability = onReadImmutability;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPropertySkeletonItem`
    ///
    /// ` callback: *const fn (self: KPropertySkeletonItem, group: KConfigGroup) callconv(.c) void `
    ///
    pub fn onReadImmutability(self: KPropertySkeletonItem, callback: *const fn (KPropertySkeletonItem, KConfigGroup) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnReadImmutability(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#dtor.KPropertySkeletonItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn delete(self: KPropertySkeletonItem) void {
        qtc.KPropertySkeletonItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html)
pub const KConfigCompilerSignallingItem = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigCompilerSignallingItem,

    pub const _is_KConfigCompilerSignallingItem = {};
    pub const _is_KConfigSkeletonItem = {};

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn readConfig(self: KConfigCompilerSignallingItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigCompilerSignallingItem_ReadConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn writeConfig(self: KConfigCompilerSignallingItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigCompilerSignallingItem_WriteConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `readDefault` instead
    ///
    pub const ReadDefault = readDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#readDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn readDefault(self: KConfigCompilerSignallingItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigCompilerSignallingItem_ReadDefault(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KConfigCompilerSignallingItem, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KConfigCompilerSignallingItem_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KConfigCompilerSignallingItem, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KConfigCompilerSignallingItem_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn property(self: KConfigCompilerSignallingItem) QVariant {
        return .{ .ptr = qtc.KConfigCompilerSignallingItem_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minValue` instead
    ///
    pub const MinValue = minValue;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn minValue(self: KConfigCompilerSignallingItem) QVariant {
        return .{ .ptr = qtc.KConfigCompilerSignallingItem_MinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maxValue` instead
    ///
    pub const MaxValue = maxValue;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn maxValue(self: KConfigCompilerSignallingItem) QVariant {
        return .{ .ptr = qtc.KConfigCompilerSignallingItem_MaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDefault` instead
    ///
    pub const SetDefault = setDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn setDefault(self: KConfigCompilerSignallingItem) void {
        qtc.KConfigCompilerSignallingItem_SetDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `swapDefault` instead
    ///
    pub const SwapDefault = swapDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#swapDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn swapDefault(self: KConfigCompilerSignallingItem) void {
        qtc.KConfigCompilerSignallingItem_SwapDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWriteFlags` instead
    ///
    pub const SetWriteFlags = setWriteFlags;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setWriteFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn setWriteFlags(self: KConfigCompilerSignallingItem, flags: i32) void {
        qtc.KConfigCompilerSignallingItem_SetWriteFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `writeFlags` instead
    ///
    pub const WriteFlags = writeFlags;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#writeFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn writeFlags(self: KConfigCompilerSignallingItem) i32 {
        return qtc.KConfigCompilerSignallingItem_WriteFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGroup` instead
    ///
    pub const SetGroup = setGroup;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` cg: KConfigGroup `
    ///
    pub fn setGroup(self: KConfigCompilerSignallingItem, cg: anytype) void {
        comptime _ = @TypeOf(cg)._is_KConfigGroup;
        qtc.KConfigCompilerSignallingItem_SetGroup(@ptrCast(self.ptr), @ptrCast(cg.ptr));
    }

    /// ### DEPRECATED: Use `configGroup` instead
    ///
    pub const ConfigGroup = configGroup;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#configGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` config: KConfig `
    ///
    pub fn configGroup(self: KConfigCompilerSignallingItem, config: anytype) KConfigGroup {
        comptime _ = @TypeOf(config)._is_KConfig;
        return .{ .ptr = qtc.KConfigCompilerSignallingItem_ConfigGroup(@ptrCast(self.ptr), @ptrCast(config.ptr)) };
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn group(self: KConfigCompilerSignallingItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigCompilerSignallingItem.group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setGroup2` instead
    ///
    pub const SetGroup2 = setGroup2;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` cg: KConfigGroup `
    ///
    pub fn setGroup2(self: KConfigCompilerSignallingItem, cg: anytype) void {
        comptime _ = @TypeOf(cg)._is_KConfigGroup;
        qtc.KConfigSkeletonItem_SetGroup2(@ptrCast(self.ptr), @ptrCast(cg.ptr));
    }

    /// ### DEPRECATED: Use `setKey` instead
    ///
    pub const SetKey = setKey;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn setKey(self: KConfigCompilerSignallingItem, _key: []const u8) void {
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.KConfigSkeletonItem_SetKey(@ptrCast(self.ptr), _key_str);
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn key(self: KConfigCompilerSignallingItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigCompilerSignallingItem.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KConfigCompilerSignallingItem, _name: []const u8) void {
        const _name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KConfigSkeletonItem_SetName(@ptrCast(self.ptr), _name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KConfigCompilerSignallingItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigCompilerSignallingItem.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabel` instead
    ///
    pub const SetLabel = setLabel;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` l: []const u8 `
    ///
    pub fn setLabel(self: KConfigCompilerSignallingItem, l: []const u8) void {
        const l_str = qtc.libqt_string{
            .len = l.len,
            .data = l.ptr,
        };
        qtc.KConfigSkeletonItem_SetLabel(@ptrCast(self.ptr), l_str);
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: KConfigCompilerSignallingItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigCompilerSignallingItem.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` t: []const u8 `
    ///
    pub fn setToolTip(self: KConfigCompilerSignallingItem, t: []const u8) void {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KConfigSkeletonItem_SetToolTip(@ptrCast(self.ptr), t_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: KConfigCompilerSignallingItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigCompilerSignallingItem.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` w: []const u8 `
    ///
    pub fn setWhatsThis(self: KConfigCompilerSignallingItem, w: []const u8) void {
        const w_str = qtc.libqt_string{
            .len = w.len,
            .data = w.ptr,
        };
        qtc.KConfigSkeletonItem_SetWhatsThis(@ptrCast(self.ptr), w_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: KConfigCompilerSignallingItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigCompilerSignallingItem.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isImmutable` instead
    ///
    pub const IsImmutable = isImmutable;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn isImmutable(self: KConfigCompilerSignallingItem) bool {
        return qtc.KConfigSkeletonItem_IsImmutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDefault` instead
    ///
    pub const IsDefault = isDefault;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn isDefault(self: KConfigCompilerSignallingItem) bool {
        return qtc.KConfigSkeletonItem_IsDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSaveNeeded` instead
    ///
    pub const IsSaveNeeded = isSaveNeeded;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn isSaveNeeded(self: KConfigCompilerSignallingItem) bool {
        return qtc.KConfigSkeletonItem_IsSaveNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getDefault` instead
    ///
    pub const GetDefault = getDefault;

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#getDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn getDefault(self: KConfigCompilerSignallingItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_GetDefault(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#dtor.KConfigCompilerSignallingItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn delete(self: KConfigCompilerSignallingItem) void {
        qtc.KConfigCompilerSignallingItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html)
pub const KCoreConfigSkeleton = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton,

    pub const _is_KCoreConfigSkeleton = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton object in C++ memory
    ///
    pub fn new() KCoreConfigSkeleton {
        return .{ .ptr = qtc.KCoreConfigSkeleton_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` configname: []const u8 `
    ///
    pub fn new2(configname: []const u8) KCoreConfigSkeleton {
        const configname_str = qtc.libqt_string{
            .len = configname.len,
            .data = configname.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_new2(configname_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KCoreConfigSkeleton object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` configname: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(configname: []const u8, _parent: anytype) KCoreConfigSkeleton {
        const configname_str = qtc.libqt_string{
            .len = configname.len,
            .data = configname.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KCoreConfigSkeleton_new3(configname_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn metaObject(self: KCoreConfigSkeleton) QMetaObject {
        return .{ .ptr = qtc.KCoreConfigSkeleton_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KCoreConfigSkeleton_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn superMetaObject(self: KCoreConfigSkeleton) QMetaObject {
        return .{ .ptr = qtc.KCoreConfigSkeleton_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KCoreConfigSkeleton, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCoreConfigSkeleton_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KCoreConfigSkeleton, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCoreConfigSkeleton_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KCoreConfigSkeleton, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCoreConfigSkeleton_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KCoreConfigSkeleton_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KCoreConfigSkeleton, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCoreConfigSkeleton_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreConfigSkeleton.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDefaults` instead
    ///
    pub const SetDefaults = setDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn setDefaults(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_SetDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSetDefaults` instead
    ///
    pub const OnSetDefaults = onSetDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSetDefaults(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnSetDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDefaults` instead
    ///
    pub const SuperSetDefaults = superSetDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn superSetDefaults(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_SuperSetDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn load(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_Load(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn read(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_Read(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDefaults` instead
    ///
    pub const IsDefaults = isDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn isDefaults(self: KCoreConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_IsDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSaveNeeded` instead
    ///
    pub const IsSaveNeeded = isSaveNeeded;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn isSaveNeeded(self: KCoreConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_IsSaveNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentGroup` instead
    ///
    pub const SetCurrentGroup = setCurrentGroup;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setCurrentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn setCurrentGroup(self: KCoreConfigSkeleton, _group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KCoreConfigSkeleton_SetCurrentGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `currentGroup` instead
    ///
    pub const CurrentGroup = currentGroup;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#currentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentGroup(self: KCoreConfigSkeleton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCoreConfigSkeleton_CurrentGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreConfigSkeleton.currentGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` item: KConfigSkeletonItem `
    ///
    pub fn addItem(self: KCoreConfigSkeleton, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KConfigSkeletonItem;
        qtc.KCoreConfigSkeleton_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `addItemString` instead
    ///
    pub const AddItemString = addItemString;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addItemString(self: KCoreConfigSkeleton, _name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemString(@ptrCast(self.ptr), name_str, reference_str) };
    }

    /// ### DEPRECATED: Use `addItemPassword` instead
    ///
    pub const AddItemPassword = addItemPassword;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addItemPassword(self: KCoreConfigSkeleton, _name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPassword(@ptrCast(self.ptr), name_str, reference_str) };
    }

    /// ### DEPRECATED: Use `addItemPath` instead
    ///
    pub const AddItemPath = addItemPath;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addItemPath(self: KCoreConfigSkeleton, _name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPath(@ptrCast(self.ptr), name_str, reference_str) };
    }

    /// ### DEPRECATED: Use `addItemProperty` instead
    ///
    pub const AddItemProperty = addItemProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    pub fn addItemProperty(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemProperty(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemBool` instead
    ///
    pub const AddItemBool = addItemBool;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    pub fn addItemBool(self: KCoreConfigSkeleton, _name: []const u8, reference: *bool) KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemBool(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemInt` instead
    ///
    pub const AddItemInt = addItemInt;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    pub fn addItemInt(self: KCoreConfigSkeleton, _name: []const u8, reference: *i32) KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemInt(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemUInt` instead
    ///
    pub const AddItemUInt = addItemUInt;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    pub fn addItemUInt(self: KCoreConfigSkeleton, _name: []const u8, reference: *u32) KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemUInt(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemLongLong` instead
    ///
    pub const AddItemLongLong = addItemLongLong;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    pub fn addItemLongLong(self: KCoreConfigSkeleton, _name: []const u8, reference: *i64) KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemLongLong(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemULongLong` instead
    ///
    pub const AddItemULongLong = addItemULongLong;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    pub fn addItemULongLong(self: KCoreConfigSkeleton, _name: []const u8, reference: *u64) KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemULongLong(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemDouble` instead
    ///
    pub const AddItemDouble = addItemDouble;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    pub fn addItemDouble(self: KCoreConfigSkeleton, _name: []const u8, reference: *f64) KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDouble(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemRect` instead
    ///
    pub const AddItemRect = addItemRect;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    pub fn addItemRect(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRect(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemRectF` instead
    ///
    pub const AddItemRectF = addItemRectF;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    pub fn addItemRectF(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRectF(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemPoint` instead
    ///
    pub const AddItemPoint = addItemPoint;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    pub fn addItemPoint(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPoint(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemPointF` instead
    ///
    pub const AddItemPointF = addItemPointF;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    pub fn addItemPointF(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPointF(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemSize` instead
    ///
    pub const AddItemSize = addItemSize;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    pub fn addItemSize(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSize(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemSizeF` instead
    ///
    pub const AddItemSizeF = addItemSizeF;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    pub fn addItemSizeF(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSizeF(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemDateTime` instead
    ///
    pub const AddItemDateTime = addItemDateTime;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    pub fn addItemDateTime(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDateTime(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemStringList` instead
    ///
    pub const AddItemStringList = addItemStringList;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    pub fn addItemStringList(self: KCoreConfigSkeleton, allocator: std.mem.Allocator, _name: []const u8, reference: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KCoreConfigSkeleton.addItemStringList: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemStringList(@ptrCast(self.ptr), name_str, reference_list) };
    }

    /// ### DEPRECATED: Use `addItemIntList` instead
    ///
    pub const AddItemIntList = addItemIntList;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    pub fn addItemIntList(self: KCoreConfigSkeleton, _name: []const u8, reference: []i32) KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemIntList(@ptrCast(self.ptr), name_str, reference_list) };
    }

    /// ### DEPRECATED: Use `config` instead
    ///
    pub const Config = config;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn config(self: KCoreConfigSkeleton) KConfig {
        return .{ .ptr = qtc.KCoreConfigSkeleton_Config(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `config2` instead
    ///
    pub const Config2 = config2;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn config2(self: KCoreConfigSkeleton) KConfig {
        return .{ .ptr = qtc.KCoreConfigSkeleton_Config2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `items` instead
    ///
    pub const Items = items;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn items(self: KCoreConfigSkeleton, allocator: std.mem.Allocator) []KConfigSkeletonItem {
        const _arr: qtc.libqt_list = qtc.KCoreConfigSkeleton_Items(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KConfigSkeletonItem, _arr.len) catch @panic("KCoreConfigSkeleton.items: Memory allocation failed");
        const _data_val: [*]QtC.KConfigSkeletonItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn removeItem(self: KCoreConfigSkeleton, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KCoreConfigSkeleton_RemoveItem(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `clearItems` instead
    ///
    pub const ClearItems = clearItems;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#clearItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn clearItems(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_ClearItems(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImmutable` instead
    ///
    pub const IsImmutable = isImmutable;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn isImmutable(self: KCoreConfigSkeleton, _name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.KCoreConfigSkeleton_IsImmutable(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `findItem` instead
    ///
    pub const FindItem = findItem;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#findItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn findItem(self: KCoreConfigSkeleton, _name: []const u8) KConfigSkeletonItem {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_FindItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `useDefaults` instead
    ///
    pub const UseDefaults = useDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn useDefaults(self: KCoreConfigSkeleton, b: bool) bool {
        return qtc.KCoreConfigSkeleton_UseDefaults(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onUseDefaults` instead
    ///
    pub const OnUseDefaults = onUseDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, b: bool) callconv(.c) bool `
    ///
    pub fn onUseDefaults(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, bool) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnUseDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUseDefaults` instead
    ///
    pub const SuperUseDefaults = superUseDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn superUseDefaults(self: KCoreConfigSkeleton, b: bool) bool {
        return qtc.KCoreConfigSkeleton_SuperUseDefaults(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn save(self: KCoreConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_Save(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `configChanged` instead
    ///
    pub const ConfigChanged = configChanged;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn configChanged(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_ConfigChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onConfigChanged` instead
    ///
    pub const OnConfigChanged = onConfigChanged;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton) callconv(.c) void `
    ///
    pub fn onConfigChanged(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_Connect_ConfigChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `usrUseDefaults` instead
    ///
    pub const UsrUseDefaults = usrUseDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn usrUseDefaults(self: KCoreConfigSkeleton, b: bool) bool {
        return qtc.KCoreConfigSkeleton_UsrUseDefaults(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onUsrUseDefaults` instead
    ///
    pub const OnUsrUseDefaults = onUsrUseDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, b: bool) callconv(.c) bool `
    ///
    pub fn onUsrUseDefaults(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, bool) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnUsrUseDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUsrUseDefaults` instead
    ///
    pub const SuperUsrUseDefaults = superUsrUseDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn superUsrUseDefaults(self: KCoreConfigSkeleton, b: bool) bool {
        return qtc.KCoreConfigSkeleton_SuperUsrUseDefaults(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `usrSetDefaults` instead
    ///
    pub const UsrSetDefaults = usrSetDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn usrSetDefaults(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_UsrSetDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUsrSetDefaults` instead
    ///
    pub const OnUsrSetDefaults = onUsrSetDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUsrSetDefaults(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnUsrSetDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUsrSetDefaults` instead
    ///
    pub const SuperUsrSetDefaults = superUsrSetDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn superUsrSetDefaults(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_SuperUsrSetDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `usrRead` instead
    ///
    pub const UsrRead = usrRead;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn usrRead(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_UsrRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUsrRead` instead
    ///
    pub const OnUsrRead = onUsrRead;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUsrRead(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnUsrRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUsrRead` instead
    ///
    pub const SuperUsrRead = superUsrRead;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn superUsrRead(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_SuperUsrRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `usrSave` instead
    ///
    pub const UsrSave = usrSave;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn usrSave(self: KCoreConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_UsrSave(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUsrSave` instead
    ///
    pub const OnUsrSave = onUsrSave;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onUsrSave(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnUsrSave(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUsrSave` instead
    ///
    pub const SuperUsrSave = superUsrSave;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn superUsrSave(self: KCoreConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_SuperUsrSave(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreConfigSkeleton.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreConfigSkeleton.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addItem2` instead
    ///
    pub const AddItem2 = addItem2;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` item: KConfigSkeletonItem `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn addItem2(self: KCoreConfigSkeleton, item: anytype, _name: []const u8) void {
        comptime _ = @TypeOf(item)._is_KConfigSkeletonItem;
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KCoreConfigSkeleton_AddItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), name_str);
    }

    /// ### DEPRECATED: Use `addItemString3` instead
    ///
    pub const AddItemString3 = addItemString3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn addItemString3(self: KCoreConfigSkeleton, _name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemString3(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `addItemString4` instead
    ///
    pub const AddItemString4 = addItemString4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemString4(self: KCoreConfigSkeleton, _name: []const u8, reference: []const u8, defaultValue: []const u8, _key: []const u8) KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemString4(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str, key_str) };
    }

    /// ### DEPRECATED: Use `addItemPassword3` instead
    ///
    pub const AddItemPassword3 = addItemPassword3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn addItemPassword3(self: KCoreConfigSkeleton, _name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPassword3(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `addItemPassword4` instead
    ///
    pub const AddItemPassword4 = addItemPassword4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemPassword4(self: KCoreConfigSkeleton, _name: []const u8, reference: []const u8, defaultValue: []const u8, _key: []const u8) KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPassword4(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str, key_str) };
    }

    /// ### DEPRECATED: Use `addItemPath3` instead
    ///
    pub const AddItemPath3 = addItemPath3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn addItemPath3(self: KCoreConfigSkeleton, _name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPath3(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `addItemPath4` instead
    ///
    pub const AddItemPath4 = addItemPath4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemPath4(self: KCoreConfigSkeleton, _name: []const u8, reference: []const u8, defaultValue: []const u8, _key: []const u8) KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPath4(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str, key_str) };
    }

    /// ### DEPRECATED: Use `addItemProperty3` instead
    ///
    pub const AddItemProperty3 = addItemProperty3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn addItemProperty3(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemProperty3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemProperty4` instead
    ///
    pub const AddItemProperty4 = addItemProperty4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    /// ` defaultValue: QVariant `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemProperty4(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype, _key: []const u8) KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemProperty4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemBool3` instead
    ///
    pub const AddItemBool3 = addItemBool3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn addItemBool3(self: KCoreConfigSkeleton, _name: []const u8, reference: *bool, defaultValue: bool) KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemBool3(@ptrCast(self.ptr), name_str, @ptrCast(reference), defaultValue) };
    }

    /// ### DEPRECATED: Use `addItemBool4` instead
    ///
    pub const AddItemBool4 = addItemBool4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemBool4(self: KCoreConfigSkeleton, _name: []const u8, reference: *bool, defaultValue: bool, _key: []const u8) KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemBool4(@ptrCast(self.ptr), name_str, @ptrCast(reference), defaultValue, key_str) };
    }

    /// ### DEPRECATED: Use `addItemInt3` instead
    ///
    pub const AddItemInt3 = addItemInt3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn addItemInt3(self: KCoreConfigSkeleton, _name: []const u8, reference: *i32, defaultValue: i32) KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemInt3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemInt4` instead
    ///
    pub const AddItemInt4 = addItemInt4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemInt4(self: KCoreConfigSkeleton, _name: []const u8, reference: *i32, defaultValue: i32, _key: []const u8) KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemInt4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemUInt3` instead
    ///
    pub const AddItemUInt3 = addItemUInt3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    pub fn addItemUInt3(self: KCoreConfigSkeleton, _name: []const u8, reference: *u32, defaultValue: u32) KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemUInt3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemUInt4` instead
    ///
    pub const AddItemUInt4 = addItemUInt4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemUInt4(self: KCoreConfigSkeleton, _name: []const u8, reference: *u32, defaultValue: u32, _key: []const u8) KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemUInt4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemLongLong3` instead
    ///
    pub const AddItemLongLong3 = addItemLongLong3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn addItemLongLong3(self: KCoreConfigSkeleton, _name: []const u8, reference: *i64, defaultValue: i64) KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemLongLong3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemLongLong4` instead
    ///
    pub const AddItemLongLong4 = addItemLongLong4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemLongLong4(self: KCoreConfigSkeleton, _name: []const u8, reference: *i64, defaultValue: i64, _key: []const u8) KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemLongLong4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemULongLong3` instead
    ///
    pub const AddItemULongLong3 = addItemULongLong3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    pub fn addItemULongLong3(self: KCoreConfigSkeleton, _name: []const u8, reference: *u64, defaultValue: u64) KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemULongLong3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemULongLong4` instead
    ///
    pub const AddItemULongLong4 = addItemULongLong4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemULongLong4(self: KCoreConfigSkeleton, _name: []const u8, reference: *u64, defaultValue: u64, _key: []const u8) KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemULongLong4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemDouble3` instead
    ///
    pub const AddItemDouble3 = addItemDouble3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn addItemDouble3(self: KCoreConfigSkeleton, _name: []const u8, reference: *f64, defaultValue: f64) KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDouble3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemDouble4` instead
    ///
    pub const AddItemDouble4 = addItemDouble4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemDouble4(self: KCoreConfigSkeleton, _name: []const u8, reference: *f64, defaultValue: f64, _key: []const u8) KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDouble4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemRect3` instead
    ///
    pub const AddItemRect3 = addItemRect3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    /// ` defaultValue: QRect `
    ///
    pub fn addItemRect3(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        comptime _ = @TypeOf(defaultValue)._is_QRect;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRect3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemRect4` instead
    ///
    pub const AddItemRect4 = addItemRect4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    /// ` defaultValue: QRect `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemRect4(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype, _key: []const u8) KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        comptime _ = @TypeOf(defaultValue)._is_QRect;
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRect4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemRectF3` instead
    ///
    pub const AddItemRectF3 = addItemRectF3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    /// ` defaultValue: QRectF `
    ///
    pub fn addItemRectF3(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        comptime _ = @TypeOf(defaultValue)._is_QRectF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRectF3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemRectF4` instead
    ///
    pub const AddItemRectF4 = addItemRectF4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    /// ` defaultValue: QRectF `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemRectF4(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype, _key: []const u8) KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        comptime _ = @TypeOf(defaultValue)._is_QRectF;
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRectF4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemPoint3` instead
    ///
    pub const AddItemPoint3 = addItemPoint3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    /// ` defaultValue: QPoint `
    ///
    pub fn addItemPoint3(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        comptime _ = @TypeOf(defaultValue)._is_QPoint;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPoint3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemPoint4` instead
    ///
    pub const AddItemPoint4 = addItemPoint4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    /// ` defaultValue: QPoint `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemPoint4(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype, _key: []const u8) KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        comptime _ = @TypeOf(defaultValue)._is_QPoint;
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPoint4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemPointF3` instead
    ///
    pub const AddItemPointF3 = addItemPointF3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    /// ` defaultValue: QPointF `
    ///
    pub fn addItemPointF3(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        comptime _ = @TypeOf(defaultValue)._is_QPointF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPointF3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemPointF4` instead
    ///
    pub const AddItemPointF4 = addItemPointF4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    /// ` defaultValue: QPointF `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemPointF4(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype, _key: []const u8) KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        comptime _ = @TypeOf(defaultValue)._is_QPointF;
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPointF4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemSize3` instead
    ///
    pub const AddItemSize3 = addItemSize3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    /// ` defaultValue: QSize `
    ///
    pub fn addItemSize3(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        comptime _ = @TypeOf(defaultValue)._is_QSize;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSize3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemSize4` instead
    ///
    pub const AddItemSize4 = addItemSize4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    /// ` defaultValue: QSize `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemSize4(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype, _key: []const u8) KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        comptime _ = @TypeOf(defaultValue)._is_QSize;
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSize4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemSizeF3` instead
    ///
    pub const AddItemSizeF3 = addItemSizeF3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    /// ` defaultValue: QSizeF `
    ///
    pub fn addItemSizeF3(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        comptime _ = @TypeOf(defaultValue)._is_QSizeF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSizeF3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemSizeF4` instead
    ///
    pub const AddItemSizeF4 = addItemSizeF4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    /// ` defaultValue: QSizeF `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemSizeF4(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype, _key: []const u8) KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        comptime _ = @TypeOf(defaultValue)._is_QSizeF;
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSizeF4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemDateTime3` instead
    ///
    pub const AddItemDateTime3 = addItemDateTime3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    /// ` defaultValue: QDateTime `
    ///
    pub fn addItemDateTime3(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDateTime3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemDateTime4` instead
    ///
    pub const AddItemDateTime4 = addItemDateTime4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    /// ` defaultValue: QDateTime `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemDateTime4(self: KCoreConfigSkeleton, _name: []const u8, reference: anytype, defaultValue: anytype, _key: []const u8) KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDateTime4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemStringList3` instead
    ///
    pub const AddItemStringList3 = addItemStringList3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    pub fn addItemStringList3(self: KCoreConfigSkeleton, allocator: std.mem.Allocator, _name: []const u8, reference: []const []const u8, defaultValue: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KCoreConfigSkeleton.addItemStringList3: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("KCoreConfigSkeleton.addItemStringList3: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |str_item, i|
            defaultValue_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemStringList3(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list) };
    }

    /// ### DEPRECATED: Use `addItemStringList4` instead
    ///
    pub const AddItemStringList4 = addItemStringList4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemStringList4(self: KCoreConfigSkeleton, allocator: std.mem.Allocator, _name: []const u8, reference: []const []const u8, defaultValue: []const []const u8, _key: []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KCoreConfigSkeleton.addItemStringList4: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("KCoreConfigSkeleton.addItemStringList4: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |str_item, i|
            defaultValue_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemStringList4(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list, key_str) };
    }

    /// ### DEPRECATED: Use `addItemIntList3` instead
    ///
    pub const AddItemIntList3 = addItemIntList3;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    pub fn addItemIntList3(self: KCoreConfigSkeleton, _name: []const u8, reference: []i32, defaultValue: []i32) KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemIntList3(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list) };
    }

    /// ### DEPRECATED: Use `addItemIntList4` instead
    ///
    pub const AddItemIntList4 = addItemIntList4;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn addItemIntList4(self: KCoreConfigSkeleton, _name: []const u8, reference: []i32, defaultValue: []i32, _key: []const u8) KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemIntList4(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list, key_str) };
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KCoreConfigSkeleton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreConfigSkeleton.objectName: Memory allocation failed");
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: KCoreConfigSkeleton, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn isWidgetType(self: KCoreConfigSkeleton) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn isWindowType(self: KCoreConfigSkeleton) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn isQuickItemType(self: KCoreConfigSkeleton) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn signalsBlocked(self: KCoreConfigSkeleton) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KCoreConfigSkeleton, b: bool) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn thread(self: KCoreConfigSkeleton) QThread {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KCoreConfigSkeleton, _thread: anytype) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KCoreConfigSkeleton, interval: i32) i32 {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KCoreConfigSkeleton, time: i64) i32 {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KCoreConfigSkeleton, id: i32) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KCoreConfigSkeleton, id: i32) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KCoreConfigSkeleton, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KCoreConfigSkeleton.children: Memory allocation failed");
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KCoreConfigSkeleton, _parent: anytype) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KCoreConfigSkeleton, filterObj: anytype) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KCoreConfigSkeleton, obj: anytype) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KCoreConfigSkeleton, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn disconnect3(self: KCoreConfigSkeleton) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KCoreConfigSkeleton, receiver: anytype) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn dumpObjectTree(self: KCoreConfigSkeleton) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn dumpObjectInfo(self: KCoreConfigSkeleton) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: KCoreConfigSkeleton, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KCoreConfigSkeleton, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KCoreConfigSkeleton.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCoreConfigSkeleton.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn bindingStorage(self: KCoreConfigSkeleton) QBindingStorage {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn bindingStorage2(self: KCoreConfigSkeleton) QBindingStorage {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn destroyed(self: KCoreConfigSkeleton) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton) callconv(.c) void) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn parent(self: KCoreConfigSkeleton) QObject {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KCoreConfigSkeleton, classname: [:0]const u8) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn deleteLater(self: KCoreConfigSkeleton) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KCoreConfigSkeleton, interval: i32, timerType: i32) i32 {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KCoreConfigSkeleton, time: i64, timerType: i32) i32 {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KCoreConfigSkeleton, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KCoreConfigSkeleton, signal: [:0]const u8) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KCoreConfigSkeleton, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KCoreConfigSkeleton, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KCoreConfigSkeleton, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KCoreConfigSkeleton, param1: anytype) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QObject) callconv(.c) void) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KCoreConfigSkeleton, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCoreConfigSkeleton_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KCoreConfigSkeleton, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCoreConfigSkeleton_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QEvent) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KCoreConfigSkeleton, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCoreConfigSkeleton_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KCoreConfigSkeleton, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCoreConfigSkeleton_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QObject, QEvent) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KCoreConfigSkeleton, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCoreConfigSkeleton_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KCoreConfigSkeleton, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCoreConfigSkeleton_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QTimerEvent) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KCoreConfigSkeleton, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCoreConfigSkeleton_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KCoreConfigSkeleton, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCoreConfigSkeleton_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QChildEvent) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KCoreConfigSkeleton, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCoreConfigSkeleton_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KCoreConfigSkeleton, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCoreConfigSkeleton_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QEvent) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KCoreConfigSkeleton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreConfigSkeleton_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KCoreConfigSkeleton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreConfigSkeleton_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QMetaMethod) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KCoreConfigSkeleton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreConfigSkeleton_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KCoreConfigSkeleton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreConfigSkeleton_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QMetaMethod) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn sender(self: KCoreConfigSkeleton) QObject {
        return .{ .ptr = qtc.KCoreConfigSkeleton_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn superSender(self: KCoreConfigSkeleton) QObject {
        return .{ .ptr = qtc.KCoreConfigSkeleton_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) QObject) void {
        qtc.KCoreConfigSkeleton_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn senderSignalIndex(self: KCoreConfigSkeleton) i32 {
        return qtc.KCoreConfigSkeleton_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn superSenderSignalIndex(self: KCoreConfigSkeleton) i32 {
        return qtc.KCoreConfigSkeleton_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) i32) void {
        qtc.KCoreConfigSkeleton_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KCoreConfigSkeleton, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCoreConfigSkeleton_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KCoreConfigSkeleton, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCoreConfigSkeleton_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCoreConfigSkeleton_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KCoreConfigSkeleton, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCoreConfigSkeleton_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KCoreConfigSkeleton, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCoreConfigSkeleton_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QMetaMethod) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#dtor.KCoreConfigSkeleton)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn delete(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QString>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html)
pub const KCoreConfigSkeleton__ItemString = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemString,

    pub const _is_KCoreConfigSkeleton__ItemString = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemString object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemString {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemString_new(_group_str, _key_str, reference_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemString object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemString {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemString_new2(_group_str, _key_str, reference_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KCoreConfigSkeleton::ItemString object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` typeVal: kcoreconfigskeleton_enums.Type `
    ///
    pub fn new3(_group: []const u8, _key: []const u8, reference: []const u8, defaultValue: []const u8, typeVal: i32) KCoreConfigSkeleton__ItemString {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemString_new3(_group_str, _key_str, reference_str, defaultValue_str, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` _config: KConfig `
    ///
    pub fn writeConfig(self: KCoreConfigSkeleton__ItemString, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemString_WriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onWriteConfig` instead
    ///
    pub const OnWriteConfig = onWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemString, config: KConfig) callconv(.c) void `
    ///
    pub fn onWriteConfig(self: KCoreConfigSkeleton__ItemString, callback: *const fn (KCoreConfigSkeleton__ItemString, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemString_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteConfig` instead
    ///
    pub const SuperWriteConfig = superWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superWriteConfig(self: KCoreConfigSkeleton__ItemString, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemString_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemString, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemString_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemString, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemString, callback: *const fn (KCoreConfigSkeleton__ItemString, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemString_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemString, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemString_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemString, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemString_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemString, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemString, callback: *const fn (KCoreConfigSkeleton__ItemString, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemString_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemString, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemString_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemString, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemString_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemString, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemString, callback: *const fn (KCoreConfigSkeleton__ItemString, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemString_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemString, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemString_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemString) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemString_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemString, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemString_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemString) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemString_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemString) void {
        qtc.KCoreConfigSkeleton__ItemString_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempassword.html)
pub const KCoreConfigSkeleton__ItemPassword = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempassword.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemPassword,

    pub const _is_KCoreConfigSkeleton__ItemPassword = {};
    pub const _is_KCoreConfigSkeleton__ItemString = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemPassword object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPassword {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPassword_new(_group_str, _key_str, reference_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemPassword object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPassword {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPassword_new2(_group_str, _key_str, reference_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` _config: KConfig `
    ///
    pub fn writeConfig(self: KCoreConfigSkeleton__ItemPassword, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPassword_WriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `superWriteConfig` instead
    ///
    pub const SuperWriteConfig = superWriteConfig;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superWriteConfig(self: KCoreConfigSkeleton__ItemPassword, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPassword_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onWriteConfig` instead
    ///
    pub const OnWriteConfig = onWriteConfig;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPassword, config: KConfig) callconv(.c) void `
    ///
    pub fn onWriteConfig(self: KCoreConfigSkeleton__ItemPassword, callback: *const fn (KCoreConfigSkeleton__ItemPassword, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemPassword, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPassword_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemPassword, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPassword_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPassword, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemPassword, callback: *const fn (KCoreConfigSkeleton__ItemPassword, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemPassword, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPassword_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemPassword, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPassword_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPassword, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemPassword, callback: *const fn (KCoreConfigSkeleton__ItemPassword, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemPassword, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPassword_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemPassword, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPassword_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPassword, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemPassword, callback: *const fn (KCoreConfigSkeleton__ItemPassword, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemPassword) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPassword_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemPassword) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPassword_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword`
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemPassword, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemPassword) void {
        qtc.KCoreConfigSkeleton__ItemPassword_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempath.html)
pub const KCoreConfigSkeleton__ItemPath = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempath.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemPath,

    pub const _is_KCoreConfigSkeleton__ItemPath = {};
    pub const _is_KCoreConfigSkeleton__ItemString = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemPath object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPath {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPath_new(_group_str, _key_str, reference_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemPath object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPath {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPath_new2(_group_str, _key_str, reference_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath `
    ///
    /// ` _config: KConfig `
    ///
    pub fn writeConfig(self: KCoreConfigSkeleton__ItemPath, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPath_WriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `superWriteConfig` instead
    ///
    pub const SuperWriteConfig = superWriteConfig;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superWriteConfig(self: KCoreConfigSkeleton__ItemPath, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPath_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onWriteConfig` instead
    ///
    pub const OnWriteConfig = onWriteConfig;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPath, config: KConfig) callconv(.c) void `
    ///
    pub fn onWriteConfig(self: KCoreConfigSkeleton__ItemPath, callback: *const fn (KCoreConfigSkeleton__ItemPath, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemPath, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPath_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemPath, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPath_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPath, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemPath, callback: *const fn (KCoreConfigSkeleton__ItemPath, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemPath, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPath_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemPath, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPath_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPath, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemPath, callback: *const fn (KCoreConfigSkeleton__ItemPath, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemPath, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPath_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemPath, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPath_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPath, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemPath, callback: *const fn (KCoreConfigSkeleton__ItemPath, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemPath) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPath_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemPath) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPath_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath`
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemPath, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemPath) void {
        qtc.KCoreConfigSkeleton__ItemPath_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QUrl>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html)
pub const KCoreConfigSkeleton__ItemUrl = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemUrl,

    pub const _is_KCoreConfigSkeleton__ItemUrl = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemUrl object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QUrl `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemUrl {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QUrl;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUrl_new(_group_str, _key_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemUrl object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QUrl `
    ///
    /// ` defaultValue: QUrl `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemUrl {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QUrl;
        comptime _ = @TypeOf(defaultValue)._is_QUrl;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUrl_new2(_group_str, _key_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` _config: KConfig `
    ///
    pub fn writeConfig(self: KCoreConfigSkeleton__ItemUrl, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrl_WriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onWriteConfig` instead
    ///
    pub const OnWriteConfig = onWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemUrl, config: KConfig) callconv(.c) void `
    ///
    pub fn onWriteConfig(self: KCoreConfigSkeleton__ItemUrl, callback: *const fn (KCoreConfigSkeleton__ItemUrl, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteConfig` instead
    ///
    pub const SuperWriteConfig = superWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superWriteConfig(self: KCoreConfigSkeleton__ItemUrl, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrl_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemUrl, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrl_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemUrl, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemUrl, callback: *const fn (KCoreConfigSkeleton__ItemUrl, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemUrl, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrl_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemUrl, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemUrl_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemUrl, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemUrl, callback: *const fn (KCoreConfigSkeleton__ItemUrl, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemUrl, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemUrl_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemUrl, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemUrl_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemUrl, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemUrl, callback: *const fn (KCoreConfigSkeleton__ItemUrl, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemUrl, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemUrl_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemUrl) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUrl_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemUrl, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemUrl) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUrl_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemUrl) void {
        qtc.KCoreConfigSkeleton__ItemUrl_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QVariant>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html)
pub const KCoreConfigSkeleton__ItemProperty = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemProperty,

    pub const _is_KCoreConfigSkeleton__ItemProperty = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemProperty object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemProperty {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemProperty_new(_group_str, _key_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemProperty object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemProperty {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemProperty_new2(_group_str, _key_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemProperty, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemProperty_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemProperty, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemProperty, callback: *const fn (KCoreConfigSkeleton__ItemProperty, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemProperty_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemProperty, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemProperty_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemProperty, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemProperty_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemProperty, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemProperty, callback: *const fn (KCoreConfigSkeleton__ItemProperty, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemProperty_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemProperty, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemProperty_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemProperty, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemProperty_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemProperty, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemProperty, callback: *const fn (KCoreConfigSkeleton__ItemProperty, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemProperty_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemProperty, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemProperty_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemProperty) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemProperty_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemProperty, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemProperty_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemProperty) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemProperty_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemProperty) void {
        qtc.KCoreConfigSkeleton__ItemProperty_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<bool>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html)
pub const KCoreConfigSkeleton__ItemBool = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemBool,

    pub const _is_KCoreConfigSkeleton__ItemBool = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemBool object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: *bool) KCoreConfigSkeleton__ItemBool {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemBool_new(_group_str, _key_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemBool object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: *bool, defaultValue: bool) KCoreConfigSkeleton__ItemBool {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemBool_new2(_group_str, _key_str, @ptrCast(reference), defaultValue) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemBool, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemBool_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemBool, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemBool, callback: *const fn (KCoreConfigSkeleton__ItemBool, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemBool_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemBool, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemBool_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemBool, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemBool_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemBool, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemBool, callback: *const fn (KCoreConfigSkeleton__ItemBool, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemBool_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemBool, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemBool_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemBool, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemBool_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemBool, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemBool, callback: *const fn (KCoreConfigSkeleton__ItemBool, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemBool_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemBool, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemBool_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemBool) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemBool_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemBool, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemBool_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemBool) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemBool_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemBool) void {
        qtc.KCoreConfigSkeleton__ItemBool_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<qint32>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html)
pub const KCoreConfigSkeleton__ItemInt = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemInt,

    pub const _is_KCoreConfigSkeleton__ItemInt = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemInt object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: *i32) KCoreConfigSkeleton__ItemInt {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_new(_group_str, _key_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemInt object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: *i32, defaultValue: i32) KCoreConfigSkeleton__ItemInt {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_new2(_group_str, _key_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemInt, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemInt_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemInt, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemInt, callback: *const fn (KCoreConfigSkeleton__ItemInt, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemInt, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemInt_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemInt, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemInt_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemInt, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemInt, callback: *const fn (KCoreConfigSkeleton__ItemInt, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemInt, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemInt_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemInt, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemInt_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemInt, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemInt, callback: *const fn (KCoreConfigSkeleton__ItemInt, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemInt, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemInt_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemInt, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minValue` instead
    ///
    pub const MinValue = minValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn minValue(self: KCoreConfigSkeleton__ItemInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_MinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinValue` instead
    ///
    pub const OnMinValue = onMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinValue(self: KCoreConfigSkeleton__ItemInt, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinValue` instead
    ///
    pub const SuperMinValue = superMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn superMinValue(self: KCoreConfigSkeleton__ItemInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maxValue` instead
    ///
    pub const MaxValue = maxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn maxValue(self: KCoreConfigSkeleton__ItemInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_MaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaxValue` instead
    ///
    pub const OnMaxValue = onMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaxValue(self: KCoreConfigSkeleton__ItemInt, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMaxValue` instead
    ///
    pub const SuperMaxValue = superMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn superMaxValue(self: KCoreConfigSkeleton__ItemInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemInt) void {
        qtc.KCoreConfigSkeleton__ItemInt_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<qint64>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html)
pub const KCoreConfigSkeleton__ItemLongLong = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemLongLong,

    pub const _is_KCoreConfigSkeleton__ItemLongLong = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemLongLong object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: *i64) KCoreConfigSkeleton__ItemLongLong {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_new(_group_str, _key_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemLongLong object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: *i64, defaultValue: i64) KCoreConfigSkeleton__ItemLongLong {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_new2(_group_str, _key_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemLongLong, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemLongLong_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemLongLong, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemLongLong, callback: *const fn (KCoreConfigSkeleton__ItemLongLong, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemLongLong, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemLongLong_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemLongLong, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemLongLong_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemLongLong, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemLongLong, callback: *const fn (KCoreConfigSkeleton__ItemLongLong, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemLongLong, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemLongLong_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemLongLong, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemLongLong_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemLongLong, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemLongLong, callback: *const fn (KCoreConfigSkeleton__ItemLongLong, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemLongLong, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemLongLong_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemLongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemLongLong, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemLongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minValue` instead
    ///
    pub const MinValue = minValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn minValue(self: KCoreConfigSkeleton__ItemLongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_MinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinValue` instead
    ///
    pub const OnMinValue = onMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#minValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinValue(self: KCoreConfigSkeleton__ItemLongLong, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinValue` instead
    ///
    pub const SuperMinValue = superMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn superMinValue(self: KCoreConfigSkeleton__ItemLongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maxValue` instead
    ///
    pub const MaxValue = maxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn maxValue(self: KCoreConfigSkeleton__ItemLongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_MaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaxValue` instead
    ///
    pub const OnMaxValue = onMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#maxValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaxValue(self: KCoreConfigSkeleton__ItemLongLong, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMaxValue` instead
    ///
    pub const SuperMaxValue = superMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn superMaxValue(self: KCoreConfigSkeleton__ItemLongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinValue` instead
    ///
    pub const SetMinValue = setMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setMinValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` _minValue: i64 `
    ///
    pub fn setMinValue(self: KCoreConfigSkeleton__ItemLongLong, _minValue: i64) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_SetMinValue(@ptrCast(self.ptr), @bitCast(_minValue));
    }

    /// ### DEPRECATED: Use `setMaxValue` instead
    ///
    pub const SetMaxValue = setMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setMaxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` _maxValue: i64 `
    ///
    pub fn setMaxValue(self: KCoreConfigSkeleton__ItemLongLong, _maxValue: i64) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_SetMaxValue(@ptrCast(self.ptr), @bitCast(_maxValue));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemLongLong) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html)
pub const KCoreConfigSkeleton__ItemEnum__Choice = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemEnum__Choice,

    pub const _is_KCoreConfigSkeleton__ItemEnum__Choice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemEnum::Choice object in C++ memory
    ///
    pub fn new() KCoreConfigSkeleton__ItemEnum__Choice {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum__Choice_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemEnum::Choice object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    pub fn new2(param1: anytype) KCoreConfigSkeleton__ItemEnum__Choice {
        comptime _ = @TypeOf(param1)._is_KCoreConfigSkeleton__ItemEnum__Choice;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum__Choice_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KCoreConfigSkeleton__ItemEnum__Choice, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("KCoreConfigSkeleton__ItemEnum__Choice.name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KCoreConfigSkeleton__ItemEnum__Choice, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#label-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: KCoreConfigSkeleton__ItemEnum__Choice, allocator: std.mem.Allocator) []const u8 {
        var label_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&label_str);
        const label_ret = allocator.alloc(u8, label_str.len) catch @panic("KCoreConfigSkeleton__ItemEnum__Choice.label: Memory allocation failed");
        @memcpy(label_ret, label_str.data[0..label_str.len]);
        return label_ret;
    }

    /// ### DEPRECATED: Use `setLabel` instead
    ///
    pub const SetLabel = setLabel;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#label-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn setLabel(self: KCoreConfigSkeleton__ItemEnum__Choice, _label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#toolTip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: KCoreConfigSkeleton__ItemEnum__Choice, allocator: std.mem.Allocator) []const u8 {
        var toolTip_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&toolTip_str);
        const toolTip_ret = allocator.alloc(u8, toolTip_str.len) catch @panic("KCoreConfigSkeleton__ItemEnum__Choice.toolTip: Memory allocation failed");
        @memcpy(toolTip_ret, toolTip_str.data[0..toolTip_str.len]);
        return toolTip_ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#toolTip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: KCoreConfigSkeleton__ItemEnum__Choice, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#whatsThis-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: KCoreConfigSkeleton__ItemEnum__Choice, allocator: std.mem.Allocator) []const u8 {
        var whatsThis_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&whatsThis_str);
        const whatsThis_ret = allocator.alloc(u8, whatsThis_str.len) catch @panic("KCoreConfigSkeleton__ItemEnum__Choice.whatsThis: Memory allocation failed");
        @memcpy(whatsThis_ret, whatsThis_str.data[0..whatsThis_str.len]);
        return whatsThis_ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#whatsThis-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: KCoreConfigSkeleton__ItemEnum__Choice, _whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#value-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn value(self: KCoreConfigSkeleton__ItemEnum__Choice, allocator: std.mem.Allocator) []const u8 {
        var value_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&value_str);
        const value_ret = allocator.alloc(u8, value_str.len) catch @panic("KCoreConfigSkeleton__ItemEnum__Choice.value: Memory allocation failed");
        @memcpy(value_ret, value_str.data[0..value_str.len]);
        return value_ret;
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#value-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setValue(self: KCoreConfigSkeleton__ItemEnum__Choice, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` param1: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    pub fn operatorAssign(self: KCoreConfigSkeleton__ItemEnum__Choice, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KCoreConfigSkeleton__ItemEnum__Choice;
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemEnum__Choice) void {
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html)
pub const KCoreConfigSkeleton__ItemEnum = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemEnum,

    pub const _is_KCoreConfigSkeleton__ItemEnum = {};
    pub const _is_KCoreConfigSkeleton__ItemInt = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemEnum object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` _choices: []KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: *i32, _choices: []KCoreConfigSkeleton__ItemEnum__Choice) KCoreConfigSkeleton__ItemEnum {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const choices_list = qtc.libqt_list{
            .len = _choices.len,
            .data = @ptrCast(_choices.ptr),
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_new(_group_str, _key_str, @ptrCast(reference), choices_list) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemEnum object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` _choices: []KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: *i32, _choices: []KCoreConfigSkeleton__ItemEnum__Choice, defaultValue: i32) KCoreConfigSkeleton__ItemEnum {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const choices_list = qtc.libqt_list{
            .len = _choices.len,
            .data = @ptrCast(_choices.ptr),
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_new2(_group_str, _key_str, @ptrCast(reference), choices_list, @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `choices` instead
    ///
    pub const Choices = choices;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#choices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn choices(self: KCoreConfigSkeleton__ItemEnum, allocator: std.mem.Allocator) []KCoreConfigSkeleton__ItemEnum__Choice {
        const _arr: qtc.libqt_list = qtc.KCoreConfigSkeleton__ItemEnum_Choices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KCoreConfigSkeleton__ItemEnum__Choice, _arr.len) catch @panic("KCoreConfigSkeleton__ItemEnum.choices: Memory allocation failed");
        const _data_val: [*]QtC.KCoreConfigSkeleton__ItemEnum__Choice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemEnum, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemEnum_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemEnum, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn (KCoreConfigSkeleton__ItemEnum, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemEnum, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemEnum_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` _config: KConfig `
    ///
    pub fn writeConfig(self: KCoreConfigSkeleton__ItemEnum, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemEnum_WriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onWriteConfig` instead
    ///
    pub const OnWriteConfig = onWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemEnum, config: KConfig) callconv(.c) void `
    ///
    pub fn onWriteConfig(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn (KCoreConfigSkeleton__ItemEnum, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteConfig` instead
    ///
    pub const SuperWriteConfig = superWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superWriteConfig(self: KCoreConfigSkeleton__ItemEnum, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemEnum_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `valueForChoice` instead
    ///
    pub const ValueForChoice = valueForChoice;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#valueForChoice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn valueForChoice(self: KCoreConfigSkeleton__ItemEnum, allocator: std.mem.Allocator, _name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        var _str = qtc.KCoreConfigSkeleton__ItemEnum_ValueForChoice(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreConfigSkeleton__ItemEnum.valueForChoice: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setValueForChoice` instead
    ///
    pub const SetValueForChoice = setValueForChoice;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#setValueForChoice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _valueForChoice: []const u8 `
    ///
    pub fn setValueForChoice(self: KCoreConfigSkeleton__ItemEnum, _name: []const u8, _valueForChoice: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const valueForChoice_str = qtc.libqt_string{
            .len = _valueForChoice.len,
            .data = _valueForChoice.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum_SetValueForChoice(@ptrCast(self.ptr), name_str, valueForChoice_str);
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemEnum, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemEnum_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemEnum, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemEnum_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemEnum, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn (KCoreConfigSkeleton__ItemEnum, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemEnum, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemEnum_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemEnum, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemEnum_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemEnum, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn (KCoreConfigSkeleton__ItemEnum, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemEnum) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemEnum) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum`
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minValue` instead
    ///
    pub const MinValue = minValue;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn minValue(self: KCoreConfigSkeleton__ItemEnum) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_MinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMinValue` instead
    ///
    pub const SuperMinValue = superMinValue;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn superMinValue(self: KCoreConfigSkeleton__ItemEnum) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinValue` instead
    ///
    pub const OnMinValue = onMinValue;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum`
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinValue(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maxValue` instead
    ///
    pub const MaxValue = maxValue;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn maxValue(self: KCoreConfigSkeleton__ItemEnum) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_MaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMaxValue` instead
    ///
    pub const SuperMaxValue = superMaxValue;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn superMaxValue(self: KCoreConfigSkeleton__ItemEnum) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaxValue` instead
    ///
    pub const OnMaxValue = onMaxValue;

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum`
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaxValue(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemEnum) void {
        qtc.KCoreConfigSkeleton__ItemEnum_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<quint32>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html)
pub const KCoreConfigSkeleton__ItemUInt = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemUInt,

    pub const _is_KCoreConfigSkeleton__ItemUInt = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemUInt object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: *u32) KCoreConfigSkeleton__ItemUInt {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_new(_group_str, _key_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemUInt object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: *u32, defaultValue: u32) KCoreConfigSkeleton__ItemUInt {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_new2(_group_str, _key_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemUInt, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUInt_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemUInt, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemUInt, callback: *const fn (KCoreConfigSkeleton__ItemUInt, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemUInt, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUInt_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemUInt, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemUInt_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemUInt, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemUInt, callback: *const fn (KCoreConfigSkeleton__ItemUInt, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemUInt, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemUInt_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemUInt, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemUInt_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemUInt, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemUInt, callback: *const fn (KCoreConfigSkeleton__ItemUInt, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemUInt, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemUInt_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemUInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemUInt, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemUInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minValue` instead
    ///
    pub const MinValue = minValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn minValue(self: KCoreConfigSkeleton__ItemUInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_MinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinValue` instead
    ///
    pub const OnMinValue = onMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#minValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinValue(self: KCoreConfigSkeleton__ItemUInt, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinValue` instead
    ///
    pub const SuperMinValue = superMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn superMinValue(self: KCoreConfigSkeleton__ItemUInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maxValue` instead
    ///
    pub const MaxValue = maxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn maxValue(self: KCoreConfigSkeleton__ItemUInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_MaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaxValue` instead
    ///
    pub const OnMaxValue = onMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#maxValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaxValue(self: KCoreConfigSkeleton__ItemUInt, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMaxValue` instead
    ///
    pub const SuperMaxValue = superMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn superMaxValue(self: KCoreConfigSkeleton__ItemUInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinValue` instead
    ///
    pub const SetMinValue = setMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setMinValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` _minValue: u32 `
    ///
    pub fn setMinValue(self: KCoreConfigSkeleton__ItemUInt, _minValue: u32) void {
        qtc.KCoreConfigSkeleton__ItemUInt_SetMinValue(@ptrCast(self.ptr), @bitCast(_minValue));
    }

    /// ### DEPRECATED: Use `setMaxValue` instead
    ///
    pub const SetMaxValue = setMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setMaxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` _maxValue: u32 `
    ///
    pub fn setMaxValue(self: KCoreConfigSkeleton__ItemUInt, _maxValue: u32) void {
        qtc.KCoreConfigSkeleton__ItemUInt_SetMaxValue(@ptrCast(self.ptr), @bitCast(_maxValue));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemUInt) void {
        qtc.KCoreConfigSkeleton__ItemUInt_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<quint64>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html)
pub const KCoreConfigSkeleton__ItemULongLong = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemULongLong,

    pub const _is_KCoreConfigSkeleton__ItemULongLong = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemULongLong object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: *u64) KCoreConfigSkeleton__ItemULongLong {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_new(_group_str, _key_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemULongLong object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: *u64, defaultValue: u64) KCoreConfigSkeleton__ItemULongLong {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_new2(_group_str, _key_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemULongLong, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemULongLong_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemULongLong, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemULongLong, callback: *const fn (KCoreConfigSkeleton__ItemULongLong, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemULongLong, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemULongLong_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemULongLong, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemULongLong_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemULongLong, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemULongLong, callback: *const fn (KCoreConfigSkeleton__ItemULongLong, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemULongLong, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemULongLong_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemULongLong, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemULongLong_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemULongLong, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemULongLong, callback: *const fn (KCoreConfigSkeleton__ItemULongLong, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemULongLong, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemULongLong_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemULongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemULongLong, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemULongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minValue` instead
    ///
    pub const MinValue = minValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn minValue(self: KCoreConfigSkeleton__ItemULongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_MinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinValue` instead
    ///
    pub const OnMinValue = onMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#minValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinValue(self: KCoreConfigSkeleton__ItemULongLong, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinValue` instead
    ///
    pub const SuperMinValue = superMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn superMinValue(self: KCoreConfigSkeleton__ItemULongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maxValue` instead
    ///
    pub const MaxValue = maxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn maxValue(self: KCoreConfigSkeleton__ItemULongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_MaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaxValue` instead
    ///
    pub const OnMaxValue = onMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#maxValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaxValue(self: KCoreConfigSkeleton__ItemULongLong, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMaxValue` instead
    ///
    pub const SuperMaxValue = superMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn superMaxValue(self: KCoreConfigSkeleton__ItemULongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinValue` instead
    ///
    pub const SetMinValue = setMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setMinValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` _minValue: u64 `
    ///
    pub fn setMinValue(self: KCoreConfigSkeleton__ItemULongLong, _minValue: u64) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_SetMinValue(@ptrCast(self.ptr), @bitCast(_minValue));
    }

    /// ### DEPRECATED: Use `setMaxValue` instead
    ///
    pub const SetMaxValue = setMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setMaxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` _maxValue: u64 `
    ///
    pub fn setMaxValue(self: KCoreConfigSkeleton__ItemULongLong, _maxValue: u64) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_SetMaxValue(@ptrCast(self.ptr), @bitCast(_maxValue));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemULongLong) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<double>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html)
pub const KCoreConfigSkeleton__ItemDouble = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemDouble,

    pub const _is_KCoreConfigSkeleton__ItemDouble = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemDouble object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: *f64) KCoreConfigSkeleton__ItemDouble {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_new(_group_str, _key_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemDouble object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: *f64, defaultValue: f64) KCoreConfigSkeleton__ItemDouble {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_new2(_group_str, _key_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemDouble, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemDouble_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemDouble, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemDouble, callback: *const fn (KCoreConfigSkeleton__ItemDouble, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemDouble, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemDouble_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemDouble, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemDouble_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemDouble, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemDouble, callback: *const fn (KCoreConfigSkeleton__ItemDouble, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemDouble, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemDouble_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemDouble, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemDouble_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemDouble, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemDouble, callback: *const fn (KCoreConfigSkeleton__ItemDouble, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemDouble, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemDouble_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemDouble) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemDouble, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemDouble) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minValue` instead
    ///
    pub const MinValue = minValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn minValue(self: KCoreConfigSkeleton__ItemDouble) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_MinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinValue` instead
    ///
    pub const OnMinValue = onMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#minValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinValue(self: KCoreConfigSkeleton__ItemDouble, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinValue` instead
    ///
    pub const SuperMinValue = superMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn superMinValue(self: KCoreConfigSkeleton__ItemDouble) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maxValue` instead
    ///
    pub const MaxValue = maxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn maxValue(self: KCoreConfigSkeleton__ItemDouble) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_MaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaxValue` instead
    ///
    pub const OnMaxValue = onMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#maxValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaxValue(self: KCoreConfigSkeleton__ItemDouble, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMaxValue` instead
    ///
    pub const SuperMaxValue = superMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn superMaxValue(self: KCoreConfigSkeleton__ItemDouble) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinValue` instead
    ///
    pub const SetMinValue = setMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setMinValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` _minValue: f64 `
    ///
    pub fn setMinValue(self: KCoreConfigSkeleton__ItemDouble, _minValue: f64) void {
        qtc.KCoreConfigSkeleton__ItemDouble_SetMinValue(@ptrCast(self.ptr), @bitCast(_minValue));
    }

    /// ### DEPRECATED: Use `setMaxValue` instead
    ///
    pub const SetMaxValue = setMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setMaxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` _maxValue: f64 `
    ///
    pub fn setMaxValue(self: KCoreConfigSkeleton__ItemDouble, _maxValue: f64) void {
        qtc.KCoreConfigSkeleton__ItemDouble_SetMaxValue(@ptrCast(self.ptr), @bitCast(_maxValue));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemDouble) void {
        qtc.KCoreConfigSkeleton__ItemDouble_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QRect>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html)
pub const KCoreConfigSkeleton__ItemRect = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemRect,

    pub const _is_KCoreConfigSkeleton__ItemRect = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemRect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRect {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemRect_new(_group_str, _key_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemRect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    /// ` defaultValue: QRect `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRect {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        comptime _ = @TypeOf(defaultValue)._is_QRect;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemRect_new2(_group_str, _key_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemRect, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemRect_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemRect, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemRect, callback: *const fn (KCoreConfigSkeleton__ItemRect, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemRect_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemRect, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemRect_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemRect_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemRect, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemRect, callback: *const fn (KCoreConfigSkeleton__ItemRect, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemRect_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemRect_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemRect, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemRect_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemRect, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemRect, callback: *const fn (KCoreConfigSkeleton__ItemRect, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemRect_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemRect, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemRect_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemRect) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemRect_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemRect, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemRect_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemRect) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemRect_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemRect) void {
        qtc.KCoreConfigSkeleton__ItemRect_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QRectF>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html)
pub const KCoreConfigSkeleton__ItemRectF = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemRectF,

    pub const _is_KCoreConfigSkeleton__ItemRectF = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemRectF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRectF {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemRectF_new(_group_str, _key_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemRectF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    /// ` defaultValue: QRectF `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRectF {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        comptime _ = @TypeOf(defaultValue)._is_QRectF;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemRectF_new2(_group_str, _key_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemRectF, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemRectF_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemRectF, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemRectF, callback: *const fn (KCoreConfigSkeleton__ItemRectF, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemRectF_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemRectF, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemRectF_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemRectF_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemRectF, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemRectF, callback: *const fn (KCoreConfigSkeleton__ItemRectF, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemRectF_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemRectF_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemRectF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemRectF_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemRectF, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemRectF, callback: *const fn (KCoreConfigSkeleton__ItemRectF, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemRectF_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemRectF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemRectF_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemRectF) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemRectF_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemRectF, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemRectF_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemRectF) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemRectF_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemRectF) void {
        qtc.KCoreConfigSkeleton__ItemRectF_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QPoint>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html)
pub const KCoreConfigSkeleton__ItemPoint = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemPoint,

    pub const _is_KCoreConfigSkeleton__ItemPoint = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPoint {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPoint_new(_group_str, _key_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    /// ` defaultValue: QPoint `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPoint {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        comptime _ = @TypeOf(defaultValue)._is_QPoint;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPoint_new2(_group_str, _key_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemPoint, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPoint_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPoint, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemPoint, callback: *const fn (KCoreConfigSkeleton__ItemPoint, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPoint_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemPoint, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPoint_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemPoint, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPoint_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPoint, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemPoint, callback: *const fn (KCoreConfigSkeleton__ItemPoint, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPoint_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemPoint, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPoint_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemPoint, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPoint_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPoint, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemPoint, callback: *const fn (KCoreConfigSkeleton__ItemPoint, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPoint_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemPoint, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPoint_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemPoint) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPoint_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemPoint, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPoint_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemPoint) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPoint_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemPoint) void {
        qtc.KCoreConfigSkeleton__ItemPoint_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QPointF>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html)
pub const KCoreConfigSkeleton__ItemPointF = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemPointF,

    pub const _is_KCoreConfigSkeleton__ItemPointF = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemPointF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPointF {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPointF_new(_group_str, _key_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemPointF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    /// ` defaultValue: QPointF `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPointF {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        comptime _ = @TypeOf(defaultValue)._is_QPointF;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPointF_new2(_group_str, _key_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemPointF, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPointF_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPointF, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemPointF, callback: *const fn (KCoreConfigSkeleton__ItemPointF, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPointF_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemPointF, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPointF_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemPointF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPointF_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPointF, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemPointF, callback: *const fn (KCoreConfigSkeleton__ItemPointF, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPointF_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemPointF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPointF_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemPointF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPointF_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPointF, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemPointF, callback: *const fn (KCoreConfigSkeleton__ItemPointF, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPointF_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemPointF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPointF_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemPointF) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPointF_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemPointF, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPointF_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemPointF) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPointF_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemPointF) void {
        qtc.KCoreConfigSkeleton__ItemPointF_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QSize>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html)
pub const KCoreConfigSkeleton__ItemSize = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemSize,

    pub const _is_KCoreConfigSkeleton__ItemSize = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSize {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemSize_new(_group_str, _key_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    /// ` defaultValue: QSize `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSize {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        comptime _ = @TypeOf(defaultValue)._is_QSize;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemSize_new2(_group_str, _key_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemSize, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemSize_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemSize, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemSize, callback: *const fn (KCoreConfigSkeleton__ItemSize, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemSize_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemSize, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemSize_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemSize, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemSize_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemSize, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemSize, callback: *const fn (KCoreConfigSkeleton__ItemSize, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemSize_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemSize, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemSize_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemSize, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemSize_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemSize, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemSize, callback: *const fn (KCoreConfigSkeleton__ItemSize, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemSize_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemSize, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemSize_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemSize) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemSize_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemSize, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemSize_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemSize) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemSize_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemSize) void {
        qtc.KCoreConfigSkeleton__ItemSize_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QSizeF>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html)
pub const KCoreConfigSkeleton__ItemSizeF = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemSizeF,

    pub const _is_KCoreConfigSkeleton__ItemSizeF = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemSizeF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSizeF {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemSizeF_new(_group_str, _key_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemSizeF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    /// ` defaultValue: QSizeF `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSizeF {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        comptime _ = @TypeOf(defaultValue)._is_QSizeF;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemSizeF_new2(_group_str, _key_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemSizeF, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemSizeF_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemSizeF, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemSizeF, callback: *const fn (KCoreConfigSkeleton__ItemSizeF, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemSizeF, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemSizeF_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemSizeF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemSizeF_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemSizeF, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemSizeF, callback: *const fn (KCoreConfigSkeleton__ItemSizeF, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemSizeF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemSizeF_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemSizeF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemSizeF_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemSizeF, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemSizeF, callback: *const fn (KCoreConfigSkeleton__ItemSizeF, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemSizeF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemSizeF_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemSizeF) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemSizeF_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemSizeF, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemSizeF) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemSizeF_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemSizeF) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QDateTime>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html)
pub const KCoreConfigSkeleton__ItemDateTime = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemDateTime,

    pub const _is_KCoreConfigSkeleton__ItemDateTime = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemDateTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemDateTime {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDateTime_new(_group_str, _key_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemDateTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    /// ` defaultValue: QDateTime `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemDateTime {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDateTime_new2(_group_str, _key_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemDateTime, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemDateTime_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemDateTime, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemDateTime, callback: *const fn (KCoreConfigSkeleton__ItemDateTime, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemDateTime, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemDateTime_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemDateTime, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemDateTime_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemDateTime, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemDateTime, callback: *const fn (KCoreConfigSkeleton__ItemDateTime, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemDateTime, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemDateTime_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemDateTime, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemDateTime_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemDateTime, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemDateTime, callback: *const fn (KCoreConfigSkeleton__ItemDateTime, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemDateTime, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemDateTime_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemDateTime) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDateTime_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemDateTime, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemDateTime) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDateTime_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemDateTime) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QList<QString>>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html)
pub const KCoreConfigSkeleton__ItemStringList = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemStringList,

    pub const _is_KCoreConfigSkeleton__ItemStringList = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemStringList object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    pub fn new(allocator: std.mem.Allocator, _group: []const u8, _key: []const u8, reference: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KCoreConfigSkeleton__ItemStringList.new: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemStringList_new(_group_str, _key_str, reference_list) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemStringList object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    pub fn new2(allocator: std.mem.Allocator, _group: []const u8, _key: []const u8, reference: []const []const u8, defaultValue: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KCoreConfigSkeleton__ItemStringList.new2: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("KCoreConfigSkeleton__ItemStringList.new2: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |str_item, i|
            defaultValue_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemStringList_new2(_group_str, _key_str, reference_list, defaultValue_list) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemStringList, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemStringList_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemStringList, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemStringList, callback: *const fn (KCoreConfigSkeleton__ItemStringList, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemStringList_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemStringList, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemStringList_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemStringList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemStringList_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemStringList, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemStringList, callback: *const fn (KCoreConfigSkeleton__ItemStringList, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemStringList_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemStringList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemStringList_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemStringList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemStringList_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemStringList, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemStringList, callback: *const fn (KCoreConfigSkeleton__ItemStringList, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemStringList_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemStringList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemStringList_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemStringList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemStringList_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemStringList, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemStringList_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemStringList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemStringList_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemStringList) void {
        qtc.KCoreConfigSkeleton__ItemStringList_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html)
pub const KCoreConfigSkeleton__ItemPathList = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemPathList,

    pub const _is_KCoreConfigSkeleton__ItemPathList = {};
    pub const _is_KCoreConfigSkeleton__ItemStringList = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemPathList object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    pub fn new(allocator: std.mem.Allocator, _group: []const u8, _key: []const u8, reference: []const []const u8) KCoreConfigSkeleton__ItemPathList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KCoreConfigSkeleton__ItemPathList.new: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPathList_new(_group_str, _key_str, reference_list) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemPathList object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    pub fn new2(allocator: std.mem.Allocator, _group: []const u8, _key: []const u8, reference: []const []const u8, defaultValue: []const []const u8) KCoreConfigSkeleton__ItemPathList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KCoreConfigSkeleton__ItemPathList.new2: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("KCoreConfigSkeleton__ItemPathList.new2: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |str_item, i|
            defaultValue_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPathList_new2(_group_str, _key_str, reference_list, defaultValue_list) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemPathList, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPathList_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPathList, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemPathList, callback: *const fn (KCoreConfigSkeleton__ItemPathList, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemPathList, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPathList_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` _config: KConfig `
    ///
    pub fn writeConfig(self: KCoreConfigSkeleton__ItemPathList, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPathList_WriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onWriteConfig` instead
    ///
    pub const OnWriteConfig = onWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPathList, config: KConfig) callconv(.c) void `
    ///
    pub fn onWriteConfig(self: KCoreConfigSkeleton__ItemPathList, callback: *const fn (KCoreConfigSkeleton__ItemPathList, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteConfig` instead
    ///
    pub const SuperWriteConfig = superWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superWriteConfig(self: KCoreConfigSkeleton__ItemPathList, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPathList_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemPathList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPathList_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemPathList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPathList_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPathList, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemPathList, callback: *const fn (KCoreConfigSkeleton__ItemPathList, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemPathList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPathList_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemPathList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPathList_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList`
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemPathList, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemPathList, callback: *const fn (KCoreConfigSkeleton__ItemPathList, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemPathList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPathList_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemPathList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPathList_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList`
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemPathList, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemPathList) void {
        qtc.KCoreConfigSkeleton__ItemPathList_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QList<QUrl>>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html)
pub const KCoreConfigSkeleton__ItemUrlList = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemUrlList,

    pub const _is_KCoreConfigSkeleton__ItemUrlList = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemUrlList object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []QUrl `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: []QUrl) KCoreConfigSkeleton__ItemUrlList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = @ptrCast(reference.ptr),
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUrlList_new(_group_str, _key_str, reference_list) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemUrlList object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []QUrl `
    ///
    /// ` defaultValue: []QUrl `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: []QUrl, defaultValue: []QUrl) KCoreConfigSkeleton__ItemUrlList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = @ptrCast(reference.ptr),
        };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = @ptrCast(defaultValue.ptr),
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUrlList_new2(_group_str, _key_str, reference_list, defaultValue_list) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemUrlList, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrlList_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemUrlList, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemUrlList, callback: *const fn (KCoreConfigSkeleton__ItemUrlList, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemUrlList, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrlList_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` _config: KConfig `
    ///
    pub fn writeConfig(self: KCoreConfigSkeleton__ItemUrlList, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrlList_WriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onWriteConfig` instead
    ///
    pub const OnWriteConfig = onWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemUrlList, config: KConfig) callconv(.c) void `
    ///
    pub fn onWriteConfig(self: KCoreConfigSkeleton__ItemUrlList, callback: *const fn (KCoreConfigSkeleton__ItemUrlList, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteConfig` instead
    ///
    pub const SuperWriteConfig = superWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superWriteConfig(self: KCoreConfigSkeleton__ItemUrlList, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrlList_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemUrlList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemUrlList_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemUrlList, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemUrlList, callback: *const fn (KCoreConfigSkeleton__ItemUrlList, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemUrlList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemUrlList_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemUrlList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemUrlList_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemUrlList, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemUrlList, callback: *const fn (KCoreConfigSkeleton__ItemUrlList, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemUrlList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemUrlList_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemUrlList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUrlList_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemUrlList, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemUrlList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUrlList_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemUrlList) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QList<int>>

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html)
pub const KCoreConfigSkeleton__ItemIntList = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreConfigSkeleton__ItemIntList,

    pub const _is_KCoreConfigSkeleton__ItemIntList = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreConfigSkeleton::ItemIntList object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: []i32) KCoreConfigSkeleton__ItemIntList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemIntList_new(_group_str, _key_str, reference_list) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreConfigSkeleton::ItemIntList object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: []i32, defaultValue: []i32) KCoreConfigSkeleton__ItemIntList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemIntList_new2(_group_str, _key_str, reference_list, defaultValue_list) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KCoreConfigSkeleton__ItemIntList, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemIntList_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemIntList, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KCoreConfigSkeleton__ItemIntList, callback: *const fn (KCoreConfigSkeleton__ItemIntList, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemIntList_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KCoreConfigSkeleton__ItemIntList, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemIntList_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KCoreConfigSkeleton__ItemIntList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemIntList_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemIntList, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KCoreConfigSkeleton__ItemIntList, callback: *const fn (KCoreConfigSkeleton__ItemIntList, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemIntList_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KCoreConfigSkeleton__ItemIntList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemIntList_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KCoreConfigSkeleton__ItemIntList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemIntList_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton__ItemIntList, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KCoreConfigSkeleton__ItemIntList, callback: *const fn (KCoreConfigSkeleton__ItemIntList, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemIntList_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KCoreConfigSkeleton__ItemIntList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemIntList_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    pub fn property(self: KCoreConfigSkeleton__ItemIntList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemIntList_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KCoreConfigSkeleton__ItemIntList, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemIntList_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    pub fn superProperty(self: KCoreConfigSkeleton__ItemIntList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemIntList_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    pub fn delete(self: KCoreConfigSkeleton__ItemIntList) void {
        qtc.KCoreConfigSkeleton__ItemIntList_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const Normal: i32 = 0;
        pub const Password: i32 = 1;
        pub const Path: i32 = 2;
    };
};
