const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kurlmimedata_enums = enums;
const std = @import("std");
const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// ### [Upstream resources](https://api.kde.org/kurlmimedata.html)
pub const kurlmimedata = struct {
    /// ### [Upstream resources](https://api.kde.org/kurlmimedata.html#setUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []QtC.QUrl `
    ///
    /// ` param2: []QtC.QUrl `
    ///
    /// ` param3: QtC.QMimeData `
    ///
    pub fn SetUrls(param1: []QtC.QUrl, param2: []QtC.QUrl, param3: ?*anyopaque) void {
        const param1_list = qtc.libqt_list{
            .len = param1.len,
            .data = @ptrCast(param1.ptr),
        };
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = @ptrCast(param2.ptr),
        };
        qtc.KUrlMimeData_SetUrls(param1_list, param2_list, @ptrCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/kurlmimedata.html#exportUrlsToPortal)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMimeData `
    ///
    pub fn ExportUrlsToPortal(param1: ?*anyopaque) bool {
        return qtc.KUrlMimeData_ExportUrlsToPortal(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kurlmimedata.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: map_constu8_constu8 `
    ///
    /// ` param2: QtC.QMimeData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetMetaData(param1: map_constu8_constu8, param2: ?*anyopaque, allocator: std.mem.Allocator) void {
        const param1_count = param1.count();
        const param1_keys = allocator.alloc(qtc.libqt_string, param1_count) catch @panic("kurlmimedata.SetMetaData: Memory allocation failed");
        defer allocator.free(param1_keys);
        const param1_values = allocator.alloc(qtc.libqt_string, param1_count) catch @panic("kurlmimedata.SetMetaData: Memory allocation failed");
        defer allocator.free(param1_values);
        var i: usize = 0;
        var param1_it = param1.iterator();
        while (param1_it.next()) |it_entry| : (i += 1) {
            const param1_key = it_entry.key_ptr.*;
            param1_keys[i] = qtc.libqt_string{
                .len = param1_key.len,
                .data = param1_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            param1_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const param1_map = qtc.libqt_map{
            .len = param1_count,
            .keys = @ptrCast(param1_keys.ptr),
            .values = @ptrCast(param1_values.ptr),
        };
        qtc.KUrlMimeData_SetMetaData(param1_map, @ptrCast(param2));
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
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` param1: QtC.QMimeData `
    ///
    /// ` param2: flag of kurlmimedata_enums.DecodeOption `
    ///
    /// ` param3: map_constu8_constu8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UrlsFromMimeData(param1: ?*anyopaque, param2: i32, param3: map_constu8_constu8, allocator: std.mem.Allocator) []QtC.QUrl {
        const param3_count = param3.count();
        const param3_keys = allocator.alloc(qtc.libqt_string, param3_count) catch @panic("kurlmimedata.UrlsFromMimeData: Memory allocation failed");
        defer allocator.free(param3_keys);
        const param3_values = allocator.alloc(qtc.libqt_string, param3_count) catch @panic("kurlmimedata.UrlsFromMimeData: Memory allocation failed");
        defer allocator.free(param3_values);
        var i: usize = 0;
        var param3_it = param3.iterator();
        while (param3_it.next()) |it_entry| : (i += 1) {
            const param3_key = it_entry.key_ptr.*;
            param3_keys[i] = qtc.libqt_string{
                .len = param3_key.len,
                .data = param3_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            param3_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        var param3_map = qtc.libqt_map{
            .len = param3_count,
            .keys = @ptrCast(param3_keys.ptr),
            .values = @ptrCast(param3_values.ptr),
        };
        const _arr: qtc.libqt_list = qtc.KUrlMimeData_UrlsFromMimeData(@ptrCast(param1), @intCast(param2), &param3_map);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("kurlmimedata.UrlsFromMimeData: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
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
