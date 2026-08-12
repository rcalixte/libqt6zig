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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::PublisherField object in C++ memory
    ///
    pub fn new() Attica__PublisherField {
        return .{ .ptr = qtc.Attica__PublisherField_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::PublisherField object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__PublisherField `
    ///
    pub fn new2(other: anytype) Attica__PublisherField {
        comptime _ = @TypeOf(other)._is_Attica__PublisherField;
        return .{ .ptr = qtc.Attica__PublisherField_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` other: Attica__PublisherField `
    ///
    pub fn operatorAssign(self: Attica__PublisherField, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__PublisherField;
        qtc.Attica__PublisherField_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setName(self: Attica__PublisherField, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__PublisherField_SetName(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__PublisherField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__PublisherField_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__PublisherField.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setType(self: Attica__PublisherField, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__PublisherField_SetType(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn type0(self: Attica__PublisherField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__PublisherField_Type(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__PublisherField.type0: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setData(self: Attica__PublisherField, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__PublisherField_SetData(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn data(self: Attica__PublisherField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__PublisherField_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__PublisherField.data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-publisherfield.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PublisherField `
    ///
    pub fn isValid(self: Attica__PublisherField) bool {
        return qtc.Attica__PublisherField_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__PublisherField `
    ///
    pub fn delete(self: Attica__PublisherField) void {
        qtc.Attica__PublisherField_Delete(@ptrCast(self.ptr));
    }
};
