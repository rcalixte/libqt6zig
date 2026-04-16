const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfilefilter.html)
pub const KFileFilter = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileFilter,

    pub const _is_KFileFilter = {};

    /// New constructs a new KFileFilter object.
    ///
    pub fn New() KFileFilter {
        return .{ .ptr = qtc.KFileFilter_new() };
    }

    /// New2 constructs a new KFileFilter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` label: []const u8 `
    ///
    /// ` filePatterns: []const []const u8 `
    ///
    /// ` mimePatterns: []const []const u8 `
    ///
    pub fn New2(allocator: std.mem.Allocator, label: []const u8, filePatterns: []const []const u8, mimePatterns: []const []const u8) KFileFilter {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        const filePatterns_arr = allocator.alloc(qtc.libqt_string, filePatterns.len) catch @panic("kfilefilter.New2: Memory allocation failed");
        defer allocator.free(filePatterns_arr);
        for (filePatterns, 0..filePatterns.len) |item, i|
            filePatterns_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const filePatterns_list = qtc.libqt_list{
            .len = filePatterns.len,
            .data = filePatterns_arr.ptr,
        };
        const mimePatterns_arr = allocator.alloc(qtc.libqt_string, mimePatterns.len) catch @panic("kfilefilter.New2: Memory allocation failed");
        defer allocator.free(mimePatterns_arr);
        for (mimePatterns, 0..mimePatterns.len) |item, i|
            mimePatterns_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const mimePatterns_list = qtc.libqt_list{
            .len = mimePatterns.len,
            .data = mimePatterns_arr.ptr,
        };
        return .{ .ptr = qtc.KFileFilter_new2(label_str, filePatterns_list, mimePatterns_list) };
    }

    /// New3 constructs a new KFileFilter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KFileFilter `
    ///
    pub fn New3(other: anytype) KFileFilter {
        comptime _ = @TypeOf(other)._is_KFileFilter;
        return .{ .ptr = qtc.KFileFilter_new3(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    /// ` other: KFileFilter `
    ///
    pub fn OperatorAssign(self: KFileFilter, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KFileFilter;
        qtc.KFileFilter_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    /// ` other: KFileFilter `
    ///
    pub fn OperatorEqual(self: KFileFilter, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KFileFilter;
        return qtc.KFileFilter_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: KFileFilter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileFilter_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefilter.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#filePatterns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePatterns(self: KFileFilter, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileFilter_FilePatterns(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfilefilter.FilePatterns: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfilefilter.FilePatterns: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#mimePatterns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimePatterns(self: KFileFilter, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileFilter_MimePatterns(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfilefilter.MimePatterns: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfilefilter.MimePatterns: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#toFilterString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToFilterString(self: KFileFilter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileFilter_ToFilterString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefilter.ToFilterString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    pub fn IsEmpty(self: KFileFilter) bool {
        return qtc.KFileFilter_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    pub fn IsValid(self: KFileFilter) bool {
        return qtc.KFileFilter_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#fromMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn FromMimeType(mimeType: []const u8) KFileFilter {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return .{ .ptr = qtc.KFileFilter_FromMimeType(mimeType_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#fromMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeTypes: []const []const u8 `
    ///
    pub fn FromMimeTypes(allocator: std.mem.Allocator, mimeTypes: []const []const u8) []KFileFilter {
        const mimeTypes_arr = allocator.alloc(qtc.libqt_string, mimeTypes.len) catch @panic("kfilefilter.FromMimeTypes: Memory allocation failed");
        defer allocator.free(mimeTypes_arr);
        for (mimeTypes, 0..mimeTypes.len) |item, i|
            mimeTypes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const mimeTypes_list = qtc.libqt_list{
            .len = mimeTypes.len,
            .data = mimeTypes_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KFileFilter_FromMimeTypes(mimeTypes_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KFileFilter, _arr.len) catch @panic("kfilefilter.FromMimeTypes: Memory allocation failed");
        const _data: [*]QtC.KFileFilter = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#dtor.KFileFilter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileFilter `
    ///
    pub fn Delete(self: KFileFilter) void {
        qtc.KFileFilter_Delete(@ptrCast(self.ptr));
    }
};
