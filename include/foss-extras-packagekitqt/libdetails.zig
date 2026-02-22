const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const transaction_enums = @import("libtransaction_1.zig").enums;
const arraymap_constu8_qtcqvariant = std.StringArrayHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
pub const packagekit__details = struct {
    /// New constructs a new PackageKit::Details object.
    ///
    pub fn New() QtC.PackageKit__Details {
        return qtc.PackageKit__Details_new();
    }

    /// New2 constructs a new PackageKit::Details object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: arraymap_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New2(other: arraymap_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.PackageKit__Details {
        const other_count = other.count();
        const other_keys = allocator.alloc(qtc.libqt_string, other_count) catch @panic("packagekit__details.New2: Memory allocation failed");
        defer allocator.free(other_keys);
        const other_values = allocator.alloc(QtC.QVariant, other_count) catch @panic("packagekit__details.New2: Memory allocation failed");
        defer allocator.free(other_values);
        var i: usize = 0;
        var other_it = other.iterator();
        while (other_it.next()) |it_entry| : (i += 1) {
            const other_key = it_entry.key_ptr.*;
            other_keys[i] = qtc.libqt_string{
                .len = other_key.len,
                .data = other_key.ptr,
            };
            other_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const other_map = qtc.libqt_map{
            .len = other_count,
            .keys = @ptrCast(other_keys.ptr),
            .values = @ptrCast(other_values.ptr),
        };

        return qtc.PackageKit__Details_new2(other_map);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Details `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PackageId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Details_PackageId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__details.PackageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Details `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Details_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__details.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Details `
    ///
    /// ## Returns:
    ///
    /// ` transaction_enums.Group `
    ///
    pub fn Group(self: ?*anyopaque) i32 {
        return qtc.PackageKit__Details_Group(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Details `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Summary(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Details_Summary(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__details.Summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Details `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Details_Url(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__details.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Details `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn License(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Details_License(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__details.License: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Details `
    ///
    pub fn Size(self: ?*anyopaque) u64 {
        return qtc.PackageKit__Details_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.PackageKit__Details `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.PackageKit__Details_Delete(@ptrCast(self));
    }
};
