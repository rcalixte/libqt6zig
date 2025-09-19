const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const message_enums = enums;
const std = @import("std");

/// https://api.kde.org/attica-message.html
pub const attica__message = struct {
    /// New constructs a new Attica::Message object.
    ///
    ///
    pub fn New() QtC.Attica__Message {
        return qtc.Attica__Message_new();
    }

    /// New2 constructs a new Attica::Message object.
    ///
    /// ``` other: QtC.Attica__Message ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Message {
        return qtc.Attica__Message_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Message, other: QtC.Attica__Message ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Message_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#setId)
    ///
    /// ``` self: QtC.Attica__Message, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Message_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#id)
    ///
    /// ``` self: QtC.Attica__Message, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Message_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::message.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#setFrom)
    ///
    /// ``` self: QtC.Attica__Message, from: []const u8 ```
    pub fn SetFrom(self: ?*anyopaque, from: []const u8) void {
        const from_str = qtc.libqt_string{
            .len = from.len,
            .data = from.ptr,
        };
        qtc.Attica__Message_SetFrom(@ptrCast(self), from_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#from)
    ///
    /// ``` self: QtC.Attica__Message, allocator: std.mem.Allocator ```
    pub fn From(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Message_From(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::message.From: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#setTo)
    ///
    /// ``` self: QtC.Attica__Message, to: []const u8 ```
    pub fn SetTo(self: ?*anyopaque, to: []const u8) void {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        qtc.Attica__Message_SetTo(@ptrCast(self), to_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#to)
    ///
    /// ``` self: QtC.Attica__Message, allocator: std.mem.Allocator ```
    pub fn To(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Message_To(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::message.To: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#setSent)
    ///
    /// ``` self: QtC.Attica__Message, sent: QtC.QDateTime ```
    pub fn SetSent(self: ?*anyopaque, sent: ?*anyopaque) void {
        qtc.Attica__Message_SetSent(@ptrCast(self), @ptrCast(sent));
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#sent)
    ///
    /// ``` self: QtC.Attica__Message ```
    pub fn Sent(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Attica__Message_Sent(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#setStatus)
    ///
    /// ``` self: QtC.Attica__Message, status: message_enums.Status ```
    pub fn SetStatus(self: ?*anyopaque, status: i32) void {
        qtc.Attica__Message_SetStatus(@ptrCast(self), @intCast(status));
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#status)
    ///
    /// ``` self: QtC.Attica__Message ```
    ///
    /// Returns: ``` message_enums.Status ```
    pub fn Status(self: ?*anyopaque) i32 {
        return qtc.Attica__Message_Status(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#setSubject)
    ///
    /// ``` self: QtC.Attica__Message, subject: []const u8 ```
    pub fn SetSubject(self: ?*anyopaque, subject: []const u8) void {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        qtc.Attica__Message_SetSubject(@ptrCast(self), subject_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#subject)
    ///
    /// ``` self: QtC.Attica__Message, allocator: std.mem.Allocator ```
    pub fn Subject(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Message_Subject(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::message.Subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#setBody)
    ///
    /// ``` self: QtC.Attica__Message, body: []const u8 ```
    pub fn SetBody(self: ?*anyopaque, body: []const u8) void {
        const body_str = qtc.libqt_string{
            .len = body.len,
            .data = body.ptr,
        };
        qtc.Attica__Message_SetBody(@ptrCast(self), body_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#body)
    ///
    /// ``` self: QtC.Attica__Message, allocator: std.mem.Allocator ```
    pub fn Body(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Message_Body(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::message.Body: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-message.html#isValid)
    ///
    /// ``` self: QtC.Attica__Message ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Message_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Message ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Message_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/attica-message.html#types
pub const enums = struct {
    pub const Status = enum {
        pub const Unread: i32 = 0;
        pub const Read: i32 = 1;
        pub const Answered: i32 = 2;
    };
};
