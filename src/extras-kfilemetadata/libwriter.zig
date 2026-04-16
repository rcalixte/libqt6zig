const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KFileMetaData__WriteData = @import("libqt6").KFileMetaData__WriteData;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-writer.html)
pub const KFileMetaData__Writer = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileMetaData__Writer,

    pub const _is_KFileMetaData__Writer = {};

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writer.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__Writer `
    ///
    /// ` data: KFileMetaData__WriteData `
    ///
    pub fn Write(self: KFileMetaData__Writer, data: anytype) void {
        comptime _ = @TypeOf(data)._is_KFileMetaData__WriteData;
        qtc.KFileMetaData__Writer_Write(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writer.html#mimetypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__Writer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Mimetypes(self: KFileMetaData__Writer, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileMetaData__Writer_Mimetypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileMetaData__Writer `
    ///
    pub fn Delete(self: KFileMetaData__Writer) void {
        qtc.KFileMetaData__Writer_Delete(@ptrCast(self.ptr));
    }
};
