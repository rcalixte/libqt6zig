const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kio.html)
pub const KIO = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO,

    pub const _is_KIO = {};

    /// ### [Upstream resources](https://api.kde.org/kio.html#buildErrorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn BuildErrorString(allocator: std.mem.Allocator, param1: i32, param2: []const u8) []const u8 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var _str = qtc.KIO_BuildErrorString(@bitCast(param1), param2_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.BuildErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#rawErrorDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: QUrl `
    ///
    /// ` param4: i32 `
    ///
    pub fn RawErrorDetail(allocator: std.mem.Allocator, param1: i32, param2: []const u8, param3: anytype, param4: i32) []u8 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        comptime _ = @TypeOf(param3)._is_QUrl;
        var _bytearray: qtc.libqt_string = qtc.KIO_RawErrorDetail(@bitCast(param1), param2_str, @ptrCast(param3.ptr), @bitCast(param4));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kio.RawErrorDetail: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }
};
