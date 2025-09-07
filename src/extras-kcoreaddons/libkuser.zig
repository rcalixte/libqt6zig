const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kuser_enums = enums;
const std = @import("std");

/// https://api.kde.org/kuser.html
pub const kuser = struct {
    /// New constructs a new KUser object.
    ///
    ///
    pub fn New() QtC.KUser {
        return qtc.KUser_new();
    }

    /// New2 constructs a new KUser object.
    ///
    /// ``` uid: u32 ```
    pub fn New2(uid: u32) QtC.KUser {
        return qtc.KUser_new2(uid);
    }

    /// New3 constructs a new KUser object.
    ///
    /// ``` name: []const u8 ```
    pub fn New3(name: []const u8) QtC.KUser {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.KUser_new3(name_str);
    }

    /// New4 constructs a new KUser object.
    ///
    /// ``` name: []const u8 ```
    pub fn New4(name: []const u8) QtC.KUser {
        const name_Cstring = name.ptr;

        return qtc.KUser_new4(name_Cstring);
    }

    /// New5 constructs a new KUser object.
    ///
    /// ``` user: QtC.KUser ```
    pub fn New5(user: ?*anyopaque) QtC.KUser {
        return qtc.KUser_new5(@ptrCast(user));
    }

    /// New6 constructs a new KUser object.
    ///
    /// ``` mode: kuser_enums.UIDMode ```
    pub fn New6(mode: i32) QtC.KUser {
        return qtc.KUser_new6(@intCast(mode));
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#operator-eq)
    ///
    /// ``` self: QtC.KUser, user: QtC.KUser ```
    pub fn OperatorAssign(self: ?*anyopaque, user: ?*anyopaque) void {
        qtc.KUser_OperatorAssign(@ptrCast(self), @ptrCast(user));
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KUser, user: QtC.KUser ```
    pub fn OperatorEqual(self: ?*anyopaque, user: ?*anyopaque) bool {
        return qtc.KUser_OperatorEqual(@ptrCast(self), @ptrCast(user));
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#operator-not-eq)
    ///
    /// ``` self: QtC.KUser, user: QtC.KUser ```
    pub fn OperatorNotEqual(self: ?*anyopaque, user: ?*anyopaque) bool {
        return qtc.KUser_OperatorNotEqual(@ptrCast(self), @ptrCast(user));
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#isValid)
    ///
    /// ``` self: QtC.KUser ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KUser_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#isSuperUser)
    ///
    /// ``` self: QtC.KUser ```
    pub fn IsSuperUser(self: ?*anyopaque) bool {
        return qtc.KUser_IsSuperUser(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#loginName)
    ///
    /// ``` self: QtC.KUser, allocator: std.mem.Allocator ```
    pub fn LoginName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KUser_LoginName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kuser.LoginName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#homeDir)
    ///
    /// ``` self: QtC.KUser, allocator: std.mem.Allocator ```
    pub fn HomeDir(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KUser_HomeDir(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kuser.HomeDir: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#faceIconPath)
    ///
    /// ``` self: QtC.KUser, allocator: std.mem.Allocator ```
    pub fn FaceIconPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KUser_FaceIconPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kuser.FaceIconPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#shell)
    ///
    /// ``` self: QtC.KUser, allocator: std.mem.Allocator ```
    pub fn Shell(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KUser_Shell(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kuser.Shell: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#groups)
    ///
    /// ``` self: QtC.KUser, allocator: std.mem.Allocator ```
    pub fn Groups(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KUserGroup {
        const _arr: qtc.libqt_list = qtc.KUser_Groups(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KUserGroup, _arr.len) catch @panic("kuser.Groups: Memory allocation failed");
        const _data: [*]QtC.KUserGroup = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#groupNames)
    ///
    /// ``` self: QtC.KUser, allocator: std.mem.Allocator ```
    pub fn GroupNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUser_GroupNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kuser.GroupNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kuser.GroupNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#property)
    ///
    /// ``` self: QtC.KUser, which: kuser_enums.UserProperty ```
    pub fn Property(self: ?*anyopaque, which: i32) QtC.QVariant {
        return qtc.KUser_Property(@ptrCast(self), @intCast(which));
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#allUsers)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AllUsers(allocator: std.mem.Allocator) []QtC.KUser {
        const _arr: qtc.libqt_list = qtc.KUser_AllUsers();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KUser, _arr.len) catch @panic("kuser.AllUsers: Memory allocation failed");
        const _data: [*]QtC.KUser = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#allUserNames)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AllUserNames(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUser_AllUserNames();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kuser.AllUserNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kuser.AllUserNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#groups)
    ///
    /// ``` self: QtC.KUser, maxCount: u32, allocator: std.mem.Allocator ```
    pub fn Groups1(self: ?*anyopaque, maxCount: u32, allocator: std.mem.Allocator) []QtC.KUserGroup {
        const _arr: qtc.libqt_list = qtc.KUser_Groups1(@ptrCast(self), @intCast(maxCount));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KUserGroup, _arr.len) catch @panic("kuser.Groups1: Memory allocation failed");
        const _data: [*]QtC.KUserGroup = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#groupNames)
    ///
    /// ``` self: QtC.KUser, maxCount: u32, allocator: std.mem.Allocator ```
    pub fn GroupNames1(self: ?*anyopaque, maxCount: u32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUser_GroupNames1(@ptrCast(self), @intCast(maxCount));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kuser.GroupNames1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kuser.GroupNames1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#allUsers)
    ///
    /// ``` maxCount: u32, allocator: std.mem.Allocator ```
    pub fn AllUsers1(maxCount: u32, allocator: std.mem.Allocator) []QtC.KUser {
        const _arr: qtc.libqt_list = qtc.KUser_AllUsers1(@intCast(maxCount));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KUser, _arr.len) catch @panic("kuser.AllUsers1: Memory allocation failed");
        const _data: [*]QtC.KUser = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#allUserNames)
    ///
    /// ``` maxCount: u32, allocator: std.mem.Allocator ```
    pub fn AllUserNames1(maxCount: u32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUser_AllUserNames1(@intCast(maxCount));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kuser.AllUserNames1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kuser.AllUserNames1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kuser.html#dtor.KUser)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KUser ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KUser_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kusergroup.html
pub const kusergroup = struct {
    /// New constructs a new KUserGroup object.
    ///
    /// ``` name: []const u8 ```
    pub fn New(name: []const u8) QtC.KUserGroup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.KUserGroup_new(name_str);
    }

    /// New2 constructs a new KUserGroup object.
    ///
    /// ``` name: []const u8 ```
    pub fn New2(name: []const u8) QtC.KUserGroup {
        const name_Cstring = name.ptr;

        return qtc.KUserGroup_new2(name_Cstring);
    }

    /// New3 constructs a new KUserGroup object.
    ///
    ///
    pub fn New3() QtC.KUserGroup {
        return qtc.KUserGroup_new3();
    }

    /// New4 constructs a new KUserGroup object.
    ///
    /// ``` gid: u32 ```
    pub fn New4(gid: u32) QtC.KUserGroup {
        return qtc.KUserGroup_new4(gid);
    }

    /// New5 constructs a new KUserGroup object.
    ///
    /// ``` group: QtC.KUserGroup ```
    pub fn New5(group: ?*anyopaque) QtC.KUserGroup {
        return qtc.KUserGroup_new5(@ptrCast(group));
    }

    /// New6 constructs a new KUserGroup object.
    ///
    /// ``` mode: kuser_enums.UIDMode ```
    pub fn New6(mode: i32) QtC.KUserGroup {
        return qtc.KUserGroup_new6(@intCast(mode));
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#operator-eq)
    ///
    /// ``` self: QtC.KUserGroup, group: QtC.KUserGroup ```
    pub fn OperatorAssign(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.KUserGroup_OperatorAssign(@ptrCast(self), @ptrCast(group));
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KUserGroup, group: QtC.KUserGroup ```
    pub fn OperatorEqual(self: ?*anyopaque, group: ?*anyopaque) bool {
        return qtc.KUserGroup_OperatorEqual(@ptrCast(self), @ptrCast(group));
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#operator-not-eq)
    ///
    /// ``` self: QtC.KUserGroup, group: QtC.KUserGroup ```
    pub fn OperatorNotEqual(self: ?*anyopaque, group: ?*anyopaque) bool {
        return qtc.KUserGroup_OperatorNotEqual(@ptrCast(self), @ptrCast(group));
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#isValid)
    ///
    /// ``` self: QtC.KUserGroup ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KUserGroup_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#name)
    ///
    /// ``` self: QtC.KUserGroup, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KUserGroup_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kusergroup.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#users)
    ///
    /// ``` self: QtC.KUserGroup, allocator: std.mem.Allocator ```
    pub fn Users(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KUser {
        const _arr: qtc.libqt_list = qtc.KUserGroup_Users(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KUser, _arr.len) catch @panic("kusergroup.Users: Memory allocation failed");
        const _data: [*]QtC.KUser = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#userNames)
    ///
    /// ``` self: QtC.KUserGroup, allocator: std.mem.Allocator ```
    pub fn UserNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUserGroup_UserNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kusergroup.UserNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kusergroup.UserNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#allGroups)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AllGroups(allocator: std.mem.Allocator) []QtC.KUserGroup {
        const _arr: qtc.libqt_list = qtc.KUserGroup_AllGroups();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KUserGroup, _arr.len) catch @panic("kusergroup.AllGroups: Memory allocation failed");
        const _data: [*]QtC.KUserGroup = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#allGroupNames)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AllGroupNames(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUserGroup_AllGroupNames();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kusergroup.AllGroupNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kusergroup.AllGroupNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#users)
    ///
    /// ``` self: QtC.KUserGroup, maxCount: u32, allocator: std.mem.Allocator ```
    pub fn Users1(self: ?*anyopaque, maxCount: u32, allocator: std.mem.Allocator) []QtC.KUser {
        const _arr: qtc.libqt_list = qtc.KUserGroup_Users1(@ptrCast(self), @intCast(maxCount));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KUser, _arr.len) catch @panic("kusergroup.Users1: Memory allocation failed");
        const _data: [*]QtC.KUser = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#userNames)
    ///
    /// ``` self: QtC.KUserGroup, maxCount: u32, allocator: std.mem.Allocator ```
    pub fn UserNames1(self: ?*anyopaque, maxCount: u32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUserGroup_UserNames1(@ptrCast(self), @intCast(maxCount));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kusergroup.UserNames1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kusergroup.UserNames1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#allGroups)
    ///
    /// ``` maxCount: u32, allocator: std.mem.Allocator ```
    pub fn AllGroups1(maxCount: u32, allocator: std.mem.Allocator) []QtC.KUserGroup {
        const _arr: qtc.libqt_list = qtc.KUserGroup_AllGroups1(@intCast(maxCount));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KUserGroup, _arr.len) catch @panic("kusergroup.AllGroups1: Memory allocation failed");
        const _data: [*]QtC.KUserGroup = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#allGroupNames)
    ///
    /// ``` maxCount: u32, allocator: std.mem.Allocator ```
    pub fn AllGroupNames1(maxCount: u32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUserGroup_AllGroupNames1(@intCast(maxCount));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kusergroup.AllGroupNames1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kusergroup.AllGroupNames1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kusergroup.html#dtor.KUserGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KUserGroup ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KUserGroup_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kuser.html#types
pub const enums = struct {
    pub const UIDMode = enum {
        pub const UseEffectiveUID: i32 = 0;
        pub const UseRealUserID: i32 = 1;
    };

    pub const UserProperty = enum {
        pub const FullName: i32 = 0;
        pub const RoomNumber: i32 = 1;
        pub const WorkPhone: i32 = 2;
        pub const HomePhone: i32 = 3;
    };
};
