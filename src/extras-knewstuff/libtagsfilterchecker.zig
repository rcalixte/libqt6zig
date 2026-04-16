const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knscore-tagsfilterchecker.html)
pub const KNSCore__TagsFilterChecker = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore-tagsfilterchecker.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore__TagsFilterChecker,

    pub const _is_KNSCore__TagsFilterChecker = {};

    /// New constructs a new KNSCore::TagsFilterChecker object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tagFilter: []const []const u8 `
    ///
    pub fn New(allocator: std.mem.Allocator, tagFilter: []const []const u8) KNSCore__TagsFilterChecker {
        const tagFilter_arr = allocator.alloc(qtc.libqt_string, tagFilter.len) catch @panic("knscore__tagsfilterchecker.New: Memory allocation failed");
        defer allocator.free(tagFilter_arr);
        for (tagFilter, 0..tagFilter.len) |item, i|
            tagFilter_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const tagFilter_list = qtc.libqt_list{
            .len = tagFilter.len,
            .data = tagFilter_arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__TagsFilterChecker_new(tagFilter_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-tagsfilterchecker.html#filterAccepts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__TagsFilterChecker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tags: []const []const u8 `
    ///
    pub fn FilterAccepts(self: KNSCore__TagsFilterChecker, allocator: std.mem.Allocator, tags: []const []const u8) bool {
        const tags_arr = allocator.alloc(qtc.libqt_string, tags.len) catch @panic("knscore__tagsfilterchecker.FilterAccepts: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (tags, 0..tags.len) |item, i|
            tags_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const tags_list = qtc.libqt_list{
            .len = tags.len,
            .data = tags_arr.ptr,
        };
        return qtc.KNSCore__TagsFilterChecker_FilterAccepts(@ptrCast(self.ptr), tags_list);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__TagsFilterChecker `
    ///
    pub fn Delete(self: KNSCore__TagsFilterChecker) void {
        qtc.KNSCore__TagsFilterChecker_Delete(@ptrCast(self.ptr));
    }
};
