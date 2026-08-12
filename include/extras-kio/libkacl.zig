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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KACL object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` aclString: []const u8 `
    ///
    pub fn new(aclString: []const u8) KACL {
        const aclString_str = qtc.libqt_string{
            .len = aclString.len,
            .data = aclString.ptr,
        };
        return .{ .ptr = qtc.KACL_new(aclString_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KACL object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: KACL `
    ///
    pub fn new2(rhs: anytype) KACL {
        comptime _ = @TypeOf(rhs)._is_KACL;
        return .{ .ptr = qtc.KACL_new2(@ptrCast(rhs.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KACL object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` basicPermissions: u32 `
    ///
    pub fn new3(basicPermissions: u32) KACL {
        return .{ .ptr = qtc.KACL_new3(basicPermissions) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KACL object in C++ memory
    ///
    pub fn new4() KACL {
        return .{ .ptr = qtc.KACL_new4() };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` rhs: KACL `
    ///
    pub fn operatorAssign(self: KACL, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KACL;
        qtc.KACL_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` rhs: KACL `
    ///
    pub fn operatorEqual(self: KACL, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KACL;
        return qtc.KACL_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` rhs: KACL `
    ///
    pub fn operatorNotEqual(self: KACL, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KACL;
        return qtc.KACL_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    pub fn isValid(self: KACL) bool {
        return qtc.KACL_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ownerPermissions` instead
    ///
    pub const OwnerPermissions = ownerPermissions;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#ownerPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    pub fn ownerPermissions(self: KACL) u16 {
        return qtc.KACL_OwnerPermissions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOwnerPermissions` instead
    ///
    pub const SetOwnerPermissions = setOwnerPermissions;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setOwnerPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` _ownerPermissions: u16 `
    ///
    pub fn setOwnerPermissions(self: KACL, _ownerPermissions: u16) bool {
        return qtc.KACL_SetOwnerPermissions(@ptrCast(self.ptr), @bitCast(_ownerPermissions));
    }

    /// ### DEPRECATED: Use `owningGroupPermissions` instead
    ///
    pub const OwningGroupPermissions = owningGroupPermissions;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#owningGroupPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    pub fn owningGroupPermissions(self: KACL) u16 {
        return qtc.KACL_OwningGroupPermissions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOwningGroupPermissions` instead
    ///
    pub const SetOwningGroupPermissions = setOwningGroupPermissions;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setOwningGroupPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` _owningGroupPermissions: u16 `
    ///
    pub fn setOwningGroupPermissions(self: KACL, _owningGroupPermissions: u16) bool {
        return qtc.KACL_SetOwningGroupPermissions(@ptrCast(self.ptr), @bitCast(_owningGroupPermissions));
    }

    /// ### DEPRECATED: Use `othersPermissions` instead
    ///
    pub const OthersPermissions = othersPermissions;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#othersPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    pub fn othersPermissions(self: KACL) u16 {
        return qtc.KACL_OthersPermissions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOthersPermissions` instead
    ///
    pub const SetOthersPermissions = setOthersPermissions;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setOthersPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` _othersPermissions: u16 `
    ///
    pub fn setOthersPermissions(self: KACL, _othersPermissions: u16) bool {
        return qtc.KACL_SetOthersPermissions(@ptrCast(self.ptr), @bitCast(_othersPermissions));
    }

    /// ### DEPRECATED: Use `basePermissions` instead
    ///
    pub const BasePermissions = basePermissions;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#basePermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    pub fn basePermissions(self: KACL) u32 {
        return @bitCast(qtc.KACL_BasePermissions(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `isExtended` instead
    ///
    pub const IsExtended = isExtended;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#isExtended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    pub fn isExtended(self: KACL) bool {
        return qtc.KACL_IsExtended(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maskPermissions` instead
    ///
    pub const MaskPermissions = maskPermissions;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#maskPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` exists: *bool `
    ///
    pub fn maskPermissions(self: KACL, exists: *bool) u16 {
        return qtc.KACL_MaskPermissions(@ptrCast(self.ptr), @ptrCast(exists));
    }

    /// ### DEPRECATED: Use `setMaskPermissions` instead
    ///
    pub const SetMaskPermissions = setMaskPermissions;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setMaskPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` _maskPermissions: u16 `
    ///
    pub fn setMaskPermissions(self: KACL, _maskPermissions: u16) bool {
        return qtc.KACL_SetMaskPermissions(@ptrCast(self.ptr), @bitCast(_maskPermissions));
    }

    /// ### DEPRECATED: Use `namedUserPermissions` instead
    ///
    pub const NamedUserPermissions = namedUserPermissions;

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
    pub fn namedUserPermissions(self: KACL, name: []const u8, exists: *bool) u16 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_NamedUserPermissions(@ptrCast(self.ptr), name_str, @ptrCast(exists));
    }

    /// ### DEPRECATED: Use `setNamedUserPermissions` instead
    ///
    pub const SetNamedUserPermissions = setNamedUserPermissions;

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
    pub fn setNamedUserPermissions(self: KACL, name: []const u8, param2: u16) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_SetNamedUserPermissions(@ptrCast(self.ptr), name_str, @bitCast(param2));
    }

    /// ### DEPRECATED: Use `allUserPermissions` instead
    ///
    pub const AllUserPermissions = allUserPermissions;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#allUserPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allUserPermissions(self: KACL, allocator: std.mem.Allocator) []Struct_constu8_u16 {
        const _arr: qtc.libqt_list = qtc.KACL_AllUserPermissions(@ptrCast(self.ptr));
        const _data_val: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].first)));
                qtc.libqt_free(@ptrCast(@alignCast(_data_val[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_constu8_u16, _arr.len) catch @panic("KACL.allUserPermissions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("KACL.allUserPermissions: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            _ret[i] = Struct_constu8_u16{
                .first = _first_slice,
                .second = @as(*u16, @ptrCast(@alignCast(_data_val[i].second))).*,
            };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `namedGroupPermissions` instead
    ///
    pub const NamedGroupPermissions = namedGroupPermissions;

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
    pub fn namedGroupPermissions(self: KACL, name: []const u8, exists: *bool) u16 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_NamedGroupPermissions(@ptrCast(self.ptr), name_str, @ptrCast(exists));
    }

    /// ### DEPRECATED: Use `setNamedGroupPermissions` instead
    ///
    pub const SetNamedGroupPermissions = setNamedGroupPermissions;

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
    pub fn setNamedGroupPermissions(self: KACL, name: []const u8, param2: u16) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KACL_SetNamedGroupPermissions(@ptrCast(self.ptr), name_str, @bitCast(param2));
    }

    /// ### DEPRECATED: Use `allGroupPermissions` instead
    ///
    pub const AllGroupPermissions = allGroupPermissions;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#allGroupPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allGroupPermissions(self: KACL, allocator: std.mem.Allocator) []Struct_constu8_u16 {
        const _arr: qtc.libqt_list = qtc.KACL_AllGroupPermissions(@ptrCast(self.ptr));
        const _data_val: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].first)));
                qtc.libqt_free(@ptrCast(@alignCast(_data_val[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_constu8_u16, _arr.len) catch @panic("KACL.allGroupPermissions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("KACL.allGroupPermissions: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            _ret[i] = Struct_constu8_u16{
                .first = _first_slice,
                .second = @as(*u16, @ptrCast(@alignCast(_data_val[i].second))).*,
            };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setACL` instead
    ///
    pub const SetACL = setACL;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#setACL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` aclStr: []const u8 `
    ///
    pub fn setACL(self: KACL, aclStr: []const u8) bool {
        const aclStr_str = qtc.libqt_string{
            .len = aclStr.len,
            .data = aclStr.ptr,
        };
        return qtc.KACL_SetACL(@ptrCast(self.ptr), aclStr_str);
    }

    /// ### DEPRECATED: Use `asString` instead
    ///
    pub const AsString = asString;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#asString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KACL `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn asString(self: KACL, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KACL_AsString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KACL.asString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

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
    pub fn virtualHook(self: KACL, id: i32, data: ?*anyopaque) void {
        qtc.KACL_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

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
    pub fn onVirtualHook(self: KACL, callback: *const fn (KACL, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KACL_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

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
    pub fn superVirtualHook(self: KACL, id: i32, data: ?*anyopaque) void {
        qtc.KACL_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kacl.html#dtor.KACL)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KACL `
    ///
    pub fn delete(self: KACL) void {
        qtc.KACL_Delete(@ptrCast(self.ptr));
    }
};
