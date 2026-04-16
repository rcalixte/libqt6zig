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

    /// New constructs a new Attica::Activity object.
    ///
    pub fn New() Attica__Activity {
        return .{ .ptr = qtc.Attica__Activity_new() };
    }

    /// New2 constructs a new Attica::Activity object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Activity `
    ///
    pub fn New2(other: anytype) Attica__Activity {
        comptime _ = @TypeOf(other)._is_Attica__Activity;
        return .{ .ptr = qtc.Attica__Activity_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` other: Attica__Activity `
    ///
    pub fn OperatorAssign(self: Attica__Activity, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Activity;
        qtc.Attica__Activity_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Activity, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Activity_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Activity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Activity_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__activity.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#setAssociatedPerson)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` associatedPerson: Attica__Person `
    ///
    pub fn SetAssociatedPerson(self: Attica__Activity, associatedPerson: anytype) void {
        comptime _ = @TypeOf(associatedPerson)._is_Attica__Person;
        qtc.Attica__Activity_SetAssociatedPerson(@ptrCast(self.ptr), @ptrCast(associatedPerson.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#associatedPerson)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    pub fn AssociatedPerson(self: Attica__Activity) Attica__Person {
        return .{ .ptr = qtc.Attica__Activity_AssociatedPerson(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` timestamp: QDateTime `
    ///
    pub fn SetTimestamp(self: Attica__Activity, timestamp: anytype) void {
        comptime _ = @TypeOf(timestamp)._is_QDateTime;
        qtc.Attica__Activity_SetTimestamp(@ptrCast(self.ptr), @ptrCast(timestamp.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    pub fn Timestamp(self: Attica__Activity) QDateTime {
        return .{ .ptr = qtc.Attica__Activity_Timestamp(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#setMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` message: []const u8 `
    ///
    pub fn SetMessage(self: Attica__Activity, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.Attica__Activity_SetMessage(@ptrCast(self.ptr), message_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Message(self: Attica__Activity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Activity_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__activity.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#setLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    /// ` link: QUrl `
    ///
    pub fn SetLink(self: Attica__Activity, link: anytype) void {
        comptime _ = @TypeOf(link)._is_QUrl;
        qtc.Attica__Activity_SetLink(@ptrCast(self.ptr), @ptrCast(link.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    pub fn Link(self: Attica__Activity) QUrl {
        return .{ .ptr = qtc.Attica__Activity_Link(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-activity.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Activity `
    ///
    pub fn IsValid(self: Attica__Activity) bool {
        return qtc.Attica__Activity_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Activity `
    ///
    pub fn Delete(self: Attica__Activity) void {
        qtc.Attica__Activity_Delete(@ptrCast(self.ptr));
    }
};
