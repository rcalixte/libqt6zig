const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const struct_constu8_u16 = struct { first: []const u8, second: u16 };

/// ### [Upstream resources](https://api.kde.org/kacl.html)
pub const kacl = struct {
    /// New constructs a new KACL object.
    ///
    /// ## Parameter(s):
    ///
    /// ` aclString: []const u8 `
    ///
    pub fn New(aclString: []const u8) QtC.KACL {
        const aclString_str = qtc.libqt_string{
            .len = aclString.len,
            .data = aclString.ptr,
        };

        return qtc.KACL_new(aclString_str);
    }

    /// New2 constructs a new KACL object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: QtC.KACL `
    ///
    pub fn New2(rhs: ?*anyopaque) QtC.KACL {
        return qtc.KACL_new2(@ptrCast(rhs));
    }

    /// New3 constructs a new KACL object.
    ///
    /// ## Parameter(s):
    ///
    /// ` basicPermissions: u32 `
    ///
    pub fn New3(basicPermissions: u32) QtC.KACL {
        return qtc.KACL_new3(basicPermissions);
    }

    /// New4 constructs a new KACL object.
    ///
    pub fn New4() QtC.KACL {
        return qtc.KACL_new4();
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` rhs: QtC.KACL `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.KACL_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` rhs: QtC.KACL `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.KACL_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` rhs: QtC.KACL `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.KACL_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KACL_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#ownerPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    pub fn OwnerPermissions(self: ?*anyopaque) u16 {
        return qtc.KACL_OwnerPermissions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setOwnerPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` ownerPermissions: u16 `
    ///
    pub fn SetOwnerPermissions(self: ?*anyopaque, ownerPermissions: u16) bool {
        return qtc.KACL_SetOwnerPermissions(@ptrCast(self), @bitCast(ownerPermissions));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#owningGroupPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    pub fn OwningGroupPermissions(self: ?*anyopaque) u16 {
        return qtc.KACL_OwningGroupPermissions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setOwningGroupPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` owningGroupPermissions: u16 `
    ///
    pub fn SetOwningGroupPermissions(self: ?*anyopaque, owningGroupPermissions: u16) bool {
        return qtc.KACL_SetOwningGroupPermissions(@ptrCast(self), @bitCast(owningGroupPermissions));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#othersPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    pub fn OthersPermissions(self: ?*anyopaque) u16 {
        return qtc.KACL_OthersPermissions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setOthersPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` othersPermissions: u16 `
    ///
    pub fn SetOthersPermissions(self: ?*anyopaque, othersPermissions: u16) bool {
        return qtc.KACL_SetOthersPermissions(@ptrCast(self), @bitCast(othersPermissions));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#basePermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    pub fn BasePermissions(self: ?*anyopaque) u32 {
        return @bitCast(qtc.KACL_BasePermissions(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#isExtended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    pub fn IsExtended(self: ?*anyopaque) bool {
        return qtc.KACL_IsExtended(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#maskPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` exists: *bool `
    ///
    pub fn MaskPermissions(self: ?*anyopaque, exists: *bool) u16 {
        return qtc.KACL_MaskPermissions(@ptrCast(self), @ptrCast(exists));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setMaskPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` maskPermissions: u16 `
    ///
    pub fn SetMaskPermissions(self: ?*anyopaque, maskPermissions: u16) bool {
        return qtc.KACL_SetMaskPermissions(@ptrCast(self), @bitCast(maskPermissions));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#namedUserPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` name: []const u8 `
    ///
    /// ` exists: *bool `
    ///
    pub fn NamedUserPermissions(self: ?*anyopaque, name: []const u8, exists: *bool) u16 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_NamedUserPermissions(@ptrCast(self), name_str, @ptrCast(exists));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setNamedUserPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` name: []const u8 `
    ///
    /// ` param2: u16 `
    ///
    pub fn SetNamedUserPermissions(self: ?*anyopaque, name: []const u8, param2: u16) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_SetNamedUserPermissions(@ptrCast(self), name_str, @bitCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#allUserPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllUserPermissions(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_constu8_u16 {
        const _arr: qtc.libqt_list = qtc.KACL_AllUserPermissions(@ptrCast(self));
        const _data: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].first)));
                qtc.libqt_free(@ptrCast(@alignCast(_data[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_constu8_u16, _arr.len) catch @panic("kacl.AllUserPermissions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("kacl.AllUserPermissions: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            _ret[i] = struct_constu8_u16{
                .first = _first_slice,
                .second = @as(*u16, @ptrCast(@alignCast(_data[i].second))).*,
            };
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#namedGroupPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` name: []const u8 `
    ///
    /// ` exists: *bool `
    ///
    pub fn NamedGroupPermissions(self: ?*anyopaque, name: []const u8, exists: *bool) u16 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_NamedGroupPermissions(@ptrCast(self), name_str, @ptrCast(exists));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setNamedGroupPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` name: []const u8 `
    ///
    /// ` param2: u16 `
    ///
    pub fn SetNamedGroupPermissions(self: ?*anyopaque, name: []const u8, param2: u16) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_SetNamedGroupPermissions(@ptrCast(self), name_str, @bitCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#allGroupPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllGroupPermissions(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_constu8_u16 {
        const _arr: qtc.libqt_list = qtc.KACL_AllGroupPermissions(@ptrCast(self));
        const _data: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].first)));
                qtc.libqt_free(@ptrCast(@alignCast(_data[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_constu8_u16, _arr.len) catch @panic("kacl.AllGroupPermissions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("kacl.AllGroupPermissions: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            _ret[i] = struct_constu8_u16{
                .first = _first_slice,
                .second = @as(*u16, @ptrCast(@alignCast(_data[i].second))).*,
            };
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setACL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` aclStr: []const u8 `
    ///
    pub fn SetACL(self: ?*anyopaque, aclStr: []const u8) bool {
        const aclStr_str = qtc.libqt_string{
            .len = aclStr.len,
            .data = aclStr.ptr,
        };
        return qtc.KACL_SetACL(@ptrCast(self), aclStr_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#asString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AsString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KACL_AsString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kacl.AsString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KACL_VirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` callback: *const fn (self: QtC.KACL, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KACL_OnVirtualHook(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KACL `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KACL_QBaseVirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#dtor.KACL)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KACL `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KACL_Delete(@ptrCast(self));
    }
};
