const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const searchrequest_enums = enums;
const std = @import("std");

/// https://api.kde.org/knscore.html
pub const knscore = struct {
    /// [Qt documentation](https://api.kde.org/knscore.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: searchrequest_enums.SortMode ```
    pub fn GetEnumMetaObject(param1: i32) QtC.QMetaObject {
        return qtc.KNSCore_GetEnumMetaObject(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/knscore.html#qt_getEnumName)
    ///
    /// ``` param1: searchrequest_enums.SortMode ```
    pub fn GetEnumName(param1: i32) []const u8 {
        const _ret = qtc.KNSCore_GetEnumName(@intCast(param1));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://api.kde.org/knscore.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: searchrequest_enums.Filter ```
    pub fn GetEnumMetaObject2(param1: i32) QtC.QMetaObject {
        return qtc.KNSCore_GetEnumMetaObject2(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/knscore.html#qt_getEnumName)
    ///
    /// ``` param1: searchrequest_enums.Filter ```
    pub fn GetEnumName2(param1: i32) []const u8 {
        const _ret = qtc.KNSCore_GetEnumName2(@intCast(param1));
        return std.mem.span(_ret);
    }
};

/// https://api.kde.org/knscore-searchrequest.html
pub const knscore__searchrequest = struct {
    /// New constructs a new KNSCore::SearchRequest object.
    ///
    ///
    pub fn New() QtC.KNSCore__SearchRequest {
        return qtc.KNSCore__SearchRequest_new();
    }

    /// New2 constructs a new KNSCore::SearchRequest object.
    ///
    /// ``` param1: QtC.KNSCore__SearchRequest ```
    pub fn New2(param1: ?*anyopaque) QtC.KNSCore__SearchRequest {
        return qtc.KNSCore__SearchRequest_new2(@ptrCast(param1));
    }

    /// New3 constructs a new KNSCore::SearchRequest object.
    ///
    /// ``` sortMode_: searchrequest_enums.SortMode ```
    pub fn New3(sortMode_: i32) QtC.KNSCore__SearchRequest {
        return qtc.KNSCore__SearchRequest_new3(@intCast(sortMode_));
    }

    /// New4 constructs a new KNSCore::SearchRequest object.
    ///
    /// ``` sortMode_: searchrequest_enums.SortMode, filter_: searchrequest_enums.Filter ```
    pub fn New4(sortMode_: i32, filter_: i32) QtC.KNSCore__SearchRequest {
        return qtc.KNSCore__SearchRequest_new4(@intCast(sortMode_), @intCast(filter_));
    }

    /// New5 constructs a new KNSCore::SearchRequest object.
    ///
    /// ``` sortMode_: searchrequest_enums.SortMode, filter_: searchrequest_enums.Filter, searchTerm_: []const u8 ```
    pub fn New5(sortMode_: i32, filter_: i32, searchTerm_: []const u8) QtC.KNSCore__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };

        return qtc.KNSCore__SearchRequest_new5(@intCast(sortMode_), @intCast(filter_), searchTerm__str);
    }

    /// New6 constructs a new KNSCore::SearchRequest object.
    ///
    /// ``` sortMode_: searchrequest_enums.SortMode, filter_: searchrequest_enums.Filter, searchTerm_: []const u8, categories_: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New6(sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: [][]const u8, allocator: std.mem.Allocator) QtC.KNSCore__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        var categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("knscore::searchrequest.GetEnumName2: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |item, i| {
            categories__arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };

        return qtc.KNSCore__SearchRequest_new6(@intCast(sortMode_), @intCast(filter_), searchTerm__str, categories__list);
    }

    /// New7 constructs a new KNSCore::SearchRequest object.
    ///
    /// ``` sortMode_: searchrequest_enums.SortMode, filter_: searchrequest_enums.Filter, searchTerm_: []const u8, categories_: [][]const u8, page_: i32, allocator: std.mem.Allocator ```
    pub fn New7(sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: [][]const u8, page_: i32, allocator: std.mem.Allocator) QtC.KNSCore__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        var categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("knscore::searchrequest.GetEnumName2: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |item, i| {
            categories__arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };

        return qtc.KNSCore__SearchRequest_new7(@intCast(sortMode_), @intCast(filter_), searchTerm__str, categories__list, @intCast(page_));
    }

    /// New8 constructs a new KNSCore::SearchRequest object.
    ///
    /// ``` sortMode_: searchrequest_enums.SortMode, filter_: searchrequest_enums.Filter, searchTerm_: []const u8, categories_: [][]const u8, page_: i32, pageSize_: i32, allocator: std.mem.Allocator ```
    pub fn New8(sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: [][]const u8, page_: i32, pageSize_: i32, allocator: std.mem.Allocator) QtC.KNSCore__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        var categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("knscore::searchrequest.GetEnumName2: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |item, i| {
            categories__arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };

        return qtc.KNSCore__SearchRequest_new8(@intCast(sortMode_), @intCast(filter_), searchTerm__str, categories__list, @intCast(page_), @intCast(pageSize_));
    }

    /// [Qt documentation](https://api.kde.org/knscore-searchrequest.html#sortMode)
    ///
    /// ``` self: QtC.KNSCore__SearchRequest ```
    ///
    /// Returns: ``` searchrequest_enums.SortMode ```
    pub fn SortMode(self: ?*anyopaque) i32 {
        return qtc.KNSCore__SearchRequest_SortMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-searchrequest.html#filter)
    ///
    /// ``` self: QtC.KNSCore__SearchRequest ```
    ///
    /// Returns: ``` searchrequest_enums.Filter ```
    pub fn Filter(self: ?*anyopaque) i32 {
        return qtc.KNSCore__SearchRequest_Filter(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-searchrequest.html#searchTerm)
    ///
    /// ``` self: QtC.KNSCore__SearchRequest, allocator: std.mem.Allocator ```
    pub fn SearchTerm(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__SearchRequest_SearchTerm(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::searchrequest.SearchTerm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-searchrequest.html#categories)
    ///
    /// ``` self: QtC.KNSCore__SearchRequest, allocator: std.mem.Allocator ```
    pub fn Categories(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__SearchRequest_Categories(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore::searchrequest.Categories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore::searchrequest.Categories: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-searchrequest.html#page)
    ///
    /// ``` self: QtC.KNSCore__SearchRequest ```
    pub fn Page(self: ?*anyopaque) i32 {
        return qtc.KNSCore__SearchRequest_Page(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-searchrequest.html#pageSize)
    ///
    /// ``` self: QtC.KNSCore__SearchRequest ```
    pub fn PageSize(self: ?*anyopaque) i32 {
        return qtc.KNSCore__SearchRequest_PageSize(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-searchrequest.html#nextPage)
    ///
    /// ``` self: QtC.KNSCore__SearchRequest ```
    pub fn NextPage(self: ?*anyopaque) QtC.KNSCore__SearchRequest {
        return qtc.KNSCore__SearchRequest_NextPage(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KNSCore__SearchRequest ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KNSCore__SearchRequest_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/knscore-searchrequest.html#types
pub const enums = struct {
    pub const SortMode = enum {
        pub const Newest: i32 = 0;
        pub const Alphabetical: i32 = 1;
        pub const Rating: i32 = 2;
        pub const Downloads: i32 = 3;
    };

    pub const Filter = enum {
        pub const None: i32 = 0;
        pub const Installed: i32 = 1;
        pub const Updates: i32 = 2;
        pub const ExactEntryId: i32 = 3;
    };
};
