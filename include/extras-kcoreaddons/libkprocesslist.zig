const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kprocesslist-kprocessinfo.html
pub const kprocesslist__kprocessinfo = struct {
    /// New constructs a new KProcessList::KProcessInfo object.
    ///
    ///
    pub fn New() QtC.KProcessList__KProcessInfo {
        return qtc.KProcessList__KProcessInfo_new();
    }

    /// New2 constructs a new KProcessList::KProcessInfo object.
    ///
    /// ``` pid: i64, command: []const u8, user: []const u8 ```
    pub fn New2(pid: i64, command: []const u8, user: []const u8) QtC.KProcessList__KProcessInfo {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };

        return qtc.KProcessList__KProcessInfo_new2(@intCast(pid), command_str, user_str);
    }

    /// New3 constructs a new KProcessList::KProcessInfo object.
    ///
    /// ``` pid: i64, command: []const u8, name: []const u8, user: []const u8 ```
    pub fn New3(pid: i64, command: []const u8, name: []const u8, user: []const u8) QtC.KProcessList__KProcessInfo {
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

        return qtc.KProcessList__KProcessInfo_new3(@intCast(pid), command_str, name_str, user_str);
    }

    /// New4 constructs a new KProcessList::KProcessInfo object.
    ///
    /// ``` other: QtC.KProcessList__KProcessInfo ```
    pub fn New4(other: ?*anyopaque) QtC.KProcessList__KProcessInfo {
        return qtc.KProcessList__KProcessInfo_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kprocesslist-kprocessinfo.html#operator-eq)
    ///
    /// ``` self: QtC.KProcessList__KProcessInfo, other: QtC.KProcessList__KProcessInfo ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KProcessList__KProcessInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kprocesslist-kprocessinfo.html#isValid)
    ///
    /// ``` self: QtC.KProcessList__KProcessInfo ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KProcessList__KProcessInfo_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kprocesslist-kprocessinfo.html#pid)
    ///
    /// ``` self: QtC.KProcessList__KProcessInfo ```
    pub fn Pid(self: ?*anyopaque) i64 {
        return qtc.KProcessList__KProcessInfo_Pid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kprocesslist-kprocessinfo.html#name)
    ///
    /// ``` self: QtC.KProcessList__KProcessInfo, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KProcessList__KProcessInfo_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocesslist::kprocessinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kprocesslist-kprocessinfo.html#user)
    ///
    /// ``` self: QtC.KProcessList__KProcessInfo, allocator: std.mem.Allocator ```
    pub fn User(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KProcessList__KProcessInfo_User(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocesslist::kprocessinfo.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kprocesslist-kprocessinfo.html#command)
    ///
    /// ``` self: QtC.KProcessList__KProcessInfo, allocator: std.mem.Allocator ```
    pub fn Command(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KProcessList__KProcessInfo_Command(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocesslist::kprocessinfo.Command: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KProcessList__KProcessInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KProcessList__KProcessInfo_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kprocesslist.html
pub const kprocesslist = struct {
    /// [Qt documentation](https://api.kde.org/kprocesslist.html#processInfoList)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ProcessInfoList(allocator: std.mem.Allocator) []QtC.KProcessList__KProcessInfo {
        const _arr: qtc.libqt_list = qtc.KProcessList_ProcessInfoList();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KProcessList__KProcessInfo, _arr.len) catch @panic("kprocesslist.ProcessInfoList: Memory allocation failed");
        const _data: [*]QtC.KProcessList__KProcessInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kprocesslist.html#processInfo)
    ///
    /// ``` param1: i64 ```
    pub fn ProcessInfo(param1: i64) QtC.KProcessList__KProcessInfo {
        return qtc.KProcessList_ProcessInfo(@intCast(param1));
    }
};
