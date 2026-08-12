const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const transaction_enums = @import("libtransaction_1.zig").enums;
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

// Also inherits unprojectable QMap<QString, QVariant>

/// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
pub const PackageKit__Details = extern struct {
    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.PackageKit__Details,

    pub const _is_PackageKit__Details = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new PackageKit::Details object in C++ memory
    ///
    pub fn new() PackageKit__Details {
        return .{ .ptr = qtc.PackageKit__Details_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new PackageKit::Details object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` other: ArrayMap_constu8_QVariant `
    ///
    pub fn new2(allocator: std.mem.Allocator, other: ArrayMap_constu8_QVariant) PackageKit__Details {
        const other_count = other.count();
        const other_keys = allocator.alloc(qtc.libqt_string, other_count) catch @panic("PackageKit__Details.new2: Memory allocation failed");
        defer allocator.free(other_keys);
        const other_values = allocator.alloc(QtC.QVariant, other_count) catch @panic("PackageKit__Details.new2: Memory allocation failed");
        defer allocator.free(other_values);
        var i: usize = 0;
        var other_it = other.iterator();
        while (other_it.next()) |it_entry| : (i += 1) {
            const other_key = it_entry.key_ptr.*;
            other_keys[i] = qtc.libqt_string{
                .len = other_key.len,
                .data = other_key.ptr,
            };
            other_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const other_map = qtc.libqt_map{
            .len = other_count,
            .keys = @ptrCast(other_keys.ptr),
            .values = @ptrCast(other_values.ptr),
        };
        return .{ .ptr = qtc.PackageKit__Details_new2(other_map) };
    }

    /// ### DEPRECATED: Use `packageId` instead
    ///
    pub const PackageId = packageId;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Details `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn packageId(self: PackageKit__Details, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Details_PackageId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Details.packageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Details `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: PackageKit__Details, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Details_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Details.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Details `
    ///
    /// ## Returns:
    ///
    /// ` transaction_enums.Group `
    ///
    pub fn group(self: PackageKit__Details) i32 {
        return qtc.PackageKit__Details_Group(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `summary` instead
    ///
    pub const Summary = summary;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Details `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn summary(self: PackageKit__Details, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Details_Summary(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Details.summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Details `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn url(self: PackageKit__Details, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Details_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Details.url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `license` instead
    ///
    pub const License = license;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Details `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn license(self: PackageKit__Details, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Details_License(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Details.license: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Details `
    ///
    pub fn size(self: PackageKit__Details) usize {
        return qtc.PackageKit__Details_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: PackageKit__Details `
    ///
    pub fn delete(self: PackageKit__Details) void {
        qtc.PackageKit__Details_Delete(@ptrCast(self.ptr));
    }
};
