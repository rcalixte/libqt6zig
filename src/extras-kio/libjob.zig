const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kio.html
pub const kio = struct {
    /// [Qt documentation](https://api.kde.org/kio.html#buildErrorString)
    ///
    /// ``` param1: i32, param2: []const u8, allocator: std.mem.Allocator ```
    pub fn BuildErrorString(param1: i32, param2: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const _str = qtc.KIO_BuildErrorString(@intCast(param1), param2_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.BuildErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio.html#rawErrorDetail)
    ///
    /// ``` param1: i32, param2: []const u8, param3: QtC.QUrl, param4: i32, allocator: std.mem.Allocator ```
    pub fn RawErrorDetail(param1: i32, param2: []const u8, param3: ?*anyopaque, param4: i32, allocator: std.mem.Allocator) []u8 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.KIO_RawErrorDetail(@intCast(param1), param2_str, @ptrCast(param3), @intCast(param4));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kio.RawErrorDetail: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }
};
