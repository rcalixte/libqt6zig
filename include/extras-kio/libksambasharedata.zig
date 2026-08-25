const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const ksambasharedata_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ksambasharedata.html)
pub const KSambaShareData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSambaShareData,

    pub const _is_KSambaShareData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSambaShareData object in C++ memory
    ///
    pub fn new() KSambaShareData {
        return .{ .ptr = qtc.KSambaShareData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KSambaShareData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSambaShareData `
    ///
    pub fn new2(other: anytype) KSambaShareData {
        comptime _ = @TypeOf(other)._is_KSambaShareData;
        return .{ .ptr = qtc.KSambaShareData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KSambaShareData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSambaShareData_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSambaShareData.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: KSambaShareData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSambaShareData_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSambaShareData.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `comment` instead
    ///
    pub const Comment = comment;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn comment(self: KSambaShareData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSambaShareData_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSambaShareData.comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `acl` instead
    ///
    pub const Acl = acl;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#acl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn acl(self: KSambaShareData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSambaShareData_Acl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSambaShareData.acl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `guestPermission` instead
    ///
    pub const GuestPermission = guestPermission;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#guestPermission)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.GuestPermission `
    ///
    pub fn guestPermission(self: KSambaShareData) i32 {
        return qtc.KSambaShareData_GuestPermission(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.UserShareError `
    ///
    pub fn setName(self: KSambaShareData, _name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.KSambaShareData_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setPath` instead
    ///
    pub const SetPath = setPath;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` _path: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.UserShareError `
    ///
    pub fn setPath(self: KSambaShareData, _path: []const u8) i32 {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return qtc.KSambaShareData_SetPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `setComment` instead
    ///
    pub const SetComment = setComment;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#setComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` _comment: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.UserShareError `
    ///
    pub fn setComment(self: KSambaShareData, _comment: []const u8) i32 {
        const comment_str = qtc.libqt_string{
            .len = _comment.len,
            .data = _comment.ptr,
        };
        return qtc.KSambaShareData_SetComment(@ptrCast(self.ptr), comment_str);
    }

    /// ### DEPRECATED: Use `setAcl` instead
    ///
    pub const SetAcl = setAcl;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#setAcl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` _acl: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.UserShareError `
    ///
    pub fn setAcl(self: KSambaShareData, _acl: []const u8) i32 {
        const acl_str = qtc.libqt_string{
            .len = _acl.len,
            .data = _acl.ptr,
        };
        return qtc.KSambaShareData_SetAcl(@ptrCast(self.ptr), acl_str);
    }

    /// ### DEPRECATED: Use `setGuestPermission` instead
    ///
    pub const SetGuestPermission = setGuestPermission;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#setGuestPermission)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.UserShareError `
    ///
    pub fn setGuestPermission(self: KSambaShareData) i32 {
        return qtc.KSambaShareData_SetGuestPermission(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.UserShareError `
    ///
    pub fn save(self: KSambaShareData) i32 {
        return qtc.KSambaShareData_Save(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.UserShareError `
    ///
    pub fn remove(self: KSambaShareData) i32 {
        return qtc.KSambaShareData_Remove(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` other: KSambaShareData `
    ///
    pub fn operatorAssign(self: KSambaShareData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KSambaShareData;
        qtc.KSambaShareData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` other: KSambaShareData `
    ///
    pub fn operatorEqual(self: KSambaShareData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSambaShareData;
        return qtc.KSambaShareData_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` other: KSambaShareData `
    ///
    pub fn operatorNotEqual(self: KSambaShareData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSambaShareData;
        return qtc.KSambaShareData_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setGuestPermission1` instead
    ///
    pub const SetGuestPermission1 = setGuestPermission1;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#setGuestPermission)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` permission: *const ksambasharedata_enums.GuestPermission `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.UserShareError `
    ///
    pub fn setGuestPermission1(self: KSambaShareData, permission: *const i32) i32 {
        return qtc.KSambaShareData_SetGuestPermission1(@ptrCast(self.ptr), @ptrCast(permission));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#dtor.KSambaShareData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSambaShareData `
    ///
    pub fn delete(self: KSambaShareData) void {
        qtc.KSambaShareData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#public-types)
pub const enums = struct {
    pub const GuestPermission = enum {
        pub const GuestsNotAllowed: i32 = 0;
        pub const GuestsAllowed: i32 = 1;
    };

    pub const UserShareError = enum {
        pub const UserShareOk: i32 = 0;
        pub const UserShareExceedMaxShares: i32 = 1;
        pub const UserShareNameOk: i32 = 2;
        pub const UserShareNameInvalid: i32 = 3;
        pub const UserShareNameInUse: i32 = 4;
        pub const UserSharePathOk: i32 = 5;
        pub const UserSharePathInvalid: i32 = 6;
        pub const UserSharePathNotExists: i32 = 7;
        pub const UserSharePathNotDirectory: i32 = 8;
        pub const UserSharePathNotAbsolute: i32 = 9;
        pub const UserSharePathNotAllowed: i32 = 10;
        pub const UserShareAclOk: i32 = 11;
        pub const UserShareAclInvalid: i32 = 12;
        pub const UserShareAclUserNotValid: i32 = 13;
        pub const UserShareCommentOk: i32 = 14;
        pub const UserShareGuestsOk: i32 = 15;
        pub const UserShareGuestsInvalid: i32 = 16;
        pub const UserShareGuestsNotAllowed: i32 = 17;
        pub const UserShareSystemError: i32 = 18;
    };
};
