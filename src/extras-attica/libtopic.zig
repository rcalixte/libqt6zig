const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-topic.html)
pub const attica__topic = struct {
    /// New constructs a new Attica::Topic object.
    ///
    pub fn New() QtC.Attica__Topic {
        return qtc.Attica__Topic_new();
    }

    /// New2 constructs a new Attica::Topic object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Attica__Topic `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Attica__Topic {
        return qtc.Attica__Topic_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` other: QtC.Attica__Topic `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Topic_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Topic_SetId(@ptrCast(self), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::topic.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setForumId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` forumId: []const u8 `
    ///
    pub fn SetForumId(self: ?*anyopaque, forumId: []const u8) void {
        const forumId_str = qtc.libqt_string{
            .len = forumId.len,
            .data = forumId.ptr,
        };
        qtc.Attica__Topic_SetForumId(@ptrCast(self), forumId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#forumId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ForumId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_ForumId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::topic.ForumId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` user: []const u8 `
    ///
    pub fn SetUser(self: ?*anyopaque, user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        qtc.Attica__Topic_SetUser(@ptrCast(self), user_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_User(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::topic.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Attica__Topic_SetDate(@ptrCast(self), @ptrCast(date));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    pub fn Date(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Attica__Topic_Date(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` subject: []const u8 `
    ///
    pub fn SetSubject(self: ?*anyopaque, subject: []const u8) void {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        qtc.Attica__Topic_SetSubject(@ptrCast(self), subject_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#subject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subject(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_Subject(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::topic.Subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` content: []const u8 `
    ///
    pub fn SetContent(self: ?*anyopaque, content: []const u8) void {
        const content_str = qtc.libqt_string{
            .len = content.len,
            .data = content.ptr,
        };
        qtc.Attica__Topic_SetContent(@ptrCast(self), content_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#content)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Content(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Topic_Content(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::topic.Content: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#setComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    /// ` comments: i32 `
    ///
    pub fn SetComments(self: ?*anyopaque, comments: i32) void {
        qtc.Attica__Topic_SetComments(@ptrCast(self), @intCast(comments));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#comments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    pub fn Comments(self: ?*anyopaque) i32 {
        return qtc.Attica__Topic_Comments(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-topic.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Topic_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Attica__Topic `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Topic_Delete(@ptrCast(self));
    }
};
