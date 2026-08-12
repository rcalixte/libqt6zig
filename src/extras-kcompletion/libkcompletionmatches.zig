const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

// Also inherits unprojectable KSortableList<QString>

/// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html)
pub const KCompletionMatches = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCompletionMatches,

    pub const _is_KCompletionMatches = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCompletionMatches object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: bool `
    ///
    pub fn new(sort: bool) KCompletionMatches {
        return .{ .ptr = qtc.KCompletionMatches_new(sort) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCompletionMatches object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KCompletionMatches `
    ///
    pub fn new2(param1: anytype) KCompletionMatches {
        comptime _ = @TypeOf(param1)._is_KCompletionMatches;
        return .{ .ptr = qtc.KCompletionMatches_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionMatches `
    ///
    /// ` param1: KCompletionMatches `
    ///
    pub fn operatorAssign(self: KCompletionMatches, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KCompletionMatches;
        qtc.KCompletionMatches_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `removeDuplicates` instead
    ///
    pub const RemoveDuplicates = removeDuplicates;

    /// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html#removeDuplicates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionMatches `
    ///
    pub fn removeDuplicates(self: KCompletionMatches) void {
        qtc.KCompletionMatches_RemoveDuplicates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `list` instead
    ///
    pub const List = list;

    /// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html#list)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionMatches `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn list(self: KCompletionMatches, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletionMatches_List(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KCompletionMatches.list: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCompletionMatches.list: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `sorting` instead
    ///
    pub const Sorting = sorting;

    /// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html#sorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionMatches `
    ///
    pub fn sorting(self: KCompletionMatches) bool {
        return qtc.KCompletionMatches_Sorting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `list1` instead
    ///
    pub const List1 = list1;

    /// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html#list)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionMatches `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sort: bool `
    ///
    pub fn list1(self: KCompletionMatches, allocator: std.mem.Allocator, sort: bool) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletionMatches_List1(@ptrCast(self.ptr), sort);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KCompletionMatches.list1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCompletionMatches.list1: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html#dtor.KCompletionMatches)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCompletionMatches `
    ///
    pub fn delete(self: KCompletionMatches) void {
        qtc.KCompletionMatches_Delete(@ptrCast(self.ptr));
    }
};
