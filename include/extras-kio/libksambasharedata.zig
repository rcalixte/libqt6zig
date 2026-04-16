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

    /// New constructs a new KSambaShareData object.
    ///
    pub fn New() KSambaShareData {
        return .{ .ptr = qtc.KSambaShareData_new() };
    }

    /// New2 constructs a new KSambaShareData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSambaShareData `
    ///
    pub fn New2(other: anytype) KSambaShareData {
        comptime _ = @TypeOf(other)._is_KSambaShareData;
        return .{ .ptr = qtc.KSambaShareData_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KSambaShareData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSambaShareData_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksambasharedata.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: KSambaShareData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSambaShareData_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksambasharedata.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Comment(self: KSambaShareData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSambaShareData_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksambasharedata.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#acl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Acl(self: KSambaShareData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSambaShareData_Acl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksambasharedata.Acl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn GuestPermission(self: KSambaShareData) i32 {
        return qtc.KSambaShareData_GuestPermission(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` name: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.UserShareError `
    ///
    pub fn SetName(self: KSambaShareData, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KSambaShareData_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` path: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.UserShareError `
    ///
    pub fn SetPath(self: KSambaShareData, path: []const u8) i32 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KSambaShareData_SetPath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#setComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` comment: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.UserShareError `
    ///
    pub fn SetComment(self: KSambaShareData, comment: []const u8) i32 {
        const comment_str = qtc.libqt_string{
            .len = comment.len,
            .data = comment.ptr,
        };
        return qtc.KSambaShareData_SetComment(@ptrCast(self.ptr), comment_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#setAcl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` acl: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` ksambasharedata_enums.UserShareError `
    ///
    pub fn SetAcl(self: KSambaShareData, acl: []const u8) i32 {
        const acl_str = qtc.libqt_string{
            .len = acl.len,
            .data = acl.ptr,
        };
        return qtc.KSambaShareData_SetAcl(@ptrCast(self.ptr), acl_str);
    }

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
    pub fn SetGuestPermission(self: KSambaShareData) i32 {
        return qtc.KSambaShareData_SetGuestPermission(@ptrCast(self.ptr));
    }

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
    pub fn Save(self: KSambaShareData) i32 {
        return qtc.KSambaShareData_Save(@ptrCast(self.ptr));
    }

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
    pub fn Remove(self: KSambaShareData) i32 {
        return qtc.KSambaShareData_Remove(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` other: KSambaShareData `
    ///
    pub fn OperatorAssign(self: KSambaShareData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KSambaShareData;
        qtc.KSambaShareData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` other: KSambaShareData `
    ///
    pub fn OperatorEqual(self: KSambaShareData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSambaShareData;
        return qtc.KSambaShareData_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSambaShareData `
    ///
    /// ` other: KSambaShareData `
    ///
    pub fn OperatorNotEqual(self: KSambaShareData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSambaShareData;
        return qtc.KSambaShareData_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn SetGuestPermission1(self: KSambaShareData, permission: *const i32) i32 {
        return qtc.KSambaShareData_SetGuestPermission1(@ptrCast(self.ptr), @ptrCast(permission));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#dtor.KSambaShareData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSambaShareData `
    ///
    pub fn Delete(self: KSambaShareData) void {
        qtc.KSambaShareData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksambasharedata.html#public-types)
pub const enums = struct {
    pub const GuestPermission = enum(i32) {
        pub const GuestsNotAllowed: i32 = 0;
        pub const GuestsAllowed: i32 = 1;
    };

    pub const UserShareError = enum(i32) {
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
