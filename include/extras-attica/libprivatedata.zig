const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-privatedata.html)
pub const Attica__PrivateData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-privatedata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__PrivateData,

    pub const _is_Attica__PrivateData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::PrivateData object in C++ memory
    ///
    pub fn new() Attica__PrivateData {
        return .{ .ptr = qtc.Attica__PrivateData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::PrivateData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__PrivateData `
    ///
    pub fn new2(other: anytype) Attica__PrivateData {
        comptime _ = @TypeOf(other)._is_Attica__PrivateData;
        return .{ .ptr = qtc.Attica__PrivateData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-privatedata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PrivateData `
    ///
    /// ` other: Attica__PrivateData `
    ///
    pub fn operatorAssign(self: Attica__PrivateData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__PrivateData;
        qtc.Attica__PrivateData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// ### [Upstream resources](https://api.kde.org/attica-privatedata.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PrivateData `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setAttribute(self: Attica__PrivateData, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__PrivateData_SetAttribute(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### DEPRECATED: Use `attribute` instead
    ///
    pub const Attribute = attribute;

    /// ### [Upstream resources](https://api.kde.org/attica-privatedata.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PrivateData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn attribute(self: Attica__PrivateData, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.Attica__PrivateData_Attribute(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__PrivateData.attribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// ### [Upstream resources](https://api.kde.org/attica-privatedata.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PrivateData `
    ///
    /// ` key: []const u8 `
    ///
    /// ` when: QDateTime `
    ///
    pub fn setTimestamp(self: Attica__PrivateData, key: []const u8, when: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(when)._is_QDateTime;
        qtc.Attica__PrivateData_SetTimestamp(@ptrCast(self.ptr), key_str, @ptrCast(when.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// ### [Upstream resources](https://api.kde.org/attica-privatedata.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PrivateData `
    ///
    /// ` key: []const u8 `
    ///
    pub fn timestamp(self: Attica__PrivateData, key: []const u8) QDateTime {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.Attica__PrivateData_Timestamp(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `keys` instead
    ///
    pub const Keys = keys;

    /// ### [Upstream resources](https://api.kde.org/attica-privatedata.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PrivateData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keys(self: Attica__PrivateData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__PrivateData_Keys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Attica__PrivateData.keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Attica__PrivateData.keys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__PrivateData `
    ///
    pub fn delete(self: Attica__PrivateData) void {
        qtc.Attica__PrivateData_Delete(@ptrCast(self.ptr));
    }
};
