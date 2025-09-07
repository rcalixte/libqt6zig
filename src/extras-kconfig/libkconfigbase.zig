const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kconfigbase_enums = enums;
const std = @import("std");

/// https://api.kde.org/kconfigbase.html
pub const kconfigbase = struct {
    /// [Qt documentation](https://api.kde.org/kconfigbase.html#groupList)
    ///
    /// ``` self: QtC.KConfigBase, allocator: std.mem.Allocator ```
    pub fn GroupList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigBase_GroupList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfigbase.GroupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfigbase.GroupList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ``` self: QtC.KConfigBase, group: []const u8 ```
    pub fn HasGroup(self: ?*anyopaque, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_HasGroup(@ptrCast(self), group_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ``` self: QtC.KConfigBase, group: []const u8 ```
    pub fn Group(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_Group(@ptrCast(self), group_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ``` self: QtC.KConfigBase, group: []const u8 ```
    pub fn Group2(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_Group2(@ptrCast(self), group_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ``` self: QtC.KConfigBase, group: []const u8 ```
    pub fn DeleteGroup(self: ?*anyopaque, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup(@ptrCast(self), group_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfigbase.html#sync)
    ///
    /// ``` self: QtC.KConfigBase ```
    pub fn Sync(self: ?*anyopaque) bool {
        return qtc.KConfigBase_Sync(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfigbase.html#markAsClean)
    ///
    /// ``` self: QtC.KConfigBase ```
    pub fn MarkAsClean(self: ?*anyopaque) void {
        qtc.KConfigBase_MarkAsClean(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfigbase.html#accessMode)
    ///
    /// ``` self: QtC.KConfigBase ```
    ///
    /// Returns: ``` kconfigbase_enums.AccessMode ```
    pub fn AccessMode(self: ?*anyopaque) i32 {
        return qtc.KConfigBase_AccessMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfigbase.html#isImmutable)
    ///
    /// ``` self: QtC.KConfigBase ```
    pub fn IsImmutable(self: ?*anyopaque) bool {
        return qtc.KConfigBase_IsImmutable(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfigbase.html#isGroupImmutable)
    ///
    /// ``` self: QtC.KConfigBase, group: []const u8 ```
    pub fn IsGroupImmutable(self: ?*anyopaque, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_IsGroupImmutable(@ptrCast(self), group_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ``` self: QtC.KConfigBase, group: []const u8, flags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn DeleteGroup2(self: ?*anyopaque, group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self), group_str, @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kconfigbase.html#dtor.KConfigBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KConfigBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KConfigBase_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kconfigbase.html#types
pub const enums = struct {
    pub const WriteConfigFlag = enum {
        pub const Persistent: i32 = 1;
        pub const Global: i32 = 2;
        pub const Localized: i32 = 4;
        pub const Notify: i32 = 9;
        pub const Normal: i32 = 1;
    };

    pub const AccessMode = enum {
        pub const NoAccess: i32 = 0;
        pub const ReadOnly: i32 = 1;
        pub const ReadWrite: i32 = 2;
    };
};
