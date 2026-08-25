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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Comment object in C++ memory
    ///
    pub fn new() Attica__Comment {
        return .{ .ptr = qtc.Attica__Comment_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Comment object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Comment `
    ///
    pub fn new2(other: anytype) Attica__Comment {
        comptime _ = @TypeOf(other)._is_Attica__Comment;
        return .{ .ptr = qtc.Attica__Comment_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `commentTypeToString` instead
    ///
    pub const CommentTypeToString = commentTypeToString;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#commentTypeToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: comment_enums.Type `
    ///
    pub fn commentTypeToString(allocator: std.mem.Allocator, typeVal: i32) []const u8 {
        var _str = qtc.Attica__Comment_CommentTypeToString(@bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Comment.commentTypeToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` other: Attica__Comment `
    ///
    pub fn operatorAssign(self: Attica__Comment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Comment;
        qtc.Attica__Comment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Comment, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Comment_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Comment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Comment_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Comment.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSubject` instead
    ///
    pub const SetSubject = setSubject;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` _subject: []const u8 `
    ///
    pub fn setSubject(self: Attica__Comment, _subject: []const u8) void {
        const subject_str = qtc.libqt_string{
            .len = _subject.len,
            .data = _subject.ptr,
        };
        qtc.Attica__Comment_SetSubject(@ptrCast(self.ptr), subject_str);
    }

    /// ### DEPRECATED: Use `subject` instead
    ///
    pub const Subject = subject;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#subject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subject(self: Attica__Comment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Comment_Subject(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Comment.subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: Attica__Comment, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.Attica__Comment_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: Attica__Comment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Comment_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Comment.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setChildCount` instead
    ///
    pub const SetChildCount = setChildCount;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setChildCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` _childCount: i32 `
    ///
    pub fn setChildCount(self: Attica__Comment, _childCount: i32) void {
        qtc.Attica__Comment_SetChildCount(@ptrCast(self.ptr), @bitCast(_childCount));
    }

    /// ### DEPRECATED: Use `childCount` instead
    ///
    pub const ChildCount = childCount;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    pub fn childCount(self: Attica__Comment) i32 {
        return qtc.Attica__Comment_ChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUser` instead
    ///
    pub const SetUser = setUser;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` _user: []const u8 `
    ///
    pub fn setUser(self: Attica__Comment, _user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = _user.len,
            .data = _user.ptr,
        };
        qtc.Attica__Comment_SetUser(@ptrCast(self.ptr), user_str);
    }

    /// ### DEPRECATED: Use `user` instead
    ///
    pub const User = user;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn user(self: Attica__Comment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Comment_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Comment.user: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDate` instead
    ///
    pub const SetDate = setDate;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` _date: QDateTime `
    ///
    pub fn setDate(self: Attica__Comment, _date: anytype) void {
        comptime _ = @TypeOf(_date)._is_QDateTime;
        qtc.Attica__Comment_SetDate(@ptrCast(self.ptr), @ptrCast(_date.ptr));
    }

    /// ### DEPRECATED: Use `date` instead
    ///
    pub const Date = date;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    pub fn date(self: Attica__Comment) QDateTime {
        return .{ .ptr = qtc.Attica__Comment_Date(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScore` instead
    ///
    pub const SetScore = setScore;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setScore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` _score: i32 `
    ///
    pub fn setScore(self: Attica__Comment, _score: i32) void {
        qtc.Attica__Comment_SetScore(@ptrCast(self.ptr), @bitCast(_score));
    }

    /// ### DEPRECATED: Use `score` instead
    ///
    pub const Score = score;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#score)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    pub fn score(self: Attica__Comment) i32 {
        return qtc.Attica__Comment_Score(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChildren` instead
    ///
    pub const SetChildren = setChildren;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#setChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` comments: []Attica__Comment `
    ///
    pub fn setChildren(self: Attica__Comment, comments: []Attica__Comment) void {
        const comments_list = qtc.libqt_list{
            .len = comments.len,
            .data = @ptrCast(comments.ptr),
        };
        qtc.Attica__Comment_SetChildren(@ptrCast(self.ptr), comments_list);
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Attica__Comment, allocator: std.mem.Allocator) []Attica__Comment {
        const _arr: qtc.libqt_list = qtc.Attica__Comment_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Comment, _arr.len) catch @panic("Attica__Comment.children: Memory allocation failed");
        const _data_val: [*]QtC.Attica__Comment = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-comment.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Comment `
    ///
    pub fn isValid(self: Attica__Comment) bool {
        return qtc.Attica__Comment_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Comment `
    ///
    pub fn delete(self: Attica__Comment) void {
        qtc.Attica__Comment_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-comment.html#public-types)
pub const enums = struct {
    pub const Type = enum {
        pub const ContentComment: i32 = 0;
        pub const ForumComment: i32 = 1;
        pub const KnowledgeBaseComment: i32 = 2;
        pub const EventComment: i32 = 3;
    };
};
