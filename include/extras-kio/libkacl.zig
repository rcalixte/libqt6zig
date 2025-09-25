const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const struct_constu8_u16 = extern struct { first: []const u8, second: u16 };

/// https://api.kde.org/kacl.html
pub const kacl = struct {
    /// New constructs a new KACL object.
    ///
    /// ``` aclString: []const u8 ```
    pub fn New(aclString: []const u8) QtC.KACL {
        const aclString_str = qtc.libqt_string{
            .len = aclString.len,
            .data = aclString.ptr,
        };

        return qtc.KACL_new(aclString_str);
    }

    /// New2 constructs a new KACL object.
    ///
    /// ``` rhs: QtC.KACL ```
    pub fn New2(rhs: ?*anyopaque) QtC.KACL {
        return qtc.KACL_new2(@ptrCast(rhs));
    }

    /// New3 constructs a new KACL object.
    ///
    /// ``` basicPermissions: u32 ```
    pub fn New3(basicPermissions: u32) QtC.KACL {
        return qtc.KACL_new3(basicPermissions);
    }

    /// New4 constructs a new KACL object.
    ///
    ///
    pub fn New4() QtC.KACL {
        return qtc.KACL_new4();
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#operator-eq)
    ///
    /// ``` self: QtC.KACL, rhs: QtC.KACL ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.KACL_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KACL, rhs: QtC.KACL ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.KACL_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#operator-not-eq)
    ///
    /// ``` self: QtC.KACL, rhs: QtC.KACL ```
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.KACL_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#isValid)
    ///
    /// ``` self: QtC.KACL ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KACL_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#ownerPermissions)
    ///
    /// ``` self: QtC.KACL ```
    pub fn OwnerPermissions(self: ?*anyopaque) u16 {
        return qtc.KACL_OwnerPermissions(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#setOwnerPermissions)
    ///
    /// ``` self: QtC.KACL, ownerPermissions: u16 ```
    pub fn SetOwnerPermissions(self: ?*anyopaque, ownerPermissions: u16) bool {
        return qtc.KACL_SetOwnerPermissions(@ptrCast(self), @intCast(ownerPermissions));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#owningGroupPermissions)
    ///
    /// ``` self: QtC.KACL ```
    pub fn OwningGroupPermissions(self: ?*anyopaque) u16 {
        return qtc.KACL_OwningGroupPermissions(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#setOwningGroupPermissions)
    ///
    /// ``` self: QtC.KACL, owningGroupPermissions: u16 ```
    pub fn SetOwningGroupPermissions(self: ?*anyopaque, owningGroupPermissions: u16) bool {
        return qtc.KACL_SetOwningGroupPermissions(@ptrCast(self), @intCast(owningGroupPermissions));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#othersPermissions)
    ///
    /// ``` self: QtC.KACL ```
    pub fn OthersPermissions(self: ?*anyopaque) u16 {
        return qtc.KACL_OthersPermissions(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#setOthersPermissions)
    ///
    /// ``` self: QtC.KACL, othersPermissions: u16 ```
    pub fn SetOthersPermissions(self: ?*anyopaque, othersPermissions: u16) bool {
        return qtc.KACL_SetOthersPermissions(@ptrCast(self), @intCast(othersPermissions));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#basePermissions)
    ///
    /// ``` self: QtC.KACL ```
    pub fn BasePermissions(self: ?*anyopaque) u32 {
        return @intCast(qtc.KACL_BasePermissions(@ptrCast(self)));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#isExtended)
    ///
    /// ``` self: QtC.KACL ```
    pub fn IsExtended(self: ?*anyopaque) bool {
        return qtc.KACL_IsExtended(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#maskPermissions)
    ///
    /// ``` self: QtC.KACL, exists: *bool ```
    pub fn MaskPermissions(self: ?*anyopaque, exists: *bool) u16 {
        return qtc.KACL_MaskPermissions(@ptrCast(self), @ptrCast(exists));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#setMaskPermissions)
    ///
    /// ``` self: QtC.KACL, maskPermissions: u16 ```
    pub fn SetMaskPermissions(self: ?*anyopaque, maskPermissions: u16) bool {
        return qtc.KACL_SetMaskPermissions(@ptrCast(self), @intCast(maskPermissions));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#namedUserPermissions)
    ///
    /// ``` self: QtC.KACL, name: []const u8, exists: *bool ```
    pub fn NamedUserPermissions(self: ?*anyopaque, name: []const u8, exists: *bool) u16 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_NamedUserPermissions(@ptrCast(self), name_str, @ptrCast(exists));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#setNamedUserPermissions)
    ///
    /// ``` self: QtC.KACL, name: []const u8, param2: u16 ```
    pub fn SetNamedUserPermissions(self: ?*anyopaque, name: []const u8, param2: u16) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_SetNamedUserPermissions(@ptrCast(self), name_str, @intCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#allUserPermissions)
    ///
    /// ``` self: QtC.KACL, allocator: std.mem.Allocator ```
    pub fn AllUserPermissions(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_constu8_u16 {
        const _arr: qtc.libqt_list = qtc.KACL_AllUserPermissions(@ptrCast(self));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_constu8_u16, _arr.len) catch @panic("kacl.AllUserPermissions: Memory allocation failed");
        const _data: [*]struct_constu8_u16 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#namedGroupPermissions)
    ///
    /// ``` self: QtC.KACL, name: []const u8, exists: *bool ```
    pub fn NamedGroupPermissions(self: ?*anyopaque, name: []const u8, exists: *bool) u16 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_NamedGroupPermissions(@ptrCast(self), name_str, @ptrCast(exists));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#setNamedGroupPermissions)
    ///
    /// ``` self: QtC.KACL, name: []const u8, param2: u16 ```
    pub fn SetNamedGroupPermissions(self: ?*anyopaque, name: []const u8, param2: u16) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_SetNamedGroupPermissions(@ptrCast(self), name_str, @intCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#allGroupPermissions)
    ///
    /// ``` self: QtC.KACL, allocator: std.mem.Allocator ```
    pub fn AllGroupPermissions(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_constu8_u16 {
        const _arr: qtc.libqt_list = qtc.KACL_AllGroupPermissions(@ptrCast(self));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_constu8_u16, _arr.len) catch @panic("kacl.AllGroupPermissions: Memory allocation failed");
        const _data: [*]struct_constu8_u16 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#setACL)
    ///
    /// ``` self: QtC.KACL, aclStr: []const u8 ```
    pub fn SetACL(self: ?*anyopaque, aclStr: []const u8) bool {
        const aclStr_str = qtc.libqt_string{
            .len = aclStr.len,
            .data = aclStr.ptr,
        };
        return qtc.KACL_SetACL(@ptrCast(self), aclStr_str);
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#asString)
    ///
    /// ``` self: QtC.KACL, allocator: std.mem.Allocator ```
    pub fn AsString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KACL_AsString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kacl.AsString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#virtual_hook)
    ///
    /// ``` self: QtC.KACL, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KACL_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KACL, callback: *const fn (self: QtC.KACL, id: i32, data: ?*anyopaque) callconv(.c) void ```
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KACL_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KACL, id: i32, data: ?*anyopaque ```
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KACL_QBaseVirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://api.kde.org/kacl.html#dtor.KACL)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KACL ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KACL_Delete(@ptrCast(self));
    }
};
