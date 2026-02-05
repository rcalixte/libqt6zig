const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-writer.html)
pub const kfilemetadata__writer = struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writer.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__Writer `
    ///
    /// ` data: QtC.KFileMetaData__WriteData `
    ///
    pub fn Write(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.KFileMetaData__Writer_Write(@ptrCast(self), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writer.html#mimetypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__Writer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Mimetypes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileMetaData__Writer_Mimetypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfilemetadata__writer.Mimetypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfilemetadata__writer.Mimetypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KFileMetaData__Writer `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFileMetaData__Writer_Delete(@ptrCast(self));
    }
};
