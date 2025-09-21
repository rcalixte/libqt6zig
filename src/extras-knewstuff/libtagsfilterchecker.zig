const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/knscore-tagsfilterchecker.html
pub const knscore__tagsfilterchecker = struct {
    /// New constructs a new KNSCore::TagsFilterChecker object.
    ///
    /// ``` tagFilter: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New(tagFilter: [][]const u8, allocator: std.mem.Allocator) QtC.KNSCore__TagsFilterChecker {
        var tagFilter_arr = allocator.alloc(qtc.libqt_string, tagFilter.len) catch @panic("knscore::tagsfilterchecker.: Memory allocation failed");
        defer allocator.free(tagFilter_arr);
        for (tagFilter, 0..tagFilter.len) |item, i| {
            tagFilter_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const tagFilter_list = qtc.libqt_list{
            .len = tagFilter.len,
            .data = tagFilter_arr.ptr,
        };

        return qtc.KNSCore__TagsFilterChecker_new(tagFilter_list);
    }

    /// [Qt documentation](https://api.kde.org/knscore-tagsfilterchecker.html#filterAccepts)
    ///
    /// ``` self: QtC.KNSCore__TagsFilterChecker, tags: [][]const u8, allocator: std.mem.Allocator ```
    pub fn FilterAccepts(self: ?*anyopaque, tags: [][]const u8, allocator: std.mem.Allocator) bool {
        var tags_arr = allocator.alloc(qtc.libqt_string, tags.len) catch @panic("knscore::tagsfilterchecker.FilterAccepts: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (tags, 0..tags.len) |item, i| {
            tags_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const tags_list = qtc.libqt_list{
            .len = tags.len,
            .data = tags_arr.ptr,
        };
        return qtc.KNSCore__TagsFilterChecker_FilterAccepts(@ptrCast(self), tags_list);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KNSCore__TagsFilterChecker ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KNSCore__TagsFilterChecker_Delete(@ptrCast(self));
    }
};
