const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractorcollection.html)
pub const kfilemetadata__extractorcollection = struct {
    /// New constructs a new KFileMetaData::ExtractorCollection object.
    ///
    pub fn New() QtC.KFileMetaData__ExtractorCollection {
        return qtc.KFileMetaData__ExtractorCollection_new();
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractorcollection.html#fetchExtractors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__ExtractorCollection `
    ///
    /// ` mimetype: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FetchExtractors(self: ?*anyopaque, mimetype: []const u8, allocator: std.mem.Allocator) []QtC.KFileMetaData__Extractor {
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KFileMetaData__ExtractorCollection_FetchExtractors(@ptrCast(self), mimetype_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KFileMetaData__Extractor, _arr.len) catch @panic("kfilemetadata__extractorcollection.FetchExtractors: Memory allocation failed");
        const _data: [*]QtC.KFileMetaData__Extractor = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KFileMetaData__ExtractorCollection `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KFileMetaData__ExtractorCollection_Delete(@ptrCast(self));
    }
};
