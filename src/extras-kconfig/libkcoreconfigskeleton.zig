const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kconfigbase_enums = @import("libkconfigbase.zig").enums;
const kcoreconfigskeleton_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html)
pub const kconfigskeletonitem = struct {
    /// New constructs a new KConfigSkeletonItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn New(_group: []const u8, _key: []const u8) QtC.KConfigSkeletonItem {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KConfigSkeletonItem_new(_group_str, _key_str);
    }

    /// New2 constructs a new KConfigSkeletonItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KConfigSkeletonItem `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.KConfigSkeletonItem {
        return qtc.KConfigSkeletonItem_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn SetGroup(self: ?*anyopaque, _group: []const u8) void {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigSkeletonItem_SetGroup(@ptrCast(self), _group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Group(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeletonitem.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` cg: QtC.KConfigGroup `
    ///
    pub fn SetGroup2(self: ?*anyopaque, cg: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_SetGroup2(@ptrCast(self), @ptrCast(cg));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#configGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ConfigGroup(self: ?*anyopaque, config: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KConfigSkeletonItem_ConfigGroup(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn SetKey(self: ?*anyopaque, _key: []const u8) void {
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.KConfigSkeletonItem_SetKey(@ptrCast(self), _key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Key(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeletonitem.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, _name: []const u8) void {
        const _name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KConfigSkeletonItem_SetName(@ptrCast(self), _name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeletonitem.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` l: []const u8 `
    ///
    pub fn SetLabel(self: ?*anyopaque, l: []const u8) void {
        const l_str = qtc.libqt_string{
            .len = l.len,
            .data = l.ptr,
        };
        qtc.KConfigSkeletonItem_SetLabel(@ptrCast(self), l_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeletonitem.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` t: []const u8 `
    ///
    pub fn SetToolTip(self: ?*anyopaque, t: []const u8) void {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KConfigSkeletonItem_SetToolTip(@ptrCast(self), t_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeletonitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` w: []const u8 `
    ///
    pub fn SetWhatsThis(self: ?*anyopaque, w: []const u8) void {
        const w_str = qtc.libqt_string{
            .len = w.len,
            .data = w.ptr,
        };
        qtc.KConfigSkeletonItem_SetWhatsThis(@ptrCast(self), w_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeletonitem.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWriteFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SetWriteFlags(self: ?*anyopaque, flags: i32) void {
        qtc.KConfigSkeletonItem_SetWriteFlags(@ptrCast(self), @intCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteFlags(self: ?*anyopaque) i32 {
        return qtc.KConfigSkeletonItem_WriteFlags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_ReadConfig(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` callback: *const fn (self: QtC.KConfigSkeletonItem, param1: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_QBaseReadConfig(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn WriteConfig(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_WriteConfig(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` callback: *const fn (self: QtC.KConfigSkeletonItem, param1: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnWriteConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnWriteConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn QBaseWriteConfig(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_QBaseWriteConfig(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn ReadDefault(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_ReadDefault(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readDefault)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` callback: *const fn (self: QtC.KConfigSkeletonItem, param1: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadDefault(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnReadDefault(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn QBaseReadDefault(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_QBaseReadDefault(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` callback: *const fn (self: QtC.KConfigSkeletonItem, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KConfigSkeletonItem_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` callback: *const fn (self: QtC.KConfigSkeletonItem, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KConfigSkeletonItem_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KConfigSkeletonItem_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeletonItem_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KConfigSkeletonItem_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeletonItem_QBaseProperty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn MinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeletonItem_MinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMinValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KConfigSkeletonItem_OnMinValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn QBaseMinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeletonItem_QBaseMinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn MaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeletonItem_MaxValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMaxValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KConfigSkeletonItem_OnMaxValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn QBaseMaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeletonItem_QBaseMaxValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn SetDefault(self: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_SetDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setDefault)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSetDefault(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnSetDefault(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn QBaseSetDefault(self: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_QBaseSetDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#swapDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn SwapDefault(self: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_SwapDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#swapDefault)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSwapDefault(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnSwapDefault(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#swapDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn QBaseSwapDefault(self: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_QBaseSwapDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn IsImmutable(self: ?*anyopaque) bool {
        return qtc.KConfigSkeletonItem_IsImmutable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn IsDefault(self: ?*anyopaque) bool {
        return qtc.KConfigSkeletonItem_IsDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn IsSaveNeeded(self: ?*anyopaque) bool {
        return qtc.KConfigSkeletonItem_IsSaveNeeded(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#getDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn GetDefault(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeletonItem_GetDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` group: QtC.KConfigGroup `
    ///
    pub fn ReadImmutability(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_ReadImmutability(@ptrCast(self), @ptrCast(group));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` callback: *const fn (self: QtC.KConfigSkeletonItem, group: QtC.KConfigGroup) callconv(.c) void `
    ///
    pub fn OnReadImmutability(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeletonItem_OnReadImmutability(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    /// ` group: QtC.KConfigGroup `
    ///
    pub fn QBaseReadImmutability(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_QBaseReadImmutability(@ptrCast(self), @ptrCast(group));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#dtor.KConfigSkeletonItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KConfigSkeletonItem `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html)
pub const kpropertyskeletonitem = struct {
    /// New constructs a new KPropertySkeletonItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` propertyName: []u8 `
    ///
    /// ` defaultValue: QtC.QVariant `
    ///
    pub fn New(object: ?*anyopaque, propertyName: []u8, defaultValue: ?*anyopaque) QtC.KPropertySkeletonItem {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };

        return qtc.KPropertySkeletonItem_new(@ptrCast(object), propertyName_str, @ptrCast(defaultValue));
    }

    /// New2 constructs a new KPropertySkeletonItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KPropertySkeletonItem `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.KPropertySkeletonItem {
        return qtc.KPropertySkeletonItem_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KPropertySkeletonItem_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KPropertySkeletonItem_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KPropertySkeletonItem_QBaseProperty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` callback: *const fn (self: QtC.KPropertySkeletonItem, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KPropertySkeletonItem_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` callback: *const fn (self: QtC.KPropertySkeletonItem, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KPropertySkeletonItem_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KPropertySkeletonItem_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_ReadConfig(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` callback: *const fn (self: QtC.KPropertySkeletonItem, param1: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_QBaseReadConfig(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn WriteConfig(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_WriteConfig(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` callback: *const fn (self: QtC.KPropertySkeletonItem, param1: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnWriteConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnWriteConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn QBaseWriteConfig(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_QBaseWriteConfig(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn ReadDefault(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_ReadDefault(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readDefault)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` callback: *const fn (self: QtC.KPropertySkeletonItem, param1: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadDefault(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnReadDefault(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn QBaseReadDefault(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_QBaseReadDefault(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn SetDefault(self: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_SetDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setDefault)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSetDefault(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnSetDefault(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn QBaseSetDefault(self: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_QBaseSetDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#swapDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn SwapDefault(self: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_SwapDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#swapDefault)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSwapDefault(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnSwapDefault(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#swapDefault)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn QBaseSwapDefault(self: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_QBaseSwapDefault(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn SetGroup(self: ?*anyopaque, _group: []const u8) void {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigSkeletonItem_SetGroup(@ptrCast(self), _group_str);
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Group(@ptrCast(self));
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
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` cg: QtC.KConfigGroup `
    ///
    pub fn SetGroup2(self: ?*anyopaque, cg: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_SetGroup2(@ptrCast(self), @ptrCast(cg));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#configGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ConfigGroup(self: ?*anyopaque, config: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KConfigSkeletonItem_ConfigGroup(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn SetKey(self: ?*anyopaque, _key: []const u8) void {
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.KConfigSkeletonItem_SetKey(@ptrCast(self), _key_str);
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Key(@ptrCast(self));
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
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, _name: []const u8) void {
        const _name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KConfigSkeletonItem_SetName(@ptrCast(self), _name_str);
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Name(@ptrCast(self));
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
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` l: []const u8 `
    ///
    pub fn SetLabel(self: ?*anyopaque, l: []const u8) void {
        const l_str = qtc.libqt_string{
            .len = l.len,
            .data = l.ptr,
        };
        qtc.KConfigSkeletonItem_SetLabel(@ptrCast(self), l_str);
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Label(@ptrCast(self));
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
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` t: []const u8 `
    ///
    pub fn SetToolTip(self: ?*anyopaque, t: []const u8) void {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KConfigSkeletonItem_SetToolTip(@ptrCast(self), t_str);
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_ToolTip(@ptrCast(self));
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
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` w: []const u8 `
    ///
    pub fn SetWhatsThis(self: ?*anyopaque, w: []const u8) void {
        const w_str = qtc.libqt_string{
            .len = w.len,
            .data = w.ptr,
        };
        qtc.KConfigSkeletonItem_SetWhatsThis(@ptrCast(self), w_str);
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_WhatsThis(@ptrCast(self));
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
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SetWriteFlags(self: ?*anyopaque, flags: i32) void {
        qtc.KConfigSkeletonItem_SetWriteFlags(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteFlags(self: ?*anyopaque) i32 {
        return qtc.KConfigSkeletonItem_WriteFlags(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn IsImmutable(self: ?*anyopaque) bool {
        return qtc.KConfigSkeletonItem_IsImmutable(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn IsDefault(self: ?*anyopaque) bool {
        return qtc.KConfigSkeletonItem_IsDefault(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn IsSaveNeeded(self: ?*anyopaque) bool {
        return qtc.KConfigSkeletonItem_IsSaveNeeded(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#getDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn GetDefault(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeletonItem_GetDefault(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn MinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KPropertySkeletonItem_MinValue(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn QBaseMinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KPropertySkeletonItem_QBaseMinValue(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KPropertySkeletonItem`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMinValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KPropertySkeletonItem_OnMinValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn MaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KPropertySkeletonItem_MaxValue(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn QBaseMaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KPropertySkeletonItem_QBaseMaxValue(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KPropertySkeletonItem`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMaxValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KPropertySkeletonItem_OnMaxValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` group: QtC.KConfigGroup `
    ///
    pub fn ReadImmutability(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_ReadImmutability(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    /// ` group: QtC.KConfigGroup `
    ///
    pub fn QBaseReadImmutability(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_QBaseReadImmutability(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KPropertySkeletonItem`
    ///
    /// ` callback: *const fn (self: QtC.KPropertySkeletonItem, group: QtC.KConfigGroup) callconv(.c) void `
    ///
    pub fn OnReadImmutability(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KPropertySkeletonItem_OnReadImmutability(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#dtor.KPropertySkeletonItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KPropertySkeletonItem `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KPropertySkeletonItem_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html)
pub const kconfigcompilersignallingitem = struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KConfigCompilerSignallingItem_ReadConfig(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn WriteConfig(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KConfigCompilerSignallingItem_WriteConfig(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#readDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` param1: QtC.KConfig `
    ///
    pub fn ReadDefault(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KConfigCompilerSignallingItem_ReadDefault(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KConfigCompilerSignallingItem_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KConfigCompilerSignallingItem_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigCompilerSignallingItem_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    pub fn MinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigCompilerSignallingItem_MinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    pub fn MaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigCompilerSignallingItem_MaxValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    pub fn SetDefault(self: ?*anyopaque) void {
        qtc.KConfigCompilerSignallingItem_SetDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#swapDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    pub fn SwapDefault(self: ?*anyopaque) void {
        qtc.KConfigCompilerSignallingItem_SwapDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setWriteFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SetWriteFlags(self: ?*anyopaque, flags: i32) void {
        qtc.KConfigCompilerSignallingItem_SetWriteFlags(@ptrCast(self), @intCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#writeFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteFlags(self: ?*anyopaque) i32 {
        return qtc.KConfigCompilerSignallingItem_WriteFlags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` cg: QtC.KConfigGroup `
    ///
    pub fn SetGroup(self: ?*anyopaque, cg: ?*anyopaque) void {
        qtc.KConfigCompilerSignallingItem_SetGroup(@ptrCast(self), @ptrCast(cg));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#configGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ConfigGroup(self: ?*anyopaque, config: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KConfigCompilerSignallingItem_ConfigGroup(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Group(@ptrCast(self));
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
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` cg: QtC.KConfigGroup `
    ///
    pub fn SetGroup2(self: ?*anyopaque, cg: ?*anyopaque) void {
        qtc.KConfigSkeletonItem_SetGroup2(@ptrCast(self), @ptrCast(cg));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn SetKey(self: ?*anyopaque, _key: []const u8) void {
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.KConfigSkeletonItem_SetKey(@ptrCast(self), _key_str);
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Key(@ptrCast(self));
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
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, _name: []const u8) void {
        const _name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KConfigSkeletonItem_SetName(@ptrCast(self), _name_str);
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Name(@ptrCast(self));
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
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` l: []const u8 `
    ///
    pub fn SetLabel(self: ?*anyopaque, l: []const u8) void {
        const l_str = qtc.libqt_string{
            .len = l.len,
            .data = l.ptr,
        };
        qtc.KConfigSkeletonItem_SetLabel(@ptrCast(self), l_str);
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_Label(@ptrCast(self));
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
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` t: []const u8 `
    ///
    pub fn SetToolTip(self: ?*anyopaque, t: []const u8) void {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KConfigSkeletonItem_SetToolTip(@ptrCast(self), t_str);
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_ToolTip(@ptrCast(self));
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
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` w: []const u8 `
    ///
    pub fn SetWhatsThis(self: ?*anyopaque, w: []const u8) void {
        const w_str = qtc.libqt_string{
            .len = w.len,
            .data = w.ptr,
        };
        qtc.KConfigSkeletonItem_SetWhatsThis(@ptrCast(self), w_str);
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigSkeletonItem_WhatsThis(@ptrCast(self));
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
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    pub fn IsImmutable(self: ?*anyopaque) bool {
        return qtc.KConfigSkeletonItem_IsImmutable(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    pub fn IsDefault(self: ?*anyopaque) bool {
        return qtc.KConfigSkeletonItem_IsDefault(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    pub fn IsSaveNeeded(self: ?*anyopaque) bool {
        return qtc.KConfigSkeletonItem_IsSaveNeeded(@ptrCast(self));
    }

    /// Inherited from KConfigSkeletonItem
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#getDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    pub fn GetDefault(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeletonItem_GetDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#dtor.KConfigCompilerSignallingItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KConfigCompilerSignallingItem `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KConfigCompilerSignallingItem_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html)
pub const kcoreconfigskeleton = struct {
    /// New constructs a new KCoreConfigSkeleton object.
    ///
    pub fn New() QtC.KCoreConfigSkeleton {
        return qtc.KCoreConfigSkeleton_new();
    }

    /// New2 constructs a new KCoreConfigSkeleton object.
    ///
    /// ## Parameter(s):
    ///
    /// ` configname: []const u8 `
    ///
    pub fn New2(configname: []const u8) QtC.KCoreConfigSkeleton {
        const configname_str = qtc.libqt_string{
            .len = configname.len,
            .data = configname.ptr,
        };

        return qtc.KCoreConfigSkeleton_new2(configname_str);
    }

    /// New3 constructs a new KCoreConfigSkeleton object.
    ///
    /// ## Parameter(s):
    ///
    /// ` configname: []const u8 `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New3(configname: []const u8, parent: ?*anyopaque) QtC.KCoreConfigSkeleton {
        const configname_str = qtc.libqt_string{
            .len = configname.len,
            .data = configname.ptr,
        };

        return qtc.KCoreConfigSkeleton_new3(configname_str, @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KCoreConfigSkeleton_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.KCoreConfigSkeleton_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KCoreConfigSkeleton_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCoreConfigSkeleton_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCoreConfigSkeleton_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCoreConfigSkeleton_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KCoreConfigSkeleton_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCoreConfigSkeleton_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn SetDefaults(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_SetDefaults(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSetDefaults(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnSetDefaults(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn QBaseSetDefaults(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_QBaseSetDefaults(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn Load(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_Load(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn Read(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_Read(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn IsDefaults(self: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_IsDefaults(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn IsSaveNeeded(self: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_IsSaveNeeded(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setCurrentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SetCurrentGroup(self: ?*anyopaque, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KCoreConfigSkeleton_SetCurrentGroup(@ptrCast(self), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#currentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentGroup(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCoreConfigSkeleton_CurrentGroup(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoreconfigskeleton.CurrentGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` item: QtC.KConfigSkeletonItem `
    ///
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_AddItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn AddItemString(self: ?*anyopaque, name: []const u8, reference: []const u8) QtC.KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemString(@ptrCast(self), name_str, reference_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn AddItemPassword(self: ?*anyopaque, name: []const u8, reference: []const u8) QtC.KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPassword(@ptrCast(self), name_str, reference_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn AddItemPath(self: ?*anyopaque, name: []const u8, reference: []const u8) QtC.KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPath(@ptrCast(self), name_str, reference_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QVariant `
    ///
    pub fn AddItemProperty(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemProperty(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    pub fn AddItemBool(self: ?*anyopaque, name: []const u8, reference: *bool) QtC.KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemBool(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    pub fn AddItemInt(self: ?*anyopaque, name: []const u8, reference: *i32) QtC.KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemInt(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    pub fn AddItemUInt(self: ?*anyopaque, name: []const u8, reference: *u32) QtC.KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemUInt(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    pub fn AddItemLongLong(self: ?*anyopaque, name: []const u8, reference: *i64) QtC.KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemLongLong(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    pub fn AddItemULongLong(self: ?*anyopaque, name: []const u8, reference: *u64) QtC.KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemULongLong(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    pub fn AddItemDouble(self: ?*anyopaque, name: []const u8, reference: *f64) QtC.KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemDouble(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QRect `
    ///
    pub fn AddItemRect(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemRect(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QRectF `
    ///
    pub fn AddItemRectF(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemRectF(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QPoint `
    ///
    pub fn AddItemPoint(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPoint(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QPointF `
    ///
    pub fn AddItemPointF(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPointF(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QSize `
    ///
    pub fn AddItemSize(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemSize(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QSizeF `
    ///
    pub fn AddItemSizeF(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemSizeF(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QDateTime `
    ///
    pub fn AddItemDateTime(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemDateTime(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AddItemStringList(self: ?*anyopaque, name: []const u8, reference: [][]const u8, allocator: std.mem.Allocator) QtC.KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton.AddItemStringList: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i| {
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemStringList(@ptrCast(self), name_str, reference_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    pub fn AddItemIntList(self: ?*anyopaque, name: []const u8, reference: []i32) QtC.KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemIntList(@ptrCast(self), name_str, reference_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn Config(self: ?*anyopaque) QtC.KConfig {
        return qtc.KCoreConfigSkeleton_Config(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn Config2(self: ?*anyopaque) QtC.KConfig {
        return qtc.KCoreConfigSkeleton_Config2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KConfigSkeletonItem {
        const _arr: qtc.libqt_list = qtc.KCoreConfigSkeleton_Items(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KConfigSkeletonItem, _arr.len) catch @panic("kcoreconfigskeleton.Items: Memory allocation failed");
        const _data: [*]QtC.KConfigSkeletonItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn RemoveItem(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCoreConfigSkeleton_RemoveItem(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#clearItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn ClearItems(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_ClearItems(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsImmutable(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_IsImmutable(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#findItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn FindItem(self: ?*anyopaque, name: []const u8) QtC.KConfigSkeletonItem {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_FindItem(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn UseDefaults(self: ?*anyopaque, b: bool) bool {
        return qtc.KCoreConfigSkeleton_UseDefaults(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, b: bool) callconv(.c) bool `
    ///
    pub fn OnUseDefaults(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnUseDefaults(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn QBaseUseDefaults(self: ?*anyopaque, b: bool) bool {
        return qtc.KCoreConfigSkeleton_QBaseUseDefaults(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn Save(self: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_Save(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn ConfigChanged(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_ConfigChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton) callconv(.c) void `
    ///
    pub fn OnConfigChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_Connect_ConfigChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn UsrUseDefaults(self: ?*anyopaque, b: bool) bool {
        return qtc.KCoreConfigSkeleton_UsrUseDefaults(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, b: bool) callconv(.c) bool `
    ///
    pub fn OnUsrUseDefaults(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnUsrUseDefaults(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn QBaseUsrUseDefaults(self: ?*anyopaque, b: bool) bool {
        return qtc.KCoreConfigSkeleton_QBaseUsrUseDefaults(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn UsrSetDefaults(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_UsrSetDefaults(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUsrSetDefaults(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnUsrSetDefaults(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn QBaseUsrSetDefaults(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_QBaseUsrSetDefaults(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn UsrRead(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_UsrRead(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUsrRead(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnUsrRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn QBaseUsrRead(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_QBaseUsrRead(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn UsrSave(self: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_UsrSave(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnUsrSave(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnUsrSave(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn QBaseUsrSave(self: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_QBaseUsrSave(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoreconfigskeleton.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` item: QtC.KConfigSkeletonItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AddItem2(self: ?*anyopaque, item: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCoreConfigSkeleton_AddItem2(@ptrCast(self), @ptrCast(item), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn AddItemString3(self: ?*anyopaque, name: []const u8, reference: []const u8, defaultValue: []const u8) QtC.KCoreConfigSkeleton__ItemString {
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
        return qtc.KCoreConfigSkeleton_AddItemString3(@ptrCast(self), name_str, reference_str, defaultValue_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemString4(self: ?*anyopaque, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) QtC.KCoreConfigSkeleton__ItemString {
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
        return qtc.KCoreConfigSkeleton_AddItemString4(@ptrCast(self), name_str, reference_str, defaultValue_str, key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn AddItemPassword3(self: ?*anyopaque, name: []const u8, reference: []const u8, defaultValue: []const u8) QtC.KCoreConfigSkeleton__ItemPassword {
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
        return qtc.KCoreConfigSkeleton_AddItemPassword3(@ptrCast(self), name_str, reference_str, defaultValue_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemPassword4(self: ?*anyopaque, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) QtC.KCoreConfigSkeleton__ItemPassword {
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
        return qtc.KCoreConfigSkeleton_AddItemPassword4(@ptrCast(self), name_str, reference_str, defaultValue_str, key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn AddItemPath3(self: ?*anyopaque, name: []const u8, reference: []const u8, defaultValue: []const u8) QtC.KCoreConfigSkeleton__ItemPath {
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
        return qtc.KCoreConfigSkeleton_AddItemPath3(@ptrCast(self), name_str, reference_str, defaultValue_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemPath4(self: ?*anyopaque, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) QtC.KCoreConfigSkeleton__ItemPath {
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
        return qtc.KCoreConfigSkeleton_AddItemPath4(@ptrCast(self), name_str, reference_str, defaultValue_str, key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QVariant `
    ///
    /// ` defaultValue: QtC.QVariant `
    ///
    pub fn AddItemProperty3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemProperty3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QVariant `
    ///
    /// ` defaultValue: QtC.QVariant `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemProperty4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemProperty4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn AddItemBool3(self: ?*anyopaque, name: []const u8, reference: *bool, defaultValue: bool) QtC.KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemBool3(@ptrCast(self), name_str, @ptrCast(reference), defaultValue);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemBool4(self: ?*anyopaque, name: []const u8, reference: *bool, defaultValue: bool, key: []const u8) QtC.KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemBool4(@ptrCast(self), name_str, @ptrCast(reference), defaultValue, key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn AddItemInt3(self: ?*anyopaque, name: []const u8, reference: *i32, defaultValue: i32) QtC.KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemInt3(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemInt4(self: ?*anyopaque, name: []const u8, reference: *i32, defaultValue: i32, key: []const u8) QtC.KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemInt4(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    pub fn AddItemUInt3(self: ?*anyopaque, name: []const u8, reference: *u32, defaultValue: u32) QtC.KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemUInt3(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemUInt4(self: ?*anyopaque, name: []const u8, reference: *u32, defaultValue: u32, key: []const u8) QtC.KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemUInt4(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn AddItemLongLong3(self: ?*anyopaque, name: []const u8, reference: *i64, defaultValue: i64) QtC.KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemLongLong3(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemLongLong4(self: ?*anyopaque, name: []const u8, reference: *i64, defaultValue: i64, key: []const u8) QtC.KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemLongLong4(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    pub fn AddItemULongLong3(self: ?*anyopaque, name: []const u8, reference: *u64, defaultValue: u64) QtC.KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemULongLong3(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemULongLong4(self: ?*anyopaque, name: []const u8, reference: *u64, defaultValue: u64, key: []const u8) QtC.KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemULongLong4(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn AddItemDouble3(self: ?*anyopaque, name: []const u8, reference: *f64, defaultValue: f64) QtC.KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemDouble3(@ptrCast(self), name_str, @ptrCast(reference), @floatCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemDouble4(self: ?*anyopaque, name: []const u8, reference: *f64, defaultValue: f64, key: []const u8) QtC.KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemDouble4(@ptrCast(self), name_str, @ptrCast(reference), @floatCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QRect `
    ///
    /// ` defaultValue: QtC.QRect `
    ///
    pub fn AddItemRect3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemRect3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QRect `
    ///
    /// ` defaultValue: QtC.QRect `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemRect4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemRect4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QRectF `
    ///
    /// ` defaultValue: QtC.QRectF `
    ///
    pub fn AddItemRectF3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemRectF3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QRectF `
    ///
    /// ` defaultValue: QtC.QRectF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemRectF4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemRectF4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QPoint `
    ///
    /// ` defaultValue: QtC.QPoint `
    ///
    pub fn AddItemPoint3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPoint3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QPoint `
    ///
    /// ` defaultValue: QtC.QPoint `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemPoint4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPoint4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QPointF `
    ///
    /// ` defaultValue: QtC.QPointF `
    ///
    pub fn AddItemPointF3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPointF3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QPointF `
    ///
    /// ` defaultValue: QtC.QPointF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemPointF4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPointF4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QSize `
    ///
    /// ` defaultValue: QtC.QSize `
    ///
    pub fn AddItemSize3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemSize3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QSize `
    ///
    /// ` defaultValue: QtC.QSize `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemSize4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemSize4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QSizeF `
    ///
    /// ` defaultValue: QtC.QSizeF `
    ///
    pub fn AddItemSizeF3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemSizeF3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QSizeF `
    ///
    /// ` defaultValue: QtC.QSizeF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemSizeF4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemSizeF4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QDateTime `
    ///
    /// ` defaultValue: QtC.QDateTime `
    ///
    pub fn AddItemDateTime3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemDateTime3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QtC.QDateTime `
    ///
    /// ` defaultValue: QtC.QDateTime `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemDateTime4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemDateTime4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: [][]const u8 `
    ///
    /// ` defaultValue: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AddItemStringList3(self: ?*anyopaque, name: []const u8, reference: [][]const u8, defaultValue: [][]const u8, allocator: std.mem.Allocator) QtC.KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton.AddItemStringList3: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i| {
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        var defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("kcoreconfigskeleton.AddItemStringList3: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |item, i| {
            defaultValue_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemStringList3(@ptrCast(self), name_str, reference_list, defaultValue_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: [][]const u8 `
    ///
    /// ` defaultValue: [][]const u8 `
    ///
    /// ` key: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AddItemStringList4(self: ?*anyopaque, name: []const u8, reference: [][]const u8, defaultValue: [][]const u8, key: []const u8, allocator: std.mem.Allocator) QtC.KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton.AddItemStringList4: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i| {
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        var defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("kcoreconfigskeleton.AddItemStringList4: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |item, i| {
            defaultValue_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemStringList4(@ptrCast(self), name_str, reference_list, defaultValue_list, key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    pub fn AddItemIntList3(self: ?*anyopaque, name: []const u8, reference: []i32, defaultValue: []i32) QtC.KCoreConfigSkeleton__ItemIntList {
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
        return qtc.KCoreConfigSkeleton_AddItemIntList3(@ptrCast(self), name_str, reference_list, defaultValue_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AddItemIntList4(self: ?*anyopaque, name: []const u8, reference: []i32, defaultValue: []i32, key: []const u8) QtC.KCoreConfigSkeleton__ItemIntList {
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
        return qtc.KCoreConfigSkeleton_AddItemIntList4(@ptrCast(self), name_str, reference_list, defaultValue_list, key_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kcoreconfigskeleton.Children: Memory allocation failed");
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton) callconv(.c) void `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
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
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
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
    /// ` self: QtC.KCoreConfigSkeleton `
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
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KCoreConfigSkeleton_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KCoreConfigSkeleton_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KCoreConfigSkeleton_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KCoreConfigSkeleton_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KCoreConfigSkeleton_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KCoreConfigSkeleton_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCoreConfigSkeleton_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCoreConfigSkeleton_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCoreConfigSkeleton_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#dtor.KCoreConfigSkeleton)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html)
pub const kcoreconfigskeleton__itemstring = struct {
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
    pub fn New(_group: []const u8, _key: []const u8, reference: []const u8) QtC.KCoreConfigSkeleton__ItemString {
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

        return qtc.KCoreConfigSkeleton__ItemString_new(_group_str, _key_str, reference_str);
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: []const u8, defaultValue: []const u8) QtC.KCoreConfigSkeleton__ItemString {
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

        return qtc.KCoreConfigSkeleton__ItemString_new2(_group_str, _key_str, reference_str, defaultValue_str);
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
    pub fn New3(_group: []const u8, _key: []const u8, reference: []const u8, defaultValue: []const u8, typeVal: i32) QtC.KCoreConfigSkeleton__ItemString {
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

        return qtc.KCoreConfigSkeleton__ItemString_new3(_group_str, _key_str, reference_str, defaultValue_str, @intCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn WriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemString_WriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemString, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnWriteConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemString_OnWriteConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseWriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemString_QBaseWriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemString_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemString, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemString_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemString_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemString_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemString, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemString_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemString_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemString_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemString, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemString_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemString_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemString_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemString_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemString_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemString `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemString_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempassword.html)
pub const kcoreconfigskeleton__itempassword = struct {
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
    pub fn New(_group: []const u8, _key: []const u8, reference: []const u8) QtC.KCoreConfigSkeleton__ItemPassword {
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

        return qtc.KCoreConfigSkeleton__ItemPassword_new(_group_str, _key_str, reference_str);
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: []const u8, defaultValue: []const u8) QtC.KCoreConfigSkeleton__ItemPassword {
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

        return qtc.KCoreConfigSkeleton__ItemPassword_new2(_group_str, _key_str, reference_str, defaultValue_str);
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn WriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPassword_WriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseWriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPassword_QBaseWriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPassword, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnWriteConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnWriteConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPassword_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPassword_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPassword, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPassword_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPassword_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPassword, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemPassword_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemPassword_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPassword, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemPassword_Property(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemPassword_QBaseProperty(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPassword_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPassword `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPassword_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempath.html)
pub const kcoreconfigskeleton__itempath = struct {
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
    pub fn New(_group: []const u8, _key: []const u8, reference: []const u8) QtC.KCoreConfigSkeleton__ItemPath {
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

        return qtc.KCoreConfigSkeleton__ItemPath_new(_group_str, _key_str, reference_str);
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: []const u8, defaultValue: []const u8) QtC.KCoreConfigSkeleton__ItemPath {
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

        return qtc.KCoreConfigSkeleton__ItemPath_new2(_group_str, _key_str, reference_str, defaultValue_str);
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn WriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPath_WriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseWriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPath_QBaseWriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPath, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnWriteConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnWriteConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPath_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPath_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPath, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPath_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPath_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPath, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemPath_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemPath_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPath, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemPath_Property(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemPath_QBaseProperty(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton::ItemString
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPath_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPath `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPath_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html)
pub const kcoreconfigskeleton__itemurl = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemUrl object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QUrl `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemUrl {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemUrl_new(_group_str, _key_str, @ptrCast(reference));
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemUrl object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QUrl `
    ///
    /// ` defaultValue: QtC.QUrl `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemUrl {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemUrl_new2(_group_str, _key_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn WriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrl_WriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemUrl, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnWriteConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnWriteConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseWriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrl_QBaseWriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrl_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemUrl, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrl_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrl_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemUrl, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrl_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemUrl_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemUrl, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemUrl_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemUrl_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUrl_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemUrl_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrl `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrl_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html)
pub const kcoreconfigskeleton__itemproperty = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemProperty object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QVariant `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemProperty {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemProperty_new(_group_str, _key_str, @ptrCast(reference));
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemProperty object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QVariant `
    ///
    /// ` defaultValue: QtC.QVariant `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemProperty {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemProperty_new2(_group_str, _key_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemProperty_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemProperty, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemProperty_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemProperty_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemProperty_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemProperty, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemProperty_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemProperty_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemProperty_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemProperty, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemProperty_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemProperty_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemProperty_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemProperty_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemProperty_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemProperty `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemProperty_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html)
pub const kcoreconfigskeleton__itembool = struct {
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
    pub fn New(_group: []const u8, _key: []const u8, reference: *bool) QtC.KCoreConfigSkeleton__ItemBool {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemBool_new(_group_str, _key_str, @ptrCast(reference));
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: *bool, defaultValue: bool) QtC.KCoreConfigSkeleton__ItemBool {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemBool_new2(_group_str, _key_str, @ptrCast(reference), defaultValue);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemBool_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemBool, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemBool_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemBool_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemBool_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemBool, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemBool_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemBool_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemBool_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemBool, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemBool_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemBool_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemBool_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemBool_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemBool_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemBool `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemBool_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html)
pub const kcoreconfigskeleton__itemint = struct {
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
    pub fn New(_group: []const u8, _key: []const u8, reference: *i32) QtC.KCoreConfigSkeleton__ItemInt {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemInt_new(_group_str, _key_str, @ptrCast(reference));
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: *i32, defaultValue: i32) QtC.KCoreConfigSkeleton__ItemInt {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemInt_new2(_group_str, _key_str, @ptrCast(reference), @intCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemInt_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemInt, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemInt_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemInt_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemInt, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemInt_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemInt_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemInt, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemInt_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemInt_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemInt_QBaseProperty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    pub fn MinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemInt_MinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMinValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnMinValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    pub fn QBaseMinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemInt_QBaseMinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    pub fn MaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemInt_MaxValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMaxValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemInt_OnMaxValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    pub fn QBaseMaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemInt_QBaseMaxValue(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemInt `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemInt_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html)
pub const kcoreconfigskeleton__itemlonglong = struct {
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
    pub fn New(_group: []const u8, _key: []const u8, reference: *i64) QtC.KCoreConfigSkeleton__ItemLongLong {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemLongLong_new(_group_str, _key_str, @ptrCast(reference));
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: *i64, defaultValue: i64) QtC.KCoreConfigSkeleton__ItemLongLong {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemLongLong_new2(_group_str, _key_str, @ptrCast(reference), @intCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemLongLong, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemLongLong, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemLongLong_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemLongLong, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemLongLong_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemLongLong_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemLongLong_QBaseProperty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn MinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemLongLong_MinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#minValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMinValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnMinValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn QBaseMinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemLongLong_QBaseMinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn MaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemLongLong_MaxValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#maxValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMaxValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_OnMaxValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn QBaseMaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemLongLong_QBaseMaxValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setMinValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` minValue: i64 `
    ///
    pub fn SetMinValue(self: ?*anyopaque, minValue: i64) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_SetMinValue(@ptrCast(self), @intCast(minValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setMaxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    /// ` maxValue: i64 `
    ///
    pub fn SetMaxValue(self: ?*anyopaque, maxValue: i64) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_SetMaxValue(@ptrCast(self), @intCast(maxValue));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemLongLong `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemLongLong_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html)
pub const kcoreconfigskeleton__itemenum__choice = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemEnum::Choice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    pub fn New(param1: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemEnum__Choice {
        return qtc.KCoreConfigSkeleton__ItemEnum__Choice_new(@ptrCast(param1));
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemEnum::Choice object.
    ///
    pub fn New2() QtC.KCoreConfigSkeleton__ItemEnum__Choice {
        return qtc.KCoreConfigSkeleton__ItemEnum__Choice_new2();
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("kcoreconfigskeleton__itemenum__choice.Name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#label-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var label_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&label_str);
        const label_ret = allocator.alloc(u8, label_str.len) catch @panic("kcoreconfigskeleton__itemenum__choice.Label: Memory allocation failed");
        @memcpy(label_ret, label_str.data[0..label_str.len]);
        return label_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#label-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetLabel(@ptrCast(self), label_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#toolTip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var toolTip_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&toolTip_str);
        const toolTip_ret = allocator.alloc(u8, toolTip_str.len) catch @panic("kcoreconfigskeleton__itemenum__choice.ToolTip: Memory allocation failed");
        @memcpy(toolTip_ret, toolTip_str.data[0..toolTip_str.len]);
        return toolTip_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#toolTip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#whatsThis-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var whatsThis_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&whatsThis_str);
        const whatsThis_ret = allocator.alloc(u8, whatsThis_str.len) catch @panic("kcoreconfigskeleton__itemenum__choice.WhatsThis: Memory allocation failed");
        @memcpy(whatsThis_ret, whatsThis_str.data[0..whatsThis_str.len]);
        return whatsThis_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#whatsThis-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#value-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var value_str = qtc.KCoreConfigSkeleton__ItemEnum__Choice_Value(@ptrCast(self));
        defer qtc.libqt_string_free(&value_str);
        const value_ret = allocator.alloc(u8, value_str.len) catch @panic("kcoreconfigskeleton__itemenum__choice.Value: Memory allocation failed");
        @memcpy(value_ret, value_str.data[0..value_str.len]);
        return value_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#value-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_SetValue(@ptrCast(self), value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` param1: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemEnum__Choice_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html)
pub const kcoreconfigskeleton__itemenum = struct {
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
    /// ` choices: []QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: *i32, choices: []QtC.KCoreConfigSkeleton__ItemEnum__Choice) QtC.KCoreConfigSkeleton__ItemEnum {
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

        return qtc.KCoreConfigSkeleton__ItemEnum_new(_group_str, _key_str, @ptrCast(reference), choices_list);
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
    /// ` choices: []QtC.KCoreConfigSkeleton__ItemEnum__Choice `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: *i32, choices: []QtC.KCoreConfigSkeleton__ItemEnum__Choice, defaultValue: i32) QtC.KCoreConfigSkeleton__ItemEnum {
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

        return qtc.KCoreConfigSkeleton__ItemEnum_new2(_group_str, _key_str, @ptrCast(reference), choices_list, @intCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#choices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Choices(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KCoreConfigSkeleton__ItemEnum__Choice {
        const _arr: qtc.libqt_list = qtc.KCoreConfigSkeleton__ItemEnum_Choices(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KCoreConfigSkeleton__ItemEnum__Choice, _arr.len) catch @panic("kcoreconfigskeleton__itemenum.Choices: Memory allocation failed");
        const _data: [*]QtC.KCoreConfigSkeleton__ItemEnum__Choice = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemEnum_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemEnum, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemEnum_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn WriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemEnum_WriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemEnum, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnWriteConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnWriteConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseWriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemEnum_QBaseWriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#valueForChoice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` name: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ValueForChoice(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KCoreConfigSkeleton__ItemEnum_ValueForChoice(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoreconfigskeleton__itemenum.ValueForChoice: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#setValueForChoice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` name: []const u8 `
    ///
    /// ` valueForChoice: []const u8 `
    ///
    pub fn SetValueForChoice(self: ?*anyopaque, name: []const u8, valueForChoice: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const valueForChoice_str = qtc.libqt_string{
            .len = valueForChoice.len,
            .data = valueForChoice.ptr,
        };
        qtc.KCoreConfigSkeleton__ItemEnum_SetValueForChoice(@ptrCast(self), name_str, valueForChoice_str);
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemEnum_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemEnum_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemEnum, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemEnum_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemEnum_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemEnum, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemEnum_Property(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemEnum_QBaseProperty(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn MinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemEnum_MinValue(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn QBaseMinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemEnum_QBaseMinValue(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMinValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnMinValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn MaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemEnum_MaxValue(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn QBaseMaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemEnum_QBaseMaxValue(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton::ItemInt
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMaxValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemEnum_OnMaxValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemEnum `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemEnum_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html)
pub const kcoreconfigskeleton__itemuint = struct {
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
    pub fn New(_group: []const u8, _key: []const u8, reference: *u32) QtC.KCoreConfigSkeleton__ItemUInt {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemUInt_new(_group_str, _key_str, @ptrCast(reference));
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: *u32, defaultValue: u32) QtC.KCoreConfigSkeleton__ItemUInt {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemUInt_new2(_group_str, _key_str, @ptrCast(reference), @intCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUInt_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemUInt, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUInt_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUInt_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemUInt, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUInt_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemUInt_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemUInt, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemUInt_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemUInt_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemUInt_QBaseProperty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn MinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemUInt_MinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#minValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMinValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnMinValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn QBaseMinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemUInt_QBaseMinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn MaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemUInt_MaxValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#maxValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMaxValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUInt_OnMaxValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn QBaseMaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemUInt_QBaseMaxValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setMinValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` minValue: u32 `
    ///
    pub fn SetMinValue(self: ?*anyopaque, minValue: u32) void {
        qtc.KCoreConfigSkeleton__ItemUInt_SetMinValue(@ptrCast(self), @intCast(minValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setMaxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    /// ` maxValue: u32 `
    ///
    pub fn SetMaxValue(self: ?*anyopaque, maxValue: u32) void {
        qtc.KCoreConfigSkeleton__ItemUInt_SetMaxValue(@ptrCast(self), @intCast(maxValue));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUInt `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUInt_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html)
pub const kcoreconfigskeleton__itemulonglong = struct {
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
    pub fn New(_group: []const u8, _key: []const u8, reference: *u64) QtC.KCoreConfigSkeleton__ItemULongLong {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemULongLong_new(_group_str, _key_str, @ptrCast(reference));
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: *u64, defaultValue: u64) QtC.KCoreConfigSkeleton__ItemULongLong {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemULongLong_new2(_group_str, _key_str, @ptrCast(reference), @intCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemULongLong, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemULongLong, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemULongLong_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemULongLong, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemULongLong_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemULongLong_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemULongLong_QBaseProperty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn MinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemULongLong_MinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#minValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMinValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnMinValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn QBaseMinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemULongLong_QBaseMinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn MaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemULongLong_MaxValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#maxValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMaxValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_OnMaxValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn QBaseMaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemULongLong_QBaseMaxValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setMinValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` minValue: u64 `
    ///
    pub fn SetMinValue(self: ?*anyopaque, minValue: u64) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_SetMinValue(@ptrCast(self), @intCast(minValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setMaxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    /// ` maxValue: u64 `
    ///
    pub fn SetMaxValue(self: ?*anyopaque, maxValue: u64) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_SetMaxValue(@ptrCast(self), @intCast(maxValue));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemULongLong `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemULongLong_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html)
pub const kcoreconfigskeleton__itemdouble = struct {
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
    pub fn New(_group: []const u8, _key: []const u8, reference: *f64) QtC.KCoreConfigSkeleton__ItemDouble {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemDouble_new(_group_str, _key_str, @ptrCast(reference));
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: *f64, defaultValue: f64) QtC.KCoreConfigSkeleton__ItemDouble {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemDouble_new2(_group_str, _key_str, @ptrCast(reference), @floatCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemDouble_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemDouble, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemDouble_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemDouble_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemDouble, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemDouble_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemDouble_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemDouble, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemDouble_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemDouble_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemDouble_QBaseProperty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#minValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn MinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemDouble_MinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#minValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMinValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnMinValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#minValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn QBaseMinValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemDouble_QBaseMinValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#maxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn MaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemDouble_MaxValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#maxValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnMaxValue(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemDouble_OnMaxValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#maxValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn QBaseMaxValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemDouble_QBaseMaxValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setMinValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` minValue: f64 `
    ///
    pub fn SetMinValue(self: ?*anyopaque, minValue: f64) void {
        qtc.KCoreConfigSkeleton__ItemDouble_SetMinValue(@ptrCast(self), @floatCast(minValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setMaxValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    /// ` maxValue: f64 `
    ///
    pub fn SetMaxValue(self: ?*anyopaque, maxValue: f64) void {
        qtc.KCoreConfigSkeleton__ItemDouble_SetMaxValue(@ptrCast(self), @floatCast(maxValue));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDouble `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemDouble_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html)
pub const kcoreconfigskeleton__itemrect = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QRect `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemRect {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemRect_new(_group_str, _key_str, @ptrCast(reference));
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QRect `
    ///
    /// ` defaultValue: QtC.QRect `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemRect {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemRect_new2(_group_str, _key_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemRect_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemRect, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemRect_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemRect_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemRect_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemRect, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemRect_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemRect_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemRect_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemRect, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemRect_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemRect_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemRect_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemRect_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemRect_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRect `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemRect_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html)
pub const kcoreconfigskeleton__itemrectf = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QRectF `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemRectF {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemRectF_new(_group_str, _key_str, @ptrCast(reference));
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QRectF `
    ///
    /// ` defaultValue: QtC.QRectF `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemRectF {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemRectF_new2(_group_str, _key_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemRectF_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemRectF, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemRectF_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemRectF_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemRectF_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemRectF, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemRectF_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemRectF_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemRectF_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemRectF, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemRectF_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemRectF_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemRectF_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemRectF_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemRectF_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemRectF `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemRectF_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html)
pub const kcoreconfigskeleton__itempoint = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QPoint `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemPoint {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemPoint_new(_group_str, _key_str, @ptrCast(reference));
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QPoint `
    ///
    /// ` defaultValue: QtC.QPoint `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemPoint {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemPoint_new2(_group_str, _key_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPoint_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPoint, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPoint_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPoint_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPoint_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPoint, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPoint_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPoint_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemPoint_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPoint, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPoint_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemPoint_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemPoint_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPoint_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemPoint_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPoint `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPoint_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html)
pub const kcoreconfigskeleton__itempointf = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QPointF `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemPointF {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemPointF_new(_group_str, _key_str, @ptrCast(reference));
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QPointF `
    ///
    /// ` defaultValue: QtC.QPointF `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemPointF {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemPointF_new2(_group_str, _key_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPointF_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPointF, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPointF_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPointF_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPointF_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPointF, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPointF_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPointF_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemPointF_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPointF, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPointF_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemPointF_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemPointF_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPointF_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemPointF_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPointF `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPointF_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html)
pub const kcoreconfigskeleton__itemsize = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QSize `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemSize {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemSize_new(_group_str, _key_str, @ptrCast(reference));
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QSize `
    ///
    /// ` defaultValue: QtC.QSize `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemSize {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemSize_new2(_group_str, _key_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemSize_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemSize, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemSize_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemSize_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemSize_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemSize, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemSize_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemSize_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemSize_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemSize, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemSize_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemSize_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemSize_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemSize_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemSize_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSize `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemSize_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html)
pub const kcoreconfigskeleton__itemsizef = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QSizeF `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemSizeF {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemSizeF_new(_group_str, _key_str, @ptrCast(reference));
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QSizeF `
    ///
    /// ` defaultValue: QtC.QSizeF `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemSizeF {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemSizeF_new2(_group_str, _key_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemSizeF, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemSizeF, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemSizeF_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemSizeF, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemSizeF_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemSizeF_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemSizeF_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemSizeF `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemSizeF_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html)
pub const kcoreconfigskeleton__itemdatetime = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemDateTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QDateTime `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemDateTime {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemDateTime_new(_group_str, _key_str, @ptrCast(reference));
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemDateTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QtC.QDateTime `
    ///
    /// ` defaultValue: QtC.QDateTime `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemDateTime {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemDateTime_new2(_group_str, _key_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemDateTime, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemDateTime, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemDateTime_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemDateTime, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemDateTime_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemDateTime_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemDateTime_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemDateTime `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemDateTime_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html)
pub const kcoreconfigskeleton__itemstringlist = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemStringList object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: [][]const u8, allocator: std.mem.Allocator) QtC.KCoreConfigSkeleton__ItemStringList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        var reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton__itemstringlist.New: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i| {
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemStringList_new(_group_str, _key_str, reference_list);
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemStringList object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: [][]const u8 `
    ///
    /// ` defaultValue: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: [][]const u8, defaultValue: [][]const u8, allocator: std.mem.Allocator) QtC.KCoreConfigSkeleton__ItemStringList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        var reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton__itemstringlist.New2: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i| {
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        var defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("kcoreconfigskeleton__itemstringlist.New2: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |item, i| {
            defaultValue_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemStringList_new2(_group_str, _key_str, reference_list, defaultValue_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemStringList_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemStringList, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemStringList_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemStringList_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemStringList_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemStringList, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemStringList_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemStringList_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemStringList_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemStringList, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemStringList_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemStringList_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemStringList_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemStringList_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemStringList_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemStringList `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemStringList_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html)
pub const kcoreconfigskeleton__itempathlist = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemPathList object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: [][]const u8, allocator: std.mem.Allocator) QtC.KCoreConfigSkeleton__ItemPathList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        var reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton__itempathlist.New: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i| {
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemPathList_new(_group_str, _key_str, reference_list);
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemPathList object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: [][]const u8 `
    ///
    /// ` defaultValue: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: [][]const u8, defaultValue: [][]const u8, allocator: std.mem.Allocator) QtC.KCoreConfigSkeleton__ItemPathList {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        var reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kcoreconfigskeleton__itempathlist.New2: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i| {
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        var defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("kcoreconfigskeleton__itempathlist.New2: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |item, i| {
            defaultValue_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };

        return qtc.KCoreConfigSkeleton__ItemPathList_new2(_group_str, _key_str, reference_list, defaultValue_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPathList_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPathList, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPathList_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn WriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPathList_WriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPathList, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnWriteConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnWriteConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseWriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPathList_QBaseWriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPathList_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPathList_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPathList, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemPathList_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemPathList_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList`
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemPathList, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemPathList_Property(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemPathList_QBaseProperty(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton::ItemStringList
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemPathList_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemPathList `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemPathList_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html)
pub const kcoreconfigskeleton__itemurllist = struct {
    /// New constructs a new KCoreConfigSkeleton::ItemUrlList object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []QtC.QUrl `
    ///
    pub fn New(_group: []const u8, _key: []const u8, reference: []QtC.QUrl) QtC.KCoreConfigSkeleton__ItemUrlList {
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

        return qtc.KCoreConfigSkeleton__ItemUrlList_new(_group_str, _key_str, reference_list);
    }

    /// New2 constructs a new KCoreConfigSkeleton::ItemUrlList object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: []QtC.QUrl `
    ///
    /// ` defaultValue: []QtC.QUrl `
    ///
    pub fn New2(_group: []const u8, _key: []const u8, reference: []QtC.QUrl, defaultValue: []QtC.QUrl) QtC.KCoreConfigSkeleton__ItemUrlList {
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

        return qtc.KCoreConfigSkeleton__ItemUrlList_new2(_group_str, _key_str, reference_list, defaultValue_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemUrlList, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn WriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_WriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemUrlList, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnWriteConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnWriteConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseWriteConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_QBaseWriteConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemUrlList, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemUrlList_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemUrlList, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemUrlList_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemUrlList_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemUrlList_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemUrlList `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemUrlList_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html)
pub const kcoreconfigskeleton__itemintlist = struct {
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
    pub fn New(_group: []const u8, _key: []const u8, reference: []i32) QtC.KCoreConfigSkeleton__ItemIntList {
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

        return qtc.KCoreConfigSkeleton__ItemIntList_new(_group_str, _key_str, reference_list);
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
    pub fn New2(_group: []const u8, _key: []const u8, reference: []i32, defaultValue: []i32) QtC.KCoreConfigSkeleton__ItemIntList {
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

        return qtc.KCoreConfigSkeleton__ItemIntList_new2(_group_str, _key_str, reference_list, defaultValue_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemIntList_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemIntList, config: QtC.KConfig) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemIntList_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemIntList_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemIntList_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemIntList, p: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton__ItemIntList_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemIntList_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemIntList_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` callback: *const fn (self: QtC.KCoreConfigSkeleton__ItemIntList, p: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreConfigSkeleton__ItemIntList_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` p: QtC.QVariant `
    ///
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton__ItemIntList_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemIntList_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KCoreConfigSkeleton__ItemIntList_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KCoreConfigSkeleton__ItemIntList_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCoreConfigSkeleton__ItemIntList `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton__ItemIntList_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#public-types)
pub const enums = struct {
    pub const Type = enum {
        pub const Normal: i32 = 0;
        pub const Password: i32 = 1;
        pub const Path: i32 = 2;
    };
};
