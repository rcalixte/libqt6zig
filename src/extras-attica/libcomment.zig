const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const comment_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-comment.html)
pub const Attica__Comment = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-comment.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Comment,

    pub const _is_Attica__Comment = {};

    /// New constructs a new Attica::Comment object.
    ///
    pub fn New() Attica__Comment {
        return .{ .ptr = qtc.Attica__Comment_new() };
    }

    /// New2 constructs a new Attica::Comment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Comment `
    ///
    pub fn New2(other: anytype) Attica__Comment {
        comptime _ = @TypeOf(other)._is_Attica__Comment;
        return .{ .ptr = qtc.Attica__Comment_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#commentTypeToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: comment_enums.Type `
    ///
    pub fn CommentTypeToString(allocator: std.mem.Allocator, typeVal: i32) []const u8 {
        var _str = qtc.Attica__Comment_CommentTypeToString(@bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__comment.CommentTypeToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` other: Attica__Comment `
    ///
    pub fn OperatorAssign(self: Attica__Comment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Comment;
        qtc.Attica__Comment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Comment, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Comment_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Comment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Comment_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__comment.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` subject: []const u8 `
    ///
    pub fn SetSubject(self: Attica__Comment, subject: []const u8) void {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        qtc.Attica__Comment_SetSubject(@ptrCast(self.ptr), subject_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#subject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subject(self: Attica__Comment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Comment_Subject(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__comment.Subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: Attica__Comment, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Attica__Comment_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: Attica__Comment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Comment_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__comment.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setChildCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` childCount: i32 `
    ///
    pub fn SetChildCount(self: Attica__Comment, childCount: i32) void {
        qtc.Attica__Comment_SetChildCount(@ptrCast(self.ptr), @bitCast(childCount));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    pub fn ChildCount(self: Attica__Comment) i32 {
        return qtc.Attica__Comment_ChildCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` user: []const u8 `
    ///
    pub fn SetUser(self: Attica__Comment, user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        qtc.Attica__Comment_SetUser(@ptrCast(self.ptr), user_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: Attica__Comment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Comment_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__comment.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` date: QDateTime `
    ///
    pub fn SetDate(self: Attica__Comment, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Attica__Comment_SetDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    pub fn Date(self: Attica__Comment) QDateTime {
        return .{ .ptr = qtc.Attica__Comment_Date(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setScore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` score: i32 `
    ///
    pub fn SetScore(self: Attica__Comment, score: i32) void {
        qtc.Attica__Comment_SetScore(@ptrCast(self.ptr), @bitCast(score));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#score)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    pub fn Score(self: Attica__Comment) i32 {
        return qtc.Attica__Comment_Score(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` comments: []Attica__Comment `
    ///
    pub fn SetChildren(self: Attica__Comment, comments: []Attica__Comment) void {
        const comments_list = qtc.libqt_list{
            .len = comments.len,
            .data = @ptrCast(comments.ptr),
        };
        qtc.Attica__Comment_SetChildren(@ptrCast(self.ptr), comments_list);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Attica__Comment, allocator: std.mem.Allocator) []Attica__Comment {
        const _arr: qtc.libqt_list = qtc.Attica__Comment_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Comment, _arr.len) catch @panic("attica__comment.Children: Memory allocation failed");
        const _data: [*]QtC.Attica__Comment = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    pub fn IsValid(self: Attica__Comment) bool {
        return qtc.Attica__Comment_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Comment `
    ///
    pub fn Delete(self: Attica__Comment) void {
        qtc.Attica__Comment_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-comment.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const ContentComment: i32 = 0;
        pub const ForumComment: i32 = 1;
        pub const KnowledgeBaseComment: i32 = 2;
        pub const EventComment: i32 = 3;
    };
};
