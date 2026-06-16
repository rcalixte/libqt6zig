const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMimeData = @import("libqt6").QMimeData;
const QUrl = @import("libqt6").QUrl;
const kurlmimedata_enums = enums;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/kurlmimedata.html)
pub const KUrlMimeData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kurlmimedata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUrlMimeData,

    pub const _is_KUrlMimeData = {};

    /// ### [Upstream resources](https://api.kde.org/kurlmimedata.html#setUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` urls: []QUrl `
    ///
    /// ` mostLocalUrls: []QUrl `
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn SetUrls(urls: []QUrl, mostLocalUrls: []QUrl, mimeData: anytype) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        const mostLocalUrls_list = qtc.libqt_list{
            .len = mostLocalUrls.len,
            .data = @ptrCast(mostLocalUrls.ptr),
        };
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        qtc.KUrlMimeData_SetUrls(urls_list, mostLocalUrls_list, @ptrCast(mimeData.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurlmimedata.html#exportUrlsToPortal)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn ExportUrlsToPortal(mimeData: anytype) bool {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        return qtc.KUrlMimeData_ExportUrlsToPortal(@ptrCast(mimeData.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurlmimedata.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` metaData: ArrayMap_constu8_constu8 `
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn SetMetaData(allocator: std.mem.Allocator, metaData: ArrayMap_constu8_constu8, mimeData: anytype) void {
        const metaData_count = metaData.count();
        const metaData_keys = allocator.alloc(qtc.libqt_string, metaData_count) catch @panic("kurlmimedata.SetMetaData: Memory allocation failed");
        defer allocator.free(metaData_keys);
        const metaData_values = allocator.alloc(qtc.libqt_string, metaData_count) catch @panic("kurlmimedata.SetMetaData: Memory allocation failed");
        defer allocator.free(metaData_values);
        var i: usize = 0;
        var metaData_it = metaData.iterator();
        while (metaData_it.next()) |it_entry| : (i += 1) {
            const metaData_key = it_entry.key_ptr.*;
            metaData_keys[i] = qtc.libqt_string{
                .len = metaData_key.len,
                .data = metaData_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            metaData_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const metaData_map = qtc.libqt_map{
            .len = metaData_count,
            .keys = @ptrCast(metaData_keys.ptr),
            .values = @ptrCast(metaData_values.ptr),
        };
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        qtc.KUrlMimeData_SetMetaData(metaData_map, @ptrCast(mimeData.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurlmimedata.html#mimeDataTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeDataTypes(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUrlMimeData_MimeDataTypes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kurlmimedata.MimeDataTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kurlmimedata.MimeDataTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurlmimedata.html#urlsFromMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeData: QMimeData `
    ///
    /// ` decodeOptions: flag of kurlmimedata_enums.DecodeOption `
    ///
    /// ` metaData: ArrayMap_constu8_constu8 `
    ///
    pub fn UrlsFromMimeData(allocator: std.mem.Allocator, mimeData: anytype, decodeOptions: i32, metaData: ArrayMap_constu8_constu8) []QUrl {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        const metaData_count = metaData.count();
        const metaData_keys = allocator.alloc(qtc.libqt_string, metaData_count) catch @panic("kurlmimedata.UrlsFromMimeData: Memory allocation failed");
        defer allocator.free(metaData_keys);
        const metaData_values = allocator.alloc(qtc.libqt_string, metaData_count) catch @panic("kurlmimedata.UrlsFromMimeData: Memory allocation failed");
        defer allocator.free(metaData_values);
        var i: usize = 0;
        var metaData_it = metaData.iterator();
        while (metaData_it.next()) |it_entry| : (i += 1) {
            const metaData_key = it_entry.key_ptr.*;
            metaData_keys[i] = qtc.libqt_string{
                .len = metaData_key.len,
                .data = metaData_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            metaData_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        var metaData_map = qtc.libqt_map{
            .len = metaData_count,
            .keys = @ptrCast(metaData_keys.ptr),
            .values = @ptrCast(metaData_values.ptr),
        };
        const _arr: qtc.libqt_list = qtc.KUrlMimeData_UrlsFromMimeData(@ptrCast(mimeData.ptr), @bitCast(decodeOptions), &metaData_map);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("kurlmimedata.UrlsFromMimeData: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }
};

/// ### [Upstream resources](https://api.kde.org/kurlmimedata.html#public-types)
pub const enums = struct {
    pub const DecodeOption = enum(i32) {
        pub const PreferKdeUrls: i32 = 0;
        pub const PreferLocalUrls: i32 = 1;
    };
};
