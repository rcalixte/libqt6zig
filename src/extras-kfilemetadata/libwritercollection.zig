const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-writercollection.html)
pub const kfilemetadata__writercollection = struct {
    /// New constructs a new KFileMetaData::WriterCollection object.
    ///
    pub fn New() QtC.KFileMetaData__WriterCollection {
        return qtc.KFileMetaData__WriterCollection_new();
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writercollection.html#fetchWriters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__WriterCollection `
    ///
    /// ` mimetype: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FetchWriters(self: ?*anyopaque, mimetype: []const u8, allocator: std.mem.Allocator) []QtC.KFileMetaData__Writer {
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KFileMetaData__WriterCollection_FetchWriters(@ptrCast(self), mimetype_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KFileMetaData__Writer, _arr.len) catch @panic("kfilemetadata__writercollection.FetchWriters: Memory allocation failed");
        const _data: [*]QtC.KFileMetaData__Writer = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KFileMetaData__WriterCollection `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFileMetaData__WriterCollection_Delete(@ptrCast(self));
    }
};
