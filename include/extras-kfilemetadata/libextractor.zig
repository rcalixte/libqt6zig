const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KFileMetaData__ExtractionResult = @import("libqt6").KFileMetaData__ExtractionResult;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractor.html)
pub const KFileMetaData__Extractor = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileMetaData__Extractor,

    pub const _is_KFileMetaData__Extractor = {};

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractor.html#extract)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__Extractor `
    ///
    /// ` result: KFileMetaData__ExtractionResult `
    ///
    pub fn Extract(self: KFileMetaData__Extractor, result: anytype) void {
        comptime _ = @TypeOf(result)._is_KFileMetaData__ExtractionResult;
        qtc.KFileMetaData__Extractor_Extract(@ptrCast(self.ptr), @ptrCast(result.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractor.html#mimetypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__Extractor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Mimetypes(self: KFileMetaData__Extractor, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileMetaData__Extractor_Mimetypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfilemetadata__extractor.Mimetypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfilemetadata__extractor.Mimetypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractor.html#extractorProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__Extractor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtractorProperties(self: KFileMetaData__Extractor, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.KFileMetaData__Extractor_ExtractorProperties(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("kfilemetadata__extractor.ExtractorProperties: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("kfilemetadata__extractor.ExtractorProperties: Memory allocation failed");
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
    /// ` self: KFileMetaData__Extractor `
    ///
    pub fn Delete(self: KFileMetaData__Extractor) void {
        qtc.KFileMetaData__Extractor_Delete(@ptrCast(self.ptr));
    }
};
