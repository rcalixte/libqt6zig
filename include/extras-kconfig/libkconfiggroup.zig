const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kconfigbase_enums = @import("libkconfigbase.zig").enums;
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://api.kde.org/kconfiggroup.html
pub const kconfiggroup = struct {
    /// New constructs a new KConfigGroup object.
    ///
    ///
    pub fn New() QtC.KConfigGroup {
        return qtc.KConfigGroup_new();
    }

    /// New2 constructs a new KConfigGroup object.
    ///
    /// ``` master: QtC.KConfigBase, group: []const u8 ```
    pub fn New2(master: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };

        return qtc.KConfigGroup_new2(@ptrCast(master), group_str);
    }

    /// New3 constructs a new KConfigGroup object.
    ///
    /// ``` master: QtC.KConfigBase, group: []const u8 ```
    pub fn New3(master: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };

        return qtc.KConfigGroup_new3(@ptrCast(master), group_str);
    }

    /// New4 constructs a new KConfigGroup object.
    ///
    /// ``` param1: QtC.KConfigGroup ```
    pub fn New4(param1: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KConfigGroup_new4(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#operator-eq)
    ///
    /// ``` self: QtC.KConfigGroup, param1: QtC.KConfigGroup ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KConfigGroup_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#isValid)
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KConfigGroup_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#name)
    ///
    /// ``` self: QtC.KConfigGroup, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KConfigGroup_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#exists)
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn Exists(self: ?*anyopaque) bool {
        return qtc.KConfigGroup_Exists(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#sync)
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn Sync(self: ?*anyopaque) bool {
        return qtc.KConfigGroup_Sync(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#sync)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigGroup, slot: fn () callconv(.c) bool ```
    pub fn OnSync(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KConfigGroup_OnSync(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#sync)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn QBaseSync(self: ?*anyopaque) bool {
        return qtc.KConfigGroup_QBaseSync(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#markAsClean)
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn MarkAsClean(self: ?*anyopaque) void {
        qtc.KConfigGroup_MarkAsClean(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#markAsClean)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigGroup, slot: fn () callconv(.c) void ```
    pub fn OnMarkAsClean(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KConfigGroup_OnMarkAsClean(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#markAsClean)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn QBaseMarkAsClean(self: ?*anyopaque) void {
        qtc.KConfigGroup_QBaseMarkAsClean(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#accessMode)
    ///
    /// ``` self: QtC.KConfigGroup ```
    ///
    /// Returns: ``` kconfigbase_enums.AccessMode ```
    pub fn AccessMode(self: ?*anyopaque) i32 {
        return qtc.KConfigGroup_AccessMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#accessMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigGroup, slot: fn () callconv(.c) i32 ```
    pub fn OnAccessMode(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KConfigGroup_OnAccessMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#accessMode)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigGroup ```
    ///
    /// Returns: ``` kconfigbase_enums.AccessMode ```
    pub fn QBaseAccessMode(self: ?*anyopaque) i32 {
        return qtc.KConfigGroup_QBaseAccessMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#config)
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn Config(self: ?*anyopaque) QtC.KConfig {
        return qtc.KConfigGroup_Config(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#config)
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn Config2(self: ?*anyopaque) QtC.KConfig {
        return qtc.KConfigGroup_Config2(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#copyTo)
    ///
    /// ``` self: QtC.KConfigGroup, other: QtC.KConfigBase ```
    pub fn CopyTo(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KConfigGroup_CopyTo(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#reparent)
    ///
    /// ``` self: QtC.KConfigGroup, parent: QtC.KConfigBase ```
    pub fn Reparent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.KConfigGroup_Reparent(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#moveValuesTo)
    ///
    /// ``` self: QtC.KConfigGroup, keys: [][]const u8, other: QtC.KConfigGroup ```
    pub fn MoveValuesTo(self: ?*anyopaque, keys: [][]const u8, other: ?*anyopaque) void {
        const keys_list = qtc.libqt_list{
            .len = keys.len,
            .data = keys.ptr,
        };
        qtc.KConfigGroup_MoveValuesTo(@ptrCast(self), keys_list, @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#moveValuesTo)
    ///
    /// ``` self: QtC.KConfigGroup, other: QtC.KConfigGroup ```
    pub fn MoveValuesTo2(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KConfigGroup_MoveValuesTo2(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#parent)
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn Parent(self: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KConfigGroup_Parent(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#groupList)
    ///
    /// ``` self: QtC.KConfigGroup, allocator: std.mem.Allocator ```
    pub fn GroupList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigGroup_GroupList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#groupList)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigGroup, slot: fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnGroupList(self: ?*anyopaque, slot: fn () callconv(.c) [*][*:0]const u8) void {
        qtc.KConfigGroup_OnGroupList(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#groupList)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigGroup, allocator: std.mem.Allocator ```
    pub fn QBaseGroupList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigGroup_QBaseGroupList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#keyList)
    ///
    /// ``` self: QtC.KConfigGroup, allocator: std.mem.Allocator ```
    pub fn KeyList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigGroup_KeyList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#deleteGroup)
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn DeleteGroup(self: ?*anyopaque) void {
        qtc.KConfigGroup_DeleteGroup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: QtC.QVariant ```
    pub fn ReadEntry(self: ?*anyopaque, key: []const u8, aDefault: ?*anyopaque) QtC.QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KConfigGroup_ReadEntry(@ptrCast(self), key_str, @ptrCast(aDefault));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: QtC.QVariant ```
    pub fn ReadEntry2(self: ?*anyopaque, key: []const u8, aDefault: ?*anyopaque) QtC.QVariant {
        const key_Cstring = key.ptr;
        return qtc.KConfigGroup_ReadEntry2(@ptrCast(self), key_Cstring, @ptrCast(aDefault));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntry3(self: ?*anyopaque, key: []const u8, aDefault: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        const _str = qtc.KConfigGroup_ReadEntry3(@ptrCast(self), key_str, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntry3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntry4(self: ?*anyopaque, key: []const u8, aDefault: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        const _str = qtc.KConfigGroup_ReadEntry4(@ptrCast(self), key_Cstring, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntry4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntry5(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.KConfigGroup_ReadEntry5(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntry5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntry6(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_Cstring = key.ptr;
        const _str = qtc.KConfigGroup_ReadEntry6(@ptrCast(self), key_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntry6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: []QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn ReadEntry7(self: ?*anyopaque, key: []const u8, aDefault: []QtC.QVariant, allocator: std.mem.Allocator) []QtC.QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = @ptrCast(aDefault.ptr),
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadEntry7(@ptrCast(self), key_str, aDefault_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QVariant, _arr.len) catch @panic("kconfiggroup.ReadEntry7: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: []QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn ReadEntry8(self: ?*anyopaque, key: []const u8, aDefault: []QtC.QVariant, allocator: std.mem.Allocator) []QtC.QVariant {
        const key_Cstring = key.ptr;
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = @ptrCast(aDefault.ptr),
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadEntry8(@ptrCast(self), key_Cstring, aDefault_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QVariant, _arr.len) catch @panic("kconfiggroup.ReadEntry8: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: [][]const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntry9(self: ?*anyopaque, key: []const u8, aDefault: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("kconfiggroup.ReadEntry9: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |item, i| {
            aDefault_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = aDefault_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadEntry9(@ptrCast(self), key_str, aDefault_list);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: [][]const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntry10(self: ?*anyopaque, key: []const u8, aDefault: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        const key_Cstring = key.ptr;
        var aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("kconfiggroup.ReadEntry10: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |item, i| {
            aDefault_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = aDefault_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadEntry10(@ptrCast(self), key_Cstring, aDefault_list);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readXdgListEntry)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadXdgListEntry(self: ?*anyopaque, pKey: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadXdgListEntry(@ptrCast(self), pKey_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readXdgListEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadXdgListEntry2(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const key_Cstring = key.ptr;
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadXdgListEntry2(@ptrCast(self), key_Cstring);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readPathEntry)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, aDefault: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadPathEntry(self: ?*anyopaque, pKey: []const u8, aDefault: []const u8, allocator: std.mem.Allocator) []const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        const _str = qtc.KConfigGroup_ReadPathEntry(@ptrCast(self), pKey_str, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadPathEntry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readPathEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadPathEntry2(self: ?*anyopaque, key: []const u8, aDefault: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        const _str = qtc.KConfigGroup_ReadPathEntry2(@ptrCast(self), key_Cstring, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadPathEntry2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readPathEntry)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, aDefault: [][]const u8, allocator: std.mem.Allocator ```
    pub fn ReadPathEntry3(self: ?*anyopaque, pKey: []const u8, aDefault: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        var aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("kconfiggroup.ReadPathEntry3: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |item, i| {
            aDefault_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = aDefault_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadPathEntry3(@ptrCast(self), pKey_str, aDefault_list);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readPathEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: [][]const u8, allocator: std.mem.Allocator ```
    pub fn ReadPathEntry4(self: ?*anyopaque, key: []const u8, aDefault: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        const key_Cstring = key.ptr;
        var aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("kconfiggroup.ReadPathEntry4: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |item, i| {
            aDefault_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = aDefault_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadPathEntry4(@ptrCast(self), key_Cstring, aDefault_list);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntryUntranslated)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntryUntranslated(self: ?*anyopaque, pKey: []const u8, allocator: std.mem.Allocator) []const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const _str = qtc.KConfigGroup_ReadEntryUntranslated(@ptrCast(self), pKey_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntryUntranslated: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntryUntranslated)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntryUntranslated2(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_Cstring = key.ptr;
        const _str = qtc.KConfigGroup_ReadEntryUntranslated2(@ptrCast(self), key_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntryUntranslated2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: QtC.QVariant ```
    pub fn WriteEntry(self: ?*anyopaque, key: []const u8, value: ?*anyopaque) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.KConfigGroup_WriteEntry(@ptrCast(self), key_str, @ptrCast(value));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: QtC.QVariant ```
    pub fn WriteEntry2(self: ?*anyopaque, key: []const u8, value: ?*anyopaque) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_WriteEntry2(@ptrCast(self), key_Cstring, @ptrCast(value));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []const u8 ```
    pub fn WriteEntry3(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry3(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []const u8 ```
    pub fn WriteEntry4(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_Cstring = key.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry4(@ptrCast(self), key_Cstring, value_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []u8 ```
    pub fn WriteEntry5(self: ?*anyopaque, key: []const u8, value: []u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry5(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []u8 ```
    pub fn WriteEntry6(self: ?*anyopaque, key: []const u8, value: []u8) void {
        const key_Cstring = key.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry6(@ptrCast(self), key_Cstring, value_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []const u8 ```
    pub fn WriteEntry7(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_Cstring = value.ptr;
        qtc.KConfigGroup_WriteEntry7(@ptrCast(self), key_str, value_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []const u8 ```
    pub fn WriteEntry8(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_Cstring = key.ptr;
        const value_Cstring = value.ptr;
        qtc.KConfigGroup_WriteEntry8(@ptrCast(self), key_Cstring, value_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: [][]const u8, allocator: std.mem.Allocator ```
    pub fn WriteEntry9(self: ?*anyopaque, key: []const u8, value: [][]const u8, allocator: std.mem.Allocator) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteEntry9: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i| {
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteEntry9(@ptrCast(self), key_str, value_list);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: [][]const u8, allocator: std.mem.Allocator ```
    pub fn WriteEntry10(self: ?*anyopaque, key: []const u8, value: [][]const u8, allocator: std.mem.Allocator) void {
        const key_Cstring = key.ptr;
        var value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteEntry10: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i| {
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteEntry10(@ptrCast(self), key_Cstring, value_list);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []QtC.QVariant ```
    pub fn WriteEntry11(self: ?*anyopaque, key: []const u8, value: []QtC.QVariant) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = @ptrCast(value.ptr),
        };
        qtc.KConfigGroup_WriteEntry11(@ptrCast(self), key_str, value_list);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []QtC.QVariant ```
    pub fn WriteEntry12(self: ?*anyopaque, key: []const u8, value: []QtC.QVariant) void {
        const key_Cstring = key.ptr;
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = @ptrCast(value.ptr),
        };
        qtc.KConfigGroup_WriteEntry12(@ptrCast(self), key_Cstring, value_list);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeXdgListEntry)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, value: [][]const u8, allocator: std.mem.Allocator ```
    pub fn WriteXdgListEntry(self: ?*anyopaque, pKey: []const u8, value: [][]const u8, allocator: std.mem.Allocator) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        var value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteXdgListEntry: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i| {
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteXdgListEntry(@ptrCast(self), pKey_str, value_list);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeXdgListEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: [][]const u8, allocator: std.mem.Allocator ```
    pub fn WriteXdgListEntry2(self: ?*anyopaque, key: []const u8, value: [][]const u8, allocator: std.mem.Allocator) void {
        const key_Cstring = key.ptr;
        var value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteXdgListEntry2: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i| {
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteXdgListEntry2(@ptrCast(self), key_Cstring, value_list);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, path: []const u8 ```
    pub fn WritePathEntry(self: ?*anyopaque, pKey: []const u8, path: []const u8) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KConfigGroup_WritePathEntry(@ptrCast(self), pKey_str, path_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ``` self: QtC.KConfigGroup, Key: []const u8, path: []const u8 ```
    pub fn WritePathEntry2(self: ?*anyopaque, Key: []const u8, path: []const u8) void {
        const Key_Cstring = Key.ptr;
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KConfigGroup_WritePathEntry2(@ptrCast(self), Key_Cstring, path_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, value: [][]const u8, allocator: std.mem.Allocator ```
    pub fn WritePathEntry3(self: ?*anyopaque, pKey: []const u8, value: [][]const u8, allocator: std.mem.Allocator) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        var value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WritePathEntry3: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i| {
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WritePathEntry3(@ptrCast(self), pKey_str, value_list);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: [][]const u8, allocator: std.mem.Allocator ```
    pub fn WritePathEntry4(self: ?*anyopaque, key: []const u8, value: [][]const u8, allocator: std.mem.Allocator) void {
        const key_Cstring = key.ptr;
        var value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WritePathEntry4: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i| {
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WritePathEntry4(@ptrCast(self), key_Cstring, value_list);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#deleteEntry)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8 ```
    pub fn DeleteEntry(self: ?*anyopaque, pKey: []const u8) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        qtc.KConfigGroup_DeleteEntry(@ptrCast(self), pKey_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#deleteEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8 ```
    pub fn DeleteEntry2(self: ?*anyopaque, key: []const u8) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_DeleteEntry2(@ptrCast(self), key_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#hasKey)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8 ```
    pub fn HasKey(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KConfigGroup_HasKey(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#hasKey)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8 ```
    pub fn HasKey2(self: ?*anyopaque, key: []const u8) bool {
        const key_Cstring = key.ptr;
        return qtc.KConfigGroup_HasKey2(@ptrCast(self), key_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#isImmutable)
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn IsImmutable(self: ?*anyopaque) bool {
        return qtc.KConfigGroup_IsImmutable(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#isImmutable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigGroup, slot: fn () callconv(.c) bool ```
    pub fn OnIsImmutable(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KConfigGroup_OnIsImmutable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#isImmutable)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn QBaseIsImmutable(self: ?*anyopaque) bool {
        return qtc.KConfigGroup_QBaseIsImmutable(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#isEntryImmutable)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8 ```
    pub fn IsEntryImmutable(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KConfigGroup_IsEntryImmutable(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#isEntryImmutable)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8 ```
    pub fn IsEntryImmutable2(self: ?*anyopaque, key: []const u8) bool {
        const key_Cstring = key.ptr;
        return qtc.KConfigGroup_IsEntryImmutable2(@ptrCast(self), key_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#revertToDefault)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8 ```
    pub fn RevertToDefault(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.KConfigGroup_RevertToDefault(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#revertToDefault)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8 ```
    pub fn RevertToDefault2(self: ?*anyopaque, key: []const u8) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_RevertToDefault2(@ptrCast(self), key_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#hasDefault)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8 ```
    pub fn HasDefault(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KConfigGroup_HasDefault(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#hasDefault)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8 ```
    pub fn HasDefault2(self: ?*anyopaque, key: []const u8) bool {
        const key_Cstring = key.ptr;
        return qtc.KConfigGroup_HasDefault2(@ptrCast(self), key_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#entryMap)
    ///
    /// ``` self: QtC.KConfigGroup, allocator: std.mem.Allocator ```
    pub fn EntryMap(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KConfigGroup_EntryMap(@ptrCast(self));
        var _ret: map_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]const u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("kconfiggroup.EntryMap: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#hasGroupImpl)
    ///
    /// ``` self: QtC.KConfigGroup, groupName: []const u8 ```
    pub fn HasGroupImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_HasGroupImpl(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#hasGroupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigGroup, slot: fn (self: QtC.KConfigGroup, groupName: [*:0]const u8) callconv(.c) bool ```
    pub fn OnHasGroupImpl(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KConfigGroup_OnHasGroupImpl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#hasGroupImpl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigGroup, groupName: []const u8 ```
    pub fn QBaseHasGroupImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_QBaseHasGroupImpl(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// ``` self: QtC.KConfigGroup, groupName: []const u8 ```
    pub fn GroupImpl(self: ?*anyopaque, groupName: []const u8) QtC.KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_GroupImpl(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigGroup, slot: fn (self: QtC.KConfigGroup, groupName: [*:0]const u8) callconv(.c) QtC.KConfigGroup ```
    pub fn OnGroupImpl(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.KConfigGroup) void {
        qtc.KConfigGroup_OnGroupImpl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigGroup, groupName: []const u8 ```
    pub fn QBaseGroupImpl(self: ?*anyopaque, groupName: []const u8) QtC.KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_QBaseGroupImpl(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// ``` self: QtC.KConfigGroup, groupName: []const u8 ```
    pub fn GroupImpl2(self: ?*anyopaque, groupName: []const u8) QtC.KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_GroupImpl2(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigGroup, slot: fn (self: QtC.KConfigGroup, groupName: [*:0]const u8) callconv(.c) QtC.KConfigGroup ```
    pub fn OnGroupImpl2(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.KConfigGroup) void {
        qtc.KConfigGroup_OnGroupImpl2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#groupImpl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigGroup, groupName: []const u8 ```
    pub fn QBaseGroupImpl2(self: ?*anyopaque, groupName: []const u8) QtC.KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_QBaseGroupImpl2(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#deleteGroupImpl)
    ///
    /// ``` self: QtC.KConfigGroup, groupName: []const u8, flags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn DeleteGroupImpl(self: ?*anyopaque, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KConfigGroup_DeleteGroupImpl(@ptrCast(self), groupName_str, @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#deleteGroupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigGroup, slot: fn (self: QtC.KConfigGroup, groupName: [*:0]const u8, flags: flag of kconfigbase_enums.WriteConfigFlag) callconv(.c) void ```
    pub fn OnDeleteGroupImpl(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KConfigGroup_OnDeleteGroupImpl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#deleteGroupImpl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigGroup, groupName: []const u8, flags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn QBaseDeleteGroupImpl(self: ?*anyopaque, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KConfigGroup_QBaseDeleteGroupImpl(@ptrCast(self), groupName_str, @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#isGroupImmutableImpl)
    ///
    /// ``` self: QtC.KConfigGroup, groupName: []const u8 ```
    pub fn IsGroupImmutableImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_IsGroupImmutableImpl(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#isGroupImmutableImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigGroup, slot: fn (self: QtC.KConfigGroup, groupName: [*:0]const u8) callconv(.c) bool ```
    pub fn OnIsGroupImmutableImpl(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KConfigGroup_OnIsGroupImmutableImpl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#isGroupImmutableImpl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigGroup, groupName: []const u8 ```
    pub fn QBaseIsGroupImmutableImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfigGroup_QBaseIsGroupImmutableImpl(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#copyTo)
    ///
    /// ``` self: QtC.KConfigGroup, other: QtC.KConfigBase, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn CopyTo2(self: ?*anyopaque, other: ?*anyopaque, pFlags: i32) void {
        qtc.KConfigGroup_CopyTo2(@ptrCast(self), @ptrCast(other), @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#reparent)
    ///
    /// ``` self: QtC.KConfigGroup, parent: QtC.KConfigBase, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn Reparent2(self: ?*anyopaque, parent: ?*anyopaque, pFlags: i32) void {
        qtc.KConfigGroup_Reparent2(@ptrCast(self), @ptrCast(parent), @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#moveValuesTo)
    ///
    /// ``` self: QtC.KConfigGroup, keys: [][]const u8, other: QtC.KConfigGroup, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn MoveValuesTo3(self: ?*anyopaque, keys: [][]const u8, other: ?*anyopaque, pFlags: i32) void {
        const keys_list = qtc.libqt_list{
            .len = keys.len,
            .data = keys.ptr,
        };
        qtc.KConfigGroup_MoveValuesTo3(@ptrCast(self), keys_list, @ptrCast(other), @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#moveValuesTo)
    ///
    /// ``` self: QtC.KConfigGroup, other: QtC.KConfigGroup, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn MoveValuesTo22(self: ?*anyopaque, other: ?*anyopaque, pFlags: i32) void {
        qtc.KConfigGroup_MoveValuesTo22(@ptrCast(self), @ptrCast(other), @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#deleteGroup)
    ///
    /// ``` self: QtC.KConfigGroup, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn DeleteGroup1(self: ?*anyopaque, pFlags: i32) void {
        qtc.KConfigGroup_DeleteGroup1(@ptrCast(self), @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntry22(self: ?*anyopaque, key: []const u8, aDefault: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const aDefault_Cstring = aDefault.ptr;
        const _str = qtc.KConfigGroup_ReadEntry22(@ptrCast(self), key_str, aDefault_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntry22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntry23(self: ?*anyopaque, key: []const u8, aDefault: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_Cstring = aDefault.ptr;
        const _str = qtc.KConfigGroup_ReadEntry23(@ptrCast(self), key_Cstring, aDefault_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntry23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readXdgListEntry)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, aDefault: [][]const u8, allocator: std.mem.Allocator ```
    pub fn ReadXdgListEntry22(self: ?*anyopaque, pKey: []const u8, aDefault: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        var aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("kconfiggroup.ReadXdgListEntry22: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |item, i| {
            aDefault_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = aDefault_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadXdgListEntry22(@ptrCast(self), pKey_str, aDefault_list);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readXdgListEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: [][]const u8, allocator: std.mem.Allocator ```
    pub fn ReadXdgListEntry23(self: ?*anyopaque, key: []const u8, aDefault: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        const key_Cstring = key.ptr;
        var aDefault_arr = allocator.alloc(qtc.libqt_string, aDefault.len) catch @panic("kconfiggroup.ReadXdgListEntry23: Memory allocation failed");
        defer allocator.free(aDefault_arr);
        for (aDefault, 0..aDefault.len) |item, i| {
            aDefault_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const aDefault_list = qtc.libqt_list{
            .len = aDefault.len,
            .data = aDefault_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KConfigGroup_ReadXdgListEntry23(@ptrCast(self), key_Cstring, aDefault_list);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntryUntranslated)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, aDefault: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntryUntranslated22(self: ?*anyopaque, pKey: []const u8, aDefault: []const u8, allocator: std.mem.Allocator) []const u8 {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        const _str = qtc.KConfigGroup_ReadEntryUntranslated22(@ptrCast(self), pKey_str, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntryUntranslated22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#readEntryUntranslated)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, aDefault: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntryUntranslated23(self: ?*anyopaque, key: []const u8, aDefault: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_Cstring = key.ptr;
        const aDefault_str = qtc.libqt_string{
            .len = aDefault.len,
            .data = aDefault.ptr,
        };
        const _str = qtc.KConfigGroup_ReadEntryUntranslated23(@ptrCast(self), key_Cstring, aDefault_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfiggroup.ReadEntryUntranslated23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: QtC.QVariant, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn WriteEntry32(self: ?*anyopaque, key: []const u8, value: ?*anyopaque, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.KConfigGroup_WriteEntry32(@ptrCast(self), key_str, @ptrCast(value), @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: QtC.QVariant, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn WriteEntry33(self: ?*anyopaque, key: []const u8, value: ?*anyopaque, pFlags: i32) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_WriteEntry33(@ptrCast(self), key_Cstring, @ptrCast(value), @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn WriteEntry34(self: ?*anyopaque, key: []const u8, value: []const u8, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry34(@ptrCast(self), key_str, value_str, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn WriteEntry35(self: ?*anyopaque, key: []const u8, value: []const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry35(@ptrCast(self), key_Cstring, value_str, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn WriteEntry36(self: ?*anyopaque, key: []const u8, value: []u8, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry36(@ptrCast(self), key_str, value_str, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn WriteEntry37(self: ?*anyopaque, key: []const u8, value: []u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KConfigGroup_WriteEntry37(@ptrCast(self), key_Cstring, value_str, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn WriteEntry38(self: ?*anyopaque, key: []const u8, value: []const u8, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_Cstring = value.ptr;
        qtc.KConfigGroup_WriteEntry38(@ptrCast(self), key_str, value_Cstring, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn WriteEntry39(self: ?*anyopaque, key: []const u8, value: []const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_Cstring = value.ptr;
        qtc.KConfigGroup_WriteEntry39(@ptrCast(self), key_Cstring, value_Cstring, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: [][]const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag, allocator: std.mem.Allocator ```
    pub fn WriteEntry310(self: ?*anyopaque, key: []const u8, value: [][]const u8, pFlags: i32, allocator: std.mem.Allocator) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteEntry310: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i| {
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteEntry310(@ptrCast(self), key_str, value_list, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: [][]const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag, allocator: std.mem.Allocator ```
    pub fn WriteEntry311(self: ?*anyopaque, key: []const u8, value: [][]const u8, pFlags: i32, allocator: std.mem.Allocator) void {
        const key_Cstring = key.ptr;
        var value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteEntry311: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i| {
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteEntry311(@ptrCast(self), key_Cstring, value_list, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []QtC.QVariant, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn WriteEntry312(self: ?*anyopaque, key: []const u8, value: []QtC.QVariant, pFlags: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = @ptrCast(value.ptr),
        };
        qtc.KConfigGroup_WriteEntry312(@ptrCast(self), key_str, value_list, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: []QtC.QVariant, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn WriteEntry313(self: ?*anyopaque, key: []const u8, value: []QtC.QVariant, pFlags: i32) void {
        const key_Cstring = key.ptr;
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = @ptrCast(value.ptr),
        };
        qtc.KConfigGroup_WriteEntry313(@ptrCast(self), key_Cstring, value_list, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeXdgListEntry)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, value: [][]const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag, allocator: std.mem.Allocator ```
    pub fn WriteXdgListEntry3(self: ?*anyopaque, pKey: []const u8, value: [][]const u8, pFlags: i32, allocator: std.mem.Allocator) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        var value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteXdgListEntry3: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i| {
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteXdgListEntry3(@ptrCast(self), pKey_str, value_list, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writeXdgListEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: [][]const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag, allocator: std.mem.Allocator ```
    pub fn WriteXdgListEntry32(self: ?*anyopaque, key: []const u8, value: [][]const u8, pFlags: i32, allocator: std.mem.Allocator) void {
        const key_Cstring = key.ptr;
        var value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WriteXdgListEntry32: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i| {
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WriteXdgListEntry32(@ptrCast(self), key_Cstring, value_list, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, path: []const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn WritePathEntry32(self: ?*anyopaque, pKey: []const u8, path: []const u8, pFlags: i32) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KConfigGroup_WritePathEntry32(@ptrCast(self), pKey_str, path_str, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ``` self: QtC.KConfigGroup, Key: []const u8, path: []const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn WritePathEntry33(self: ?*anyopaque, Key: []const u8, path: []const u8, pFlags: i32) void {
        const Key_Cstring = Key.ptr;
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KConfigGroup_WritePathEntry33(@ptrCast(self), Key_Cstring, path_str, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, value: [][]const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag, allocator: std.mem.Allocator ```
    pub fn WritePathEntry34(self: ?*anyopaque, pKey: []const u8, value: [][]const u8, pFlags: i32, allocator: std.mem.Allocator) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        var value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WritePathEntry34: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i| {
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WritePathEntry34(@ptrCast(self), pKey_str, value_list, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#writePathEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, value: [][]const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag, allocator: std.mem.Allocator ```
    pub fn WritePathEntry35(self: ?*anyopaque, key: []const u8, value: [][]const u8, pFlags: i32, allocator: std.mem.Allocator) void {
        const key_Cstring = key.ptr;
        var value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("kconfiggroup.WritePathEntry35: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |item, i| {
            value_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.KConfigGroup_WritePathEntry35(@ptrCast(self), key_Cstring, value_list, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#deleteEntry)
    ///
    /// ``` self: QtC.KConfigGroup, pKey: []const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn DeleteEntry22(self: ?*anyopaque, pKey: []const u8, pFlags: i32) void {
        const pKey_str = qtc.libqt_string{
            .len = pKey.len,
            .data = pKey.ptr,
        };
        qtc.KConfigGroup_DeleteEntry22(@ptrCast(self), pKey_str, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#deleteEntry)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, pFlags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn DeleteEntry23(self: ?*anyopaque, key: []const u8, pFlags: i32) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_DeleteEntry23(@ptrCast(self), key_Cstring, @intCast(pFlags));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#revertToDefault)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, pFlag: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn RevertToDefault22(self: ?*anyopaque, key: []const u8, pFlag: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.KConfigGroup_RevertToDefault22(@ptrCast(self), key_str, @intCast(pFlag));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#revertToDefault)
    ///
    /// ``` self: QtC.KConfigGroup, key: []const u8, pFlag: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn RevertToDefault23(self: ?*anyopaque, key: []const u8, pFlag: i32) void {
        const key_Cstring = key.ptr;
        qtc.KConfigGroup_RevertToDefault23(@ptrCast(self), key_Cstring, @intCast(pFlag));
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ``` self: QtC.KConfigGroup, group: []const u8 ```
    pub fn HasGroup(self: ?*anyopaque, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_HasGroup(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ``` self: QtC.KConfigGroup, group: []const u8 ```
    pub fn Group(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_Group(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ``` self: QtC.KConfigGroup, group: []const u8 ```
    pub fn Group2(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_Group2(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api.kde.org/kconfigbase.html#isGroupImmutable)
    ///
    /// ``` self: QtC.KConfigGroup, group: []const u8 ```
    pub fn IsGroupImmutable(self: ?*anyopaque, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_IsGroupImmutable(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ``` self: QtC.KConfigGroup, group: []const u8, flags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn DeleteGroup2(self: ?*anyopaque, group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self), group_str, @intCast(flags));
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api.kde.org/kconfigbase.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigGroup, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KConfigGroup_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api.kde.org/kconfigbase.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigGroup, id: i32, data: ?*anyopaque ```
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KConfigGroup_QBaseVirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api.kde.org/kconfigbase.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigGroup, slot: fn (self: QtC.KConfigGroup, id: i32, data: ?*anyopaque) callconv(.c) void ```
    pub fn OnVirtualHook(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigGroup_OnVirtualHook(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kconfiggroup.html#dtor.KConfigGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KConfigGroup ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KConfigGroup_Delete(@ptrCast(self));
    }
};
