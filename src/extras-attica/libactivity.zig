const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-activity.html
pub const attica__activity = struct {
    /// New constructs a new Attica::Activity object.
    ///
    ///
    pub fn New() QtC.Attica__Activity {
        return qtc.Attica__Activity_new();
    }

    /// New2 constructs a new Attica::Activity object.
    ///
    /// ``` other: QtC.Attica__Activity ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Activity {
        return qtc.Attica__Activity_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-activity.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Activity, other: QtC.Attica__Activity ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Activity_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-activity.html#setId)
    ///
    /// ``` self: QtC.Attica__Activity, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Activity_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-activity.html#id)
    ///
    /// ``` self: QtC.Attica__Activity, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Activity_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::activity.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-activity.html#setAssociatedPerson)
    ///
    /// ``` self: QtC.Attica__Activity, associatedPerson: QtC.Attica__Person ```
    pub fn SetAssociatedPerson(self: ?*anyopaque, associatedPerson: ?*anyopaque) void {
        qtc.Attica__Activity_SetAssociatedPerson(@ptrCast(self), @ptrCast(associatedPerson));
    }

    /// [Qt documentation](https://api.kde.org/attica-activity.html#associatedPerson)
    ///
    /// ``` self: QtC.Attica__Activity ```
    pub fn AssociatedPerson(self: ?*anyopaque) QtC.Attica__Person {
        return qtc.Attica__Activity_AssociatedPerson(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-activity.html#setTimestamp)
    ///
    /// ``` self: QtC.Attica__Activity, timestamp: QtC.QDateTime ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: ?*anyopaque) void {
        qtc.Attica__Activity_SetTimestamp(@ptrCast(self), @ptrCast(timestamp));
    }

    /// [Qt documentation](https://api.kde.org/attica-activity.html#timestamp)
    ///
    /// ``` self: QtC.Attica__Activity ```
    pub fn Timestamp(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Attica__Activity_Timestamp(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-activity.html#setMessage)
    ///
    /// ``` self: QtC.Attica__Activity, message: []const u8 ```
    pub fn SetMessage(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.Attica__Activity_SetMessage(@ptrCast(self), message_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-activity.html#message)
    ///
    /// ``` self: QtC.Attica__Activity, allocator: std.mem.Allocator ```
    pub fn Message(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Activity_Message(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::activity.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-activity.html#setLink)
    ///
    /// ``` self: QtC.Attica__Activity, link: QtC.QUrl ```
    pub fn SetLink(self: ?*anyopaque, link: ?*anyopaque) void {
        qtc.Attica__Activity_SetLink(@ptrCast(self), @ptrCast(link));
    }

    /// [Qt documentation](https://api.kde.org/attica-activity.html#link)
    ///
    /// ``` self: QtC.Attica__Activity ```
    pub fn Link(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__Activity_Link(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-activity.html#isValid)
    ///
    /// ``` self: QtC.Attica__Activity ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Activity_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Activity ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Activity_Delete(@ptrCast(self));
    }
};
