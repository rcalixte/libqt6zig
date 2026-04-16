const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const Struct_constu8_u16 = struct { first: []const u8, second: u16 };

/// ### [Upstream resources](https://api.kde.org/kacl.html)
pub const KACL = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kacl.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KACL,

    pub const _is_KACL = {};

    /// New constructs a new KACL object.
    ///
    /// ## Parameter(s):
    ///
    /// ` aclString: []const u8 `
    ///
    pub fn New(aclString: []const u8) KACL {
        const aclString_str = qtc.libqt_string{
            .len = aclString.len,
            .data = aclString.ptr,
        };
        return .{ .ptr = qtc.KACL_new(aclString_str) };
    }

    /// New2 constructs a new KACL object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: KACL `
    ///
    pub fn New2(rhs: anytype) KACL {
        comptime _ = @TypeOf(rhs)._is_KACL;
        return .{ .ptr = qtc.KACL_new2(@ptrCast(rhs.ptr)) };
    }

    /// New3 constructs a new KACL object.
    ///
    /// ## Parameter(s):
    ///
    /// ` basicPermissions: u32 `
    ///
    pub fn New3(basicPermissions: u32) KACL {
        return .{ .ptr = qtc.KACL_new3(basicPermissions) };
    }

    /// New4 constructs a new KACL object.
    ///
    pub fn New4() KACL {
        return .{ .ptr = qtc.KACL_new4() };
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` rhs: KACL `
    ///
    pub fn OperatorAssign(self: KACL, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KACL;
        qtc.KACL_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` rhs: KACL `
    ///
    pub fn OperatorEqual(self: KACL, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KACL;
        return qtc.KACL_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` rhs: KACL `
    ///
    pub fn OperatorNotEqual(self: KACL, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KACL;
        return qtc.KACL_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    pub fn IsValid(self: KACL) bool {
        return qtc.KACL_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#ownerPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    pub fn OwnerPermissions(self: KACL) u16 {
        return qtc.KACL_OwnerPermissions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setOwnerPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` ownerPermissions: u16 `
    ///
    pub fn SetOwnerPermissions(self: KACL, ownerPermissions: u16) bool {
        return qtc.KACL_SetOwnerPermissions(@ptrCast(self.ptr), @bitCast(ownerPermissions));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#owningGroupPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    pub fn OwningGroupPermissions(self: KACL) u16 {
        return qtc.KACL_OwningGroupPermissions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setOwningGroupPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` owningGroupPermissions: u16 `
    ///
    pub fn SetOwningGroupPermissions(self: KACL, owningGroupPermissions: u16) bool {
        return qtc.KACL_SetOwningGroupPermissions(@ptrCast(self.ptr), @bitCast(owningGroupPermissions));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#othersPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    pub fn OthersPermissions(self: KACL) u16 {
        return qtc.KACL_OthersPermissions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setOthersPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` othersPermissions: u16 `
    ///
    pub fn SetOthersPermissions(self: KACL, othersPermissions: u16) bool {
        return qtc.KACL_SetOthersPermissions(@ptrCast(self.ptr), @bitCast(othersPermissions));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#basePermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    pub fn BasePermissions(self: KACL) u32 {
        return @bitCast(qtc.KACL_BasePermissions(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#isExtended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    pub fn IsExtended(self: KACL) bool {
        return qtc.KACL_IsExtended(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#maskPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` exists: *bool `
    ///
    pub fn MaskPermissions(self: KACL, exists: *bool) u16 {
        return qtc.KACL_MaskPermissions(@ptrCast(self.ptr), @ptrCast(exists));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setMaskPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` maskPermissions: u16 `
    ///
    pub fn SetMaskPermissions(self: KACL, maskPermissions: u16) bool {
        return qtc.KACL_SetMaskPermissions(@ptrCast(self.ptr), @bitCast(maskPermissions));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#namedUserPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` name: []const u8 `
    ///
    /// ` exists: *bool `
    ///
    pub fn NamedUserPermissions(self: KACL, name: []const u8, exists: *bool) u16 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_NamedUserPermissions(@ptrCast(self.ptr), name_str, @ptrCast(exists));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setNamedUserPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` name: []const u8 `
    ///
    /// ` param2: u16 `
    ///
    pub fn SetNamedUserPermissions(self: KACL, name: []const u8, param2: u16) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_SetNamedUserPermissions(@ptrCast(self.ptr), name_str, @bitCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#allUserPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllUserPermissions(self: KACL, allocator: std.mem.Allocator) []Struct_constu8_u16 {
        const _arr: qtc.libqt_list = qtc.KACL_AllUserPermissions(@ptrCast(self.ptr));
        const _data: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].first)));
                qtc.libqt_free(@ptrCast(@alignCast(_data[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_constu8_u16, _arr.len) catch @panic("kacl.AllUserPermissions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("kacl.AllUserPermissions: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            _ret[i] = Struct_constu8_u16{
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
    /// ` self: KACL `
    ///
    /// ` name: []const u8 `
    ///
    /// ` exists: *bool `
    ///
    pub fn NamedGroupPermissions(self: KACL, name: []const u8, exists: *bool) u16 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_NamedGroupPermissions(@ptrCast(self.ptr), name_str, @ptrCast(exists));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setNamedGroupPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` name: []const u8 `
    ///
    /// ` param2: u16 `
    ///
    pub fn SetNamedGroupPermissions(self: KACL, name: []const u8, param2: u16) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_SetNamedGroupPermissions(@ptrCast(self.ptr), name_str, @bitCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#allGroupPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllGroupPermissions(self: KACL, allocator: std.mem.Allocator) []Struct_constu8_u16 {
        const _arr: qtc.libqt_list = qtc.KACL_AllGroupPermissions(@ptrCast(self.ptr));
        const _data: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].first)));
                qtc.libqt_free(@ptrCast(@alignCast(_data[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_constu8_u16, _arr.len) catch @panic("kacl.AllGroupPermissions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("kacl.AllGroupPermissions: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            _ret[i] = Struct_constu8_u16{
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
    /// ` self: KACL `
    ///
    /// ` aclStr: []const u8 `
    ///
    pub fn SetACL(self: KACL, aclStr: []const u8) bool {
        const aclStr_str = qtc.libqt_string{
            .len = aclStr.len,
            .data = aclStr.ptr,
        };
        return qtc.KACL_SetACL(@ptrCast(self.ptr), aclStr_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#asString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AsString(self: KACL, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KACL_AsString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kacl.AsString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: KACL, id: i32, data: ?*anyopaque) void {
        qtc.KACL_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kacl.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KACL `
    ///
    /// ` callback: *const fn (self: KACL, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: KACL, callback: *const fn (KACL, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KACL_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KACL, id: i32, data: ?*anyopaque) void {
        qtc.KACL_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#dtor.KACL)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KACL `
    ///
    pub fn Delete(self: KACL) void {
        qtc.KACL_Delete(@ptrCast(self.ptr));
    }
};
