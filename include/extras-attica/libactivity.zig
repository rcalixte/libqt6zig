const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Attica__Person = @import("libqt6").Attica__Person;
const QDateTime = @import("libqt6").QDateTime;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-activity.html)
pub const Attica__Activity = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-activity.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Activity,

    pub const _is_Attica__Activity = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Activity object in C++ memory
    ///
    pub fn new() Attica__Activity {
        return .{ .ptr = qtc.Attica__Activity_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Activity object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Activity `
    ///
    pub fn new2(other: anytype) Attica__Activity {
        comptime _ = @TypeOf(other)._is_Attica__Activity;
        return .{ .ptr = qtc.Attica__Activity_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` other: Attica__Activity `
    ///
    pub fn operatorAssign(self: Attica__Activity, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Activity;
        qtc.Attica__Activity_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Activity, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Activity_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Activity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Activity_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Activity.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAssociatedPerson` instead
    ///
    pub const SetAssociatedPerson = setAssociatedPerson;

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#setAssociatedPerson)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` _associatedPerson: Attica__Person `
    ///
    pub fn setAssociatedPerson(self: Attica__Activity, _associatedPerson: anytype) void {
        comptime _ = @TypeOf(_associatedPerson)._is_Attica__Person;
        qtc.Attica__Activity_SetAssociatedPerson(@ptrCast(self.ptr), @ptrCast(_associatedPerson.ptr));
    }

    /// ### DEPRECATED: Use `associatedPerson` instead
    ///
    pub const AssociatedPerson = associatedPerson;

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#associatedPerson)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    pub fn associatedPerson(self: Attica__Activity) Attica__Person {
        return .{ .ptr = qtc.Attica__Activity_AssociatedPerson(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` _timestamp: QDateTime `
    ///
    pub fn setTimestamp(self: Attica__Activity, _timestamp: anytype) void {
        comptime _ = @TypeOf(_timestamp)._is_QDateTime;
        qtc.Attica__Activity_SetTimestamp(@ptrCast(self.ptr), @ptrCast(_timestamp.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    pub fn timestamp(self: Attica__Activity) QDateTime {
        return .{ .ptr = qtc.Attica__Activity_Timestamp(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMessage` instead
    ///
    pub const SetMessage = setMessage;

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#setMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` _message: []const u8 `
    ///
    pub fn setMessage(self: Attica__Activity, _message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = _message.len,
            .data = _message.ptr,
        };
        qtc.Attica__Activity_SetMessage(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `message` instead
    ///
    pub const Message = message;

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn message(self: Attica__Activity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Activity_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Activity.message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLink` instead
    ///
    pub const SetLink = setLink;

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#setLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` _link: QUrl `
    ///
    pub fn setLink(self: Attica__Activity, _link: anytype) void {
        comptime _ = @TypeOf(_link)._is_QUrl;
        qtc.Attica__Activity_SetLink(@ptrCast(self.ptr), @ptrCast(_link.ptr));
    }

    /// ### DEPRECATED: Use `link` instead
    ///
    pub const Link = link;

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    pub fn link(self: Attica__Activity) QUrl {
        return .{ .ptr = qtc.Attica__Activity_Link(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    pub fn isValid(self: Attica__Activity) bool {
        return qtc.Attica__Activity_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Activity `
    ///
    pub fn delete(self: Attica__Activity) void {
        qtc.Attica__Activity_Delete(@ptrCast(self.ptr));
    }
};
