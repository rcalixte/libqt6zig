const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const std = @import("std");
pub const map_i32_qtcqicon = std.AutoHashMapUnmanaged(i32, QtC.QIcon);

/// https://api-staging.kde.org/kiconutils.html
pub const kiconutils = struct {
    /// [Qt documentation](https://api-staging.kde.org/kiconutils.html#addOverlay)
    ///
    /// ``` param1: QtC.QIcon, param2: QtC.QIcon, param3: qnamespace_enums.Corner ```
    pub fn AddOverlay(param1: ?*anyopaque, param2: ?*anyopaque, param3: i32) QtC.QIcon {
        return qtc.KIconUtils_AddOverlay(@ptrCast(param1), @ptrCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconutils.html#addOverlays)
    ///
    /// ``` param1: QtC.QIcon, param2: map_i32_qtcqicon, allocator: std.mem.Allocator ```
    pub fn AddOverlays(param1: ?*anyopaque, param2: map_i32_qtcqicon, allocator: std.mem.Allocator) QtC.QIcon {
        const param2_keys = allocator.alloc(i32, param2.count()) catch @panic("kiconutils.AddOverlays: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc(QtC.QIcon, param2.count()) catch @panic("kiconutils.AddOverlays: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |entry| {
            const key = entry.key_ptr.*;
            param2_keys[i] = @intCast(key);
            param2_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const param2_map = qtc.libqt_map{
            .len = param2.count(),
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        return qtc.KIconUtils_AddOverlays(@ptrCast(param1), param2_map);
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconutils.html#addOverlays)
    ///
    /// ``` param1: QtC.QIcon, param2: [][]const u8, allocator: std.mem.Allocator ```
    pub fn AddOverlays2(param1: ?*anyopaque, param2: [][]const u8, allocator: std.mem.Allocator) QtC.QIcon {
        var param2_arr = allocator.alloc(qtc.libqt_string, param2.len) catch @panic("kiconutils.AddOverlays2: Memory allocation failed");
        defer allocator.free(param2_arr);
        for (param2, 0..param2.len) |item, i| {
            param2_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = param2_arr.ptr,
        };
        return qtc.KIconUtils_AddOverlays2(@ptrCast(param1), param2_list);
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconutils.html#addOverlays)
    ///
    /// ``` param1: []const u8, param2: [][]const u8, allocator: std.mem.Allocator ```
    pub fn AddOverlays3(param1: []const u8, param2: [][]const u8, allocator: std.mem.Allocator) QtC.QIcon {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var param2_arr = allocator.alloc(qtc.libqt_string, param2.len) catch @panic("kiconutils.AddOverlays3: Memory allocation failed");
        defer allocator.free(param2_arr);
        for (param2, 0..param2.len) |item, i| {
            param2_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = param2_arr.ptr,
        };
        return qtc.KIconUtils_AddOverlays3(param1_str, param2_list);
    }
};
