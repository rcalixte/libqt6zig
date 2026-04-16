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

    /// New constructs a new KConfigSkeletonItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn New(_group: []const u8, _key: []const u8) KConfigSkeletonItem {
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

    /// New2 constructs a new KConfigSkeletonItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KConfigSkeletonItem `
    ///
    pub fn New2(param1: anytype) KConfigSkeletonItem {
        comptime _ = @TypeOf(param1)._is_KConfigSkeletonItem;
        return .{ .ptr = qtc.KConfigSkeletonItem_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn SetGroup(self: KConfigSkeletonItem, _group: []const u8) void {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigSkeletonItem_SetGroup(@ptrCast(self.ptr), _group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: KConfigSkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeletonitem.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` cg: KConfigGroup `
    ///
    pub fn SetGroup2(self: KConfigSkeletonItem, cg: anytype) void {
        comptime _ = @TypeOf(cg)._is_KConfigGroup;
        qtc.KConfigSkeletonItem_SetGroup2(@ptrCast(self.ptr), @ptrCast(cg.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#configGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` config: KConfig `
    ///
    pub fn ConfigGroup(self: KConfigSkeletonItem, config: anytype) KConfigGroup {
        comptime _ = @TypeOf(config)._is_KConfig;
        return .{ .ptr = qtc.KConfigSkeletonItem_ConfigGroup(@ptrCast(self.ptr), @ptrCast(config.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn SetKey(self: KConfigSkeletonItem, _key: []const u8) void {
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.KConfigSkeletonItem_SetKey(@ptrCast(self.ptr), _key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: KConfigSkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeletonitem.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn SetName(self: KConfigSkeletonItem, _name: []const u8) void {
        const _name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KConfigSkeletonItem_SetName(@ptrCast(self.ptr), _name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KConfigSkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeletonitem.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` l: []const u8 `
    ///
    pub fn SetLabel(self: KConfigSkeletonItem, l: []const u8) void {
        const l_str = qtc.libqt_string{
            .len = l.len,
            .data = l.ptr,
        };
        qtc.KConfigSkeletonItem_SetLabel(@ptrCast(self.ptr), l_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: KConfigSkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeletonitem.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` t: []const u8 `
    ///
    pub fn SetToolTip(self: KConfigSkeletonItem, t: []const u8) void {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KConfigSkeletonItem_SetToolTip(@ptrCast(self.ptr), t_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KConfigSkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeletonitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` w: []const u8 `
    ///
    pub fn SetWhatsThis(self: KConfigSkeletonItem, w: []const u8) void {
        const w_str = qtc.libqt_string{
            .len = w.len,
            .data = w.ptr,
        };
        qtc.KConfigSkeletonItem_SetWhatsThis(@ptrCast(self.ptr), w_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KConfigSkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeletonitem.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWriteFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SetWriteFlags(self: KConfigSkeletonItem, flags: i32) void {
        qtc.KConfigSkeletonItem_SetWriteFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

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
    pub fn WriteFlags(self: KConfigSkeletonItem) i32 {
        return qtc.KConfigSkeletonItem_WriteFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn ReadConfig(self: KConfigSkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigSkeletonItem_ReadConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnReadConfig(self: KConfigSkeletonItem, callback: *const fn (KConfigSkeletonItem, KConfig) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

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
    pub fn SuperReadConfig(self: KConfigSkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigSkeletonItem_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn WriteConfig(self: KConfigSkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigSkeletonItem_WriteConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnWriteConfig(self: KConfigSkeletonItem, callback: *const fn (KConfigSkeletonItem, KConfig) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteConfig` instead
    ///
    pub const QBaseWriteConfig = SuperWriteConfig;

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
    pub fn SuperWriteConfig(self: KConfigSkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigSkeletonItem_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn ReadDefault(self: KConfigSkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigSkeletonItem_ReadDefault(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnReadDefault(self: KConfigSkeletonItem, callback: *const fn (KConfigSkeletonItem, KConfig) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnReadDefault(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadDefault` instead
    ///
    pub const QBaseReadDefault = SuperReadDefault;

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
    pub fn SuperReadDefault(self: KConfigSkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigSkeletonItem_SuperReadDefault(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KConfigSkeletonItem, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KConfigSkeletonItem_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KConfigSkeletonItem, callback: *const fn (KConfigSkeletonItem, QVariant) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KConfigSkeletonItem, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KConfigSkeletonItem_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KConfigSkeletonItem, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KConfigSkeletonItem_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KConfigSkeletonItem, callback: *const fn (KConfigSkeletonItem, QVariant) callconv(.c) bool) void {
        qtc.KConfigSkeletonItem_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KConfigSkeletonItem, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KConfigSkeletonItem_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn Property(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KConfigSkeletonItem, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KConfigSkeletonItem_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn SuperProperty(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn MinValue(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_MinValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinValue(self: KConfigSkeletonItem, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KConfigSkeletonItem_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinValue` instead
    ///
    pub const QBaseMinValue = SuperMinValue;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn SuperMinValue(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn MaxValue(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_MaxValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMaxValue(self: KConfigSkeletonItem, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KConfigSkeletonItem_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaxValue` instead
    ///
    pub const QBaseMaxValue = SuperMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn SuperMaxValue(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn SetDefault(self: KConfigSkeletonItem) void {
        qtc.KConfigSkeletonItem_SetDefault(@ptrCast(self.ptr));
    }

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
    pub fn OnSetDefault(self: KConfigSkeletonItem, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnSetDefault(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetDefault` instead
    ///
    pub const QBaseSetDefault = SuperSetDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn SuperSetDefault(self: KConfigSkeletonItem) void {
        qtc.KConfigSkeletonItem_SuperSetDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#swapDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn SwapDefault(self: KConfigSkeletonItem) void {
        qtc.KConfigSkeletonItem_SwapDefault(@ptrCast(self.ptr));
    }

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
    pub fn OnSwapDefault(self: KConfigSkeletonItem, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnSwapDefault(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSwapDefault` instead
    ///
    pub const QBaseSwapDefault = SuperSwapDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#swapDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn SuperSwapDefault(self: KConfigSkeletonItem) void {
        qtc.KConfigSkeletonItem_SuperSwapDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn IsImmutable(self: KConfigSkeletonItem) bool {
        return qtc.KConfigSkeletonItem_IsImmutable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn IsDefault(self: KConfigSkeletonItem) bool {
        return qtc.KConfigSkeletonItem_IsDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn IsSaveNeeded(self: KConfigSkeletonItem) bool {
        return qtc.KConfigSkeletonItem_IsSaveNeeded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#getDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn GetDefault(self: KConfigSkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_GetDefault(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` group: KConfigGroup `
    ///
    pub fn ReadImmutability(self: KConfigSkeletonItem, group: anytype) void {
        comptime _ = @TypeOf(group)._is_KConfigGroup;
        qtc.KConfigSkeletonItem_ReadImmutability(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

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
    pub fn OnReadImmutability(self: KConfigSkeletonItem, callback: *const fn (KConfigSkeletonItem, KConfigGroup) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnReadImmutability(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadImmutability` instead
    ///
    pub const QBaseReadImmutability = SuperReadImmutability;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    /// ` group: KConfigGroup `
    ///
    pub fn SuperReadImmutability(self: KConfigSkeletonItem, group: anytype) void {
        comptime _ = @TypeOf(group)._is_KConfigGroup;
        qtc.KConfigSkeletonItem_SuperReadImmutability(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#dtor.KConfigSkeletonItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigSkeletonItem `
    ///
    pub fn Delete(self: KConfigSkeletonItem) void {
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

    /// New constructs a new KPropertySkeletonItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QObject `
    ///
    /// ` propertyName: []u8 `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn New(object: anytype, propertyName: []u8, defaultValue: anytype) KPropertySkeletonItem {
        comptime _ = @TypeOf(object)._is_QObject;
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.KPropertySkeletonItem_new(@ptrCast(object.ptr), propertyName_str, @ptrCast(defaultValue.ptr)) };
    }

    /// New2 constructs a new KPropertySkeletonItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KPropertySkeletonItem `
    ///
    pub fn New2(param1: anytype) KPropertySkeletonItem {
        comptime _ = @TypeOf(param1)._is_KPropertySkeletonItem;
        return .{ .ptr = qtc.KPropertySkeletonItem_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn Property(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KPropertySkeletonItem_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KPropertySkeletonItem, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KPropertySkeletonItem_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn SuperProperty(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KPropertySkeletonItem_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KPropertySkeletonItem, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KPropertySkeletonItem_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KPropertySkeletonItem, callback: *const fn (KPropertySkeletonItem, QVariant) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KPropertySkeletonItem, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KPropertySkeletonItem_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KPropertySkeletonItem, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KPropertySkeletonItem_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KPropertySkeletonItem, callback: *const fn (KPropertySkeletonItem, QVariant) callconv(.c) bool) void {
        qtc.KPropertySkeletonItem_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KPropertySkeletonItem, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KPropertySkeletonItem_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn ReadConfig(self: KPropertySkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KPropertySkeletonItem_ReadConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnReadConfig(self: KPropertySkeletonItem, callback: *const fn (KPropertySkeletonItem, KConfig) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

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
    pub fn SuperReadConfig(self: KPropertySkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KPropertySkeletonItem_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn WriteConfig(self: KPropertySkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KPropertySkeletonItem_WriteConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnWriteConfig(self: KPropertySkeletonItem, callback: *const fn (KPropertySkeletonItem, KConfig) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteConfig` instead
    ///
    pub const QBaseWriteConfig = SuperWriteConfig;

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
    pub fn SuperWriteConfig(self: KPropertySkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KPropertySkeletonItem_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn ReadDefault(self: KPropertySkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KPropertySkeletonItem_ReadDefault(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnReadDefault(self: KPropertySkeletonItem, callback: *const fn (KPropertySkeletonItem, KConfig) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnReadDefault(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadDefault` instead
    ///
    pub const QBaseReadDefault = SuperReadDefault;

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
    pub fn SuperReadDefault(self: KPropertySkeletonItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KPropertySkeletonItem_SuperReadDefault(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn SetDefault(self: KPropertySkeletonItem) void {
        qtc.KPropertySkeletonItem_SetDefault(@ptrCast(self.ptr));
    }

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
    pub fn OnSetDefault(self: KPropertySkeletonItem, callback: *const fn () callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnSetDefault(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetDefault` instead
    ///
    pub const QBaseSetDefault = SuperSetDefault;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn SuperSetDefault(self: KPropertySkeletonItem) void {
        qtc.KPropertySkeletonItem_SuperSetDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#swapDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn SwapDefault(self: KPropertySkeletonItem) void {
        qtc.KPropertySkeletonItem_SwapDefault(@ptrCast(self.ptr));
    }

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
    pub fn OnSwapDefault(self: KPropertySkeletonItem, callback: *const fn () callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnSwapDefault(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSwapDefault` instead
    ///
    pub const QBaseSwapDefault = SuperSwapDefault;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#swapDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn SuperSwapDefault(self: KPropertySkeletonItem) void {
        qtc.KPropertySkeletonItem_SuperSwapDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setNotifyFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    /// ` impl: *const fn () callconv(.c) void `
    ///
    pub fn SetNotifyFunction(self: KPropertySkeletonItem, impl: *const fn () callconv(.c) void) void {
        qtc.KPropertySkeletonItem_SetNotifyFunction(@ptrCast(self.ptr), @bitCast(@intFromPtr(impl)));
    }

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
    pub fn SetGroup(self: KPropertySkeletonItem, _group: []const u8) void {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigSkeletonItem_SetGroup(@ptrCast(self.ptr), _group_str);
    }

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
    pub fn Group(self: KPropertySkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpropertyskeletonitem.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetGroup2(self: KPropertySkeletonItem, cg: anytype) void {
        comptime _ = @TypeOf(cg)._is_KConfigGroup;
        qtc.KConfigSkeletonItem_SetGroup2(@ptrCast(self.ptr), @ptrCast(cg.ptr));
    }

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
    pub fn ConfigGroup(self: KPropertySkeletonItem, config: anytype) KConfigGroup {
        comptime _ = @TypeOf(config)._is_KConfig;
        return .{ .ptr = qtc.KConfigSkeletonItem_ConfigGroup(@ptrCast(self.ptr), @ptrCast(config.ptr)) };
    }

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
    pub fn SetKey(self: KPropertySkeletonItem, _key: []const u8) void {
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.KConfigSkeletonItem_SetKey(@ptrCast(self.ptr), _key_str);
    }

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
    pub fn Key(self: KPropertySkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpropertyskeletonitem.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetName(self: KPropertySkeletonItem, _name: []const u8) void {
        const _name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KConfigSkeletonItem_SetName(@ptrCast(self.ptr), _name_str);
    }

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
    pub fn Name(self: KPropertySkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpropertyskeletonitem.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetLabel(self: KPropertySkeletonItem, l: []const u8) void {
        const l_str = qtc.libqt_string{
            .len = l.len,
            .data = l.ptr,
        };
        qtc.KConfigSkeletonItem_SetLabel(@ptrCast(self.ptr), l_str);
    }

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
    pub fn Label(self: KPropertySkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpropertyskeletonitem.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetToolTip(self: KPropertySkeletonItem, t: []const u8) void {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KConfigSkeletonItem_SetToolTip(@ptrCast(self.ptr), t_str);
    }

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
    pub fn ToolTip(self: KPropertySkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpropertyskeletonitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWhatsThis(self: KPropertySkeletonItem, w: []const u8) void {
        const w_str = qtc.libqt_string{
            .len = w.len,
            .data = w.ptr,
        };
        qtc.KConfigSkeletonItem_SetWhatsThis(@ptrCast(self.ptr), w_str);
    }

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
    pub fn WhatsThis(self: KPropertySkeletonItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpropertyskeletonitem.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWriteFlags(self: KPropertySkeletonItem, flags: i32) void {
        qtc.KConfigSkeletonItem_SetWriteFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

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
    pub fn WriteFlags(self: KPropertySkeletonItem) i32 {
        return qtc.KConfigSkeletonItem_WriteFlags(@ptrCast(self.ptr));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn IsImmutable(self: KPropertySkeletonItem) bool {
        return qtc.KConfigSkeletonItem_IsImmutable(@ptrCast(self.ptr));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn IsDefault(self: KPropertySkeletonItem) bool {
        return qtc.KConfigSkeletonItem_IsDefault(@ptrCast(self.ptr));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn IsSaveNeeded(self: KPropertySkeletonItem) bool {
        return qtc.KConfigSkeletonItem_IsSaveNeeded(@ptrCast(self.ptr));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#getDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn GetDefault(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_GetDefault(@ptrCast(self.ptr)) };
    }

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
    pub fn MinValue(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KPropertySkeletonItem_MinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinValue` instead
    ///
    pub const QBaseMinValue = SuperMinValue;

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
    pub fn SuperMinValue(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KPropertySkeletonItem_SuperMinValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinValue(self: KPropertySkeletonItem, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KPropertySkeletonItem_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MaxValue(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KPropertySkeletonItem_MaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMaxValue` instead
    ///
    pub const QBaseMaxValue = SuperMaxValue;

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
    pub fn SuperMaxValue(self: KPropertySkeletonItem) QVariant {
        return .{ .ptr = qtc.KPropertySkeletonItem_SuperMaxValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMaxValue(self: KPropertySkeletonItem, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KPropertySkeletonItem_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` group: KConfigGroup `
    ///
    pub fn ReadImmutability(self: KPropertySkeletonItem, group: anytype) void {
        comptime _ = @TypeOf(group)._is_KConfigGroup;
        qtc.KPropertySkeletonItem_ReadImmutability(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### DEPRECATED: Use `SuperReadImmutability` instead
    ///
    pub const QBaseReadImmutability = SuperReadImmutability;

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
    /// ` group: KConfigGroup `
    ///
    pub fn SuperReadImmutability(self: KPropertySkeletonItem, group: anytype) void {
        comptime _ = @TypeOf(group)._is_KConfigGroup;
        qtc.KPropertySkeletonItem_SuperReadImmutability(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

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
    pub fn OnReadImmutability(self: KPropertySkeletonItem, callback: *const fn (KPropertySkeletonItem, KConfigGroup) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnReadImmutability(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#dtor.KPropertySkeletonItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KPropertySkeletonItem `
    ///
    pub fn Delete(self: KPropertySkeletonItem) void {
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

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn ReadConfig(self: KConfigCompilerSignallingItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigCompilerSignallingItem_ReadConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn WriteConfig(self: KConfigCompilerSignallingItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigCompilerSignallingItem_WriteConfig(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#readDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` param1: KConfig `
    ///
    pub fn ReadDefault(self: KConfigCompilerSignallingItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KConfigCompilerSignallingItem_ReadDefault(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KConfigCompilerSignallingItem, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KConfigCompilerSignallingItem_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KConfigCompilerSignallingItem, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KConfigCompilerSignallingItem_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn Property(self: KConfigCompilerSignallingItem) QVariant {
        return .{ .ptr = qtc.KConfigCompilerSignallingItem_Property(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn MinValue(self: KConfigCompilerSignallingItem) QVariant {
        return .{ .ptr = qtc.KConfigCompilerSignallingItem_MinValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn MaxValue(self: KConfigCompilerSignallingItem) QVariant {
        return .{ .ptr = qtc.KConfigCompilerSignallingItem_MaxValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn SetDefault(self: KConfigCompilerSignallingItem) void {
        qtc.KConfigCompilerSignallingItem_SetDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#swapDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn SwapDefault(self: KConfigCompilerSignallingItem) void {
        qtc.KConfigCompilerSignallingItem_SwapDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setWriteFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SetWriteFlags(self: KConfigCompilerSignallingItem, flags: i32) void {
        qtc.KConfigCompilerSignallingItem_SetWriteFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

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
    pub fn WriteFlags(self: KConfigCompilerSignallingItem) i32 {
        return qtc.KConfigCompilerSignallingItem_WriteFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` cg: KConfigGroup `
    ///
    pub fn SetGroup(self: KConfigCompilerSignallingItem, cg: anytype) void {
        comptime _ = @TypeOf(cg)._is_KConfigGroup;
        qtc.KConfigCompilerSignallingItem_SetGroup(@ptrCast(self.ptr), @ptrCast(cg.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#configGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    /// ` config: KConfig `
    ///
    pub fn ConfigGroup(self: KConfigCompilerSignallingItem, config: anytype) KConfigGroup {
        comptime _ = @TypeOf(config)._is_KConfig;
        return .{ .ptr = qtc.KConfigCompilerSignallingItem_ConfigGroup(@ptrCast(self.ptr), @ptrCast(config.ptr)) };
    }

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
    pub fn Group(self: KConfigCompilerSignallingItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigcompilersignallingitem.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetGroup2(self: KConfigCompilerSignallingItem, cg: anytype) void {
        comptime _ = @TypeOf(cg)._is_KConfigGroup;
        qtc.KConfigSkeletonItem_SetGroup2(@ptrCast(self.ptr), @ptrCast(cg.ptr));
    }

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
    pub fn SetKey(self: KConfigCompilerSignallingItem, _key: []const u8) void {
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.KConfigSkeletonItem_SetKey(@ptrCast(self.ptr), _key_str);
    }

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
    pub fn Key(self: KConfigCompilerSignallingItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigcompilersignallingitem.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetName(self: KConfigCompilerSignallingItem, _name: []const u8) void {
        const _name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KConfigSkeletonItem_SetName(@ptrCast(self.ptr), _name_str);
    }

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
    pub fn Name(self: KConfigCompilerSignallingItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigcompilersignallingitem.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetLabel(self: KConfigCompilerSignallingItem, l: []const u8) void {
        const l_str = qtc.libqt_string{
            .len = l.len,
            .data = l.ptr,
        };
        qtc.KConfigSkeletonItem_SetLabel(@ptrCast(self.ptr), l_str);
    }

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
    pub fn Label(self: KConfigCompilerSignallingItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigcompilersignallingitem.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetToolTip(self: KConfigCompilerSignallingItem, t: []const u8) void {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KConfigSkeletonItem_SetToolTip(@ptrCast(self.ptr), t_str);
    }

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
    pub fn ToolTip(self: KConfigCompilerSignallingItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigcompilersignallingitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWhatsThis(self: KConfigCompilerSignallingItem, w: []const u8) void {
        const w_str = qtc.libqt_string{
            .len = w.len,
            .data = w.ptr,
        };
        qtc.KConfigSkeletonItem_SetWhatsThis(@ptrCast(self.ptr), w_str);
    }

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
    pub fn WhatsThis(self: KConfigCompilerSignallingItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigcompilersignallingitem.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn IsImmutable(self: KConfigCompilerSignallingItem) bool {
        return qtc.KConfigSkeletonItem_IsImmutable(@ptrCast(self.ptr));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn IsDefault(self: KConfigCompilerSignallingItem) bool {
        return qtc.KConfigSkeletonItem_IsDefault(@ptrCast(self.ptr));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn IsSaveNeeded(self: KConfigCompilerSignallingItem) bool {
        return qtc.KConfigSkeletonItem_IsSaveNeeded(@ptrCast(self.ptr));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#getDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn GetDefault(self: KConfigCompilerSignallingItem) QVariant {
        return .{ .ptr = qtc.KConfigSkeletonItem_GetDefault(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#dtor.KConfigCompilerSignallingItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigCompilerSignallingItem `
    ///
    pub fn Delete(self: KConfigCompilerSignallingItem) void {
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

    /// New constructs a new KCoreConfigSkeleton object.
    ///
    pub fn New() KCoreConfigSkeleton {
        return .{ .ptr = qtc.KCoreConfigSkeleton_new() };
    }

    /// New2 constructs a new KCoreConfigSkeleton object.
    ///
    /// ## Parameter(s):
    ///
    /// ` configname: []const u8 `
    ///
    pub fn New2(configname: []const u8) KCoreConfigSkeleton {
        const configname_str = qtc.libqt_string{
            .len = configname.len,
            .data = configname.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_new2(configname_str) };
    }

    /// New3 constructs a new KCoreConfigSkeleton object.
    ///
    /// ## Parameter(s):
    ///
    /// ` configname: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(configname: []const u8, parent: anytype) KCoreConfigSkeleton {
        const configname_str = qtc.libqt_string{
            .len = configname.len,
            .data = configname.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KCoreConfigSkeleton_new3(configname_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn MetaObject(self: KCoreConfigSkeleton) QMetaObject {
        return .{ .ptr = qtc.KCoreConfigSkeleton_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KCoreConfigSkeleton_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn SuperMetaObject(self: KCoreConfigSkeleton) QMetaObject {
        return .{ .ptr = qtc.KCoreConfigSkeleton_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KCoreConfigSkeleton, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCoreConfigSkeleton_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KCoreConfigSkeleton, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCoreConfigSkeleton_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KCoreConfigSkeleton, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCoreConfigSkeleton_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KCoreConfigSkeleton_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KCoreConfigSkeleton, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCoreConfigSkeleton_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoreconfigskeleton.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn SetDefaults(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_SetDefaults(@ptrCast(self.ptr));
    }

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
    pub fn OnSetDefaults(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnSetDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetDefaults` instead
    ///
    pub const QBaseSetDefaults = SuperSetDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn SuperSetDefaults(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_SuperSetDefaults(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn Load(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_Load(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn Read(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_Read(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn IsDefaults(self: KCoreConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_IsDefaults(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn IsSaveNeeded(self: KCoreConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_IsSaveNeeded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setCurrentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SetCurrentGroup(self: KCoreConfigSkeleton, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KCoreConfigSkeleton_SetCurrentGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#currentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentGroup(self: KCoreConfigSkeleton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCoreConfigSkeleton_CurrentGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoreconfigskeleton.CurrentGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` item: KConfigSkeletonItem `
    ///
    pub fn AddItem(self: KCoreConfigSkeleton, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KConfigSkeletonItem;
        qtc.KCoreConfigSkeleton_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn AddItemString(self: KCoreConfigSkeleton, name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemString(@ptrCast(self.ptr), name_str, reference_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn AddItemPassword(self: KCoreConfigSkeleton, name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPassword(@ptrCast(self.ptr), name_str, reference_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn AddItemPath(self: KCoreConfigSkeleton, name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPath(@ptrCast(self.ptr), name_str, reference_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    pub fn AddItemProperty(self: KCoreConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemProperty(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    pub fn AddItemBool(self: KCoreConfigSkeleton, name: []const u8, reference: *bool) KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemBool(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    pub fn AddItemInt(self: KCoreConfigSkeleton, name: []const u8, reference: *i32) KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemInt(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    pub fn AddItemUInt(self: KCoreConfigSkeleton, name: []const u8, reference: *u32) KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemUInt(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    pub fn AddItemLongLong(self: KCoreConfigSkeleton, name: []const u8, reference: *i64) KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemLongLong(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    pub fn AddItemULongLong(self: KCoreConfigSkeleton, name: []const u8, reference: *u64) KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemULongLong(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    pub fn AddItemDouble(self: KCoreConfigSkeleton, name: []const u8, reference: *f64) KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDouble(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    pub fn AddItemRect(self: KCoreConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRect(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    pub fn AddItemRectF(self: KCoreConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRectF(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    pub fn AddItemPoint(self: KCoreConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPoint(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    pub fn AddItemPointF(self: KCoreConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPointF(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    pub fn AddItemSize(self: KCoreConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSize(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    pub fn AddItemSizeF(self: KCoreConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSizeF(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    pub fn AddItemDateTime(self: KCoreConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDateTime(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    pub fn AddItemStringList(self: KCoreConfigSkeleton, allocator: std.mem.Allocator, name: []const u8, reference: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton.AddItemStringList: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i|
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemStringList(@ptrCast(self.ptr), name_str, reference_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    pub fn AddItemIntList(self: KCoreConfigSkeleton, name: []const u8, reference: []i32) KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemIntList(@ptrCast(self.ptr), name_str, reference_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn Config(self: KCoreConfigSkeleton) KConfig {
        return .{ .ptr = qtc.KCoreConfigSkeleton_Config(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn Config2(self: KCoreConfigSkeleton) KConfig {
        return .{ .ptr = qtc.KCoreConfigSkeleton_Config2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items(self: KCoreConfigSkeleton, allocator: std.mem.Allocator) []KConfigSkeletonItem {
        const _arr: qtc.libqt_list = qtc.KCoreConfigSkeleton_Items(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KConfigSkeletonItem, _arr.len) catch @panic("kcoreconfigskeleton.Items: Memory allocation failed");
        const _data: [*]QtC.KConfigSkeletonItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn RemoveItem(self: KCoreConfigSkeleton, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCoreConfigSkeleton_RemoveItem(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#clearItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn ClearItems(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_ClearItems(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsImmutable(self: KCoreConfigSkeleton, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_IsImmutable(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#findItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn FindItem(self: KCoreConfigSkeleton, name: []const u8) KConfigSkeletonItem {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_FindItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn UseDefaults(self: KCoreConfigSkeleton, b: bool) bool {
        return qtc.KCoreConfigSkeleton_UseDefaults(@ptrCast(self.ptr), b);
    }

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
    pub fn OnUseDefaults(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, bool) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnUseDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUseDefaults` instead
    ///
    pub const QBaseUseDefaults = SuperUseDefaults;

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
    pub fn SuperUseDefaults(self: KCoreConfigSkeleton, b: bool) bool {
        return qtc.KCoreConfigSkeleton_SuperUseDefaults(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn Save(self: KCoreConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_Save(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn ConfigChanged(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_ConfigChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KCoreConfigSkeleton) callconv(.c) void `
    ///
    pub fn OnConfigChanged(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_Connect_ConfigChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn UsrUseDefaults(self: KCoreConfigSkeleton, b: bool) bool {
        return qtc.KCoreConfigSkeleton_UsrUseDefaults(@ptrCast(self.ptr), b);
    }

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
    pub fn OnUsrUseDefaults(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, bool) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnUsrUseDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUsrUseDefaults` instead
    ///
    pub const QBaseUsrUseDefaults = SuperUsrUseDefaults;

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
    pub fn SuperUsrUseDefaults(self: KCoreConfigSkeleton, b: bool) bool {
        return qtc.KCoreConfigSkeleton_SuperUsrUseDefaults(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn UsrSetDefaults(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_UsrSetDefaults(@ptrCast(self.ptr));
    }

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
    pub fn OnUsrSetDefaults(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnUsrSetDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUsrSetDefaults` instead
    ///
    pub const QBaseUsrSetDefaults = SuperUsrSetDefaults;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn SuperUsrSetDefaults(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_SuperUsrSetDefaults(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn UsrRead(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_UsrRead(@ptrCast(self.ptr));
    }

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
    pub fn OnUsrRead(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnUsrRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUsrRead` instead
    ///
    pub const QBaseUsrRead = SuperUsrRead;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn SuperUsrRead(self: KCoreConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_SuperUsrRead(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn UsrSave(self: KCoreConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_UsrSave(@ptrCast(self.ptr));
    }

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
    pub fn OnUsrSave(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnUsrSave(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUsrSave` instead
    ///
    pub const QBaseUsrSave = SuperUsrSave;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn SuperUsrSave(self: KCoreConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_SuperUsrSave(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoreconfigskeleton.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoreconfigskeleton.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` item: KConfigSkeletonItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AddItem2(self: KCoreConfigSkeleton, item: anytype, name: []const u8) void {
        comptime _ = @TypeOf(item)._is_KConfigSkeletonItem;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCoreConfigSkeleton_AddItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn AddItemString3(self: KCoreConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemString4(self: KCoreConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
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
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemString4(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str, key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn AddItemPassword3(self: KCoreConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemPassword4(self: KCoreConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
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
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPassword4(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str, key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn AddItemPath3(self: KCoreConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemPath4(self: KCoreConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
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
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPath4(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str, key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn AddItemProperty3(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemProperty3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    /// ` defaultValue: QVariant `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemProperty4(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemProperty4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn AddItemBool3(self: KCoreConfigSkeleton, name: []const u8, reference: *bool, defaultValue: bool) KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemBool3(@ptrCast(self.ptr), name_str, @ptrCast(reference), defaultValue) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemBool4(self: KCoreConfigSkeleton, name: []const u8, reference: *bool, defaultValue: bool, key: []const u8) KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemBool4(@ptrCast(self.ptr), name_str, @ptrCast(reference), defaultValue, key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn AddItemInt3(self: KCoreConfigSkeleton, name: []const u8, reference: *i32, defaultValue: i32) KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemInt3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemInt4(self: KCoreConfigSkeleton, name: []const u8, reference: *i32, defaultValue: i32, key: []const u8) KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemInt4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    pub fn AddItemUInt3(self: KCoreConfigSkeleton, name: []const u8, reference: *u32, defaultValue: u32) KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemUInt3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemUInt4(self: KCoreConfigSkeleton, name: []const u8, reference: *u32, defaultValue: u32, key: []const u8) KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemUInt4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn AddItemLongLong3(self: KCoreConfigSkeleton, name: []const u8, reference: *i64, defaultValue: i64) KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemLongLong3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemLongLong4(self: KCoreConfigSkeleton, name: []const u8, reference: *i64, defaultValue: i64, key: []const u8) KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemLongLong4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    pub fn AddItemULongLong3(self: KCoreConfigSkeleton, name: []const u8, reference: *u64, defaultValue: u64) KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemULongLong3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemULongLong4(self: KCoreConfigSkeleton, name: []const u8, reference: *u64, defaultValue: u64, key: []const u8) KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemULongLong4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn AddItemDouble3(self: KCoreConfigSkeleton, name: []const u8, reference: *f64, defaultValue: f64) KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDouble3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemDouble4(self: KCoreConfigSkeleton, name: []const u8, reference: *f64, defaultValue: f64, key: []const u8) KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDouble4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    /// ` defaultValue: QRect `
    ///
    pub fn AddItemRect3(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        comptime _ = @TypeOf(defaultValue)._is_QRect;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRect3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    /// ` defaultValue: QRect `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemRect4(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        comptime _ = @TypeOf(defaultValue)._is_QRect;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRect4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    /// ` defaultValue: QRectF `
    ///
    pub fn AddItemRectF3(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        comptime _ = @TypeOf(defaultValue)._is_QRectF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRectF3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    /// ` defaultValue: QRectF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemRectF4(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        comptime _ = @TypeOf(defaultValue)._is_QRectF;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRectF4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    /// ` defaultValue: QPoint `
    ///
    pub fn AddItemPoint3(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        comptime _ = @TypeOf(defaultValue)._is_QPoint;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPoint3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    /// ` defaultValue: QPoint `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemPoint4(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        comptime _ = @TypeOf(defaultValue)._is_QPoint;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPoint4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    /// ` defaultValue: QPointF `
    ///
    pub fn AddItemPointF3(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        comptime _ = @TypeOf(defaultValue)._is_QPointF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPointF3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    /// ` defaultValue: QPointF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemPointF4(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        comptime _ = @TypeOf(defaultValue)._is_QPointF;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPointF4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    /// ` defaultValue: QSize `
    ///
    pub fn AddItemSize3(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        comptime _ = @TypeOf(defaultValue)._is_QSize;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSize3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    /// ` defaultValue: QSize `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemSize4(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        comptime _ = @TypeOf(defaultValue)._is_QSize;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSize4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    /// ` defaultValue: QSizeF `
    ///
    pub fn AddItemSizeF3(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        comptime _ = @TypeOf(defaultValue)._is_QSizeF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSizeF3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    /// ` defaultValue: QSizeF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemSizeF4(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        comptime _ = @TypeOf(defaultValue)._is_QSizeF;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSizeF4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    /// ` defaultValue: QDateTime `
    ///
    pub fn AddItemDateTime3(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDateTime3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    /// ` defaultValue: QDateTime `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemDateTime4(self: KCoreConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDateTime4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    pub fn AddItemStringList3(self: KCoreConfigSkeleton, allocator: std.mem.Allocator, name: []const u8, reference: []const []const u8, defaultValue: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton.AddItemStringList3: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i|
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("kcoreconfigskeleton.AddItemStringList3: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |item, i|
            defaultValue_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemStringList3(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemStringList4(self: KCoreConfigSkeleton, allocator: std.mem.Allocator, name: []const u8, reference: []const []const u8, defaultValue: []const []const u8, key: []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton.AddItemStringList4: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i|
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("kcoreconfigskeleton.AddItemStringList4: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |item, i|
            defaultValue_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemStringList4(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list, key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    pub fn AddItemIntList3(self: KCoreConfigSkeleton, name: []const u8, reference: []i32, defaultValue: []i32) KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemIntList4(self: KCoreConfigSkeleton, name: []const u8, reference: []i32, defaultValue: []i32, key: []const u8) KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
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
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemIntList4(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list, key_str) };
    }

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
    pub fn ObjectName(self: KCoreConfigSkeleton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoreconfigskeleton.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KCoreConfigSkeleton, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn IsWidgetType(self: KCoreConfigSkeleton) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn IsWindowType(self: KCoreConfigSkeleton) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn IsQuickItemType(self: KCoreConfigSkeleton) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn SignalsBlocked(self: KCoreConfigSkeleton) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KCoreConfigSkeleton, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn Thread(self: KCoreConfigSkeleton) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KCoreConfigSkeleton, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KCoreConfigSkeleton, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KCoreConfigSkeleton, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KCoreConfigSkeleton, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KCoreConfigSkeleton, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KCoreConfigSkeleton, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kcoreconfigskeleton.Children: Memory allocation failed");
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KCoreConfigSkeleton, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KCoreConfigSkeleton, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KCoreConfigSkeleton, obj: anytype) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KCoreConfigSkeleton, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn Disconnect3(self: KCoreConfigSkeleton) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KCoreConfigSkeleton, receiver: anytype) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn DumpObjectTree(self: KCoreConfigSkeleton) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn DumpObjectInfo(self: KCoreConfigSkeleton) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KCoreConfigSkeleton, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KCoreConfigSkeleton, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kcoreconfigskeleton.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcoreconfigskeleton.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn BindingStorage(self: KCoreConfigSkeleton) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn BindingStorage2(self: KCoreConfigSkeleton) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn Destroyed(self: KCoreConfigSkeleton) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn Parent(self: KCoreConfigSkeleton) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KCoreConfigSkeleton, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn DeleteLater(self: KCoreConfigSkeleton) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KCoreConfigSkeleton, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KCoreConfigSkeleton, time: i64, timerType: i32) i32 {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KCoreConfigSkeleton, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KCoreConfigSkeleton, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KCoreConfigSkeleton, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KCoreConfigSkeleton, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KCoreConfigSkeleton, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KCoreConfigSkeleton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QObject) callconv(.c) void) void {
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KCoreConfigSkeleton, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCoreConfigSkeleton_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KCoreConfigSkeleton, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCoreConfigSkeleton_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QEvent) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KCoreConfigSkeleton, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCoreConfigSkeleton_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KCoreConfigSkeleton, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCoreConfigSkeleton_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QObject, QEvent) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KCoreConfigSkeleton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KCoreConfigSkeleton_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KCoreConfigSkeleton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KCoreConfigSkeleton_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QTimerEvent) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KCoreConfigSkeleton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KCoreConfigSkeleton_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KCoreConfigSkeleton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KCoreConfigSkeleton_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QChildEvent) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KCoreConfigSkeleton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KCoreConfigSkeleton_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KCoreConfigSkeleton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KCoreConfigSkeleton_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QEvent) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KCoreConfigSkeleton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreConfigSkeleton_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KCoreConfigSkeleton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreConfigSkeleton_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QMetaMethod) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KCoreConfigSkeleton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreConfigSkeleton_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KCoreConfigSkeleton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreConfigSkeleton_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QMetaMethod) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KCoreConfigSkeleton) QObject {
        return .{ .ptr = qtc.KCoreConfigSkeleton_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn SuperSender(self: KCoreConfigSkeleton) QObject {
        return .{ .ptr = qtc.KCoreConfigSkeleton_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) QObject) void {
        qtc.KCoreConfigSkeleton_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KCoreConfigSkeleton) i32 {
        return qtc.KCoreConfigSkeleton_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn SuperSenderSignalIndex(self: KCoreConfigSkeleton) i32 {
        return qtc.KCoreConfigSkeleton_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KCoreConfigSkeleton, callback: *const fn () callconv(.c) i32) void {
        qtc.KCoreConfigSkeleton_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KCoreConfigSkeleton, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCoreConfigSkeleton_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KCoreConfigSkeleton, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCoreConfigSkeleton_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCoreConfigSkeleton_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KCoreConfigSkeleton, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCoreConfigSkeleton_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KCoreConfigSkeleton, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCoreConfigSkeleton_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, QMetaMethod) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KCoreConfigSkeleton, callback: *const fn (KCoreConfigSkeleton, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#dtor.KCoreConfigSkeleton)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton `
    ///
    pub fn Delete(self: KCoreConfigSkeleton) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemString object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemString {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemString object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemString {
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

    /// New3 constructs a new KCoreConfigSkeleton::ItemString object.
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
    pub fn New3(_group: []const u8, _key: []const u8, reference: []const u8, defaultValue: []const u8, typeVal: i32) KCoreConfigSkeleton__ItemString {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` config: KConfig `
    ///
    pub fn WriteConfig(self: KCoreConfigSkeleton__ItemString, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemString_WriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnWriteConfig(self: KCoreConfigSkeleton__ItemString, callback: *const fn (KCoreConfigSkeleton__ItemString, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemString_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteConfig` instead
    ///
    pub const QBaseWriteConfig = SuperWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperWriteConfig(self: KCoreConfigSkeleton__ItemString, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemString_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemString, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemString_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemString, callback: *const fn (KCoreConfigSkeleton__ItemString, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemString_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemString, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemString_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemString, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemString_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemString, callback: *const fn (KCoreConfigSkeleton__ItemString, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemString_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemString, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemString_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemString, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemString_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemString, callback: *const fn (KCoreConfigSkeleton__ItemString, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemString_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemString, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemString_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemString) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemString_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemString, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemString_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemString) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemString_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemString `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemString) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemPassword object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPassword {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemPassword object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPassword {
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
    /// ` config: KConfig `
    ///
    pub fn WriteConfig(self: KCoreConfigSkeleton__ItemPassword, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPassword_WriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `SuperWriteConfig` instead
    ///
    pub const QBaseWriteConfig = SuperWriteConfig;

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
    /// ` config: KConfig `
    ///
    pub fn SuperWriteConfig(self: KCoreConfigSkeleton__ItemPassword, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPassword_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnWriteConfig(self: KCoreConfigSkeleton__ItemPassword, callback: *const fn (KCoreConfigSkeleton__ItemPassword, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemPassword, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPassword_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

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
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemPassword, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPassword_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemPassword, callback: *const fn (KCoreConfigSkeleton__ItemPassword, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemPassword, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPassword_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemPassword, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPassword_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemPassword, callback: *const fn (KCoreConfigSkeleton__ItemPassword, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemPassword, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPassword_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemPassword, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPassword_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemPassword, callback: *const fn (KCoreConfigSkeleton__ItemPassword, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Property(self: KCoreConfigSkeleton__ItemPassword) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPassword_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

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
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemPassword) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPassword_SuperProperty(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemPassword, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPassword `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemPassword) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPath {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemPath object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPath {
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
    /// ` config: KConfig `
    ///
    pub fn WriteConfig(self: KCoreConfigSkeleton__ItemPath, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPath_WriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `SuperWriteConfig` instead
    ///
    pub const QBaseWriteConfig = SuperWriteConfig;

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
    /// ` config: KConfig `
    ///
    pub fn SuperWriteConfig(self: KCoreConfigSkeleton__ItemPath, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPath_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnWriteConfig(self: KCoreConfigSkeleton__ItemPath, callback: *const fn (KCoreConfigSkeleton__ItemPath, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemPath, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPath_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

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
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemPath, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPath_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemPath, callback: *const fn (KCoreConfigSkeleton__ItemPath, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemPath, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPath_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemPath, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPath_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemPath, callback: *const fn (KCoreConfigSkeleton__ItemPath, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemPath, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPath_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemPath, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPath_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemPath, callback: *const fn (KCoreConfigSkeleton__ItemPath, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Property(self: KCoreConfigSkeleton__ItemPath) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPath_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

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
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemPath) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPath_SuperProperty(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemPath, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPath `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemPath) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemUrl object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QUrl `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemUrl {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemUrl object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemUrl {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` config: KConfig `
    ///
    pub fn WriteConfig(self: KCoreConfigSkeleton__ItemUrl, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrl_WriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnWriteConfig(self: KCoreConfigSkeleton__ItemUrl, callback: *const fn (KCoreConfigSkeleton__ItemUrl, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteConfig` instead
    ///
    pub const QBaseWriteConfig = SuperWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperWriteConfig(self: KCoreConfigSkeleton__ItemUrl, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrl_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemUrl, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrl_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemUrl, callback: *const fn (KCoreConfigSkeleton__ItemUrl, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemUrl, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrl_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemUrl, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemUrl_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemUrl, callback: *const fn (KCoreConfigSkeleton__ItemUrl, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemUrl, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemUrl_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemUrl, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemUrl_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemUrl, callback: *const fn (KCoreConfigSkeleton__ItemUrl, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemUrl, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemUrl_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemUrl) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUrl_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemUrl, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemUrl) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUrl_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrl `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemUrl) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemProperty object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemProperty {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemProperty object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemProperty {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemProperty, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemProperty_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemProperty, callback: *const fn (KCoreConfigSkeleton__ItemProperty, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemProperty_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemProperty, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemProperty_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemProperty, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemProperty_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemProperty, callback: *const fn (KCoreConfigSkeleton__ItemProperty, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemProperty_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemProperty, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemProperty_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemProperty, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemProperty_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemProperty, callback: *const fn (KCoreConfigSkeleton__ItemProperty, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemProperty_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemProperty, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemProperty_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemProperty) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemProperty_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemProperty, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemProperty_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemProperty) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemProperty_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemProperty `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemProperty) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemBool object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: *bool) KCoreConfigSkeleton__ItemBool {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemBool object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: *bool, defaultValue: bool) KCoreConfigSkeleton__ItemBool {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemBool, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemBool_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemBool, callback: *const fn (KCoreConfigSkeleton__ItemBool, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemBool_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemBool, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemBool_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemBool, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemBool_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemBool, callback: *const fn (KCoreConfigSkeleton__ItemBool, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemBool_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemBool, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemBool_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemBool, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemBool_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemBool, callback: *const fn (KCoreConfigSkeleton__ItemBool, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemBool_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemBool, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemBool_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemBool) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemBool_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemBool, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemBool_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemBool) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemBool_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemBool `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemBool) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemInt object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: *i32) KCoreConfigSkeleton__ItemInt {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemInt object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: *i32, defaultValue: i32) KCoreConfigSkeleton__ItemInt {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemInt, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemInt_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemInt, callback: *const fn (KCoreConfigSkeleton__ItemInt, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemInt, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemInt_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemInt, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemInt_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemInt, callback: *const fn (KCoreConfigSkeleton__ItemInt, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemInt, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemInt_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemInt, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemInt_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemInt, callback: *const fn (KCoreConfigSkeleton__ItemInt, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemInt, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemInt_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemInt, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn MinValue(self: KCoreConfigSkeleton__ItemInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_MinValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinValue(self: KCoreConfigSkeleton__ItemInt, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinValue` instead
    ///
    pub const QBaseMinValue = SuperMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn SuperMinValue(self: KCoreConfigSkeleton__ItemInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn MaxValue(self: KCoreConfigSkeleton__ItemInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_MaxValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMaxValue(self: KCoreConfigSkeleton__ItemInt, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaxValue` instead
    ///
    pub const QBaseMaxValue = SuperMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn SuperMaxValue(self: KCoreConfigSkeleton__ItemInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemInt_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemInt `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemInt) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemLongLong object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: *i64) KCoreConfigSkeleton__ItemLongLong {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemLongLong object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: *i64, defaultValue: i64) KCoreConfigSkeleton__ItemLongLong {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemLongLong, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemLongLong_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemLongLong, callback: *const fn (KCoreConfigSkeleton__ItemLongLong, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemLongLong, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemLongLong_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemLongLong, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemLongLong_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemLongLong, callback: *const fn (KCoreConfigSkeleton__ItemLongLong, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemLongLong, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemLongLong_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemLongLong, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemLongLong_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemLongLong, callback: *const fn (KCoreConfigSkeleton__ItemLongLong, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemLongLong, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemLongLong_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemLongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemLongLong, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemLongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn MinValue(self: KCoreConfigSkeleton__ItemLongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_MinValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinValue(self: KCoreConfigSkeleton__ItemLongLong, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinValue` instead
    ///
    pub const QBaseMinValue = SuperMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn SuperMinValue(self: KCoreConfigSkeleton__ItemLongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn MaxValue(self: KCoreConfigSkeleton__ItemLongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_MaxValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMaxValue(self: KCoreConfigSkeleton__ItemLongLong, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaxValue` instead
    ///
    pub const QBaseMaxValue = SuperMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn SuperMaxValue(self: KCoreConfigSkeleton__ItemLongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemLongLong_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setMinValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` minValue: i64 `
    ///
    pub fn SetMinValue(self: KCoreConfigSkeleton__ItemLongLong, minValue: i64) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_SetMinValue(@ptrCast(self.ptr), @bitCast(minValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setMaxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` maxValue: i64 `
    ///
    pub fn SetMaxValue(self: KCoreConfigSkeleton__ItemLongLong, maxValue: i64) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_SetMaxValue(@ptrCast(self.ptr), @bitCast(maxValue));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemLongLong) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemEnum::Choice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    pub fn New(param1: anytype) KCoreConfigSkeleton__ItemEnum__Choice {
        comptime _ = @TypeOf(param1)._is_KCoreConfigSkeleton__ItemEnum__Choice;
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum__Choice_new(@ptrCast(param1.ptr)) };
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemEnum::Choice object.
    ///
    pub fn New2() KCoreConfigSkeleton__ItemEnum__Choice {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum__Choice_new2() };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KCoreConfigSkeleton__ItemEnum__Choice, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("kcoreconfigskeleton__itemenum__choice.Name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: KCoreConfigSkeleton__ItemEnum__Choice, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#label-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: KCoreConfigSkeleton__ItemEnum__Choice, allocator: std.mem.Allocator) []const u8 {
        var label_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&label_str);
        const label_ret = allocator.alloc(u8, label_str.len) catch @panic("kcoreconfigskeleton__itemenum__choice.Label: Memory allocation failed");
        @memcpy(label_ret, label_str.data[0..label_str.len]);
        return label_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#label-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: KCoreConfigSkeleton__ItemEnum__Choice, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#toolTip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KCoreConfigSkeleton__ItemEnum__Choice, allocator: std.mem.Allocator) []const u8 {
        var toolTip_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&toolTip_str);
        const toolTip_ret = allocator.alloc(u8, toolTip_str.len) catch @panic("kcoreconfigskeleton__itemenum__choice.ToolTip: Memory allocation failed");
        @memcpy(toolTip_ret, toolTip_str.data[0..toolTip_str.len]);
        return toolTip_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#toolTip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KCoreConfigSkeleton__ItemEnum__Choice, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#whatsThis-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KCoreConfigSkeleton__ItemEnum__Choice, allocator: std.mem.Allocator) []const u8 {
        var whatsThis_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&whatsThis_str);
        const whatsThis_ret = allocator.alloc(u8, whatsThis_str.len) catch @panic("kcoreconfigskeleton__itemenum__choice.WhatsThis: Memory allocation failed");
        @memcpy(whatsThis_ret, whatsThis_str.data[0..whatsThis_str.len]);
        return whatsThis_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#whatsThis-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KCoreConfigSkeleton__ItemEnum__Choice, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#value-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: KCoreConfigSkeleton__ItemEnum__Choice, allocator: std.mem.Allocator) []const u8 {
        var value_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&value_str);
        const value_ret = allocator.alloc(u8, value_str.len) catch @panic("kcoreconfigskeleton__itemenum__choice.Value: Memory allocation failed");
        @memcpy(value_ret, value_str.data[0..value_str.len]);
        return value_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#value-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetValue(self: KCoreConfigSkeleton__ItemEnum__Choice, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetValue(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` param1: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    pub fn OperatorAssign(self: KCoreConfigSkeleton__ItemEnum__Choice, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KCoreConfigSkeleton__ItemEnum__Choice;
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemEnum__Choice) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemEnum object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` choices: []KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: *i32, choices: []KCoreConfigSkeleton__ItemEnum__Choice) KCoreConfigSkeleton__ItemEnum {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const choices_list = qtc.libqt_list{
            .len = choices.len,
            .data = @ptrCast(choices.ptr),
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_new(_group_str, _key_str, @ptrCast(reference), choices_list) };
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemEnum object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` choices: []KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: *i32, choices: []KCoreConfigSkeleton__ItemEnum__Choice, defaultValue: i32) KCoreConfigSkeleton__ItemEnum {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const choices_list = qtc.libqt_list{
            .len = choices.len,
            .data = @ptrCast(choices.ptr),
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_new2(_group_str, _key_str, @ptrCast(reference), choices_list, @bitCast(defaultValue)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#choices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Choices(self: KCoreConfigSkeleton__ItemEnum, allocator: std.mem.Allocator) []KCoreConfigSkeleton__ItemEnum__Choice {
        const _arr: qtc.libqt_list = qtc.KCoreConfigSkeleton__ItemEnum_Choices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KCoreConfigSkeleton__ItemEnum__Choice, _arr.len) catch @panic("kcoreconfigskeleton__itemenum.Choices: Memory allocation failed");
        const _data: [*]QtC.KCoreConfigSkeleton__ItemEnum__Choice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemEnum, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemEnum_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn (KCoreConfigSkeleton__ItemEnum, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemEnum, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemEnum_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` config: KConfig `
    ///
    pub fn WriteConfig(self: KCoreConfigSkeleton__ItemEnum, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemEnum_WriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnWriteConfig(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn (KCoreConfigSkeleton__ItemEnum, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteConfig` instead
    ///
    pub const QBaseWriteConfig = SuperWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperWriteConfig(self: KCoreConfigSkeleton__ItemEnum, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemEnum_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#valueForChoice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ValueForChoice(self: KCoreConfigSkeleton__ItemEnum, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KCoreConfigSkeleton__ItemEnum_ValueForChoice(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoreconfigskeleton__itemenum.ValueForChoice: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#setValueForChoice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` name: []const u8 `
    ///
    /// ` valueForChoice: []const u8 `
    ///
    pub fn SetValueForChoice(self: KCoreConfigSkeleton__ItemEnum, name: []const u8, valueForChoice: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const valueForChoice_str = qtc.libqt_string{
            .len = valueForChoice.len,
            .data = valueForChoice.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum_SetValueForChoice(@ptrCast(self.ptr), name_str, valueForChoice_str);
    }

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
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemEnum, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemEnum_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemEnum, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemEnum_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn (KCoreConfigSkeleton__ItemEnum, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemEnum, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemEnum_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemEnum, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemEnum_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn (KCoreConfigSkeleton__ItemEnum, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Property(self: KCoreConfigSkeleton__ItemEnum) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

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
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemEnum) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_SuperProperty(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MinValue(self: KCoreConfigSkeleton__ItemEnum) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_MinValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinValue` instead
    ///
    pub const QBaseMinValue = SuperMinValue;

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
    pub fn SuperMinValue(self: KCoreConfigSkeleton__ItemEnum) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_SuperMinValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinValue(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MaxValue(self: KCoreConfigSkeleton__ItemEnum) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_MaxValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMaxValue` instead
    ///
    pub const QBaseMaxValue = SuperMaxValue;

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
    pub fn SuperMaxValue(self: KCoreConfigSkeleton__ItemEnum) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemEnum_SuperMaxValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMaxValue(self: KCoreConfigSkeleton__ItemEnum, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemEnum) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemUInt object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: *u32) KCoreConfigSkeleton__ItemUInt {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemUInt object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: *u32, defaultValue: u32) KCoreConfigSkeleton__ItemUInt {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemUInt, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUInt_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemUInt, callback: *const fn (KCoreConfigSkeleton__ItemUInt, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemUInt, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUInt_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemUInt, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemUInt_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemUInt, callback: *const fn (KCoreConfigSkeleton__ItemUInt, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemUInt, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemUInt_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemUInt, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemUInt_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemUInt, callback: *const fn (KCoreConfigSkeleton__ItemUInt, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemUInt, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemUInt_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemUInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemUInt, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemUInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn MinValue(self: KCoreConfigSkeleton__ItemUInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_MinValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinValue(self: KCoreConfigSkeleton__ItemUInt, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinValue` instead
    ///
    pub const QBaseMinValue = SuperMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn SuperMinValue(self: KCoreConfigSkeleton__ItemUInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn MaxValue(self: KCoreConfigSkeleton__ItemUInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_MaxValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMaxValue(self: KCoreConfigSkeleton__ItemUInt, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaxValue` instead
    ///
    pub const QBaseMaxValue = SuperMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn SuperMaxValue(self: KCoreConfigSkeleton__ItemUInt) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUInt_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setMinValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` minValue: u32 `
    ///
    pub fn SetMinValue(self: KCoreConfigSkeleton__ItemUInt, minValue: u32) void {
        qtc.KCoreConfigSkeleton__ItemUInt_SetMinValue(@ptrCast(self.ptr), @bitCast(minValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setMaxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` maxValue: u32 `
    ///
    pub fn SetMaxValue(self: KCoreConfigSkeleton__ItemUInt, maxValue: u32) void {
        qtc.KCoreConfigSkeleton__ItemUInt_SetMaxValue(@ptrCast(self.ptr), @bitCast(maxValue));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemUInt) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemULongLong object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: *u64) KCoreConfigSkeleton__ItemULongLong {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemULongLong object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: *u64, defaultValue: u64) KCoreConfigSkeleton__ItemULongLong {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemULongLong, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemULongLong_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemULongLong, callback: *const fn (KCoreConfigSkeleton__ItemULongLong, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemULongLong, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemULongLong_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemULongLong, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemULongLong_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemULongLong, callback: *const fn (KCoreConfigSkeleton__ItemULongLong, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemULongLong, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemULongLong_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemULongLong, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemULongLong_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemULongLong, callback: *const fn (KCoreConfigSkeleton__ItemULongLong, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemULongLong, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemULongLong_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemULongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemULongLong, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemULongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn MinValue(self: KCoreConfigSkeleton__ItemULongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_MinValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinValue(self: KCoreConfigSkeleton__ItemULongLong, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinValue` instead
    ///
    pub const QBaseMinValue = SuperMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn SuperMinValue(self: KCoreConfigSkeleton__ItemULongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn MaxValue(self: KCoreConfigSkeleton__ItemULongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_MaxValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMaxValue(self: KCoreConfigSkeleton__ItemULongLong, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaxValue` instead
    ///
    pub const QBaseMaxValue = SuperMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn SuperMaxValue(self: KCoreConfigSkeleton__ItemULongLong) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemULongLong_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setMinValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` minValue: u64 `
    ///
    pub fn SetMinValue(self: KCoreConfigSkeleton__ItemULongLong, minValue: u64) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_SetMinValue(@ptrCast(self.ptr), @bitCast(minValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setMaxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` maxValue: u64 `
    ///
    pub fn SetMaxValue(self: KCoreConfigSkeleton__ItemULongLong, maxValue: u64) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_SetMaxValue(@ptrCast(self.ptr), @bitCast(maxValue));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemULongLong) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemDouble object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: *f64) KCoreConfigSkeleton__ItemDouble {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemDouble object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: *f64, defaultValue: f64) KCoreConfigSkeleton__ItemDouble {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemDouble, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemDouble_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemDouble, callback: *const fn (KCoreConfigSkeleton__ItemDouble, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemDouble, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemDouble_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemDouble, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemDouble_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemDouble, callback: *const fn (KCoreConfigSkeleton__ItemDouble, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemDouble, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemDouble_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemDouble, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemDouble_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemDouble, callback: *const fn (KCoreConfigSkeleton__ItemDouble, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemDouble, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemDouble_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemDouble) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemDouble, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemDouble) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn MinValue(self: KCoreConfigSkeleton__ItemDouble) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_MinValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinValue(self: KCoreConfigSkeleton__ItemDouble, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnMinValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinValue` instead
    ///
    pub const QBaseMinValue = SuperMinValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn SuperMinValue(self: KCoreConfigSkeleton__ItemDouble) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_SuperMinValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn MaxValue(self: KCoreConfigSkeleton__ItemDouble) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_MaxValue(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMaxValue(self: KCoreConfigSkeleton__ItemDouble, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnMaxValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaxValue` instead
    ///
    pub const QBaseMaxValue = SuperMaxValue;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn SuperMaxValue(self: KCoreConfigSkeleton__ItemDouble) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDouble_SuperMaxValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setMinValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` minValue: f64 `
    ///
    pub fn SetMinValue(self: KCoreConfigSkeleton__ItemDouble, minValue: f64) void {
        qtc.KCoreConfigSkeleton__ItemDouble_SetMinValue(@ptrCast(self.ptr), @bitCast(minValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setMaxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` maxValue: f64 `
    ///
    pub fn SetMaxValue(self: KCoreConfigSkeleton__ItemDouble, maxValue: f64) void {
        qtc.KCoreConfigSkeleton__ItemDouble_SetMaxValue(@ptrCast(self.ptr), @bitCast(maxValue));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemDouble) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRect {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemRect object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRect {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemRect, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemRect_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemRect, callback: *const fn (KCoreConfigSkeleton__ItemRect, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemRect_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemRect, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemRect_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemRect_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemRect, callback: *const fn (KCoreConfigSkeleton__ItemRect, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemRect_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemRect_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemRect, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemRect_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemRect, callback: *const fn (KCoreConfigSkeleton__ItemRect, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemRect_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemRect, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemRect_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemRect) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemRect_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemRect, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemRect_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemRect) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemRect_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemRect `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemRect) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRectF {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemRectF object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRectF {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemRectF, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemRectF_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemRectF, callback: *const fn (KCoreConfigSkeleton__ItemRectF, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemRectF_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemRectF, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemRectF_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemRectF_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemRectF, callback: *const fn (KCoreConfigSkeleton__ItemRectF, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemRectF_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemRectF_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemRectF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemRectF_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemRectF, callback: *const fn (KCoreConfigSkeleton__ItemRectF, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemRectF_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemRectF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemRectF_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemRectF) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemRectF_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemRectF, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemRectF_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemRectF) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemRectF_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemRectF `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemRectF) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPoint {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemPoint object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPoint {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemPoint, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPoint_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemPoint, callback: *const fn (KCoreConfigSkeleton__ItemPoint, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPoint_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemPoint, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPoint_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemPoint, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPoint_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemPoint, callback: *const fn (KCoreConfigSkeleton__ItemPoint, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPoint_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemPoint, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPoint_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemPoint, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPoint_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemPoint, callback: *const fn (KCoreConfigSkeleton__ItemPoint, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPoint_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemPoint, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPoint_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemPoint) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPoint_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemPoint, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPoint_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemPoint) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPoint_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPoint `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemPoint) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPointF {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemPointF object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPointF {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemPointF, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPointF_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemPointF, callback: *const fn (KCoreConfigSkeleton__ItemPointF, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPointF_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemPointF, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPointF_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemPointF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPointF_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemPointF, callback: *const fn (KCoreConfigSkeleton__ItemPointF, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPointF_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemPointF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPointF_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemPointF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPointF_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemPointF, callback: *const fn (KCoreConfigSkeleton__ItemPointF, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPointF_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemPointF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPointF_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemPointF) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPointF_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemPointF, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPointF_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemPointF) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPointF_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPointF `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemPointF) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSize {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemSize object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSize {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemSize, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemSize_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemSize, callback: *const fn (KCoreConfigSkeleton__ItemSize, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemSize_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemSize, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemSize_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemSize, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemSize_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemSize, callback: *const fn (KCoreConfigSkeleton__ItemSize, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemSize_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemSize, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemSize_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemSize, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemSize_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemSize, callback: *const fn (KCoreConfigSkeleton__ItemSize, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemSize_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemSize, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemSize_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemSize) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemSize_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemSize, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemSize_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemSize) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemSize_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemSize `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemSize) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSizeF {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemSizeF object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSizeF {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemSizeF, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemSizeF_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemSizeF, callback: *const fn (KCoreConfigSkeleton__ItemSizeF, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemSizeF, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemSizeF_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemSizeF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemSizeF_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemSizeF, callback: *const fn (KCoreConfigSkeleton__ItemSizeF, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemSizeF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemSizeF_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemSizeF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemSizeF_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemSizeF, callback: *const fn (KCoreConfigSkeleton__ItemSizeF, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemSizeF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemSizeF_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemSizeF) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemSizeF_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemSizeF, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemSizeF) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemSizeF_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemSizeF `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemSizeF) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemDateTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: anytype) KCoreConfigSkeleton__ItemDateTime {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemDateTime object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemDateTime {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemDateTime, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemDateTime_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemDateTime, callback: *const fn (KCoreConfigSkeleton__ItemDateTime, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemDateTime, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemDateTime_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemDateTime, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemDateTime_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemDateTime, callback: *const fn (KCoreConfigSkeleton__ItemDateTime, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemDateTime, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemDateTime_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemDateTime, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemDateTime_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemDateTime, callback: *const fn (KCoreConfigSkeleton__ItemDateTime, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemDateTime, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemDateTime_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemDateTime) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDateTime_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemDateTime, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemDateTime) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemDateTime_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemDateTime `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemDateTime) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemStringList object.
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
    pub fn New(allocator: std.mem.Allocator, _group: []const u8, _key: []const u8, reference: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton__itemstringlist.New: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i|
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemStringList_new(_group_str, _key_str, reference_list) };
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemStringList object.
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
    pub fn New2(allocator: std.mem.Allocator, _group: []const u8, _key: []const u8, reference: []const []const u8, defaultValue: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton__itemstringlist.New2: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i|
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("kcoreconfigskeleton__itemstringlist.New2: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |item, i|
            defaultValue_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemStringList_new2(_group_str, _key_str, reference_list, defaultValue_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemStringList, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemStringList_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemStringList, callback: *const fn (KCoreConfigSkeleton__ItemStringList, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemStringList_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemStringList, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemStringList_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemStringList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemStringList_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemStringList, callback: *const fn (KCoreConfigSkeleton__ItemStringList, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemStringList_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemStringList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemStringList_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemStringList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemStringList_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemStringList, callback: *const fn (KCoreConfigSkeleton__ItemStringList, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemStringList_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemStringList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemStringList_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemStringList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemStringList_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemStringList, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemStringList_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemStringList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemStringList_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemStringList `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemStringList) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemPathList object.
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
    pub fn New(allocator: std.mem.Allocator, _group: []const u8, _key: []const u8, reference: []const []const u8) KCoreConfigSkeleton__ItemPathList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton__itempathlist.New: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i|
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPathList_new(_group_str, _key_str, reference_list) };
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemPathList object.
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
    pub fn New2(allocator: std.mem.Allocator, _group: []const u8, _key: []const u8, reference: []const []const u8, defaultValue: []const []const u8) KCoreConfigSkeleton__ItemPathList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton__itempathlist.New2: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i|
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("kcoreconfigskeleton__itempathlist.New2: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |item, i|
            defaultValue_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPathList_new2(_group_str, _key_str, reference_list, defaultValue_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemPathList, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPathList_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemPathList, callback: *const fn (KCoreConfigSkeleton__ItemPathList, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemPathList, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPathList_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` config: KConfig `
    ///
    pub fn WriteConfig(self: KCoreConfigSkeleton__ItemPathList, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPathList_WriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnWriteConfig(self: KCoreConfigSkeleton__ItemPathList, callback: *const fn (KCoreConfigSkeleton__ItemPathList, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteConfig` instead
    ///
    pub const QBaseWriteConfig = SuperWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperWriteConfig(self: KCoreConfigSkeleton__ItemPathList, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemPathList_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemPathList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPathList_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemPathList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemPathList_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemPathList, callback: *const fn (KCoreConfigSkeleton__ItemPathList, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemPathList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPathList_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemPathList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemPathList_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemPathList, callback: *const fn (KCoreConfigSkeleton__ItemPathList, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Property(self: KCoreConfigSkeleton__ItemPathList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPathList_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

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
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemPathList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemPathList_SuperProperty(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemPathList, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemPathList `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemPathList) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemUrlList object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []QUrl `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: []QUrl) KCoreConfigSkeleton__ItemUrlList {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemUrlList object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: []QUrl, defaultValue: []QUrl) KCoreConfigSkeleton__ItemUrlList {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemUrlList, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrlList_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemUrlList, callback: *const fn (KCoreConfigSkeleton__ItemUrlList, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemUrlList, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrlList_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` config: KConfig `
    ///
    pub fn WriteConfig(self: KCoreConfigSkeleton__ItemUrlList, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrlList_WriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnWriteConfig(self: KCoreConfigSkeleton__ItemUrlList, callback: *const fn (KCoreConfigSkeleton__ItemUrlList, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteConfig` instead
    ///
    pub const QBaseWriteConfig = SuperWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperWriteConfig(self: KCoreConfigSkeleton__ItemUrlList, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemUrlList_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemUrlList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemUrlList_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemUrlList, callback: *const fn (KCoreConfigSkeleton__ItemUrlList, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemUrlList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemUrlList_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemUrlList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemUrlList_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemUrlList, callback: *const fn (KCoreConfigSkeleton__ItemUrlList, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemUrlList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemUrlList_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemUrlList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUrlList_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemUrlList, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemUrlList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemUrlList_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemUrlList `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemUrlList) void {
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

    /// New constructs a new KCoreConfigSkeleton::ItemIntList object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: []i32) KCoreConfigSkeleton__ItemIntList {
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

    /// New2 constructs a new KCoreConfigSkeleton::ItemIntList object.
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: []i32, defaultValue: []i32) KCoreConfigSkeleton__ItemIntList {
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

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` config: KConfig `
    ///
    pub fn ReadConfig(self: KCoreConfigSkeleton__ItemIntList, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemIntList_ReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnReadConfig(self: KCoreConfigSkeleton__ItemIntList, callback: *const fn (KCoreConfigSkeleton__ItemIntList, KConfig) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemIntList_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` config: KConfig `
    ///
    pub fn SuperReadConfig(self: KCoreConfigSkeleton__ItemIntList, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfig;
        qtc.KCoreConfigSkeleton__ItemIntList_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` p: QVariant `
    ///
    pub fn SetProperty(self: KCoreConfigSkeleton__ItemIntList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemIntList_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnSetProperty(self: KCoreConfigSkeleton__ItemIntList, callback: *const fn (KCoreConfigSkeleton__ItemIntList, QVariant) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemIntList_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

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
    pub fn SuperSetProperty(self: KCoreConfigSkeleton__ItemIntList, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KCoreConfigSkeleton__ItemIntList_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` p: QVariant `
    ///
    pub fn IsEqual(self: KCoreConfigSkeleton__ItemIntList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemIntList_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

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
    pub fn OnIsEqual(self: KCoreConfigSkeleton__ItemIntList, callback: *const fn (KCoreConfigSkeleton__ItemIntList, QVariant) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemIntList_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEqual` instead
    ///
    pub const QBaseIsEqual = SuperIsEqual;

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
    pub fn SuperIsEqual(self: KCoreConfigSkeleton__ItemIntList, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KCoreConfigSkeleton__ItemIntList_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    pub fn Property(self: KCoreConfigSkeleton__ItemIntList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemIntList_Property(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProperty(self: KCoreConfigSkeleton__ItemIntList, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KCoreConfigSkeleton__ItemIntList_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    pub fn SuperProperty(self: KCoreConfigSkeleton__ItemIntList) QVariant {
        return .{ .ptr = qtc.KCoreConfigSkeleton__ItemIntList_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreConfigSkeleton__ItemIntList `
    ///
    pub fn Delete(self: KCoreConfigSkeleton__ItemIntList) void {
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
