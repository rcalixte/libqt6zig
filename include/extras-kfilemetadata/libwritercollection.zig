const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KFileMetaData__Writer = @import("libqt6").KFileMetaData__Writer;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-writercollection.html)
pub const KFileMetaData__WriterCollection = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writercollection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileMetaData__WriterCollection,

    pub const _is_KFileMetaData__WriterCollection = {};

    /// New constructs a new KFileMetaData::WriterCollection object.
    ///
    pub fn New() KFileMetaData__WriterCollection {
        return .{ .ptr = qtc.KFileMetaData__WriterCollection_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writercollection.html#fetchWriters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriterCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimetype: []const u8 `
    ///
    pub fn FetchWriters(self: KFileMetaData__WriterCollection, allocator: std.mem.Allocator, mimetype: []const u8) []KFileMetaData__Writer {
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KFileMetaData__WriterCollection_FetchWriters(@ptrCast(self.ptr), mimetype_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KFileMetaData__Writer, _arr.len) catch @panic("kfilemetadata__writercollection.FetchWriters: Memory allocation failed");
        const _data: [*]QtC.KFileMetaData__Writer = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileMetaData__WriterCollection `
    ///
    pub fn Delete(self: KFileMetaData__WriterCollection) void {
        qtc.KFileMetaData__WriterCollection_Delete(@ptrCast(self.ptr));
    }
};
