const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const ksambasharedata_enums = enums;
const std = @import("std");

/// https://api.kde.org/ksambasharedata.html
pub const ksambasharedata = struct {
    /// New constructs a new KSambaShareData object.
    ///
    ///
    pub fn New() QtC.KSambaShareData {
        return qtc.KSambaShareData_new();
    }

    /// New2 constructs a new KSambaShareData object.
    ///
    /// ``` other: QtC.KSambaShareData ```
    pub fn New2(other: ?*anyopaque) QtC.KSambaShareData {
        return qtc.KSambaShareData_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#name)
    ///
    /// ``` self: QtC.KSambaShareData, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSambaShareData_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksambasharedata.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#path)
    ///
    /// ``` self: QtC.KSambaShareData, allocator: std.mem.Allocator ```
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSambaShareData_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksambasharedata.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#comment)
    ///
    /// ``` self: QtC.KSambaShareData, allocator: std.mem.Allocator ```
    pub fn Comment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSambaShareData_Comment(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksambasharedata.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#acl)
    ///
    /// ``` self: QtC.KSambaShareData, allocator: std.mem.Allocator ```
    pub fn Acl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSambaShareData_Acl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksambasharedata.Acl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#guestPermission)
    ///
    /// ``` self: QtC.KSambaShareData ```
    ///
    /// Returns: ``` ksambasharedata_enums.GuestPermission ```
    pub fn GuestPermission(self: ?*anyopaque) i32 {
        return qtc.KSambaShareData_GuestPermission(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#setName)
    ///
    /// ``` self: QtC.KSambaShareData, name: []const u8 ```
    ///
    /// Returns: ``` ksambasharedata_enums.UserShareError ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KSambaShareData_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#setPath)
    ///
    /// ``` self: QtC.KSambaShareData, path: []const u8 ```
    ///
    /// Returns: ``` ksambasharedata_enums.UserShareError ```
    pub fn SetPath(self: ?*anyopaque, path: []const u8) i32 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KSambaShareData_SetPath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#setComment)
    ///
    /// ``` self: QtC.KSambaShareData, comment: []const u8 ```
    ///
    /// Returns: ``` ksambasharedata_enums.UserShareError ```
    pub fn SetComment(self: ?*anyopaque, comment: []const u8) i32 {
        const comment_str = qtc.libqt_string{
            .len = comment.len,
            .data = comment.ptr,
        };
        return qtc.KSambaShareData_SetComment(@ptrCast(self), comment_str);
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#setAcl)
    ///
    /// ``` self: QtC.KSambaShareData, acl: []const u8 ```
    ///
    /// Returns: ``` ksambasharedata_enums.UserShareError ```
    pub fn SetAcl(self: ?*anyopaque, acl: []const u8) i32 {
        const acl_str = qtc.libqt_string{
            .len = acl.len,
            .data = acl.ptr,
        };
        return qtc.KSambaShareData_SetAcl(@ptrCast(self), acl_str);
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#setGuestPermission)
    ///
    /// ``` self: QtC.KSambaShareData ```
    ///
    /// Returns: ``` ksambasharedata_enums.UserShareError ```
    pub fn SetGuestPermission(self: ?*anyopaque) i32 {
        return qtc.KSambaShareData_SetGuestPermission(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#save)
    ///
    /// ``` self: QtC.KSambaShareData ```
    ///
    /// Returns: ``` ksambasharedata_enums.UserShareError ```
    pub fn Save(self: ?*anyopaque) i32 {
        return qtc.KSambaShareData_Save(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#remove)
    ///
    /// ``` self: QtC.KSambaShareData ```
    ///
    /// Returns: ``` ksambasharedata_enums.UserShareError ```
    pub fn Remove(self: ?*anyopaque) i32 {
        return qtc.KSambaShareData_Remove(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#operator-eq)
    ///
    /// ``` self: QtC.KSambaShareData, other: QtC.KSambaShareData ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KSambaShareData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KSambaShareData, other: QtC.KSambaShareData ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KSambaShareData_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#operator-not-eq)
    ///
    /// ``` self: QtC.KSambaShareData, other: QtC.KSambaShareData ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KSambaShareData_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#setGuestPermission)
    ///
    /// ``` self: QtC.KSambaShareData, permission: *const ksambasharedata_enums.GuestPermission ```
    ///
    /// Returns: ``` ksambasharedata_enums.UserShareError ```
    pub fn SetGuestPermission1(self: ?*anyopaque, permission: *const i32) i32 {
        return qtc.KSambaShareData_SetGuestPermission1(@ptrCast(self), @ptrCast(permission));
    }

    /// [Qt documentation](https://api.kde.org/ksambasharedata.html#dtor.KSambaShareData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSambaShareData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSambaShareData_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/ksambasharedata.html#types
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
