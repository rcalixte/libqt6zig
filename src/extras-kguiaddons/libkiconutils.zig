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
    /// ` icon: QIcon `
    ///
    /// ` overlay: QIcon `
    ///
    /// ` position: qnamespace_enums.Corner `
    ///
    pub fn AddOverlay(icon: anytype, overlay: anytype, position: i32) QIcon {
        comptime _ = @TypeOf(icon)._is_QIcon;
        comptime _ = @TypeOf(overlay)._is_QIcon;
        return .{ .ptr = qtc.KIconUtils_AddOverlay(@ptrCast(icon.ptr), @ptrCast(overlay.ptr), @bitCast(position)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconutils.html#addOverlays)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` icon: QIcon `
    ///
    /// ` overlays: Map_i32_QIcon (key: qnamespace_enums.Corner) `
    ///
    pub fn AddOverlays(allocator: std.mem.Allocator, icon: anytype, overlays: Map_i32_QIcon) QIcon {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const overlays_count = overlays.count();
        const overlays_keys = allocator.alloc(i32, overlays_count) catch @panic("kiconutils.AddOverlays: Memory allocation failed");
        defer allocator.free(overlays_keys);
        const overlays_values = allocator.alloc(QtC.QIcon, overlays_count) catch @panic("kiconutils.AddOverlays: Memory allocation failed");
        defer allocator.free(overlays_values);
        var i: usize = 0;
        var overlays_it = overlays.iterator();
        while (overlays_it.next()) |it_entry| : (i += 1) {
            const overlays_key = it_entry.key_ptr.*;
            overlays_keys[i] = @bitCast(overlays_key);
            overlays_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const overlays_map = qtc.libqt_map{
            .len = overlays_count,
            .keys = @ptrCast(overlays_keys.ptr),
            .values = @ptrCast(overlays_values.ptr),
        };
        return .{ .ptr = qtc.KIconUtils_AddOverlays(@ptrCast(icon.ptr), overlays_map) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconutils.html#addOverlays)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` icon: QIcon `
    ///
    /// ` overlays: []const []const u8 `
    ///
    pub fn AddOverlays2(allocator: std.mem.Allocator, icon: anytype, overlays: []const []const u8) QIcon {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconutils.AddOverlays2: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i|
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        return .{ .ptr = qtc.KIconUtils_AddOverlays2(@ptrCast(icon.ptr), overlays_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconutils.html#addOverlays)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` overlays: []const []const u8 `
    ///
    pub fn AddOverlays3(allocator: std.mem.Allocator, iconName: []const u8, overlays: []const []const u8) QIcon {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconutils.AddOverlays3: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i|
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        return .{ .ptr = qtc.KIconUtils_AddOverlays3(iconName_str, overlays_list) };
    }
};
