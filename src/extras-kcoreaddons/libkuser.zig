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

    /// New constructs a new KUser object.
    ///
    pub fn New() KUser {
        return .{ .ptr = qtc.KUser_new() };
    }

    /// New2 constructs a new KUser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uid: u32 `
    ///
    pub fn New2(uid: u32) KUser {
        return .{ .ptr = qtc.KUser_new2(uid) };
    }

    /// New3 constructs a new KUser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New3(name: []const u8) KUser {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KUser_new3(name_str) };
    }

    /// New4 constructs a new KUser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn New4(name: [:0]const u8) KUser {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.KUser_new4(name_Cstring) };
    }

    /// New5 constructs a new KUser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` user: KUser `
    ///
    pub fn New5(user: anytype) KUser {
        comptime _ = @TypeOf(user)._is_KUser;
        return .{ .ptr = qtc.KUser_new5(@ptrCast(user.ptr)) };
    }

    /// New6 constructs a new KUser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: kuser_enums.UIDMode `
    ///
    pub fn New6(mode: i32) KUser {
        return .{ .ptr = qtc.KUser_new6(@bitCast(mode)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` user: KUser `
    ///
    pub fn OperatorAssign(self: KUser, user: anytype) void {
        comptime _ = @TypeOf(user)._is_KUser;
        qtc.KUser_OperatorAssign(@ptrCast(self.ptr), @ptrCast(user.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` user: KUser `
    ///
    pub fn OperatorEqual(self: KUser, user: anytype) bool {
        comptime _ = @TypeOf(user)._is_KUser;
        return qtc.KUser_OperatorEqual(@ptrCast(self.ptr), @ptrCast(user.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` user: KUser `
    ///
    pub fn OperatorNotEqual(self: KUser, user: anytype) bool {
        comptime _ = @TypeOf(user)._is_KUser;
        return qtc.KUser_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(user.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    pub fn IsValid(self: KUser) bool {
        return qtc.KUser_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#isSuperUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    pub fn IsSuperUser(self: KUser) bool {
        return qtc.KUser_IsSuperUser(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#loginName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LoginName(self: KUser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUser_LoginName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kuser.LoginName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#homeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HomeDir(self: KUser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUser_HomeDir(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kuser.HomeDir: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#faceIconPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FaceIconPath(self: KUser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUser_FaceIconPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kuser.FaceIconPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#shell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Shell(self: KUser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUser_Shell(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kuser.Shell: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#groups)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Groups(self: KUser, allocator: std.mem.Allocator) []KUserGroup {
        const _arr: qtc.libqt_list = qtc.KUser_Groups(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUserGroup, _arr.len) catch @panic("kuser.Groups: Memory allocation failed");
        const _data: [*]QtC.KUserGroup = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#groupNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GroupNames(self: KUser, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUser_GroupNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kuser.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUser `
    ///
    /// ` which: kuser_enums.UserProperty `
    ///
    pub fn Property(self: KUser, which: i32) QVariant {
        return .{ .ptr = qtc.KUser_Property(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#allUsers)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllUsers(allocator: std.mem.Allocator) []KUser {
        const _arr: qtc.libqt_list = qtc.KUser_AllUsers();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUser, _arr.len) catch @panic("kuser.AllUsers: Memory allocation failed");
        const _data: [*]QtC.KUser = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#allUserNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllUserNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUser_AllUserNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    pub fn Groups1(self: KUser, allocator: std.mem.Allocator, maxCount: u32) []KUserGroup {
        const _arr: qtc.libqt_list = qtc.KUser_Groups1(@ptrCast(self.ptr), @bitCast(maxCount));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUserGroup, _arr.len) catch @panic("kuser.Groups1: Memory allocation failed");
        const _data: [*]QtC.KUserGroup = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn GroupNames1(self: KUser, allocator: std.mem.Allocator, maxCount: u32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUser_GroupNames1(@ptrCast(self.ptr), @bitCast(maxCount));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kuser.html#allUsers)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxCount: u32 `
    ///
    pub fn AllUsers1(allocator: std.mem.Allocator, maxCount: u32) []KUser {
        const _arr: qtc.libqt_list = qtc.KUser_AllUsers1(@bitCast(maxCount));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUser, _arr.len) catch @panic("kuser.AllUsers1: Memory allocation failed");
        const _data: [*]QtC.KUser = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kuser.html#allUserNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxCount: u32 `
    ///
    pub fn AllUserNames1(allocator: std.mem.Allocator, maxCount: u32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUser_AllUserNames1(@bitCast(maxCount));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kuser.html#dtor.KUser)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KUser `
    ///
    pub fn Delete(self: KUser) void {
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

    /// New constructs a new KUserGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New(name: []const u8) KUserGroup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KUserGroup_new(name_str) };
    }

    /// New2 constructs a new KUserGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn New2(name: [:0]const u8) KUserGroup {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.KUserGroup_new2(name_Cstring) };
    }

    /// New3 constructs a new KUserGroup object.
    ///
    pub fn New3() KUserGroup {
        return .{ .ptr = qtc.KUserGroup_new3() };
    }

    /// New4 constructs a new KUserGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` gid: u32 `
    ///
    pub fn New4(gid: u32) KUserGroup {
        return .{ .ptr = qtc.KUserGroup_new4(gid) };
    }

    /// New5 constructs a new KUserGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` group: KUserGroup `
    ///
    pub fn New5(group: anytype) KUserGroup {
        comptime _ = @TypeOf(group)._is_KUserGroup;
        return .{ .ptr = qtc.KUserGroup_new5(@ptrCast(group.ptr)) };
    }

    /// New6 constructs a new KUserGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: kuser_enums.UIDMode `
    ///
    pub fn New6(mode: i32) KUserGroup {
        return .{ .ptr = qtc.KUserGroup_new6(@bitCast(mode)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` group: KUserGroup `
    ///
    pub fn OperatorAssign(self: KUserGroup, group: anytype) void {
        comptime _ = @TypeOf(group)._is_KUserGroup;
        qtc.KUserGroup_OperatorAssign(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` group: KUserGroup `
    ///
    pub fn OperatorEqual(self: KUserGroup, group: anytype) bool {
        comptime _ = @TypeOf(group)._is_KUserGroup;
        return qtc.KUserGroup_OperatorEqual(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` group: KUserGroup `
    ///
    pub fn OperatorNotEqual(self: KUserGroup, group: anytype) bool {
        comptime _ = @TypeOf(group)._is_KUserGroup;
        return qtc.KUserGroup_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    pub fn IsValid(self: KUserGroup) bool {
        return qtc.KUserGroup_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KUserGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUserGroup_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kusergroup.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#users)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Users(self: KUserGroup, allocator: std.mem.Allocator) []KUser {
        const _arr: qtc.libqt_list = qtc.KUserGroup_Users(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUser, _arr.len) catch @panic("kusergroup.Users: Memory allocation failed");
        const _data: [*]QtC.KUser = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#userNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUserGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserNames(self: KUserGroup, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUserGroup_UserNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#allGroups)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllGroups(allocator: std.mem.Allocator) []KUserGroup {
        const _arr: qtc.libqt_list = qtc.KUserGroup_AllGroups();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUserGroup, _arr.len) catch @panic("kusergroup.AllGroups: Memory allocation failed");
        const _data: [*]QtC.KUserGroup = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#allGroupNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllGroupNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUserGroup_AllGroupNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    pub fn Users1(self: KUserGroup, allocator: std.mem.Allocator, maxCount: u32) []KUser {
        const _arr: qtc.libqt_list = qtc.KUserGroup_Users1(@ptrCast(self.ptr), @bitCast(maxCount));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUser, _arr.len) catch @panic("kusergroup.Users1: Memory allocation failed");
        const _data: [*]QtC.KUser = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn UserNames1(self: KUserGroup, allocator: std.mem.Allocator, maxCount: u32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUserGroup_UserNames1(@ptrCast(self.ptr), @bitCast(maxCount));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#allGroups)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxCount: u32 `
    ///
    pub fn AllGroups1(allocator: std.mem.Allocator, maxCount: u32) []KUserGroup {
        const _arr: qtc.libqt_list = qtc.KUserGroup_AllGroups1(@bitCast(maxCount));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUserGroup, _arr.len) catch @panic("kusergroup.AllGroups1: Memory allocation failed");
        const _data: [*]QtC.KUserGroup = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#allGroupNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxCount: u32 `
    ///
    pub fn AllGroupNames1(allocator: std.mem.Allocator, maxCount: u32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUserGroup_AllGroupNames1(@bitCast(maxCount));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kusergroup.html#dtor.KUserGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KUserGroup `
    ///
    pub fn Delete(self: KUserGroup) void {
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
