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

    /// ### DEPRECATED: Use `groupList` instead
    ///
    pub const GroupList = groupList;

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#groupList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn groupList(self: KConfigBase, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigBase_GroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigBase.groupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigBase.groupList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `hasGroup` instead
    ///
    pub const HasGroup = hasGroup;

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn hasGroup(self: KConfigBase, _group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return qtc.KConfigBase_HasGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn group(self: KConfigBase, _group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return .{ .ptr = qtc.KConfigBase_Group(@ptrCast(self.ptr), group_str) };
    }

    /// ### DEPRECATED: Use `group2` instead
    ///
    pub const Group2 = group2;

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn group2(self: KConfigBase, _group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return .{ .ptr = qtc.KConfigBase_Group2(@ptrCast(self.ptr), group_str) };
    }

    /// ### DEPRECATED: Use `deleteGroup` instead
    ///
    pub const DeleteGroup = deleteGroup;

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn deleteGroup(self: KConfigBase, _group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigBase_DeleteGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `sync` instead
    ///
    pub const Sync = sync;

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#sync)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    pub fn sync(self: KConfigBase) bool {
        return qtc.KConfigBase_Sync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `markAsClean` instead
    ///
    pub const MarkAsClean = markAsClean;

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#markAsClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    pub fn markAsClean(self: KConfigBase) void {
        qtc.KConfigBase_MarkAsClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessMode` instead
    ///
    pub const AccessMode = accessMode;

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
    pub fn accessMode(self: KConfigBase) i32 {
        return qtc.KConfigBase_AccessMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImmutable` instead
    ///
    pub const IsImmutable = isImmutable;

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    pub fn isImmutable(self: KConfigBase) bool {
        return qtc.KConfigBase_IsImmutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isGroupImmutable` instead
    ///
    pub const IsGroupImmutable = isGroupImmutable;

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn isGroupImmutable(self: KConfigBase, _group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return qtc.KConfigBase_IsGroupImmutable(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `deleteGroup2` instead
    ///
    pub const DeleteGroup2 = deleteGroup2;

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigBase `
    ///
    /// ` _group: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn deleteGroup2(self: KConfigBase, _group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self.ptr), group_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#dtor.KConfigBase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigBase `
    ///
    pub fn delete(self: KConfigBase) void {
        qtc.KConfigBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kconfigbase.html#public-types)
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
