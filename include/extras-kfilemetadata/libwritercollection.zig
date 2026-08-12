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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFileMetaData::WriterCollection object in C++ memory
    ///
    pub fn new() KFileMetaData__WriterCollection {
        return .{ .ptr = qtc.KFileMetaData__WriterCollection_new() };
    }

    /// ### DEPRECATED: Use `fetchWriters` instead
    ///
    pub const FetchWriters = fetchWriters;

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
    pub fn fetchWriters(self: KFileMetaData__WriterCollection, allocator: std.mem.Allocator, mimetype: []const u8) []KFileMetaData__Writer {
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KFileMetaData__WriterCollection_FetchWriters(@ptrCast(self.ptr), mimetype_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KFileMetaData__Writer, _arr.len) catch @panic("KFileMetaData__WriterCollection.fetchWriters: Memory allocation failed");
        const _data_val: [*]QtC.KFileMetaData__Writer = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileMetaData__WriterCollection `
    ///
    pub fn delete(self: KFileMetaData__WriterCollection) void {
        qtc.KFileMetaData__WriterCollection_Delete(@ptrCast(self.ptr));
    }
};
