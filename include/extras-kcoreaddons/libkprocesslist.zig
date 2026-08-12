const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html)
pub const KProcessList__KProcessInfo = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KProcessList__KProcessInfo,

    pub const _is_KProcessList__KProcessInfo = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KProcessList::KProcessInfo object in C++ memory
    ///
    pub fn new() KProcessList__KProcessInfo {
        return .{ .ptr = qtc.KProcessList__KProcessInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KProcessList::KProcessInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pid: i64 `
    ///
    /// ` _command: []const u8 `
    ///
    /// ` _user: []const u8 `
    ///
    pub fn new2(_pid: i64, _command: []const u8, _user: []const u8) KProcessList__KProcessInfo {
        const command_str = qtc.libqt_string{
            .len = _command.len,
            .data = _command.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = _user.len,
            .data = _user.ptr,
        };
        return .{ .ptr = qtc.KProcessList__KProcessInfo_new2(@bitCast(_pid), command_str, user_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KProcessList::KProcessInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pid: i64 `
    ///
    /// ` _command: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _user: []const u8 `
    ///
    pub fn new3(_pid: i64, _command: []const u8, _name: []const u8, _user: []const u8) KProcessList__KProcessInfo {
        const command_str = qtc.libqt_string{
            .len = _command.len,
            .data = _command.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = _user.len,
            .data = _user.ptr,
        };
        return .{ .ptr = qtc.KProcessList__KProcessInfo_new3(@bitCast(_pid), command_str, name_str, user_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KProcessList::KProcessInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KProcessList__KProcessInfo `
    ///
    pub fn new4(other: anytype) KProcessList__KProcessInfo {
        comptime _ = @TypeOf(other)._is_KProcessList__KProcessInfo;
        return .{ .ptr = qtc.KProcessList__KProcessInfo_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    /// ` other: KProcessList__KProcessInfo `
    ///
    pub fn operatorAssign(self: KProcessList__KProcessInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KProcessList__KProcessInfo;
        qtc.KProcessList__KProcessInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    pub fn isValid(self: KProcessList__KProcessInfo) bool {
        return qtc.KProcessList__KProcessInfo_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pid` instead
    ///
    pub const Pid = pid;

    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#pid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    pub fn pid(self: KProcessList__KProcessInfo) i64 {
        return qtc.KProcessList__KProcessInfo_Pid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KProcessList__KProcessInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KProcessList__KProcessInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProcessList__KProcessInfo.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `user` instead
    ///
    pub const User = user;

    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn user(self: KProcessList__KProcessInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KProcessList__KProcessInfo_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProcessList__KProcessInfo.user: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `command` instead
    ///
    pub const Command = command;

    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#command)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn command(self: KProcessList__KProcessInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KProcessList__KProcessInfo_Command(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProcessList__KProcessInfo.command: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    pub fn delete(self: KProcessList__KProcessInfo) void {
        qtc.KProcessList__KProcessInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kprocesslist.html)
pub const KProcessList = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kprocesslist.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KProcessList,

    pub const _is_KProcessList = {};

    /// ### DEPRECATED: Use `processInfoList` instead
    ///
    pub const ProcessInfoList = processInfoList;

    /// ### [Upstream resources](https://api.kde.org/kprocesslist.html#processInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn processInfoList(allocator: std.mem.Allocator) []KProcessList__KProcessInfo {
        const _arr: qtc.libqt_list = qtc.KProcessList_ProcessInfoList();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KProcessList__KProcessInfo, _arr.len) catch @panic("KProcessList.processInfoList: Memory allocation failed");
        const _data_val: [*]QtC.KProcessList__KProcessInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `processInfo` instead
    ///
    pub const ProcessInfo = processInfo;

    /// ### [Upstream resources](https://api.kde.org/kprocesslist.html#processInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` _pid: i64 `
    ///
    pub fn processInfo(_pid: i64) KProcessList__KProcessInfo {
        return .{ .ptr = qtc.KProcessList_ProcessInfo(@bitCast(_pid)) };
    }
};
