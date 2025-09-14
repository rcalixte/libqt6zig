const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kfilefilter.html
pub const kfilefilter = struct {
    /// New constructs a new KFileFilter object.
    ///
    ///
    pub fn New() QtC.KFileFilter {
        return qtc.KFileFilter_new();
    }

    /// New2 constructs a new KFileFilter object.
    ///
    /// ``` label: []const u8, filePatterns: [][]const u8, mimePatterns: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New2(label: []const u8, filePatterns: [][]const u8, mimePatterns: [][]const u8, allocator: std.mem.Allocator) QtC.KFileFilter {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        var filePatterns_arr = allocator.alloc(qtc.libqt_string, filePatterns.len) catch @panic("kfilefilter.: Memory allocation failed");
        defer allocator.free(filePatterns_arr);
        for (filePatterns, 0..filePatterns.len) |item, i| {
            filePatterns_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const filePatterns_list = qtc.libqt_list{
            .len = filePatterns.len,
            .data = filePatterns_arr.ptr,
        };
        var mimePatterns_arr = allocator.alloc(qtc.libqt_string, mimePatterns.len) catch @panic("kfilefilter.: Memory allocation failed");
        defer allocator.free(mimePatterns_arr);
        for (mimePatterns, 0..mimePatterns.len) |item, i| {
            mimePatterns_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const mimePatterns_list = qtc.libqt_list{
            .len = mimePatterns.len,
            .data = mimePatterns_arr.ptr,
        };

        return qtc.KFileFilter_new2(label_str, filePatterns_list, mimePatterns_list);
    }

    /// New3 constructs a new KFileFilter object.
    ///
    /// ``` other: QtC.KFileFilter ```
    pub fn New3(other: ?*anyopaque) QtC.KFileFilter {
        return qtc.KFileFilter_new3(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kfilefilter.html#operator-eq)
    ///
    /// ``` self: QtC.KFileFilter, other: QtC.KFileFilter ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KFileFilter_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kfilefilter.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KFileFilter, other: QtC.KFileFilter ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KFileFilter_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kfilefilter.html#label)
    ///
    /// ``` self: QtC.KFileFilter, allocator: std.mem.Allocator ```
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileFilter_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefilter.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfilefilter.html#filePatterns)
    ///
    /// ``` self: QtC.KFileFilter, allocator: std.mem.Allocator ```
    pub fn FilePatterns(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KFileFilter_FilePatterns(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kfilefilter.html#mimePatterns)
    ///
    /// ``` self: QtC.KFileFilter, allocator: std.mem.Allocator ```
    pub fn MimePatterns(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KFileFilter_MimePatterns(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kfilefilter.html#toFilterString)
    ///
    /// ``` self: QtC.KFileFilter, allocator: std.mem.Allocator ```
    pub fn ToFilterString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileFilter_ToFilterString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefilter.ToFilterString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfilefilter.html#isEmpty)
    ///
    /// ``` self: QtC.KFileFilter ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.KFileFilter_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfilefilter.html#isValid)
    ///
    /// ``` self: QtC.KFileFilter ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KFileFilter_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfilefilter.html#fromMimeType)
    ///
    /// ``` mimeType: []const u8 ```
    pub fn FromMimeType(mimeType: []const u8) QtC.KFileFilter {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return qtc.KFileFilter_FromMimeType(mimeType_str);
    }

    /// [Qt documentation](https://api.kde.org/kfilefilter.html#fromMimeTypes)
    ///
    /// ``` mimeTypes: [][]const u8, allocator: std.mem.Allocator ```
    pub fn FromMimeTypes(mimeTypes: [][]const u8, allocator: std.mem.Allocator) []QtC.KFileFilter {
        var mimeTypes_arr = allocator.alloc(qtc.libqt_string, mimeTypes.len) catch @panic("kfilefilter.FromMimeTypes: Memory allocation failed");
        defer allocator.free(mimeTypes_arr);
        for (mimeTypes, 0..mimeTypes.len) |item, i| {
            mimeTypes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const mimeTypes_list = qtc.libqt_list{
            .len = mimeTypes.len,
            .data = mimeTypes_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KFileFilter_FromMimeTypes(mimeTypes_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KFileFilter, _arr.len) catch @panic("kfilefilter.FromMimeTypes: Memory allocation failed");
        const _data: [*]QtC.KFileFilter = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfilefilter.html#dtor.KFileFilter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KFileFilter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFileFilter_Delete(@ptrCast(self));
    }
};
