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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KConfigGroup object in C++ memory
    ///
    pub fn new() KConfigGroup {
        return .{ .ptr = qtc.KConfigGroup_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KConfigGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` master: KConfigBase `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn new2(master: anytype, _group: []const u8) KConfigGroup {
        comptime _ = @TypeOf(master)._is_KConfigBase;
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return .{ .ptr = qtc.KConfigGroup_new2(@ptrCast(master.ptr), group_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KConfigGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` master: KConfigBase `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn new3(master: anytype, _group: []const u8) KConfigGroup {
        comptime _ = @TypeOf(master)._is_KConfigBase;
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return .{ .ptr = qtc.KConfigGroup_new3(@ptrCast(master.ptr), group_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KConfigGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn new4(param1: anytype) KConfigGroup {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        return .{ .ptr = qtc.KConfigGroup_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn operatorAssign(self: KConfigGroup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KConfigGroup_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn isValid(self: KConfigGroup) bool {
        return qtc.KConfigGroup_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KConfigGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfigGroup_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `exists` instead
    ///
    pub const Exists = exists;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn exists(self: KConfigGroup) bool {
        return qtc.KConfigGroup_Exists(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sync` instead
    ///
    pub const Sync = sync;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#sync)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn sync(self: KConfigGroup) bool {
        return qtc.KConfigGroup_Sync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSync` instead
    ///
    pub const OnSync = onSync;

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
    pub fn onSync(self: KConfigGroup, callback: *const fn () callconv(.c) bool) void {
        qtc.KConfigGroup_OnSync(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSync` instead
    ///
    pub const SuperSync = superSync;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#sync)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn superSync(self: KConfigGroup) bool {
        return qtc.KConfigGroup_SuperSync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `markAsClean` instead
    ///
    pub const MarkAsClean = markAsClean;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#markAsClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn markAsClean(self: KConfigGroup) void {
        qtc.KConfigGroup_MarkAsClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMarkAsClean` instead
    ///
    pub const OnMarkAsClean = onMarkAsClean;

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
    pub fn onMarkAsClean(self: KConfigGroup, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigGroup_OnMarkAsClean(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMarkAsClean` instead
    ///
    pub const SuperMarkAsClean = superMarkAsClean;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#markAsClean)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn superMarkAsClean(self: KConfigGroup) void {
        qtc.KConfigGroup_SuperMarkAsClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessMode` instead
    ///
    pub const AccessMode = accessMode;

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
    pub fn accessMode(self: KConfigGroup) i32 {
        return qtc.KConfigGroup_AccessMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAccessMode` instead
    ///
    pub const OnAccessMode = onAccessMode;

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
    pub fn onAccessMode(self: KConfigGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.KConfigGroup_OnAccessMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAccessMode` instead
    ///
    pub const SuperAccessMode = superAccessMode;

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
    pub fn superAccessMode(self: KConfigGroup) i32 {
        return qtc.KConfigGroup_SuperAccessMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `config` instead
    ///
    pub const Config = config;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn config(self: KConfigGroup) KConfig {
        return .{ .ptr = qtc.KConfigGroup_Config(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `config2` instead
    ///
    pub const Config2 = config2;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn config2(self: KConfigGroup) KConfig {
        return .{ .ptr = qtc.KConfigGroup_Config2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `copyTo` instead
    ///
    pub const CopyTo = copyTo;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` other: KConfigBase `
    ///
    pub fn copyTo(self: KConfigGroup, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KConfigBase;
        qtc.KConfigGroup_CopyTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `reparent` instead
    ///
    pub const Reparent = reparent;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#reparent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` _parent: KConfigBase `
    ///
    pub fn reparent(self: KConfigGroup, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_KConfigBase;
        qtc.KConfigGroup_Reparent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `moveValuesTo` instead
    ///
    pub const MoveValuesTo = moveValuesTo;

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
    pub fn moveValuesTo(self: KConfigGroup, allocator: std.mem.Allocator, keys: [][:0]const u8, other: anytype) void {
        const keys_cStr = allocator.alloc([*:0]const u8, keys.len) catch @panic("KConfigGroup.moveValuesTo: Memory allocation failed");
        defer allocator.free(keys_cStr);
        for (keys, 0..keys.len) |keys_item, i|
            keys_cStr[i] = @ptrCast(keys_item.ptr);
        const keys_list = qtc.libqt_list{
            .len = keys.len,
            .data = @ptrCast(keys_cStr),
        };
        comptime _ = @TypeOf(other)._is_KConfigGroup;
        qtc.KConfigGroup_MoveValuesTo(@ptrCast(self.ptr), keys_list, @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveValuesTo2` instead
    ///
    pub const MoveValuesTo2 = moveValuesTo2;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#moveValuesTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` other: KConfigGroup `
    ///
    pub fn moveValuesTo2(self: KConfigGroup, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KConfigGroup;
        qtc.KConfigGroup_MoveValuesTo2(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn parent(self: KConfigGroup) KConfigGroup {
        return .{ .ptr = qtc.KConfigGroup_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `groupList` instead
    ///
    pub const GroupList = groupList;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#groupList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn groupList(self: KConfigGroup, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigGroup_GroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigGroup.groupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigGroup.groupList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onGroupList` instead
    ///
    pub const OnGroupList = onGroupList;

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
    pub fn onGroupList(self: KConfigGroup, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KConfigGroup_OnGroupList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGroupList` instead
    ///
    pub const SuperGroupList = superGroupList;

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
    pub fn superGroupList(self: KConfigGroup, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigGroup_SuperGroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigGroup.groupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigGroup.groupList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `keyList` instead
    ///
    pub const KeyList = keyList;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#keyList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keyList(self: KConfigGroup, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigGroup_KeyList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigGroup.keyList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigGroup.keyList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `deleteGroup` instead
    ///
    pub const DeleteGroup = deleteGroup;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn deleteGroup(self: KConfigGroup) void {
        qtc.KConfigGroup_DeleteGroup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readEntry` instead
    ///
    pub const ReadEntry = readEntry;

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
    pub fn readEntry(self: KConfigGroup, key: []const u8, aDefault: anytype) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(aDefault)._is_QVariant;
        return .{ .ptr = qtc.KConfigGroup_ReadEntry(@ptrCast(self.ptr), key_str, @ptrCast(aDefault.ptr)) };
    }

    /// ### DEPRECATED: Use `readEntry2` instead
    ///
    pub const ReadEntry2 = readEntry2;

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
    pub fn readEntry2(self: KConfigGroup, key: [:0]const u8, aDefault: anytype) QVariant {
        const key_Cstring = key.ptr;
        comptime _ = @TypeOf(aDefault)._is_QVariant;
        return .{ .ptr = qtc.KConfigGroup_ReadEntry2(@ptrCast(self.ptr), key_Cstring, @ptrCast(aDefault.ptr)) };
    }

    /// ### DEPRECATED: Use `readEntry3` instead
    ///
    pub const ReadEntry3 = readEntry3;

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
    pub fn readEntry3(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8, aDefault: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.readEntry3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntry4` instead
    ///
    pub const ReadEntry4 = readEntry4;

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
    pub fn readEntry4(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []const u8) []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        var _str = qtc.KConfigGroup_ReadEntry4(@ptrCast(self.ptr), key_Cstring, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.readEntry4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntry5` instead
    ///
    pub const ReadEntry5 = readEntry5;

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
    pub fn readEntry5(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KConfigGroup_ReadEntry5(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.readEntry5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntry6` instead
    ///
    pub const ReadEntry6 = readEntry6;

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
    pub fn readEntry6(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8) []const u8 {
        const key_Cstring = key.ptr;
        var _str = qtc.KConfigGroup_ReadEntry6(@ptrCast(self.ptr), key_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.readEntry6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntry7` instead
    ///
    pub const ReadEntry7 = readEntry7;

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
    pub fn readEntry7(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8, aDefault: []QVariant) []QVariant {
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
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("KConfigGroup.readEntry7: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntry8` instead
    ///
    pub const ReadEntry8 = readEntry8;

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
    pub fn readEntry8(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []QVariant) []QVariant {
        const key_Cstring = key.ptr;
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = @ptrCast(aDefault.ptr),
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadEntry8(@ptrCast(self.ptr), key_Cstring, aDefault_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("KConfigGroup.readEntry8: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntry9` instead
    ///
    pub const ReadEntry9 = readEntry9;

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
    pub fn readEntry9(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8, aDefault: []const []const u8) []const []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("KConfigGroup.readEntry9: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |str_item, i|
            aDefault_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigGroup.readEntry9: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigGroup.readEntry9: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntry10` instead
    ///
    pub const ReadEntry10 = readEntry10;

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
    pub fn readEntry10(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []const []const u8) []const []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("KConfigGroup.readEntry10: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |str_item, i|
            aDefault_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigGroup.readEntry10: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigGroup.readEntry10: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `readXdgListEntry` instead
    ///
    pub const ReadXdgListEntry = readXdgListEntry;

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
    pub fn readXdgListEntry(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigGroup.readXdgListEntry: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigGroup.readXdgListEntry: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `readXdgListEntry2` instead
    ///
    pub const ReadXdgListEntry2 = readXdgListEntry2;

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
    pub fn readXdgListEntry2(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8) []const []const u8 {
        const key_Cstring = key.ptr;
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadXdgListEntry2(@ptrCast(self.ptr), key_Cstring);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigGroup.readXdgListEntry2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigGroup.readXdgListEntry2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `readPathEntry` instead
    ///
    pub const ReadPathEntry = readPathEntry;

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
    pub fn readPathEntry(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, aDefault: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.readPathEntry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readPathEntry2` instead
    ///
    pub const ReadPathEntry2 = readPathEntry2;

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
    pub fn readPathEntry2(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []const u8) []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        var _str = qtc.KConfigGroup_ReadPathEntry2(@ptrCast(self.ptr), key_Cstring, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.readPathEntry2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readPathEntry3` instead
    ///
    pub const ReadPathEntry3 = readPathEntry3;

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
    pub fn readPathEntry3(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, aDefault: []const []const u8) []const []const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("KConfigGroup.readPathEntry3: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |str_item, i|
            aDefault_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigGroup.readPathEntry3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigGroup.readPathEntry3: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `readPathEntry4` instead
    ///
    pub const ReadPathEntry4 = readPathEntry4;

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
    pub fn readPathEntry4(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []const []const u8) []const []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("KConfigGroup.readPathEntry4: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |str_item, i|
            aDefault_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigGroup.readPathEntry4: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigGroup.readPathEntry4: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntryUntranslated` instead
    ///
    pub const ReadEntryUntranslated = readEntryUntranslated;

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
    pub fn readEntryUntranslated(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8) []const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        var _str = qtc.KConfigGroup_ReadEntryUntranslated(@ptrCast(self.ptr), pKey_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.readEntryUntranslated: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntryUntranslated2` instead
    ///
    pub const ReadEntryUntranslated2 = readEntryUntranslated2;

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
    pub fn readEntryUntranslated2(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8) []const u8 {
        const key_Cstring = key.ptr;
        var _str = qtc.KConfigGroup_ReadEntryUntranslated2(@ptrCast(self.ptr), key_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.readEntryUntranslated2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `writeEntry` instead
    ///
    pub const WriteEntry = writeEntry;

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
    pub fn writeEntry(self: KConfigGroup, key: []const u8, value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KConfigGroup_WriteEntry(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `writeEntry2` instead
    ///
    pub const WriteEntry2 = writeEntry2;

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
    pub fn writeEntry2(self: KConfigGroup, key: [:0]const u8, value: anytype) void {
        const key_Cstring = key.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KConfigGroup_WriteEntry2(@ptrCast(self.ptr), key_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `writeEntry3` instead
    ///
    pub const WriteEntry3 = writeEntry3;

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
    pub fn writeEntry3(self: KConfigGroup, key: []const u8, value: []const u8) void {
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

    /// ### DEPRECATED: Use `writeEntry4` instead
    ///
    pub const WriteEntry4 = writeEntry4;

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
    pub fn writeEntry4(self: KConfigGroup, key: [:0]const u8, value: []const u8) void {
        const key_Cstring = key.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry4(@ptrCast(self.ptr), key_Cstring, value_str);
    }

    /// ### DEPRECATED: Use `writeEntry5` instead
    ///
    pub const WriteEntry5 = writeEntry5;

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
    pub fn writeEntry5(self: KConfigGroup, key: []const u8, value: []u8) void {
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

    /// ### DEPRECATED: Use `writeEntry6` instead
    ///
    pub const WriteEntry6 = writeEntry6;

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
    pub fn writeEntry6(self: KConfigGroup, key: [:0]const u8, value: []u8) void {
        const key_Cstring = key.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry6(@ptrCast(self.ptr), key_Cstring, value_str);
    }

    /// ### DEPRECATED: Use `writeEntry7` instead
    ///
    pub const WriteEntry7 = writeEntry7;

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
    pub fn writeEntry7(self: KConfigGroup, key: []const u8, value: [:0]const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_Cstring = value.ptr;
        qtc.KConfigGroup_WriteEntry7(@ptrCast(self.ptr), key_str, value_Cstring);
    }

    /// ### DEPRECATED: Use `writeEntry8` instead
    ///
    pub const WriteEntry8 = writeEntry8;

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
    pub fn writeEntry8(self: KConfigGroup, key: [:0]const u8, value: [:0]const u8) void {
        const key_Cstring = key.ptr;
        const value_Cstring = value.ptr;
        qtc.KConfigGroup_WriteEntry8(@ptrCast(self.ptr), key_Cstring, value_Cstring);
    }

    /// ### DEPRECATED: Use `writeEntry9` instead
    ///
    pub const WriteEntry9 = writeEntry9;

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
    pub fn writeEntry9(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8, value: []const []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("KConfigGroup.writeEntry9: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteEntry9(@ptrCast(self.ptr), key_str, value_list);
    }

    /// ### DEPRECATED: Use `writeEntry10` instead
    ///
    pub const WriteEntry10 = writeEntry10;

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
    pub fn writeEntry10(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, value: []const []const u8) void {
        const key_Cstring = key.ptr;
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("KConfigGroup.writeEntry10: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteEntry10(@ptrCast(self.ptr), key_Cstring, value_list);
    }

    /// ### DEPRECATED: Use `writeEntry11` instead
    ///
    pub const WriteEntry11 = writeEntry11;

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
    pub fn writeEntry11(self: KConfigGroup, key: []const u8, value: []QVariant) void {
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

    /// ### DEPRECATED: Use `writeEntry12` instead
    ///
    pub const WriteEntry12 = writeEntry12;

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
    pub fn writeEntry12(self: KConfigGroup, key: [:0]const u8, value: []QVariant) void {
        const key_Cstring = key.ptr;
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = @ptrCast(value.ptr),
        };
        qtc.KConfigGroup_WriteEntry12(@ptrCast(self.ptr), key_Cstring, value_list);
    }

    /// ### DEPRECATED: Use `writeXdgListEntry` instead
    ///
    pub const WriteXdgListEntry = writeXdgListEntry;

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
    pub fn writeXdgListEntry(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, value: []const []const u8) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("KConfigGroup.writeXdgListEntry: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteXdgListEntry(@ptrCast(self.ptr), pKey_str, value_list);
    }

    /// ### DEPRECATED: Use `writeXdgListEntry2` instead
    ///
    pub const WriteXdgListEntry2 = writeXdgListEntry2;

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
    pub fn writeXdgListEntry2(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, value: []const []const u8) void {
        const key_Cstring = key.ptr;
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("KConfigGroup.writeXdgListEntry2: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteXdgListEntry2(@ptrCast(self.ptr), key_Cstring, value_list);
    }

    /// ### DEPRECATED: Use `writePathEntry` instead
    ///
    pub const WritePathEntry = writePathEntry;

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
    pub fn writePathEntry(self: KConfigGroup, pKey: []const u8, path: []const u8) void {
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

    /// ### DEPRECATED: Use `writePathEntry2` instead
    ///
    pub const WritePathEntry2 = writePathEntry2;

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
    pub fn writePathEntry2(self: KConfigGroup, Key: [:0]const u8, path: []const u8) void {
        const Key_Cstring = Key.ptr;
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KConfigGroup_WritePathEntry2(@ptrCast(self.ptr), Key_Cstring, path_str);
    }

    /// ### DEPRECATED: Use `writePathEntry3` instead
    ///
    pub const WritePathEntry3 = writePathEntry3;

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
    pub fn writePathEntry3(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, value: []const []const u8) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("KConfigGroup.writePathEntry3: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WritePathEntry3(@ptrCast(self.ptr), pKey_str, value_list);
    }

    /// ### DEPRECATED: Use `writePathEntry4` instead
    ///
    pub const WritePathEntry4 = writePathEntry4;

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
    pub fn writePathEntry4(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, value: []const []const u8) void {
        const key_Cstring = key.ptr;
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("KConfigGroup.writePathEntry4: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WritePathEntry4(@ptrCast(self.ptr), key_Cstring, value_list);
    }

    /// ### DEPRECATED: Use `deleteEntry` instead
    ///
    pub const DeleteEntry = deleteEntry;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` pKey: []const u8 `
    ///
    pub fn deleteEntry(self: KConfigGroup, pKey: []const u8) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        qtc.KConfigGroup_DeleteEntry(@ptrCast(self.ptr), pKey_str);
    }

    /// ### DEPRECATED: Use `deleteEntry2` instead
    ///
    pub const DeleteEntry2 = deleteEntry2;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn deleteEntry2(self: KConfigGroup, key: [:0]const u8) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_DeleteEntry2(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### DEPRECATED: Use `hasKey` instead
    ///
    pub const HasKey = hasKey;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#hasKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    pub fn hasKey(self: KConfigGroup, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KConfigGroup_HasKey(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `hasKey2` instead
    ///
    pub const HasKey2 = hasKey2;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#hasKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn hasKey2(self: KConfigGroup, key: [:0]const u8) bool {
        const key_Cstring = key.ptr;
        return qtc.KConfigGroup_HasKey2(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### DEPRECATED: Use `isImmutable` instead
    ///
    pub const IsImmutable = isImmutable;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn isImmutable(self: KConfigGroup) bool {
        return qtc.KConfigGroup_IsImmutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsImmutable` instead
    ///
    pub const OnIsImmutable = onIsImmutable;

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
    pub fn onIsImmutable(self: KConfigGroup, callback: *const fn () callconv(.c) bool) void {
        qtc.KConfigGroup_OnIsImmutable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsImmutable` instead
    ///
    pub const SuperIsImmutable = superIsImmutable;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isImmutable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn superIsImmutable(self: KConfigGroup) bool {
        return qtc.KConfigGroup_SuperIsImmutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntryImmutable` instead
    ///
    pub const IsEntryImmutable = isEntryImmutable;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isEntryImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    pub fn isEntryImmutable(self: KConfigGroup, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KConfigGroup_IsEntryImmutable(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `isEntryImmutable2` instead
    ///
    pub const IsEntryImmutable2 = isEntryImmutable2;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isEntryImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn isEntryImmutable2(self: KConfigGroup, key: [:0]const u8) bool {
        const key_Cstring = key.ptr;
        return qtc.KConfigGroup_IsEntryImmutable2(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### DEPRECATED: Use `revertToDefault` instead
    ///
    pub const RevertToDefault = revertToDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#revertToDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    pub fn revertToDefault(self: KConfigGroup, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.KConfigGroup_RevertToDefault(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `revertToDefault2` instead
    ///
    pub const RevertToDefault2 = revertToDefault2;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#revertToDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn revertToDefault2(self: KConfigGroup, key: [:0]const u8) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_RevertToDefault2(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### DEPRECATED: Use `hasDefault` instead
    ///
    pub const HasDefault = hasDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#hasDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: []const u8 `
    ///
    pub fn hasDefault(self: KConfigGroup, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KConfigGroup_HasDefault(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `hasDefault2` instead
    ///
    pub const HasDefault2 = hasDefault2;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#hasDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn hasDefault2(self: KConfigGroup, key: [:0]const u8) bool {
        const key_Cstring = key.ptr;
        return qtc.KConfigGroup_HasDefault2(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### DEPRECATED: Use `entryMap` instead
    ///
    pub const EntryMap = entryMap;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#entryMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn entryMap(self: KConfigGroup, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KConfigGroup_EntryMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KConfigGroup.entryMap: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KConfigGroup.entryMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KConfigGroup.entryMap: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `hasGroupImpl` instead
    ///
    pub const HasGroupImpl = hasGroupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#hasGroupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn hasGroupImpl(self: KConfigGroup, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_HasGroupImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `onHasGroupImpl` instead
    ///
    pub const OnHasGroupImpl = onHasGroupImpl;

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
    pub fn onHasGroupImpl(self: KConfigGroup, callback: *const fn (KConfigGroup, [*:0]const u8) callconv(.c) bool) void {
        qtc.KConfigGroup_OnHasGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasGroupImpl` instead
    ///
    pub const SuperHasGroupImpl = superHasGroupImpl;

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
    pub fn superHasGroupImpl(self: KConfigGroup, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_SuperHasGroupImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `groupImpl` instead
    ///
    pub const GroupImpl = groupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn groupImpl(self: KConfigGroup, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfigGroup_GroupImpl(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### DEPRECATED: Use `onGroupImpl` instead
    ///
    pub const OnGroupImpl = onGroupImpl;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGroupImpl(self: KConfigGroup, callback: *const fn (KConfigGroup, [*:0]const u8) callconv(.c) KConfigGroup) void {
        qtc.KConfigGroup_OnGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGroupImpl` instead
    ///
    pub const SuperGroupImpl = superGroupImpl;

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
    pub fn superGroupImpl(self: KConfigGroup, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfigGroup_SuperGroupImpl(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### DEPRECATED: Use `groupImpl2` instead
    ///
    pub const GroupImpl2 = groupImpl2;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn groupImpl2(self: KConfigGroup, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfigGroup_GroupImpl2(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### DEPRECATED: Use `onGroupImpl2` instead
    ///
    pub const OnGroupImpl2 = onGroupImpl2;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGroupImpl2(self: KConfigGroup, callback: *const fn (KConfigGroup, [*:0]const u8) callconv(.c) KConfigGroup) void {
        qtc.KConfigGroup_OnGroupImpl2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGroupImpl2` instead
    ///
    pub const SuperGroupImpl2 = superGroupImpl2;

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
    pub fn superGroupImpl2(self: KConfigGroup, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfigGroup_SuperGroupImpl2(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### DEPRECATED: Use `deleteGroupImpl` instead
    ///
    pub const DeleteGroupImpl = deleteGroupImpl;

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
    pub fn deleteGroupImpl(self: KConfigGroup, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KConfigGroup_DeleteGroupImpl(@ptrCast(self.ptr), groupName_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `onDeleteGroupImpl` instead
    ///
    pub const OnDeleteGroupImpl = onDeleteGroupImpl;

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
    pub fn onDeleteGroupImpl(self: KConfigGroup, callback: *const fn (KConfigGroup, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KConfigGroup_OnDeleteGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDeleteGroupImpl` instead
    ///
    pub const SuperDeleteGroupImpl = superDeleteGroupImpl;

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
    pub fn superDeleteGroupImpl(self: KConfigGroup, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KConfigGroup_SuperDeleteGroupImpl(@ptrCast(self.ptr), groupName_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `isGroupImmutableImpl` instead
    ///
    pub const IsGroupImmutableImpl = isGroupImmutableImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#isGroupImmutableImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn isGroupImmutableImpl(self: KConfigGroup, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_IsGroupImmutableImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `onIsGroupImmutableImpl` instead
    ///
    pub const OnIsGroupImmutableImpl = onIsGroupImmutableImpl;

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
    pub fn onIsGroupImmutableImpl(self: KConfigGroup, callback: *const fn (KConfigGroup, [*:0]const u8) callconv(.c) bool) void {
        qtc.KConfigGroup_OnIsGroupImmutableImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsGroupImmutableImpl` instead
    ///
    pub const SuperIsGroupImmutableImpl = superIsGroupImmutableImpl;

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
    pub fn superIsGroupImmutableImpl(self: KConfigGroup, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_SuperIsGroupImmutableImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `copyTo2` instead
    ///
    pub const CopyTo2 = copyTo2;

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
    pub fn copyTo2(self: KConfigGroup, other: anytype, pFlags: i32) void {
        comptime _ = @TypeOf(other)._is_KConfigBase;
        qtc.KConfigGroup_CopyTo2(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `reparent2` instead
    ///
    pub const Reparent2 = reparent2;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#reparent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` _parent: KConfigBase `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn reparent2(self: KConfigGroup, _parent: anytype, pFlags: i32) void {
        comptime _ = @TypeOf(_parent)._is_KConfigBase;
        qtc.KConfigGroup_Reparent2(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `moveValuesTo3` instead
    ///
    pub const MoveValuesTo3 = moveValuesTo3;

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
    pub fn moveValuesTo3(self: KConfigGroup, allocator: std.mem.Allocator, keys: [][:0]const u8, other: anytype, pFlags: i32) void {
        const keys_cStr = allocator.alloc([*:0]const u8, keys.len) catch @panic("KConfigGroup.moveValuesTo3: Memory allocation failed");
        defer allocator.free(keys_cStr);
        for (keys, 0..keys.len) |keys_item, i|
            keys_cStr[i] = @ptrCast(keys_item.ptr);
        const keys_list = qtc.libqt_list{
            .len = keys.len,
            .data = @ptrCast(keys_cStr),
        };
        comptime _ = @TypeOf(other)._is_KConfigGroup;
        qtc.KConfigGroup_MoveValuesTo3(@ptrCast(self.ptr), keys_list, @ptrCast(other.ptr), @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `moveValuesTo22` instead
    ///
    pub const MoveValuesTo22 = moveValuesTo22;

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
    pub fn moveValuesTo22(self: KConfigGroup, other: anytype, pFlags: i32) void {
        comptime _ = @TypeOf(other)._is_KConfigGroup;
        qtc.KConfigGroup_MoveValuesTo22(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `deleteGroup1` instead
    ///
    pub const DeleteGroup1 = deleteGroup1;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` pFlags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn deleteGroup1(self: KConfigGroup, pFlags: i32) void {
        qtc.KConfigGroup_DeleteGroup1(@ptrCast(self.ptr), @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `readEntry22` instead
    ///
    pub const ReadEntry22 = readEntry22;

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
    pub fn readEntry22(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8, aDefault: [:0]const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const aDefault_Cstring = aDefault.ptr;
        var _str = qtc.KConfigGroup_ReadEntry22(@ptrCast(self.ptr), key_str, aDefault_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.readEntry22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntry23` instead
    ///
    pub const ReadEntry23 = readEntry23;

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
    pub fn readEntry23(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: [:0]const u8) []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_Cstring = aDefault.ptr;
        var _str = qtc.KConfigGroup_ReadEntry23(@ptrCast(self.ptr), key_Cstring, aDefault_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.readEntry23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readXdgListEntry22` instead
    ///
    pub const ReadXdgListEntry22 = readXdgListEntry22;

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
    pub fn readXdgListEntry22(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, aDefault: []const []const u8) []const []const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("KConfigGroup.readXdgListEntry22: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |str_item, i|
            aDefault_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigGroup.readXdgListEntry22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigGroup.readXdgListEntry22: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `readXdgListEntry23` instead
    ///
    pub const ReadXdgListEntry23 = readXdgListEntry23;

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
    pub fn readXdgListEntry23(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []const []const u8) []const []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("KConfigGroup.readXdgListEntry23: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |str_item, i|
            aDefault_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigGroup.readXdgListEntry23: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigGroup.readXdgListEntry23: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntryUntranslated22` instead
    ///
    pub const ReadEntryUntranslated22 = readEntryUntranslated22;

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
    pub fn readEntryUntranslated22(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, aDefault: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.readEntryUntranslated22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntryUntranslated23` instead
    ///
    pub const ReadEntryUntranslated23 = readEntryUntranslated23;

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
    pub fn readEntryUntranslated23(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, aDefault: []const u8) []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        var _str = qtc.KConfigGroup_ReadEntryUntranslated23(@ptrCast(self.ptr), key_Cstring, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigGroup.readEntryUntranslated23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `writeEntry32` instead
    ///
    pub const WriteEntry32 = writeEntry32;

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
    pub fn writeEntry32(self: KConfigGroup, key: []const u8, value: anytype, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KConfigGroup_WriteEntry32(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr), @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writeEntry33` instead
    ///
    pub const WriteEntry33 = writeEntry33;

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
    pub fn writeEntry33(self: KConfigGroup, key: [:0]const u8, value: anytype, pFlags: i32) void {
        const key_Cstring = key.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KConfigGroup_WriteEntry33(@ptrCast(self.ptr), key_Cstring, @ptrCast(value.ptr), @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writeEntry34` instead
    ///
    pub const WriteEntry34 = writeEntry34;

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
    pub fn writeEntry34(self: KConfigGroup, key: []const u8, value: []const u8, pFlags: i32) void {
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

    /// ### DEPRECATED: Use `writeEntry35` instead
    ///
    pub const WriteEntry35 = writeEntry35;

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
    pub fn writeEntry35(self: KConfigGroup, key: [:0]const u8, value: []const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry35(@ptrCast(self.ptr), key_Cstring, value_str, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writeEntry36` instead
    ///
    pub const WriteEntry36 = writeEntry36;

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
    pub fn writeEntry36(self: KConfigGroup, key: []const u8, value: []u8, pFlags: i32) void {
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

    /// ### DEPRECATED: Use `writeEntry37` instead
    ///
    pub const WriteEntry37 = writeEntry37;

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
    pub fn writeEntry37(self: KConfigGroup, key: [:0]const u8, value: []u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry37(@ptrCast(self.ptr), key_Cstring, value_str, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writeEntry38` instead
    ///
    pub const WriteEntry38 = writeEntry38;

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
    pub fn writeEntry38(self: KConfigGroup, key: []const u8, value: [:0]const u8, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_Cstring = value.ptr;
        qtc.KConfigGroup_WriteEntry38(@ptrCast(self.ptr), key_str, value_Cstring, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writeEntry39` instead
    ///
    pub const WriteEntry39 = writeEntry39;

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
    pub fn writeEntry39(self: KConfigGroup, key: [:0]const u8, value: [:0]const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_Cstring = value.ptr;
        qtc.KConfigGroup_WriteEntry39(@ptrCast(self.ptr), key_Cstring, value_Cstring, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writeEntry310` instead
    ///
    pub const WriteEntry310 = writeEntry310;

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
    pub fn writeEntry310(self: KConfigGroup, allocator: std.mem.Allocator, key: []const u8, value: []const []const u8, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("KConfigGroup.writeEntry310: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteEntry310(@ptrCast(self.ptr), key_str, value_list, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writeEntry311` instead
    ///
    pub const WriteEntry311 = writeEntry311;

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
    pub fn writeEntry311(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, value: []const []const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("KConfigGroup.writeEntry311: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteEntry311(@ptrCast(self.ptr), key_Cstring, value_list, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writeEntry312` instead
    ///
    pub const WriteEntry312 = writeEntry312;

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
    pub fn writeEntry312(self: KConfigGroup, key: []const u8, value: []QVariant, pFlags: i32) void {
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

    /// ### DEPRECATED: Use `writeEntry313` instead
    ///
    pub const WriteEntry313 = writeEntry313;

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
    pub fn writeEntry313(self: KConfigGroup, key: [:0]const u8, value: []QVariant, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = @ptrCast(value.ptr),
        };
        qtc.KConfigGroup_WriteEntry313(@ptrCast(self.ptr), key_Cstring, value_list, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writeXdgListEntry3` instead
    ///
    pub const WriteXdgListEntry3 = writeXdgListEntry3;

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
    pub fn writeXdgListEntry3(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, value: []const []const u8, pFlags: i32) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("KConfigGroup.writeXdgListEntry3: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteXdgListEntry3(@ptrCast(self.ptr), pKey_str, value_list, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writeXdgListEntry32` instead
    ///
    pub const WriteXdgListEntry32 = writeXdgListEntry32;

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
    pub fn writeXdgListEntry32(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, value: []const []const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("KConfigGroup.writeXdgListEntry32: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteXdgListEntry32(@ptrCast(self.ptr), key_Cstring, value_list, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writePathEntry32` instead
    ///
    pub const WritePathEntry32 = writePathEntry32;

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
    pub fn writePathEntry32(self: KConfigGroup, pKey: []const u8, path: []const u8, pFlags: i32) void {
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

    /// ### DEPRECATED: Use `writePathEntry33` instead
    ///
    pub const WritePathEntry33 = writePathEntry33;

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
    pub fn writePathEntry33(self: KConfigGroup, Key: [:0]const u8, path: []const u8, pFlags: i32) void {
        const Key_Cstring = Key.ptr;
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KConfigGroup_WritePathEntry33(@ptrCast(self.ptr), Key_Cstring, path_str, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writePathEntry34` instead
    ///
    pub const WritePathEntry34 = writePathEntry34;

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
    pub fn writePathEntry34(self: KConfigGroup, allocator: std.mem.Allocator, pKey: []const u8, value: []const []const u8, pFlags: i32) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("KConfigGroup.writePathEntry34: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WritePathEntry34(@ptrCast(self.ptr), pKey_str, value_list, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `writePathEntry35` instead
    ///
    pub const WritePathEntry35 = writePathEntry35;

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
    pub fn writePathEntry35(self: KConfigGroup, allocator: std.mem.Allocator, key: [:0]const u8, value: []const []const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("KConfigGroup.writePathEntry35: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WritePathEntry35(@ptrCast(self.ptr), key_Cstring, value_list, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `deleteEntry22` instead
    ///
    pub const DeleteEntry22 = deleteEntry22;

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
    pub fn deleteEntry22(self: KConfigGroup, pKey: []const u8, pFlags: i32) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        qtc.KConfigGroup_DeleteEntry22(@ptrCast(self.ptr), pKey_str, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `deleteEntry23` instead
    ///
    pub const DeleteEntry23 = deleteEntry23;

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
    pub fn deleteEntry23(self: KConfigGroup, key: [:0]const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_DeleteEntry23(@ptrCast(self.ptr), key_Cstring, @bitCast(pFlags));
    }

    /// ### DEPRECATED: Use `revertToDefault22` instead
    ///
    pub const RevertToDefault22 = revertToDefault22;

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
    pub fn revertToDefault22(self: KConfigGroup, key: []const u8, pFlag: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.KConfigGroup_RevertToDefault22(@ptrCast(self.ptr), key_str, @bitCast(pFlag));
    }

    /// ### DEPRECATED: Use `revertToDefault23` instead
    ///
    pub const RevertToDefault23 = revertToDefault23;

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
    pub fn revertToDefault23(self: KConfigGroup, key: [:0]const u8, pFlag: i32) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_RevertToDefault23(@ptrCast(self.ptr), key_Cstring, @bitCast(pFlag));
    }

    /// ### DEPRECATED: Use `hasGroup` instead
    ///
    pub const HasGroup = hasGroup;

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn hasGroup(self: KConfigGroup, _group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return qtc.KConfigBase_HasGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn group(self: KConfigGroup, _group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return .{ .ptr = qtc.KConfigBase_Group(@ptrCast(self.ptr), group_str) };
    }

    /// ### DEPRECATED: Use `group2` instead
    ///
    pub const Group2 = group2;

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn group2(self: KConfigGroup, _group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return .{ .ptr = qtc.KConfigBase_Group2(@ptrCast(self.ptr), group_str) };
    }

    /// ### DEPRECATED: Use `isGroupImmutable` instead
    ///
    pub const IsGroupImmutable = isGroupImmutable;

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn isGroupImmutable(self: KConfigGroup, _group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return qtc.KConfigBase_IsGroupImmutable(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `deleteGroup2` instead
    ///
    pub const DeleteGroup2 = deleteGroup2;

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigGroup `
    ///
    /// ` _group: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn deleteGroup2(self: KConfigGroup, _group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self.ptr), group_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

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
    pub fn virtualHook(self: KConfigGroup, id: i32, data: ?*anyopaque) void {
        qtc.KConfigGroup_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

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
    pub fn superVirtualHook(self: KConfigGroup, id: i32, data: ?*anyopaque) void {
        qtc.KConfigGroup_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

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
    pub fn onVirtualHook(self: KConfigGroup, callback: *const fn (KConfigGroup, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigGroup_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kconfiggroup.html#dtor.KConfigGroup)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigGroup `
    ///
    pub fn delete(self: KConfigGroup) void {
        qtc.KConfigGroup_Delete(@ptrCast(self.ptr));
    }
};
