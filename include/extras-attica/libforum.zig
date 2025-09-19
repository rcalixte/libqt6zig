const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-forum.html
pub const attica__forum = struct {
    /// New constructs a new Attica::Forum object.
    ///
    ///
    pub fn New() QtC.Attica__Forum {
        return qtc.Attica__Forum_new();
    }

    /// New2 constructs a new Attica::Forum object.
    ///
    /// ``` other: QtC.Attica__Forum ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Forum {
        return qtc.Attica__Forum_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Forum, other: QtC.Attica__Forum ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Forum_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#setId)
    ///
    /// ``` self: QtC.Attica__Forum, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Forum_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#id)
    ///
    /// ``` self: QtC.Attica__Forum, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Forum_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::forum.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#setName)
    ///
    /// ``` self: QtC.Attica__Forum, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Forum_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#name)
    ///
    /// ``` self: QtC.Attica__Forum, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Forum_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::forum.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#setDescription)
    ///
    /// ``` self: QtC.Attica__Forum, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Attica__Forum_SetDescription(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#description)
    ///
    /// ``` self: QtC.Attica__Forum, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Forum_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::forum.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#setDate)
    ///
    /// ``` self: QtC.Attica__Forum, date: QtC.QDateTime ```
    pub fn SetDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Attica__Forum_SetDate(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#date)
    ///
    /// ``` self: QtC.Attica__Forum ```
    pub fn Date(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Attica__Forum_Date(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#setIcon)
    ///
    /// ``` self: QtC.Attica__Forum, icon: QtC.QUrl ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.Attica__Forum_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#icon)
    ///
    /// ``` self: QtC.Attica__Forum ```
    pub fn Icon(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__Forum_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#setChildCount)
    ///
    /// ``` self: QtC.Attica__Forum, childCount: i32 ```
    pub fn SetChildCount(self: ?*anyopaque, childCount: i32) void {
        qtc.Attica__Forum_SetChildCount(@ptrCast(self), @intCast(childCount));
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#childCount)
    ///
    /// ``` self: QtC.Attica__Forum ```
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return qtc.Attica__Forum_ChildCount(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#setTopics)
    ///
    /// ``` self: QtC.Attica__Forum, topics: i32 ```
    pub fn SetTopics(self: ?*anyopaque, topics: i32) void {
        qtc.Attica__Forum_SetTopics(@ptrCast(self), @intCast(topics));
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#topics)
    ///
    /// ``` self: QtC.Attica__Forum ```
    pub fn Topics(self: ?*anyopaque) i32 {
        return qtc.Attica__Forum_Topics(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#setChildren)
    ///
    /// ``` self: QtC.Attica__Forum, comments: []QtC.Attica__Forum ```
    pub fn SetChildren(self: ?*anyopaque, comments: []QtC.Attica__Forum) void {
        const comments_list = qtc.libqt_list{
            .len = comments.len,
            .data = @ptrCast(comments.ptr),
        };
        qtc.Attica__Forum_SetChildren(@ptrCast(self), comments_list);
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#children)
    ///
    /// ``` self: QtC.Attica__Forum, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Attica__Forum {
        const _arr: qtc.libqt_list = qtc.Attica__Forum_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Attica__Forum, _arr.len) catch @panic("attica::forum.Children: Memory allocation failed");
        const _data: [*]QtC.Attica__Forum = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-forum.html#isValid)
    ///
    /// ``` self: QtC.Attica__Forum ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Forum_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Forum ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Forum_Delete(@ptrCast(self));
    }
};
