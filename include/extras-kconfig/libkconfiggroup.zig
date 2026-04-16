const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfig = @import("libqt6").KConfig;
const KConfigBase = @import("libqt6").KConfigBase;
const QVariant = @import("libqt6").QVariant;
const kconfigbase_enums = @import("libkconfigbase.zig").enums;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/kconfiggroup.html)
pub const KConfigGroup = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigGroup,

    pub const _is_KConfigGroup = {};
    pub const _is_KConfigBase = {};

    /// New constructs a new KConfigGroup object.
    ///
    pub fn New() KConfigGroup {
        return .{ .ptr = qtc.KConfigGroup_new() };
    }

    /// New2 constructs a new KConfigGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` master: KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    pub fn New2(master: anytype, group: []const u8) KConfigGroup {
        comptime _ = @TypeOf(master)._is_KConfigBase;
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KConfigGroup_new2(@ptrCast(master.ptr), group_str) };
    }

    /// New3 constructs a new KConfigGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` master: KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    pub fn New3(master: anytype, group: []const u8) KConfigGroup {
        comptime _ = @TypeOf(master)._is_KConfigBase;
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KConfigGroup_new3(@ptrCast(master.ptr), group_str) };
    }

    /// New4 constructs a new KConfigGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn New4(param1: anytype) KConfigGroup {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        return .{ .ptr = qtc.KConfigGroup_new4(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn OperatorAssign(self: KConfigGroup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KConfigGroup_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn IsValid(self: KConfigGroup) bool {
        return qtc.KConfigGroup_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KConfigGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigGroup_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn Exists(self: KConfigGroup) bool {
        return qtc.KConfigGroup_Exists(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#sync)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn Sync(self: KConfigGroup) bool {
        return qtc.KConfigGroup_Sync(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#sync)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSync(self: KConfigGroup, callback: *const fn () callconv(.c) bool) void {
        qtc.KConfigGroup_OnSync(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSync` instead
    ///
    pub const QBaseSync = SuperSync;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#sync)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn SuperSync(self: KConfigGroup) bool {
        return qtc.KConfigGroup_SuperSync(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#markAsClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn MarkAsClean(self: KConfigGroup) void {
        qtc.KConfigGroup_MarkAsClean(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#markAsClean)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnMarkAsClean(self: KConfigGroup, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigGroup_OnMarkAsClean(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMarkAsClean` instead
    ///
    pub const QBaseMarkAsClean = SuperMarkAsClean;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#markAsClean)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn SuperMarkAsClean(self: KConfigGroup) void {
        qtc.KConfigGroup_SuperMarkAsClean(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#accessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ## Returns:
    ///
    /// ` kconfigbase_enums.AccessMode `
    ///
    pub fn AccessMode(self: KConfigGroup) i32 {
        return qtc.KConfigGroup_AccessMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#accessMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnAccessMode(self: KConfigGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.KConfigGroup_OnAccessMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAccessMode` instead
    ///
    pub const QBaseAccessMode = SuperAccessMode;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#accessMode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ## Returns:
    ///
    /// ` kconfigbase_enums.AccessMode `
    ///
    pub fn SuperAccessMode(self: KConfigGroup) i32 {
        return qtc.KConfigGroup_SuperAccessMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn Config(self: KConfigGroup) KConfig {
        return .{ .ptr = qtc.KConfigGroup_Config(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn Config2(self: KConfigGroup) KConfig {
        return .{ .ptr = qtc.KConfigGroup_Config2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` other: KConfigBase `
    ///
    pub fn CopyTo(self: KConfigGroup, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KConfigBase;
        qtc.KConfigGroup_CopyTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#reparent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` parent: KConfigBase `
    ///
    pub fn Reparent(self: KConfigGroup, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_KConfigBase;
        qtc.KConfigGroup_Reparent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#moveValuesTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keys: [][:0]const u8 `
    ///
    /// ` other: KConfigGroup `
    ///
    pub fn MoveValuesTo(self: KConfigGroup, allocator: std.mem.Allocator, keys: [][:0]const u8, other: anytype) void {
        const keys_cStr = allocator.alloc([*c]const u8, keys.len) catch @panic("kconfiggroup.MoveValuesTo: Memory allocation failed");
        defer allocator.free(keys_cStr);
        for (keys, 0..keys.len) |keys_item, i|
            keys_cStr[i] = @ptrCast(keys_item.ptr);
        const keys_list = qtc.libqt_list{
            .len = keys.len,
            .data = @ptrCast(keys_cStr.ptr),
        };
        comptime _ = @TypeOf(other)._is_KConfigGroup;
        qtc.KConfigGroup_MoveValuesTo(@ptrCast(self.ptr), keys_list, @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#moveValuesTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` other: KConfigGroup `
    ///
    pub fn MoveValuesTo2(self: KConfigGroup, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KConfigGroup;
        qtc.KConfigGroup_MoveValuesTo2(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn Parent(self: KConfigGroup) KConfigGroup {
        return .{ .ptr = qtc.KConfigGroup_Parent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#groupList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GroupList(self: KConfigGroup, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigGroup_GroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfiggroup.GroupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfiggroup.GroupList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#groupList)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnGroupList(self: KConfigGroup, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KConfigGroup_OnGroupList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGroupList` instead
    ///
    pub const QBaseGroupList = SuperGroupList;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#groupList)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperGroupList(self: KConfigGroup, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigGroup_SuperGroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfiggroup.GroupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfiggroup.GroupList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#keyList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KeyList(self: KConfigGroup, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigGroup_KeyList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfiggroup.KeyList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfiggroup.KeyList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn DeleteGroup(self: KConfigGroup) void {
        qtc.KConfigGroup_DeleteGroup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` aDefault: QVariant `
    ///
    pub fn ReadEntry(self: KConfigGroup, key: []const u8, aDefault: anytype) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(aDefault)._is_QVariant;
        return .{ .ptr = qtc.KConfigGroup_ReadEntry(@ptrCast(self.ptr), key_str, @ptrCast(aDefault.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` aDefault: QVariant `
    ///
    pub fn ReadEntry2(self: KConfigGroup, key: [:0]const u8, aDefault: anytype) QVariant {
        const key_Cstring = key.ptr;
        comptime _ = @TypeOf(aDefault)._is_QVariant;
        return .{ .ptr = qtc.KConfigGroup_ReadEntry2(@ptrCast(self.ptr), key_Cstring, @ptrCast(aDefault.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` aDefault: []const u8 `
    ///
    pub fn ReadEntry3(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8, aDefault: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        var _str = qtc.KConfigGroup_ReadEntry3(@ptrCast(self.ptr), key_str, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntry3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` aDefault: []const u8 `
    ///
    pub fn ReadEntry4(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []const u8) []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        var _str = qtc.KConfigGroup_ReadEntry4(@ptrCast(self.ptr), key_Cstring, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntry4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ReadEntry5(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KConfigGroup_ReadEntry5(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntry5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn ReadEntry6(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8) []const u8 {
        const key_Cstring = key.ptr;
        var _str = qtc.KConfigGroup_ReadEntry6(@ptrCast(self.ptr), key_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntry6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` aDefault: []QVariant `
    ///
    pub fn ReadEntry7(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8, aDefault: []QVariant) []QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = @ptrCast(aDefault.ptr),
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadEntry7(@ptrCast(self.ptr), key_str, aDefault_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("kconfiggroup.ReadEntry7: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` aDefault: []QVariant `
    ///
    pub fn ReadEntry8(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []QVariant) []QVariant {
        const key_Cstring = key.ptr;
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = @ptrCast(aDefault.ptr),
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadEntry8(@ptrCast(self.ptr), key_Cstring, aDefault_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("kconfiggroup.ReadEntry8: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` aDefault: []const []const u8 `
    ///
    pub fn ReadEntry9(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8, aDefault: []const []const u8) []const []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("kconfiggroup.ReadEntry9: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |item, i|
            aDefault_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = aDefault_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadEntry9(@ptrCast(self.ptr), key_str, aDefault_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfiggroup.ReadEntry9: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfiggroup.ReadEntry9: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` aDefault: []const []const u8 `
    ///
    pub fn ReadEntry10(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []const []const u8) []const []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("kconfiggroup.ReadEntry10: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |item, i|
            aDefault_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = aDefault_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadEntry10(@ptrCast(self.ptr), key_Cstring, aDefault_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfiggroup.ReadEntry10: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfiggroup.ReadEntry10: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readXdgListEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pKey: []const u8 `
    ///
    pub fn ReadXdgListEntry(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8) []const []const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadXdgListEntry(@ptrCast(self.ptr), pKey_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfiggroup.ReadXdgListEntry: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfiggroup.ReadXdgListEntry: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readXdgListEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn ReadXdgListEntry2(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8) []const []const u8 {
        const key_Cstring = key.ptr;
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadXdgListEntry2(@ptrCast(self.ptr), key_Cstring);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfiggroup.ReadXdgListEntry2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfiggroup.ReadXdgListEntry2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readPathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pKey: []const u8 `
    ///
    /// ` aDefault: []const u8 `
    ///
    pub fn ReadPathEntry(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, aDefault: []const u8) []const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        var _str = qtc.KConfigGroup_ReadPathEntry(@ptrCast(self.ptr), pKey_str, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadPathEntry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readPathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` aDefault: []const u8 `
    ///
    pub fn ReadPathEntry2(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []const u8) []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        var _str = qtc.KConfigGroup_ReadPathEntry2(@ptrCast(self.ptr), key_Cstring, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadPathEntry2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readPathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pKey: []const u8 `
    ///
    /// ` aDefault: []const []const u8 `
    ///
    pub fn ReadPathEntry3(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, aDefault: []const []const u8) []const []const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("kconfiggroup.ReadPathEntry3: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |item, i|
            aDefault_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = aDefault_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadPathEntry3(@ptrCast(self.ptr), pKey_str, aDefault_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfiggroup.ReadPathEntry3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfiggroup.ReadPathEntry3: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readPathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` aDefault: []const []const u8 `
    ///
    pub fn ReadPathEntry4(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []const []const u8) []const []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("kconfiggroup.ReadPathEntry4: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |item, i|
            aDefault_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = aDefault_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadPathEntry4(@ptrCast(self.ptr), key_Cstring, aDefault_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfiggroup.ReadPathEntry4: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfiggroup.ReadPathEntry4: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntryUntranslated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pKey: []const u8 `
    ///
    pub fn ReadEntryUntranslated(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8) []const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        var _str = qtc.KConfigGroup_ReadEntryUntranslated(@ptrCast(self.ptr), pKey_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntryUntranslated: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntryUntranslated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn ReadEntryUntranslated2(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8) []const u8 {
        const key_Cstring = key.ptr;
        var _str = qtc.KConfigGroup_ReadEntryUntranslated2(@ptrCast(self.ptr), key_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntryUntranslated2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn WriteEntry(self: KConfigGroup, key: []const u8, value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KConfigGroup_WriteEntry(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn WriteEntry2(self: KConfigGroup, key: [:0]const u8, value: anytype) void {
        const key_Cstring = key.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KConfigGroup_WriteEntry2(@ptrCast(self.ptr), key_Cstring, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn WriteEntry3(self: KConfigGroup, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry3(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn WriteEntry4(self: KConfigGroup, key: [:0]const u8, value: []const u8) void {
        const key_Cstring = key.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry4(@ptrCast(self.ptr), key_Cstring, value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []u8 `
    ///
    pub fn WriteEntry5(self: KConfigGroup, key: []const u8, value: []u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry5(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: []u8 `
    ///
    pub fn WriteEntry6(self: KConfigGroup, key: [:0]const u8, value: []u8) void {
        const key_Cstring = key.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry6(@ptrCast(self.ptr), key_Cstring, value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: [:0]const u8 `
    ///
    pub fn WriteEntry7(self: KConfigGroup, key: []const u8, value: [:0]const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_Cstring = value.ptr;
        qtc.KConfigGroup_WriteEntry7(@ptrCast(self.ptr), key_str, value_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: [:0]const u8 `
    ///
    pub fn WriteEntry8(self: KConfigGroup, key: [:0]const u8, value: [:0]const u8) void {
        const key_Cstring = key.ptr;
        const value_Cstring = value.ptr;
        qtc.KConfigGroup_WriteEntry8(@ptrCast(self.ptr), key_Cstring, value_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const []const u8 `
    ///
    pub fn WriteEntry9(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8, value: []const []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteEntry9: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i|
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteEntry9(@ptrCast(self.ptr), key_str, value_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: []const []const u8 `
    ///
    pub fn WriteEntry10(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, value: []const []const u8) void {
        const key_Cstring = key.ptr;
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteEntry10: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i|
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteEntry10(@ptrCast(self.ptr), key_Cstring, value_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []QVariant `
    ///
    pub fn WriteEntry11(self: KConfigGroup, key: []const u8, value: []QVariant) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = @ptrCast(value.ptr),
        };
        qtc.KConfigGroup_WriteEntry11(@ptrCast(self.ptr), key_str, value_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: []QVariant `
    ///
    pub fn WriteEntry12(self: KConfigGroup, key: [:0]const u8, value: []QVariant) void {
        const key_Cstring = key.ptr;
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = @ptrCast(value.ptr),
        };
        qtc.KConfigGroup_WriteEntry12(@ptrCast(self.ptr), key_Cstring, value_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeXdgListEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pKey: []const u8 `
    ///
    /// ` value: []const []const u8 `
    ///
    pub fn WriteXdgListEntry(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, value: []const []const u8) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteXdgListEntry: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i|
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteXdgListEntry(@ptrCast(self.ptr), pKey_str, value_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeXdgListEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: []const []const u8 `
    ///
    pub fn WriteXdgListEntry2(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, value: []const []const u8) void {
        const key_Cstring = key.ptr;
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteXdgListEntry2: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i|
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteXdgListEntry2(@ptrCast(self.ptr), key_Cstring, value_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` pKey: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    pub fn WritePathEntry(self: KConfigGroup, pKey: []const u8, path: []const u8) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KConfigGroup_WritePathEntry(@ptrCast(self.ptr), pKey_str, path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` Key: [:0]const u8 `
    ///
    /// ` path: []const u8 `
    ///
    pub fn WritePathEntry2(self: KConfigGroup, Key: [:0]const u8, path: []const u8) void {
        const Key_Cstring = Key.ptr;
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KConfigGroup_WritePathEntry2(@ptrCast(self.ptr), Key_Cstring, path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pKey: []const u8 `
    ///
    /// ` value: []const []const u8 `
    ///
    pub fn WritePathEntry3(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, value: []const []const u8) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WritePathEntry3: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i|
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WritePathEntry3(@ptrCast(self.ptr), pKey_str, value_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: []const []const u8 `
    ///
    pub fn WritePathEntry4(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, value: []const []const u8) void {
        const key_Cstring = key.ptr;
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WritePathEntry4: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i|
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WritePathEntry4(@ptrCast(self.ptr), key_Cstring, value_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` pKey: []const u8 `
    ///
    pub fn DeleteEntry(self: KConfigGroup, pKey: []const u8) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        qtc.KConfigGroup_DeleteEntry(@ptrCast(self.ptr), pKey_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn DeleteEntry2(self: KConfigGroup, key: [:0]const u8) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_DeleteEntry2(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#hasKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    pub fn HasKey(self: KConfigGroup, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KConfigGroup_HasKey(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#hasKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn HasKey2(self: KConfigGroup, key: [:0]const u8) bool {
        const key_Cstring = key.ptr;
        return qtc.KConfigGroup_HasKey2(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn IsImmutable(self: KConfigGroup) bool {
        return qtc.KConfigGroup_IsImmutable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isImmutable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsImmutable(self: KConfigGroup, callback: *const fn () callconv(.c) bool) void {
        qtc.KConfigGroup_OnIsImmutable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsImmutable` instead
    ///
    pub const QBaseIsImmutable = SuperIsImmutable;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isImmutable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn SuperIsImmutable(self: KConfigGroup) bool {
        return qtc.KConfigGroup_SuperIsImmutable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isEntryImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    pub fn IsEntryImmutable(self: KConfigGroup, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KConfigGroup_IsEntryImmutable(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isEntryImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn IsEntryImmutable2(self: KConfigGroup, key: [:0]const u8) bool {
        const key_Cstring = key.ptr;
        return qtc.KConfigGroup_IsEntryImmutable2(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#revertToDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    pub fn RevertToDefault(self: KConfigGroup, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.KConfigGroup_RevertToDefault(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#revertToDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn RevertToDefault2(self: KConfigGroup, key: [:0]const u8) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_RevertToDefault2(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#hasDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    pub fn HasDefault(self: KConfigGroup, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KConfigGroup_HasDefault(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#hasDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn HasDefault2(self: KConfigGroup, key: [:0]const u8) bool {
        const key_Cstring = key.ptr;
        return qtc.KConfigGroup_HasDefault2(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#entryMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryMap(self: KConfigGroup, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KConfigGroup_EntryMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("kconfiggroup.EntryMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kconfiggroup.EntryMap: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("kconfiggroup.EntryMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#hasGroupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn HasGroupImpl(self: KConfigGroup, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_HasGroupImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#hasGroupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` callback: *const fn (self: KConfigGroup, groupName: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnHasGroupImpl(self: KConfigGroup, callback: *const fn (KConfigGroup, [*:0]const u8) callconv(.c) bool) void {
        qtc.KConfigGroup_OnHasGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasGroupImpl` instead
    ///
    pub const QBaseHasGroupImpl = SuperHasGroupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#hasGroupImpl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn SuperHasGroupImpl(self: KConfigGroup, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_SuperHasGroupImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn GroupImpl(self: KConfigGroup, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfigGroup_GroupImpl(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` callback: *const fn (self: KConfigGroup, groupName: [*:0]const u8) callconv(.c) KConfigGroup `
    ///
    pub fn OnGroupImpl(self: KConfigGroup, callback: *const fn (KConfigGroup, [*:0]const u8) callconv(.c) KConfigGroup) void {
        qtc.KConfigGroup_OnGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGroupImpl` instead
    ///
    pub const QBaseGroupImpl = SuperGroupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn SuperGroupImpl(self: KConfigGroup, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfigGroup_SuperGroupImpl(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn GroupImpl2(self: KConfigGroup, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfigGroup_GroupImpl2(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` callback: *const fn (self: KConfigGroup, groupName: [*:0]const u8) callconv(.c) KConfigGroup `
    ///
    pub fn OnGroupImpl2(self: KConfigGroup, callback: *const fn (KConfigGroup, [*:0]const u8) callconv(.c) KConfigGroup) void {
        qtc.KConfigGroup_OnGroupImpl2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGroupImpl2` instead
    ///
    pub const QBaseGroupImpl2 = SuperGroupImpl2;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn SuperGroupImpl2(self: KConfigGroup, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfigGroup_SuperGroupImpl2(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteGroupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteGroupImpl(self: KConfigGroup, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KConfigGroup_DeleteGroupImpl(@ptrCast(self.ptr), groupName_str, @bitCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteGroupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` callback: *const fn (self: KConfigGroup, groupName: [*:0]const u8, flags: flag of kconfigbase_enums.WriteConfigFlag) callconv(.c) void `
    ///
    pub fn OnDeleteGroupImpl(self: KConfigGroup, callback: *const fn (KConfigGroup, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KConfigGroup_OnDeleteGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDeleteGroupImpl` instead
    ///
    pub const QBaseDeleteGroupImpl = SuperDeleteGroupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteGroupImpl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SuperDeleteGroupImpl(self: KConfigGroup, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KConfigGroup_SuperDeleteGroupImpl(@ptrCast(self.ptr), groupName_str, @bitCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isGroupImmutableImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn IsGroupImmutableImpl(self: KConfigGroup, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_IsGroupImmutableImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isGroupImmutableImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` callback: *const fn (self: KConfigGroup, groupName: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnIsGroupImmutableImpl(self: KConfigGroup, callback: *const fn (KConfigGroup, [*:0]const u8) callconv(.c) bool) void {
        qtc.KConfigGroup_OnIsGroupImmutableImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsGroupImmutableImpl` instead
    ///
    pub const QBaseIsGroupImmutableImpl = SuperIsGroupImmutableImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isGroupImmutableImpl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn SuperIsGroupImmutableImpl(self: KConfigGroup, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_SuperIsGroupImmutableImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` other: KConfigBase `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn CopyTo2(self: KConfigGroup, other: anytype, pFlags: i32) void {
        comptime _ = @TypeOf(other)._is_KConfigBase;
        qtc.KConfigGroup_CopyTo2(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#reparent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` parent: KConfigBase `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn Reparent2(self: KConfigGroup, parent: anytype, pFlags: i32) void {
        comptime _ = @TypeOf(parent)._is_KConfigBase;
        qtc.KConfigGroup_Reparent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#moveValuesTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keys: [][:0]const u8 `
    ///
    /// ` other: KConfigGroup `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn MoveValuesTo3(self: KConfigGroup, allocator: std.mem.Allocator, keys: [][:0]const u8, other: anytype, pFlags: i32) void {
        const keys_cStr = allocator.alloc([*c]const u8, keys.len) catch @panic("kconfiggroup.MoveValuesTo3: Memory allocation failed");
        defer allocator.free(keys_cStr);
        for (keys, 0..keys.len) |keys_item, i|
            keys_cStr[i] = @ptrCast(keys_item.ptr);
        const keys_list = qtc.libqt_list{
            .len = keys.len,
            .data = @ptrCast(keys_cStr.ptr),
        };
        comptime _ = @TypeOf(other)._is_KConfigGroup;
        qtc.KConfigGroup_MoveValuesTo3(@ptrCast(self.ptr), keys_list, @ptrCast(other.ptr), @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#moveValuesTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` other: KConfigGroup `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn MoveValuesTo22(self: KConfigGroup, other: anytype, pFlags: i32) void {
        comptime _ = @TypeOf(other)._is_KConfigGroup;
        qtc.KConfigGroup_MoveValuesTo22(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteGroup1(self: KConfigGroup, pFlags: i32) void {
        qtc.KConfigGroup_DeleteGroup1(@ptrCast(self.ptr), @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` aDefault: [:0]const u8 `
    ///
    pub fn ReadEntry22(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8, aDefault: [:0]const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const aDefault_Cstring = aDefault.ptr;
        var _str = qtc.KConfigGroup_ReadEntry22(@ptrCast(self.ptr), key_str, aDefault_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntry22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` aDefault: [:0]const u8 `
    ///
    pub fn ReadEntry23(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: [:0]const u8) []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_Cstring = aDefault.ptr;
        var _str = qtc.KConfigGroup_ReadEntry23(@ptrCast(self.ptr), key_Cstring, aDefault_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntry23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readXdgListEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pKey: []const u8 `
    ///
    /// ` aDefault: []const []const u8 `
    ///
    pub fn ReadXdgListEntry22(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, aDefault: []const []const u8) []const []const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("kconfiggroup.ReadXdgListEntry22: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |item, i|
            aDefault_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = aDefault_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadXdgListEntry22(@ptrCast(self.ptr), pKey_str, aDefault_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfiggroup.ReadXdgListEntry22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfiggroup.ReadXdgListEntry22: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readXdgListEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` aDefault: []const []const u8 `
    ///
    pub fn ReadXdgListEntry23(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []const []const u8) []const []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("kconfiggroup.ReadXdgListEntry23: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |item, i|
            aDefault_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = aDefault_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadXdgListEntry23(@ptrCast(self.ptr), key_Cstring, aDefault_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfiggroup.ReadXdgListEntry23: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfiggroup.ReadXdgListEntry23: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntryUntranslated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pKey: []const u8 `
    ///
    /// ` aDefault: []const u8 `
    ///
    pub fn ReadEntryUntranslated22(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, aDefault: []const u8) []const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        var _str = qtc.KConfigGroup_ReadEntryUntranslated22(@ptrCast(self.ptr), pKey_str, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntryUntranslated22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntryUntranslated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` aDefault: []const u8 `
    ///
    pub fn ReadEntryUntranslated23(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []const u8) []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        var _str = qtc.KConfigGroup_ReadEntryUntranslated23(@ptrCast(self.ptr), key_Cstring, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntryUntranslated23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteEntry32(self: KConfigGroup, key: []const u8, value: anytype, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KConfigGroup_WriteEntry32(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr), @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteEntry33(self: KConfigGroup, key: [:0]const u8, value: anytype, pFlags: i32) void {
        const key_Cstring = key.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KConfigGroup_WriteEntry33(@ptrCast(self.ptr), key_Cstring, @ptrCast(value.ptr), @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteEntry34(self: KConfigGroup, key: []const u8, value: []const u8, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry34(@ptrCast(self.ptr), key_str, value_str, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: []const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteEntry35(self: KConfigGroup, key: [:0]const u8, value: []const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry35(@ptrCast(self.ptr), key_Cstring, value_str, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteEntry36(self: KConfigGroup, key: []const u8, value: []u8, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry36(@ptrCast(self.ptr), key_str, value_str, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: []u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteEntry37(self: KConfigGroup, key: [:0]const u8, value: []u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry37(@ptrCast(self.ptr), key_Cstring, value_str, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: [:0]const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteEntry38(self: KConfigGroup, key: []const u8, value: [:0]const u8, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_Cstring = value.ptr;
        qtc.KConfigGroup_WriteEntry38(@ptrCast(self.ptr), key_str, value_Cstring, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: [:0]const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteEntry39(self: KConfigGroup, key: [:0]const u8, value: [:0]const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_Cstring = value.ptr;
        qtc.KConfigGroup_WriteEntry39(@ptrCast(self.ptr), key_Cstring, value_Cstring, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const []const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteEntry310(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8, value: []const []const u8, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteEntry310: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i|
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteEntry310(@ptrCast(self.ptr), key_str, value_list, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: []const []const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteEntry311(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, value: []const []const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteEntry311: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i|
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteEntry311(@ptrCast(self.ptr), key_Cstring, value_list, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []QVariant `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteEntry312(self: KConfigGroup, key: []const u8, value: []QVariant, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = @ptrCast(value.ptr),
        };
        qtc.KConfigGroup_WriteEntry312(@ptrCast(self.ptr), key_str, value_list, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: []QVariant `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteEntry313(self: KConfigGroup, key: [:0]const u8, value: []QVariant, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = @ptrCast(value.ptr),
        };
        qtc.KConfigGroup_WriteEntry313(@ptrCast(self.ptr), key_Cstring, value_list, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeXdgListEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pKey: []const u8 `
    ///
    /// ` value: []const []const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteXdgListEntry3(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, value: []const []const u8, pFlags: i32) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteXdgListEntry3: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i|
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteXdgListEntry3(@ptrCast(self.ptr), pKey_str, value_list, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writeXdgListEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: []const []const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WriteXdgListEntry32(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, value: []const []const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteXdgListEntry32: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i|
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteXdgListEntry32(@ptrCast(self.ptr), key_Cstring, value_list, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` pKey: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WritePathEntry32(self: KConfigGroup, pKey: []const u8, path: []const u8, pFlags: i32) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KConfigGroup_WritePathEntry32(@ptrCast(self.ptr), pKey_str, path_str, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` Key: [:0]const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WritePathEntry33(self: KConfigGroup, Key: [:0]const u8, path: []const u8, pFlags: i32) void {
        const Key_Cstring = Key.ptr;
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KConfigGroup_WritePathEntry33(@ptrCast(self.ptr), Key_Cstring, path_str, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pKey: []const u8 `
    ///
    /// ` value: []const []const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WritePathEntry34(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, value: []const []const u8, pFlags: i32) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WritePathEntry34: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i|
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WritePathEntry34(@ptrCast(self.ptr), pKey_str, value_list, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` value: []const []const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn WritePathEntry35(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, value: []const []const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WritePathEntry35: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i|
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WritePathEntry35(@ptrCast(self.ptr), key_Cstring, value_list, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` pKey: []const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteEntry22(self: KConfigGroup, pKey: []const u8, pFlags: i32) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        qtc.KConfigGroup_DeleteEntry22(@ptrCast(self.ptr), pKey_str, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteEntry23(self: KConfigGroup, key: [:0]const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_DeleteEntry23(@ptrCast(self.ptr), key_Cstring, @bitCast(pFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#revertToDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` pFlag: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn RevertToDefault22(self: KConfigGroup, key: []const u8, pFlag: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.KConfigGroup_RevertToDefault22(@ptrCast(self.ptr), key_str, @bitCast(pFlag));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#revertToDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` pFlag: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn RevertToDefault23(self: KConfigGroup, key: [:0]const u8, pFlag: i32) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_RevertToDefault23(@ptrCast(self.ptr), key_Cstring, @bitCast(pFlag));
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` group: []const u8 `
    ///
    pub fn HasGroup(self: KConfigGroup, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_HasGroup(@ptrCast(self.ptr), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group(self: KConfigGroup, group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KConfigBase_Group(@ptrCast(self.ptr), group_str) };
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group2(self: KConfigGroup, group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KConfigBase_Group2(@ptrCast(self.ptr), group_str) };
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` group: []const u8 `
    ///
    pub fn IsGroupImmutable(self: KConfigGroup, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_IsGroupImmutable(@ptrCast(self.ptr), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` group: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteGroup2(self: KConfigGroup, group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self.ptr), group_str, @bitCast(flags));
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: KConfigGroup, id: i32, data: ?*anyopaque) void {
        qtc.KConfigGroup_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KConfigGroup, id: i32, data: ?*anyopaque) void {
        qtc.KConfigGroup_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigGroup`
    ///
    /// ` callback: *const fn (self: KConfigGroup, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: KConfigGroup, callback: *const fn (KConfigGroup, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigGroup_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#dtor.KConfigGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn Delete(self: KConfigGroup) void {
        qtc.KConfigGroup_Delete(@ptrCast(self.ptr));
    }
};
