const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-forum.html)
pub const Attica__Forum = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-forum.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Forum,

    pub const _is_Attica__Forum = {};

    /// New constructs a new Attica::Forum object.
    ///
    pub fn New() Attica__Forum {
        return .{ .ptr = qtc.Attica__Forum_new() };
    }

    /// New2 constructs a new Attica::Forum object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Forum `
    ///
    pub fn New2(other: anytype) Attica__Forum {
        comptime _ = @TypeOf(other)._is_Attica__Forum;
        return .{ .ptr = qtc.Attica__Forum_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` other: Attica__Forum `
    ///
    pub fn OperatorAssign(self: Attica__Forum, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Forum;
        qtc.Attica__Forum_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Forum, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Forum_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Forum, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Forum_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__forum.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__Forum, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Forum_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__Forum, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Forum_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__forum.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: Attica__Forum, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Attica__Forum_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Attica__Forum, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Forum_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__forum.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` date: QDateTime `
    ///
    pub fn SetDate(self: Attica__Forum, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Attica__Forum_SetDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    pub fn Date(self: Attica__Forum) QDateTime {
        return .{ .ptr = qtc.Attica__Forum_Date(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` icon: QUrl `
    ///
    pub fn SetIcon(self: Attica__Forum, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QUrl;
        qtc.Attica__Forum_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    pub fn Icon(self: Attica__Forum) QUrl {
        return .{ .ptr = qtc.Attica__Forum_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setChildCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` childCount: i32 `
    ///
    pub fn SetChildCount(self: Attica__Forum, childCount: i32) void {
        qtc.Attica__Forum_SetChildCount(@ptrCast(self.ptr), @bitCast(childCount));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    pub fn ChildCount(self: Attica__Forum) i32 {
        return qtc.Attica__Forum_ChildCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setTopics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` topics: i32 `
    ///
    pub fn SetTopics(self: Attica__Forum, topics: i32) void {
        qtc.Attica__Forum_SetTopics(@ptrCast(self.ptr), @bitCast(topics));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#topics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    pub fn Topics(self: Attica__Forum) i32 {
        return qtc.Attica__Forum_Topics(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` comments: []Attica__Forum `
    ///
    pub fn SetChildren(self: Attica__Forum, comments: []Attica__Forum) void {
        const comments_list = qtc.libqt_list{
            .len = comments.len,
            .data = @ptrCast(comments.ptr),
        };
        qtc.Attica__Forum_SetChildren(@ptrCast(self.ptr), comments_list);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Attica__Forum, allocator: std.mem.Allocator) []Attica__Forum {
        const _arr: qtc.libqt_list = qtc.Attica__Forum_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Forum, _arr.len) catch @panic("attica__forum.Children: Memory allocation failed");
        const _data: [*]QtC.Attica__Forum = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    pub fn IsValid(self: Attica__Forum) bool {
        return qtc.Attica__Forum_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Forum `
    ///
    pub fn Delete(self: Attica__Forum) void {
        qtc.Attica__Forum_Delete(@ptrCast(self.ptr));
    }
};
