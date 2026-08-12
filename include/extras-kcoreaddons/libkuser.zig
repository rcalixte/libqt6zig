const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const kuser_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kuser.html)
pub const KUser = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kuser.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUser,

    pub const _is_KUser = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KUser object in C++ memory
    ///
    pub fn new() KUser {
        return .{ .ptr = qtc.KUser_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KUser object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uid: u32 `
    ///
    pub fn new2(uid: u32) KUser {
        return .{ .ptr = qtc.KUser_new2(uid) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KUser object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn new3(name: []const u8) KUser {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KUser_new3(name_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KUser object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn new4(name: [:0]const u8) KUser {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.KUser_new4(name_Cstring) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KUser object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` user: KUser `
    ///
    pub fn new5(user: anytype) KUser {
        comptime _ = @TypeOf(user)._is_KUser;
        return .{ .ptr = qtc.KUser_new5(@ptrCast(user.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KUser object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: kuser_enums.UIDMode `
    ///
    pub fn new6(mode: i32) KUser {
        return .{ .ptr = qtc.KUser_new6(@bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` user: KUser `
    ///
    pub fn operatorAssign(self: KUser, user: anytype) void {
        comptime _ = @TypeOf(user)._is_KUser;
        qtc.KUser_OperatorAssign(@ptrCast(self.ptr), @ptrCast(user.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` user: KUser `
    ///
    pub fn operatorEqual(self: KUser, user: anytype) bool {
        comptime _ = @TypeOf(user)._is_KUser;
        return qtc.KUser_OperatorEqual(@ptrCast(self.ptr), @ptrCast(user.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` user: KUser `
    ///
    pub fn operatorNotEqual(self: KUser, user: anytype) bool {
        comptime _ = @TypeOf(user)._is_KUser;
        return qtc.KUser_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(user.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    pub fn isValid(self: KUser) bool {
        return qtc.KUser_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSuperUser` instead
    ///
    pub const IsSuperUser = isSuperUser;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#isSuperUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    pub fn isSuperUser(self: KUser) bool {
        return qtc.KUser_IsSuperUser(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loginName` instead
    ///
    pub const LoginName = loginName;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#loginName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn loginName(self: KUser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUser_LoginName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUser.loginName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `homeDir` instead
    ///
    pub const HomeDir = homeDir;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#homeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn homeDir(self: KUser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUser_HomeDir(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUser.homeDir: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `faceIconPath` instead
    ///
    pub const FaceIconPath = faceIconPath;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#faceIconPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn faceIconPath(self: KUser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUser_FaceIconPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUser.faceIconPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `shell` instead
    ///
    pub const Shell = shell;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#shell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn shell(self: KUser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUser_Shell(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUser.shell: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `groups` instead
    ///
    pub const Groups = groups;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#groups)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn groups(self: KUser, allocator: std.mem.Allocator) []KUserGroup {
        const _arr: qtc.libqt_list = qtc.KUser_Groups(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUserGroup, _arr.len) catch @panic("KUser.groups: Memory allocation failed");
        const _data_val: [*]QtC.KUserGroup = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `groupNames` instead
    ///
    pub const GroupNames = groupNames;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#groupNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn groupNames(self: KUser, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUser_GroupNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUser.groupNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUser.groupNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` which: kuser_enums.UserProperty `
    ///
    pub fn property(self: KUser, which: i32) QVariant {
        return .{ .ptr = qtc.KUser_Property(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// ### DEPRECATED: Use `allUsers` instead
    ///
    pub const AllUsers = allUsers;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#allUsers)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allUsers(allocator: std.mem.Allocator) []KUser {
        const _arr: qtc.libqt_list = qtc.KUser_AllUsers();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUser, _arr.len) catch @panic("KUser.allUsers: Memory allocation failed");
        const _data_val: [*]QtC.KUser = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `allUserNames` instead
    ///
    pub const AllUserNames = allUserNames;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#allUserNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allUserNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUser_AllUserNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUser.allUserNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUser.allUserNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `groups1` instead
    ///
    pub const Groups1 = groups1;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#groups)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxCount: u32 `
    ///
    pub fn groups1(self: KUser, allocator: std.mem.Allocator, maxCount: u32) []KUserGroup {
        const _arr: qtc.libqt_list = qtc.KUser_Groups1(@ptrCast(self.ptr), @bitCast(maxCount));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUserGroup, _arr.len) catch @panic("KUser.groups1: Memory allocation failed");
        const _data_val: [*]QtC.KUserGroup = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `groupNames1` instead
    ///
    pub const GroupNames1 = groupNames1;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#groupNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxCount: u32 `
    ///
    pub fn groupNames1(self: KUser, allocator: std.mem.Allocator, maxCount: u32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUser_GroupNames1(@ptrCast(self.ptr), @bitCast(maxCount));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUser.groupNames1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUser.groupNames1: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `allUsers1` instead
    ///
    pub const AllUsers1 = allUsers1;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#allUsers)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxCount: u32 `
    ///
    pub fn allUsers1(allocator: std.mem.Allocator, maxCount: u32) []KUser {
        const _arr: qtc.libqt_list = qtc.KUser_AllUsers1(@bitCast(maxCount));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUser, _arr.len) catch @panic("KUser.allUsers1: Memory allocation failed");
        const _data_val: [*]QtC.KUser = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `allUserNames1` instead
    ///
    pub const AllUserNames1 = allUserNames1;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#allUserNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxCount: u32 `
    ///
    pub fn allUserNames1(allocator: std.mem.Allocator, maxCount: u32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUser_AllUserNames1(@bitCast(maxCount));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUser.allUserNames1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUser.allUserNames1: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#dtor.KUser)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KUser `
    ///
    pub fn delete(self: KUser) void {
        qtc.KUser_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kusergroup.html)
pub const KUserGroup = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kusergroup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUserGroup,

    pub const _is_KUserGroup = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KUserGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new(_name: []const u8) KUserGroup {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KUserGroup_new(name_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KUserGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn new2(_name: [:0]const u8) KUserGroup {
        const name_Cstring = _name.ptr;
        return .{ .ptr = qtc.KUserGroup_new2(name_Cstring) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KUserGroup object in C++ memory
    ///
    pub fn new3() KUserGroup {
        return .{ .ptr = qtc.KUserGroup_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KUserGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` gid: u32 `
    ///
    pub fn new4(gid: u32) KUserGroup {
        return .{ .ptr = qtc.KUserGroup_new4(gid) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KUserGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` group: KUserGroup `
    ///
    pub fn new5(group: anytype) KUserGroup {
        comptime _ = @TypeOf(group)._is_KUserGroup;
        return .{ .ptr = qtc.KUserGroup_new5(@ptrCast(group.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KUserGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: kuser_enums.UIDMode `
    ///
    pub fn new6(mode: i32) KUserGroup {
        return .{ .ptr = qtc.KUserGroup_new6(@bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` group: KUserGroup `
    ///
    pub fn operatorAssign(self: KUserGroup, group: anytype) void {
        comptime _ = @TypeOf(group)._is_KUserGroup;
        qtc.KUserGroup_OperatorAssign(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` group: KUserGroup `
    ///
    pub fn operatorEqual(self: KUserGroup, group: anytype) bool {
        comptime _ = @TypeOf(group)._is_KUserGroup;
        return qtc.KUserGroup_OperatorEqual(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` group: KUserGroup `
    ///
    pub fn operatorNotEqual(self: KUserGroup, group: anytype) bool {
        comptime _ = @TypeOf(group)._is_KUserGroup;
        return qtc.KUserGroup_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    pub fn isValid(self: KUserGroup) bool {
        return qtc.KUserGroup_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KUserGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUserGroup_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUserGroup.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `users` instead
    ///
    pub const Users = users;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#users)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn users(self: KUserGroup, allocator: std.mem.Allocator) []KUser {
        const _arr: qtc.libqt_list = qtc.KUserGroup_Users(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUser, _arr.len) catch @panic("KUserGroup.users: Memory allocation failed");
        const _data_val: [*]QtC.KUser = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `userNames` instead
    ///
    pub const UserNames = userNames;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#userNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn userNames(self: KUserGroup, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUserGroup_UserNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUserGroup.userNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUserGroup.userNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `allGroups` instead
    ///
    pub const AllGroups = allGroups;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#allGroups)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allGroups(allocator: std.mem.Allocator) []KUserGroup {
        const _arr: qtc.libqt_list = qtc.KUserGroup_AllGroups();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUserGroup, _arr.len) catch @panic("KUserGroup.allGroups: Memory allocation failed");
        const _data_val: [*]QtC.KUserGroup = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `allGroupNames` instead
    ///
    pub const AllGroupNames = allGroupNames;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#allGroupNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allGroupNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUserGroup_AllGroupNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUserGroup.allGroupNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUserGroup.allGroupNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `users1` instead
    ///
    pub const Users1 = users1;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#users)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxCount: u32 `
    ///
    pub fn users1(self: KUserGroup, allocator: std.mem.Allocator, maxCount: u32) []KUser {
        const _arr: qtc.libqt_list = qtc.KUserGroup_Users1(@ptrCast(self.ptr), @bitCast(maxCount));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUser, _arr.len) catch @panic("KUserGroup.users1: Memory allocation failed");
        const _data_val: [*]QtC.KUser = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `userNames1` instead
    ///
    pub const UserNames1 = userNames1;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#userNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxCount: u32 `
    ///
    pub fn userNames1(self: KUserGroup, allocator: std.mem.Allocator, maxCount: u32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUserGroup_UserNames1(@ptrCast(self.ptr), @bitCast(maxCount));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUserGroup.userNames1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUserGroup.userNames1: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `allGroups1` instead
    ///
    pub const AllGroups1 = allGroups1;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#allGroups)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxCount: u32 `
    ///
    pub fn allGroups1(allocator: std.mem.Allocator, maxCount: u32) []KUserGroup {
        const _arr: qtc.libqt_list = qtc.KUserGroup_AllGroups1(@bitCast(maxCount));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUserGroup, _arr.len) catch @panic("KUserGroup.allGroups1: Memory allocation failed");
        const _data_val: [*]QtC.KUserGroup = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `allGroupNames1` instead
    ///
    pub const AllGroupNames1 = allGroupNames1;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#allGroupNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxCount: u32 `
    ///
    pub fn allGroupNames1(allocator: std.mem.Allocator, maxCount: u32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUserGroup_AllGroupNames1(@bitCast(maxCount));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUserGroup.allGroupNames1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUserGroup.allGroupNames1: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#dtor.KUserGroup)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KUserGroup `
    ///
    pub fn delete(self: KUserGroup) void {
        qtc.KUserGroup_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kuser.html#public-types)
pub const enums = struct {
    pub const UIDMode = enum(i32) {
        pub const UseEffectiveUID: i32 = 0;
        pub const UseRealUserID: i32 = 1;
    };

    pub const UserProperty = enum(i32) {
        pub const FullName: i32 = 0;
        pub const RoomNumber: i32 = 1;
        pub const WorkPhone: i32 = 2;
        pub const HomePhone: i32 = 3;
    };
};
