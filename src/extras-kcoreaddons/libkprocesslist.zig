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

    /// New constructs a new KProcessList::KProcessInfo object.
    ///
    pub fn New() KProcessList__KProcessInfo {
        return .{ .ptr = qtc.KProcessList__KProcessInfo_new() };
    }

    /// New2 constructs a new KProcessList::KProcessInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pid: i64 `
    ///
    /// ` command: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn New2(pid: i64, command: []const u8, user: []const u8) KProcessList__KProcessInfo {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        return .{ .ptr = qtc.KProcessList__KProcessInfo_new2(@bitCast(pid), command_str, user_str) };
    }

    /// New3 constructs a new KProcessList::KProcessInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pid: i64 `
    ///
    /// ` command: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn New3(pid: i64, command: []const u8, name: []const u8, user: []const u8) KProcessList__KProcessInfo {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        return .{ .ptr = qtc.KProcessList__KProcessInfo_new3(@bitCast(pid), command_str, name_str, user_str) };
    }

    /// New4 constructs a new KProcessList::KProcessInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KProcessList__KProcessInfo `
    ///
    pub fn New4(other: anytype) KProcessList__KProcessInfo {
        comptime _ = @TypeOf(other)._is_KProcessList__KProcessInfo;
        return .{ .ptr = qtc.KProcessList__KProcessInfo_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    /// ` other: KProcessList__KProcessInfo `
    ///
    pub fn OperatorAssign(self: KProcessList__KProcessInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KProcessList__KProcessInfo;
        qtc.KProcessList__KProcessInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    pub fn IsValid(self: KProcessList__KProcessInfo) bool {
        return qtc.KProcessList__KProcessInfo_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#pid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    pub fn Pid(self: KProcessList__KProcessInfo) i64 {
        return qtc.KProcessList__KProcessInfo_Pid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KProcessList__KProcessInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KProcessList__KProcessInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocesslist__kprocessinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: KProcessList__KProcessInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KProcessList__KProcessInfo_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocesslist__kprocessinfo.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#command)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Command(self: KProcessList__KProcessInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KProcessList__KProcessInfo_Command(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocesslist__kprocessinfo.Command: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KProcessList__KProcessInfo `
    ///
    pub fn Delete(self: KProcessList__KProcessInfo) void {
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

    /// ### [Upstream resources](https://api.kde.org/kprocesslist.html#processInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProcessInfoList(allocator: std.mem.Allocator) []KProcessList__KProcessInfo {
        const _arr: qtc.libqt_list = qtc.KProcessList_ProcessInfoList();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KProcessList__KProcessInfo, _arr.len) catch @panic("kprocesslist.ProcessInfoList: Memory allocation failed");
        const _data: [*]QtC.KProcessList__KProcessInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprocesslist.html#processInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: i64 `
    ///
    pub fn ProcessInfo(param1: i64) KProcessList__KProcessInfo {
        return .{ .ptr = qtc.KProcessList_ProcessInfo(@bitCast(param1)) };
    }
};
