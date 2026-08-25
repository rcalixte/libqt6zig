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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Message object in C++ memory
    ///
    pub fn new() Attica__Message {
        return .{ .ptr = qtc.Attica__Message_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Message object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Message `
    ///
    pub fn new2(other: anytype) Attica__Message {
        comptime _ = @TypeOf(other)._is_Attica__Message;
        return .{ .ptr = qtc.Attica__Message_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` other: Attica__Message `
    ///
    pub fn operatorAssign(self: Attica__Message, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Message;
        qtc.Attica__Message_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Message, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Message_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Message.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFrom` instead
    ///
    pub const SetFrom = setFrom;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` _from: []const u8 `
    ///
    pub fn setFrom(self: Attica__Message, _from: []const u8) void {
        const from_str = qtc.libqt_string{
            .len = _from.len,
            .data = _from.ptr,
        };
        qtc.Attica__Message_SetFrom(@ptrCast(self.ptr), from_str);
    }

    /// ### DEPRECATED: Use `from` instead
    ///
    pub const From = from;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#from)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn from(self: Attica__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_From(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Message.from: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTo` instead
    ///
    pub const SetTo = setTo;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` _to: []const u8 `
    ///
    pub fn setTo(self: Attica__Message, _to: []const u8) void {
        const to_str = qtc.libqt_string{
            .len = _to.len,
            .data = _to.ptr,
        };
        qtc.Attica__Message_SetTo(@ptrCast(self.ptr), to_str);
    }

    /// ### DEPRECATED: Use `to` instead
    ///
    pub const To = to;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#to)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn to(self: Attica__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_To(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Message.to: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSent` instead
    ///
    pub const SetSent = setSent;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setSent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` _sent: QDateTime `
    ///
    pub fn setSent(self: Attica__Message, _sent: anytype) void {
        comptime _ = @TypeOf(_sent)._is_QDateTime;
        qtc.Attica__Message_SetSent(@ptrCast(self.ptr), @ptrCast(_sent.ptr));
    }

    /// ### DEPRECATED: Use `sent` instead
    ///
    pub const Sent = sent;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#sent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    pub fn sent(self: Attica__Message) QDateTime {
        return .{ .ptr = qtc.Attica__Message_Sent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStatus` instead
    ///
    pub const SetStatus = setStatus;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` _status: message_enums.Status `
    ///
    pub fn setStatus(self: Attica__Message, _status: i32) void {
        qtc.Attica__Message_SetStatus(@ptrCast(self.ptr), @bitCast(_status));
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

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
    pub fn status(self: Attica__Message) i32 {
        return qtc.Attica__Message_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubject` instead
    ///
    pub const SetSubject = setSubject;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` _subject: []const u8 `
    ///
    pub fn setSubject(self: Attica__Message, _subject: []const u8) void {
        const subject_str = qtc.libqt_string{
            .len = _subject.len,
            .data = _subject.ptr,
        };
        qtc.Attica__Message_SetSubject(@ptrCast(self.ptr), subject_str);
    }

    /// ### DEPRECATED: Use `subject` instead
    ///
    pub const Subject = subject;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#subject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subject(self: Attica__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_Subject(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Message.subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setBody` instead
    ///
    pub const SetBody = setBody;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#setBody)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` _body: []const u8 `
    ///
    pub fn setBody(self: Attica__Message, _body: []const u8) void {
        const body_str = qtc.libqt_string{
            .len = _body.len,
            .data = _body.ptr,
        };
        qtc.Attica__Message_SetBody(@ptrCast(self.ptr), body_str);
    }

    /// ### DEPRECATED: Use `body` instead
    ///
    pub const Body = body;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#body)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn body(self: Attica__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Message_Body(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Message.body: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-message.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Message `
    ///
    pub fn isValid(self: Attica__Message) bool {
        return qtc.Attica__Message_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Message `
    ///
    pub fn delete(self: Attica__Message) void {
        qtc.Attica__Message_Delete(@ptrCast(self.ptr));
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
