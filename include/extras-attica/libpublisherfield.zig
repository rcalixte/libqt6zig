const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html)
pub const Attica__PublisherField = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__PublisherField,

    pub const _is_Attica__PublisherField = {};

    /// New constructs a new Attica::PublisherField object.
    ///
    pub fn New() Attica__PublisherField {
        return .{ .ptr = qtc.Attica__PublisherField_new() };
    }

    /// New2 constructs a new Attica::PublisherField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__PublisherField `
    ///
    pub fn New2(other: anytype) Attica__PublisherField {
        comptime _ = @TypeOf(other)._is_Attica__PublisherField;
        return .{ .ptr = qtc.Attica__PublisherField_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` other: Attica__PublisherField `
    ///
    pub fn OperatorAssign(self: Attica__PublisherField, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__PublisherField;
        qtc.Attica__PublisherField_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetName(self: Attica__PublisherField, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__PublisherField_SetName(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__PublisherField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__PublisherField_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__publisherfield.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetType(self: Attica__PublisherField, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__PublisherField_SetType(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Type(self: Attica__PublisherField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__PublisherField_Type(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__publisherfield.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetData(self: Attica__PublisherField, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__PublisherField_SetData(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: Attica__PublisherField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__PublisherField_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__publisherfield.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    pub fn IsValid(self: Attica__PublisherField) bool {
        return qtc.Attica__PublisherField_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__PublisherField `
    ///
    pub fn Delete(self: Attica__PublisherField) void {
        qtc.Attica__PublisherField_Delete(@ptrCast(self.ptr));
    }
};
