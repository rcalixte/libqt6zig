const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfigGroup = @import("libqt6").KConfigGroup;
const kconfigbase_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kconfigbase.html)
pub const KConfigBase = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigBase,

    pub const _is_KConfigBase = {};

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#groupList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GroupList(self: KConfigBase, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigBase_GroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    pub fn HasGroup(self: KConfigBase, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_HasGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group(self: KConfigBase, group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KConfigBase_Group(@ptrCast(self.ptr), group_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group2(self: KConfigBase, group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KConfigBase_Group2(@ptrCast(self.ptr), group_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    pub fn DeleteGroup(self: KConfigBase, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#sync)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    pub fn Sync(self: KConfigBase) bool {
        return qtc.KConfigBase_Sync(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#markAsClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    pub fn MarkAsClean(self: KConfigBase) void {
        qtc.KConfigBase_MarkAsClean(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#accessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ## Returns:
    ///
    /// ` kconfigbase_enums.AccessMode `
    ///
    pub fn AccessMode(self: KConfigBase) i32 {
        return qtc.KConfigBase_AccessMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    pub fn IsImmutable(self: KConfigBase) bool {
        return qtc.KConfigBase_IsImmutable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    pub fn IsGroupImmutable(self: KConfigBase, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_IsGroupImmutable(@ptrCast(self.ptr), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` group: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteGroup2(self: KConfigBase, group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self.ptr), group_str, @bitCast(flags));
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
    /// ` self: KConfigBase `
    ///
    pub fn Delete(self: KConfigBase) void {
        qtc.KConfigBase_Delete(@ptrCast(self.ptr));
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
