const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KFileMetaData__Extractor = @import("libqt6").KFileMetaData__Extractor;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractorcollection.html)
pub const KFileMetaData__ExtractorCollection = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractorcollection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileMetaData__ExtractorCollection,

    pub const _is_KFileMetaData__ExtractorCollection = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFileMetaData::ExtractorCollection object in C++ memory
    ///
    pub fn new() KFileMetaData__ExtractorCollection {
        return .{ .ptr = qtc.KFileMetaData__ExtractorCollection_new() };
    }

    /// ### DEPRECATED: Use `fetchExtractors` instead
    ///
    pub const FetchExtractors = fetchExtractors;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractorcollection.html#fetchExtractors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__ExtractorCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimetype: []const u8 `
    ///
    pub fn fetchExtractors(self: KFileMetaData__ExtractorCollection, allocator: std.mem.Allocator, mimetype: []const u8) []KFileMetaData__Extractor {
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KFileMetaData__ExtractorCollection_FetchExtractors(@ptrCast(self.ptr), mimetype_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KFileMetaData__Extractor, _arr.len) catch @panic("KFileMetaData__ExtractorCollection.fetchExtractors: Memory allocation failed");
        const _data_val: [*]QtC.KFileMetaData__Extractor = @ptrCast(@alignCast(_arr.data));
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
    /// ` self: KFileMetaData__ExtractorCollection `
    ///
    pub fn delete(self: KFileMetaData__ExtractorCollection) void {
        qtc.KFileMetaData__ExtractorCollection_Delete(@ptrCast(self.ptr));
    }
};
