const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kconfigbase_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kconfigbase.html)
pub const kconfigbase = struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#groupList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GroupList(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigBase_GroupList(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    pub fn HasGroup(self: ?*anyopaque, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_HasGroup(@ptrCast(self), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_Group(@ptrCast(self), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group2(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_Group2(@ptrCast(self), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    pub fn DeleteGroup(self: ?*anyopaque, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup(@ptrCast(self), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#sync)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigBase `
    ///
    pub fn Sync(self: ?*anyopaque) bool {
        return qtc.KConfigBase_Sync(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#markAsClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigBase `
    ///
    pub fn MarkAsClean(self: ?*anyopaque) void {
        qtc.KConfigBase_MarkAsClean(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#accessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigBase `
    ///
    /// ## Returns:
    ///
    /// ` kconfigbase_enums.AccessMode `
    ///
    pub fn AccessMode(self: ?*anyopaque) i32 {
        return qtc.KConfigBase_AccessMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigBase `
    ///
    pub fn IsImmutable(self: ?*anyopaque) bool {
        return qtc.KConfigBase_IsImmutable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    pub fn IsGroupImmutable(self: ?*anyopaque, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_IsGroupImmutable(@ptrCast(self), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteGroup2(self: ?*anyopaque, group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self), group_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#dtor.KConfigBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KConfigBase `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KConfigBase_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kconfigbase.html#public-types)
pub const enums = struct {
    pub const WriteConfigFlag = enum(i32) {
        pub const Persistent: i32 = 1;
        pub const Global: i32 = 2;
        pub const Localized: i32 = 4;
        pub const Notify: i32 = 9;
        pub const Normal: i32 = 1;
    };

    pub const AccessMode = enum(i32) {
        pub const NoAccess: i32 = 0;
        pub const ReadOnly: i32 = 1;
        pub const ReadWrite: i32 = 2;
    };
};
