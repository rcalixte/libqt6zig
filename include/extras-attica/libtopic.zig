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

    /// New constructs a new Attica::Topic object.
    ///
    pub fn New() Attica__Topic {
        return .{ .ptr = qtc.Attica__Topic_new() };
    }

    /// New2 constructs a new Attica::Topic object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Topic `
    ///
    pub fn New2(other: anytype) Attica__Topic {
        comptime _ = @TypeOf(other)._is_Attica__Topic;
        return .{ .ptr = qtc.Attica__Topic_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` other: Attica__Topic `
    ///
    pub fn OperatorAssign(self: Attica__Topic, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Topic;
        qtc.Attica__Topic_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Topic, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Topic_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Topic, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__topic.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setForumId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` forumId: []const u8 `
    ///
    pub fn SetForumId(self: Attica__Topic, forumId: []const u8) void {
        const forumId_str = qtc.libqt_string{
            .len = forumId.len,
            .data = forumId.ptr,
        };
        qtc.Attica__Topic_SetForumId(@ptrCast(self.ptr), forumId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#forumId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ForumId(self: Attica__Topic, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_ForumId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__topic.ForumId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` user: []const u8 `
    ///
    pub fn SetUser(self: Attica__Topic, user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        qtc.Attica__Topic_SetUser(@ptrCast(self.ptr), user_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: Attica__Topic, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__topic.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` date: QDateTime `
    ///
    pub fn SetDate(self: Attica__Topic, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Attica__Topic_SetDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    pub fn Date(self: Attica__Topic) QDateTime {
        return .{ .ptr = qtc.Attica__Topic_Date(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` subject: []const u8 `
    ///
    pub fn SetSubject(self: Attica__Topic, subject: []const u8) void {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        qtc.Attica__Topic_SetSubject(@ptrCast(self.ptr), subject_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#subject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subject(self: Attica__Topic, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_Subject(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__topic.Subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` content: []const u8 `
    ///
    pub fn SetContent(self: Attica__Topic, content: []const u8) void {
        const content_str = qtc.libqt_string{
            .len = content.len,
            .data = content.ptr,
        };
        qtc.Attica__Topic_SetContent(@ptrCast(self.ptr), content_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#content)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Content(self: Attica__Topic, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_Content(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__topic.Content: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    /// ` comments: i32 `
    ///
    pub fn SetComments(self: Attica__Topic, comments: i32) void {
        qtc.Attica__Topic_SetComments(@ptrCast(self.ptr), @bitCast(comments));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#comments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    pub fn Comments(self: Attica__Topic) i32 {
        return qtc.Attica__Topic_Comments(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Topic `
    ///
    pub fn IsValid(self: Attica__Topic) bool {
        return qtc.Attica__Topic_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Topic `
    ///
    pub fn Delete(self: Attica__Topic) void {
        qtc.Attica__Topic_Delete(@ptrCast(self.ptr));
    }
};
