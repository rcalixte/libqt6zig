const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const message_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-message.html)
pub const attica__message = struct {
    /// New constructs a new Attica::Message object.
    ///
    pub fn New() QtC.Attica__Message {
        return qtc.Attica__Message_new();
    }

    /// New2 constructs a new Attica::Message object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Attica__Message `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Attica__Message {
        return qtc.Attica__Message_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` other: QtC.Attica__Message `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Message_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Message_SetId(@ptrCast(self), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__message.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` from: []const u8 `
    ///
    pub fn SetFrom(self: ?*anyopaque, from: []const u8) void {
        const from_str = qtc.libqt_string{
            .len = from.len,
            .data = from.ptr,
        };
        qtc.Attica__Message_SetFrom(@ptrCast(self), from_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#from)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn From(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_From(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__message.From: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` to: []const u8 `
    ///
    pub fn SetTo(self: ?*anyopaque, to: []const u8) void {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        qtc.Attica__Message_SetTo(@ptrCast(self), to_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#to)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn To(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_To(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__message.To: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setSent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` sent: QtC.QDateTime `
    ///
    pub fn SetSent(self: ?*anyopaque, sent: ?*anyopaque) void {
        qtc.Attica__Message_SetSent(@ptrCast(self), @ptrCast(sent));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#sent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    pub fn Sent(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Attica__Message_Sent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` status: message_enums.Status `
    ///
    pub fn SetStatus(self: ?*anyopaque, status: i32) void {
        qtc.Attica__Message_SetStatus(@ptrCast(self), @intCast(status));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ## Returns:
    ///
    /// ` message_enums.Status `
    ///
    pub fn Status(self: ?*anyopaque) i32 {
        return qtc.Attica__Message_Status(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` subject: []const u8 `
    ///
    pub fn SetSubject(self: ?*anyopaque, subject: []const u8) void {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        qtc.Attica__Message_SetSubject(@ptrCast(self), subject_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#subject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subject(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_Subject(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__message.Subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setBody)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` body: []const u8 `
    ///
    pub fn SetBody(self: ?*anyopaque, body: []const u8) void {
        const body_str = qtc.libqt_string{
            .len = body.len,
            .data = body.ptr,
        };
        qtc.Attica__Message_SetBody(@ptrCast(self), body_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#body)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Body(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_Body(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__message.Body: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Message `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Message_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Attica__Message `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Message_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-message.html#public-types)
pub const enums = struct {
    pub const Status = enum {
        pub const Unread: i32 = 0;
        pub const Read: i32 = 1;
        pub const Answered: i32 = 2;
    };
};
