const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-topic.html)
pub const Attica__Topic = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-topic.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Topic,

    pub const _is_Attica__Topic = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Topic object in C++ memory
    ///
    pub fn new() Attica__Topic {
        return .{ .ptr = qtc.Attica__Topic_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Topic object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Topic `
    ///
    pub fn new2(other: anytype) Attica__Topic {
        comptime _ = @TypeOf(other)._is_Attica__Topic;
        return .{ .ptr = qtc.Attica__Topic_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` other: Attica__Topic `
    ///
    pub fn operatorAssign(self: Attica__Topic, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Topic;
        qtc.Attica__Topic_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Topic, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Topic_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Topic, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Topic.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setForumId` instead
    ///
    pub const SetForumId = setForumId;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setForumId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` _forumId: []const u8 `
    ///
    pub fn setForumId(self: Attica__Topic, _forumId: []const u8) void {
        const forumId_str = qtc.libqt_string{
            .len = _forumId.len,
            .data = _forumId.ptr,
        };
        qtc.Attica__Topic_SetForumId(@ptrCast(self.ptr), forumId_str);
    }

    /// ### DEPRECATED: Use `forumId` instead
    ///
    pub const ForumId = forumId;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#forumId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn forumId(self: Attica__Topic, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_ForumId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Topic.forumId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUser` instead
    ///
    pub const SetUser = setUser;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` _user: []const u8 `
    ///
    pub fn setUser(self: Attica__Topic, _user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = _user.len,
            .data = _user.ptr,
        };
        qtc.Attica__Topic_SetUser(@ptrCast(self.ptr), user_str);
    }

    /// ### DEPRECATED: Use `user` instead
    ///
    pub const User = user;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn user(self: Attica__Topic, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Topic.user: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDate` instead
    ///
    pub const SetDate = setDate;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` _date: QDateTime `
    ///
    pub fn setDate(self: Attica__Topic, _date: anytype) void {
        comptime _ = @TypeOf(_date)._is_QDateTime;
        qtc.Attica__Topic_SetDate(@ptrCast(self.ptr), @ptrCast(_date.ptr));
    }

    /// ### DEPRECATED: Use `date` instead
    ///
    pub const Date = date;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    pub fn date(self: Attica__Topic) QDateTime {
        return .{ .ptr = qtc.Attica__Topic_Date(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSubject` instead
    ///
    pub const SetSubject = setSubject;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` _subject: []const u8 `
    ///
    pub fn setSubject(self: Attica__Topic, _subject: []const u8) void {
        const subject_str = qtc.libqt_string{
            .len = _subject.len,
            .data = _subject.ptr,
        };
        qtc.Attica__Topic_SetSubject(@ptrCast(self.ptr), subject_str);
    }

    /// ### DEPRECATED: Use `subject` instead
    ///
    pub const Subject = subject;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#subject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subject(self: Attica__Topic, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_Subject(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Topic.subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContent` instead
    ///
    pub const SetContent = setContent;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` _content: []const u8 `
    ///
    pub fn setContent(self: Attica__Topic, _content: []const u8) void {
        const content_str = qtc.libqt_string{
            .len = _content.len,
            .data = _content.ptr,
        };
        qtc.Attica__Topic_SetContent(@ptrCast(self.ptr), content_str);
    }

    /// ### DEPRECATED: Use `content` instead
    ///
    pub const Content = content;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#content)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn content(self: Attica__Topic, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_Content(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Topic.content: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setComments` instead
    ///
    pub const SetComments = setComments;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` _comments: i32 `
    ///
    pub fn setComments(self: Attica__Topic, _comments: i32) void {
        qtc.Attica__Topic_SetComments(@ptrCast(self.ptr), @bitCast(_comments));
    }

    /// ### DEPRECATED: Use `comments` instead
    ///
    pub const Comments = comments;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#comments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    pub fn comments(self: Attica__Topic) i32 {
        return qtc.Attica__Topic_Comments(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    pub fn isValid(self: Attica__Topic) bool {
        return qtc.Attica__Topic_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Topic `
    ///
    pub fn delete(self: Attica__Topic) void {
        qtc.Attica__Topic_Delete(@ptrCast(self.ptr));
    }
};
