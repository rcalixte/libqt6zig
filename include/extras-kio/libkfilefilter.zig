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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFileFilter object in C++ memory
    ///
    pub fn new() KFileFilter {
        return .{ .ptr = qtc.KFileFilter_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFileFilter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _label: []const u8 `
    ///
    /// ` _filePatterns: []const []const u8 `
    ///
    /// ` _mimePatterns: []const []const u8 `
    ///
    pub fn new2(allocator: std.mem.Allocator, _label: []const u8, _filePatterns: []const []const u8, _mimePatterns: []const []const u8) KFileFilter {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        const filePatterns_arr = allocator.alloc(qtc.libqt_string, _filePatterns.len) catch @panic("KFileFilter.new2: Memory allocation failed");
        defer allocator.free(filePatterns_arr);
        for (_filePatterns, 0.._filePatterns.len) |str_item, i|
            filePatterns_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const filePatterns_list = qtc.libqt_list{
            .len = _filePatterns.len,
            .data = filePatterns_arr.ptr,
        };
        const mimePatterns_arr = allocator.alloc(qtc.libqt_string, _mimePatterns.len) catch @panic("KFileFilter.new2: Memory allocation failed");
        defer allocator.free(mimePatterns_arr);
        for (_mimePatterns, 0.._mimePatterns.len) |str_item, i|
            mimePatterns_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const mimePatterns_list = qtc.libqt_list{
            .len = _mimePatterns.len,
            .data = mimePatterns_arr.ptr,
        };
        return .{ .ptr = qtc.KFileFilter_new2(label_str, filePatterns_list, mimePatterns_list) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KFileFilter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KFileFilter `
    ///
    pub fn new3(other: anytype) KFileFilter {
        comptime _ = @TypeOf(other)._is_KFileFilter;
        return .{ .ptr = qtc.KFileFilter_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    /// ` other: KFileFilter `
    ///
    pub fn operatorAssign(self: KFileFilter, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KFileFilter;
        qtc.KFileFilter_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    /// ` other: KFileFilter `
    ///
    pub fn operatorEqual(self: KFileFilter, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KFileFilter;
        return qtc.KFileFilter_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: KFileFilter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileFilter_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileFilter.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `filePatterns` instead
    ///
    pub const FilePatterns = filePatterns;

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#filePatterns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn filePatterns(self: KFileFilter, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileFilter_FilePatterns(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KFileFilter.filePatterns: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KFileFilter.filePatterns: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `mimePatterns` instead
    ///
    pub const MimePatterns = mimePatterns;

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#mimePatterns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimePatterns(self: KFileFilter, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileFilter_MimePatterns(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KFileFilter.mimePatterns: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KFileFilter.mimePatterns: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `toFilterString` instead
    ///
    pub const ToFilterString = toFilterString;

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#toFilterString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toFilterString(self: KFileFilter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileFilter_ToFilterString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileFilter.toFilterString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    pub fn isEmpty(self: KFileFilter) bool {
        return qtc.KFileFilter_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilter `
    ///
    pub fn isValid(self: KFileFilter) bool {
        return qtc.KFileFilter_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromMimeType` instead
    ///
    pub const FromMimeType = fromMimeType;

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#fromMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn fromMimeType(mimeType: []const u8) KFileFilter {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return .{ .ptr = qtc.KFileFilter_FromMimeType(mimeType_str) };
    }

    /// ### DEPRECATED: Use `fromMimeTypes` instead
    ///
    pub const FromMimeTypes = fromMimeTypes;

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#fromMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeTypes: []const []const u8 `
    ///
    pub fn fromMimeTypes(allocator: std.mem.Allocator, mimeTypes: []const []const u8) []KFileFilter {
        const mimeTypes_arr = allocator.alloc(qtc.libqt_string, mimeTypes.len) catch @panic("KFileFilter.fromMimeTypes: Memory allocation failed");
        defer allocator.free(mimeTypes_arr);
        for (mimeTypes, 0..mimeTypes.len) |str_item, i|
            mimeTypes_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const mimeTypes_list = qtc.libqt_list{
            .len = mimeTypes.len,
            .data = mimeTypes_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KFileFilter_FromMimeTypes(mimeTypes_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KFileFilter, _arr.len) catch @panic("KFileFilter.fromMimeTypes: Memory allocation failed");
        const _data_val: [*]QtC.KFileFilter = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kfilefilter.html#dtor.KFileFilter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileFilter `
    ///
    pub fn delete(self: KFileFilter) void {
        qtc.KFileFilter_Delete(@ptrCast(self.ptr));
    }
};
