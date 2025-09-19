const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const comment_enums = enums;
const std = @import("std");

/// https://api.kde.org/attica-comment.html
pub const attica__comment = struct {
    /// New constructs a new Attica::Comment object.
    ///
    ///
    pub fn New() QtC.Attica__Comment {
        return qtc.Attica__Comment_new();
    }

    /// New2 constructs a new Attica::Comment object.
    ///
    /// ``` other: QtC.Attica__Comment ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Comment {
        return qtc.Attica__Comment_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#commentTypeToString)
    ///
    /// ``` typeVal: comment_enums.Type, allocator: std.mem.Allocator ```
    pub fn CommentTypeToString(typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Comment_CommentTypeToString(@intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::comment.CommentTypeToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Comment, other: QtC.Attica__Comment ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Comment_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#setId)
    ///
    /// ``` self: QtC.Attica__Comment, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Comment_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#id)
    ///
    /// ``` self: QtC.Attica__Comment, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Comment_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::comment.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#setSubject)
    ///
    /// ``` self: QtC.Attica__Comment, subject: []const u8 ```
    pub fn SetSubject(self: ?*anyopaque, subject: []const u8) void {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        qtc.Attica__Comment_SetSubject(@ptrCast(self), subject_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#subject)
    ///
    /// ``` self: QtC.Attica__Comment, allocator: std.mem.Allocator ```
    pub fn Subject(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Comment_Subject(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::comment.Subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#setText)
    ///
    /// ``` self: QtC.Attica__Comment, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Attica__Comment_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#text)
    ///
    /// ``` self: QtC.Attica__Comment, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Comment_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::comment.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#setChildCount)
    ///
    /// ``` self: QtC.Attica__Comment, childCount: i32 ```
    pub fn SetChildCount(self: ?*anyopaque, childCount: i32) void {
        qtc.Attica__Comment_SetChildCount(@ptrCast(self), @intCast(childCount));
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#childCount)
    ///
    /// ``` self: QtC.Attica__Comment ```
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return qtc.Attica__Comment_ChildCount(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#setUser)
    ///
    /// ``` self: QtC.Attica__Comment, user: []const u8 ```
    pub fn SetUser(self: ?*anyopaque, user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        qtc.Attica__Comment_SetUser(@ptrCast(self), user_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#user)
    ///
    /// ``` self: QtC.Attica__Comment, allocator: std.mem.Allocator ```
    pub fn User(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Comment_User(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::comment.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#setDate)
    ///
    /// ``` self: QtC.Attica__Comment, date: QtC.QDateTime ```
    pub fn SetDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Attica__Comment_SetDate(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#date)
    ///
    /// ``` self: QtC.Attica__Comment ```
    pub fn Date(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Attica__Comment_Date(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#setScore)
    ///
    /// ``` self: QtC.Attica__Comment, score: i32 ```
    pub fn SetScore(self: ?*anyopaque, score: i32) void {
        qtc.Attica__Comment_SetScore(@ptrCast(self), @intCast(score));
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#score)
    ///
    /// ``` self: QtC.Attica__Comment ```
    pub fn Score(self: ?*anyopaque) i32 {
        return qtc.Attica__Comment_Score(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#setChildren)
    ///
    /// ``` self: QtC.Attica__Comment, comments: []QtC.Attica__Comment ```
    pub fn SetChildren(self: ?*anyopaque, comments: []QtC.Attica__Comment) void {
        const comments_list = qtc.libqt_list{
            .len = comments.len,
            .data = @ptrCast(comments.ptr),
        };
        qtc.Attica__Comment_SetChildren(@ptrCast(self), comments_list);
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#children)
    ///
    /// ``` self: QtC.Attica__Comment, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Attica__Comment {
        const _arr: qtc.libqt_list = qtc.Attica__Comment_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Attica__Comment, _arr.len) catch @panic("attica::comment.Children: Memory allocation failed");
        const _data: [*]QtC.Attica__Comment = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-comment.html#isValid)
    ///
    /// ``` self: QtC.Attica__Comment ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Comment_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Comment ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Comment_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/attica-comment.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const ContentComment: i32 = 0;
        pub const ForumComment: i32 = 1;
        pub const KnowledgeBaseComment: i32 = 2;
        pub const EventComment: i32 = 3;
    };
};
