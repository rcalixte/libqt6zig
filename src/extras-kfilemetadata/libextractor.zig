const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const arraymap_constu8_qtcqvariant = std.StringArrayHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractor.html)
pub const kfilemetadata__extractor = struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractor.html#extract)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__Extractor `
    ///
    /// ` result: QtC.KFileMetaData__ExtractionResult `
    ///
    pub fn Extract(self: ?*anyopaque, result: ?*anyopaque) void {
        qtc.KFileMetaData__Extractor_Extract(@ptrCast(self), @ptrCast(result));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractor.html#mimetypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__Extractor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Mimetypes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileMetaData__Extractor_Mimetypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KFileMetaData__Extractor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtractorProperties(self: ?*anyopaque, allocator: std.mem.Allocator) arraymap_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.KFileMetaData__Extractor_ExtractorProperties(@ptrCast(self));
        var _ret: arraymap_constu8_qtcqvariant = .empty;
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
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("kfilemetadata__extractor.ExtractorProperties: Memory allocation failed");
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
    /// ` self: QtC.KFileMetaData__Extractor `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KFileMetaData__Extractor_Delete(@ptrCast(self));
    }
};
