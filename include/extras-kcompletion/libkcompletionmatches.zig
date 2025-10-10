const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kcompletionmatches.html
pub const kcompletionmatches = struct {
    /// New constructs a new KCompletionMatches object.
    ///
    /// ``` sort: bool ```
    pub fn New(sort: bool) QtC.KCompletionMatches {
        return qtc.KCompletionMatches_new(sort);
    }

    /// New2 constructs a new KCompletionMatches object.
    ///
    /// ``` param1: QtC.KCompletionMatches ```
    pub fn New2(param1: ?*anyopaque) QtC.KCompletionMatches {
        return qtc.KCompletionMatches_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionmatches.html#operator-eq)
    ///
    /// ``` self: QtC.KCompletionMatches, param1: QtC.KCompletionMatches ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KCompletionMatches_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionmatches.html#removeDuplicates)
    ///
    /// ``` self: QtC.KCompletionMatches ```
    pub fn RemoveDuplicates(self: ?*anyopaque) void {
        qtc.KCompletionMatches_RemoveDuplicates(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionmatches.html#list)
    ///
    /// ``` self: QtC.KCompletionMatches, allocator: std.mem.Allocator ```
    pub fn List(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletionMatches_List(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kcompletionmatches.List: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcompletionmatches.List: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompletionmatches.html#sorting)
    ///
    /// ``` self: QtC.KCompletionMatches ```
    pub fn Sorting(self: ?*anyopaque) bool {
        return qtc.KCompletionMatches_Sorting(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionmatches.html#list)
    ///
    /// ``` self: QtC.KCompletionMatches, sort: bool, allocator: std.mem.Allocator ```
    pub fn List1(self: ?*anyopaque, sort: bool, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletionMatches_List1(@ptrCast(self), sort);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kcompletionmatches.List1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcompletionmatches.List1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompletionmatches.html#dtor.KCompletionMatches)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KCompletionMatches ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCompletionMatches_Delete(@ptrCast(self));
    }
};
