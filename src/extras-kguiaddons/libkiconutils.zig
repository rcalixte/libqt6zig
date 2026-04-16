const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIcon = @import("libqt6").QIcon;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const std = @import("std");
const Map_i32_QIcon = std.AutoHashMapUnmanaged(i32, QIcon);

/// ### [Upstream resources](https://api.kde.org/kiconutils.html)
pub const KIconUtils = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kiconutils.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIconUtils,

    pub const _is_KIconUtils = {};

    /// ### [Upstream resources](https://api.kde.org/kiconutils.html#addOverlay)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QIcon `
    ///
    /// ` param2: QIcon `
    ///
    /// ` param3: qnamespace_enums.Corner `
    ///
    pub fn AddOverlay(param1: anytype, param2: anytype, param3: i32) QIcon {
        comptime _ = @TypeOf(param1)._is_QIcon;
        comptime _ = @TypeOf(param2)._is_QIcon;
        return .{ .ptr = qtc.KIconUtils_AddOverlay(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconutils.html#addOverlays)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QIcon `
    ///
    /// ` param2: Map_i32_QIcon (key: qnamespace_enums.Corner) `
    ///
    pub fn AddOverlays(allocator: std.mem.Allocator, param1: anytype, param2: Map_i32_QIcon) QIcon {
        comptime _ = @TypeOf(param1)._is_QIcon;
        const param2_count = param2.count();
        const param2_keys = allocator.alloc(i32, param2_count) catch @panic("kiconutils.AddOverlays: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc(QtC.QIcon, param2_count) catch @panic("kiconutils.AddOverlays: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |it_entry| : (i += 1) {
            const param2_key = it_entry.key_ptr.*;
            param2_keys[i] = @bitCast(param2_key);
            param2_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const param2_map = qtc.libqt_map{
            .len = param2_count,
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        return .{ .ptr = qtc.KIconUtils_AddOverlays(@ptrCast(param1.ptr), param2_map) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconutils.html#addOverlays)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QIcon `
    ///
    /// ` param2: []const []const u8 `
    ///
    pub fn AddOverlays2(allocator: std.mem.Allocator, param1: anytype, param2: []const []const u8) QIcon {
        comptime _ = @TypeOf(param1)._is_QIcon;
        const param2_arr = allocator.alloc(qtc.libqt_string, param2.len) catch @panic("kiconutils.AddOverlays2: Memory allocation failed");
        defer allocator.free(param2_arr);
        for (param2, 0..param2.len) |item, i|
            param2_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = param2_arr.ptr,
        };
        return .{ .ptr = qtc.KIconUtils_AddOverlays2(@ptrCast(param1.ptr), param2_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconutils.html#addOverlays)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const []const u8 `
    ///
    pub fn AddOverlays3(allocator: std.mem.Allocator, param1: []const u8, param2: []const []const u8) QIcon {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_arr = allocator.alloc(qtc.libqt_string, param2.len) catch @panic("kiconutils.AddOverlays3: Memory allocation failed");
        defer allocator.free(param2_arr);
        for (param2, 0..param2.len) |item, i|
            param2_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = param2_arr.ptr,
        };
        return .{ .ptr = qtc.KIconUtils_AddOverlays3(param1_str, param2_list) };
    }
};
