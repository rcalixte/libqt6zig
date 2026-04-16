const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const message_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-message.html)
pub const Attica__Message = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-message.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Message,

    pub const _is_Attica__Message = {};

    /// New constructs a new Attica::Message object.
    ///
    pub fn New() Attica__Message {
        return .{ .ptr = qtc.Attica__Message_new() };
    }

    /// New2 constructs a new Attica::Message object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Message `
    ///
    pub fn New2(other: anytype) Attica__Message {
        comptime _ = @TypeOf(other)._is_Attica__Message;
        return .{ .ptr = qtc.Attica__Message_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` other: Attica__Message `
    ///
    pub fn OperatorAssign(self: Attica__Message, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Message;
        qtc.Attica__Message_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Message, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Message_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__message.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` from: []const u8 `
    ///
    pub fn SetFrom(self: Attica__Message, from: []const u8) void {
        const from_str = qtc.libqt_string{
            .len = from.len,
            .data = from.ptr,
        };
        qtc.Attica__Message_SetFrom(@ptrCast(self.ptr), from_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#from)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn From(self: Attica__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_From(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__message.From: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` to: []const u8 `
    ///
    pub fn SetTo(self: Attica__Message, to: []const u8) void {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        qtc.Attica__Message_SetTo(@ptrCast(self.ptr), to_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#to)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn To(self: Attica__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_To(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__message.To: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setSent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` sent: QDateTime `
    ///
    pub fn SetSent(self: Attica__Message, sent: anytype) void {
        comptime _ = @TypeOf(sent)._is_QDateTime;
        qtc.Attica__Message_SetSent(@ptrCast(self.ptr), @ptrCast(sent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#sent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    pub fn Sent(self: Attica__Message) QDateTime {
        return .{ .ptr = qtc.Attica__Message_Sent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` status: message_enums.Status `
    ///
    pub fn SetStatus(self: Attica__Message, status: i32) void {
        qtc.Attica__Message_SetStatus(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ## Returns:
    ///
    /// ` message_enums.Status `
    ///
    pub fn Status(self: Attica__Message) i32 {
        return qtc.Attica__Message_Status(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` subject: []const u8 `
    ///
    pub fn SetSubject(self: Attica__Message, subject: []const u8) void {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        qtc.Attica__Message_SetSubject(@ptrCast(self.ptr), subject_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#subject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subject(self: Attica__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_Subject(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__message.Subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setBody)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` body: []const u8 `
    ///
    pub fn SetBody(self: Attica__Message, body: []const u8) void {
        const body_str = qtc.libqt_string{
            .len = body.len,
            .data = body.ptr,
        };
        qtc.Attica__Message_SetBody(@ptrCast(self.ptr), body_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#body)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Body(self: Attica__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_Body(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__message.Body: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    pub fn IsValid(self: Attica__Message) bool {
        return qtc.Attica__Message_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Message `
    ///
    pub fn Delete(self: Attica__Message) void {
        qtc.Attica__Message_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-message.html#public-types)
pub const enums = struct {
    pub const Status = enum(i32) {
        pub const Unread: i32 = 0;
        pub const Read: i32 = 1;
        pub const Answered: i32 = 2;
    };
};
