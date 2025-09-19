const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-publisherfield.html
pub const attica__publisherfield = struct {
    /// New constructs a new Attica::PublisherField object.
    ///
    ///
    pub fn New() QtC.Attica__PublisherField {
        return qtc.Attica__PublisherField_new();
    }

    /// New2 constructs a new Attica::PublisherField object.
    ///
    /// ``` other: QtC.Attica__PublisherField ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__PublisherField {
        return qtc.Attica__PublisherField_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-publisherfield.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__PublisherField, other: QtC.Attica__PublisherField ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__PublisherField_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-publisherfield.html#setName)
    ///
    /// ``` self: QtC.Attica__PublisherField, value: []const u8 ```
    pub fn SetName(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__PublisherField_SetName(@ptrCast(self), value_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-publisherfield.html#name)
    ///
    /// ``` self: QtC.Attica__PublisherField, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__PublisherField_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::publisherfield.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-publisherfield.html#setType)
    ///
    /// ``` self: QtC.Attica__PublisherField, value: []const u8 ```
    pub fn SetType(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__PublisherField_SetType(@ptrCast(self), value_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-publisherfield.html#type)
    ///
    /// ``` self: QtC.Attica__PublisherField, allocator: std.mem.Allocator ```
    pub fn Type(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__PublisherField_Type(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::publisherfield.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-publisherfield.html#setData)
    ///
    /// ``` self: QtC.Attica__PublisherField, value: []const u8 ```
    pub fn SetData(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__PublisherField_SetData(@ptrCast(self), value_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-publisherfield.html#data)
    ///
    /// ``` self: QtC.Attica__PublisherField, allocator: std.mem.Allocator ```
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__PublisherField_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::publisherfield.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-publisherfield.html#isValid)
    ///
    /// ``` self: QtC.Attica__PublisherField ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__PublisherField_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__PublisherField ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__PublisherField_Delete(@ptrCast(self));
    }
};
