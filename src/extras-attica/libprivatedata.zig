const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-privatedata.html
pub const attica__privatedata = struct {
    /// New constructs a new Attica::PrivateData object.
    ///
    ///
    pub fn New() QtC.Attica__PrivateData {
        return qtc.Attica__PrivateData_new();
    }

    /// New2 constructs a new Attica::PrivateData object.
    ///
    /// ``` other: QtC.Attica__PrivateData ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__PrivateData {
        return qtc.Attica__PrivateData_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-privatedata.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__PrivateData, other: QtC.Attica__PrivateData ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__PrivateData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-privatedata.html#setAttribute)
    ///
    /// ``` self: QtC.Attica__PrivateData, key: []const u8, value: []const u8 ```
    pub fn SetAttribute(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__PrivateData_SetAttribute(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-privatedata.html#attribute)
    ///
    /// ``` self: QtC.Attica__PrivateData, key: []const u8, allocator: std.mem.Allocator ```
    pub fn Attribute(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.Attica__PrivateData_Attribute(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::privatedata.Attribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-privatedata.html#setTimestamp)
    ///
    /// ``` self: QtC.Attica__PrivateData, key: []const u8, when: QtC.QDateTime ```
    pub fn SetTimestamp(self: ?*anyopaque, key: []const u8, when: ?*anyopaque) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.Attica__PrivateData_SetTimestamp(@ptrCast(self), key_str, @ptrCast(when));
    }

    /// [Qt documentation](https://api.kde.org/attica-privatedata.html#timestamp)
    ///
    /// ``` self: QtC.Attica__PrivateData, key: []const u8 ```
    pub fn Timestamp(self: ?*anyopaque, key: []const u8) QtC.QDateTime {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.Attica__PrivateData_Timestamp(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-privatedata.html#keys)
    ///
    /// ``` self: QtC.Attica__PrivateData, allocator: std.mem.Allocator ```
    pub fn Keys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__PrivateData_Keys(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("attica::privatedata.Keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica::privatedata.Keys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__PrivateData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__PrivateData_Delete(@ptrCast(self));
    }
};
