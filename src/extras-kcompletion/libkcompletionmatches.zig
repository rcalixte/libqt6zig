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

    /// New constructs a new KCompletionMatches object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: bool `
    ///
    pub fn New(sort: bool) KCompletionMatches {
        return .{ .ptr = qtc.KCompletionMatches_new(sort) };
    }

    /// New2 constructs a new KCompletionMatches object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KCompletionMatches `
    ///
    pub fn New2(param1: anytype) KCompletionMatches {
        comptime _ = @TypeOf(param1)._is_KCompletionMatches;
        return .{ .ptr = qtc.KCompletionMatches_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionMatches `
    ///
    /// ` param1: KCompletionMatches `
    ///
    pub fn OperatorAssign(self: KCompletionMatches, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KCompletionMatches;
        qtc.KCompletionMatches_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html#removeDuplicates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionMatches `
    ///
    pub fn RemoveDuplicates(self: KCompletionMatches) void {
        qtc.KCompletionMatches_RemoveDuplicates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html#list)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionMatches `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn List(self: KCompletionMatches, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletionMatches_List(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html#sorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionMatches `
    ///
    pub fn Sorting(self: KCompletionMatches) bool {
        return qtc.KCompletionMatches_Sorting(@ptrCast(self.ptr));
    }

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
    pub fn List1(self: KCompletionMatches, allocator: std.mem.Allocator, sort: bool) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletionMatches_List1(@ptrCast(self.ptr), sort);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcompletionmatches.html#dtor.KCompletionMatches)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCompletionMatches `
    ///
    pub fn Delete(self: KCompletionMatches) void {
        qtc.KCompletionMatches_Delete(@ptrCast(self.ptr));
    }
};
