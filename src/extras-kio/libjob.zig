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
    /// ` errorCode: i32 `
    ///
    /// ` errorText: []const u8 `
    ///
    pub fn BuildErrorString(allocator: std.mem.Allocator, errorCode: i32, errorText: []const u8) []const u8 {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        var _str = qtc.KIO_BuildErrorString(@bitCast(errorCode), errorText_str);
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
    /// ` errorCode: i32 `
    ///
    /// ` errorText: []const u8 `
    ///
    /// ` reqUrl: QUrl `
    ///
    /// ` method: i32 `
    ///
    pub fn RawErrorDetail(allocator: std.mem.Allocator, errorCode: i32, errorText: []const u8, reqUrl: anytype, method: i32) []u8 {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        comptime _ = @TypeOf(reqUrl)._is_QUrl;
        var _bytearray: qtc.libqt_string = qtc.KIO_RawErrorDetail(@bitCast(errorCode), errorText_str, @ptrCast(reqUrl.ptr), @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kio.RawErrorDetail: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }
};
