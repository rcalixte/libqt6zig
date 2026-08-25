const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMetaObject = @import("libqt6").QMetaObject;
const searchrequest_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knscore.html)
pub const KNSCore = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore,

    pub const _is_KNSCore = {};

    /// ### DEPRECATED: Use `getEnumMetaObject` instead
    ///
    pub const GetEnumMetaObject = getEnumMetaObject;

    /// ### [Upstream resources](https://api.kde.org/knscore.html#qt_getEnumMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: searchrequest_enums.SortMode `
    ///
    pub fn getEnumMetaObject(param1: i32) QMetaObject {
        return .{ .ptr = qtc.KNSCore_GetEnumMetaObject(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `getEnumName` instead
    ///
    pub const GetEnumName = getEnumName;

    /// ### [Upstream resources](https://api.kde.org/knscore.html#qt_getEnumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: searchrequest_enums.SortMode `
    ///
    pub fn getEnumName(param1: i32) [:0]const u8 {
        const _ret = qtc.KNSCore_GetEnumName(@bitCast(param1));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `getEnumMetaObject2` instead
    ///
    pub const GetEnumMetaObject2 = getEnumMetaObject2;

    /// ### [Upstream resources](https://api.kde.org/knscore.html#qt_getEnumMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: searchrequest_enums.Filter `
    ///
    pub fn getEnumMetaObject2(param1: i32) QMetaObject {
        return .{ .ptr = qtc.KNSCore_GetEnumMetaObject2(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `getEnumName2` instead
    ///
    pub const GetEnumName2 = getEnumName2;

    /// ### [Upstream resources](https://api.kde.org/knscore.html#qt_getEnumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: searchrequest_enums.Filter `
    ///
    pub fn getEnumName2(param1: i32) [:0]const u8 {
        const _ret = qtc.KNSCore_GetEnumName2(@bitCast(param1));
        return std.mem.span(_ret);
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html)
pub const KNSCore__SearchRequest = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore__SearchRequest,

    pub const _is_KNSCore__SearchRequest = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNSCore::SearchRequest object in C++ memory
    ///
    pub fn new() KNSCore__SearchRequest {
        return .{ .ptr = qtc.KNSCore__SearchRequest_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KNSCore::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__SearchRequest `
    ///
    pub fn new2(param1: anytype) KNSCore__SearchRequest {
        comptime _ = @TypeOf(param1)._is_KNSCore__SearchRequest;
        return .{ .ptr = qtc.KNSCore__SearchRequest_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KNSCore::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: searchrequest_enums.SortMode `
    ///
    pub fn new3(sortMode_: i32) KNSCore__SearchRequest {
        return .{ .ptr = qtc.KNSCore__SearchRequest_new3(@bitCast(sortMode_)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KNSCore::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: searchrequest_enums.SortMode `
    ///
    /// ` filter_: searchrequest_enums.Filter `
    ///
    pub fn new4(sortMode_: i32, filter_: i32) KNSCore__SearchRequest {
        return .{ .ptr = qtc.KNSCore__SearchRequest_new4(@bitCast(sortMode_), @bitCast(filter_)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KNSCore::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: searchrequest_enums.SortMode `
    ///
    /// ` filter_: searchrequest_enums.Filter `
    ///
    /// ` searchTerm_: []const u8 `
    ///
    pub fn new5(sortMode_: i32, filter_: i32, searchTerm_: []const u8) KNSCore__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        return .{ .ptr = qtc.KNSCore__SearchRequest_new5(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KNSCore::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sortMode_: searchrequest_enums.SortMode `
    ///
    /// ` filter_: searchrequest_enums.Filter `
    ///
    /// ` searchTerm_: []const u8 `
    ///
    /// ` categories_: []const []const u8 `
    ///
    pub fn new6(allocator: std.mem.Allocator, sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8) KNSCore__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("KNSCore__SearchRequest.new6: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |str_item, i|
            categories__arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__SearchRequest_new6(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new KNSCore::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sortMode_: searchrequest_enums.SortMode `
    ///
    /// ` filter_: searchrequest_enums.Filter `
    ///
    /// ` searchTerm_: []const u8 `
    ///
    /// ` categories_: []const []const u8 `
    ///
    /// ` page_: i32 `
    ///
    pub fn new7(allocator: std.mem.Allocator, sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8, page_: i32) KNSCore__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("KNSCore__SearchRequest.new7: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |str_item, i|
            categories__arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__SearchRequest_new7(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list, @bitCast(page_)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new KNSCore::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sortMode_: searchrequest_enums.SortMode `
    ///
    /// ` filter_: searchrequest_enums.Filter `
    ///
    /// ` searchTerm_: []const u8 `
    ///
    /// ` categories_: []const []const u8 `
    ///
    /// ` page_: i32 `
    ///
    /// ` pageSize_: i32 `
    ///
    pub fn new8(allocator: std.mem.Allocator, sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8, page_: i32, pageSize_: i32) KNSCore__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("KNSCore__SearchRequest.new8: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |str_item, i|
            categories__arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__SearchRequest_new8(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list, @bitCast(page_), @bitCast(pageSize_)) };
    }

    /// ### DEPRECATED: Use `sortMode` instead
    ///
    pub const SortMode = sortMode;

    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#sortMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    /// ## Returns:
    ///
    /// ` searchrequest_enums.SortMode `
    ///
    pub fn sortMode(self: KNSCore__SearchRequest) i32 {
        return qtc.KNSCore__SearchRequest_SortMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `filter` instead
    ///
    pub const Filter = filter;

    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#filter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    /// ## Returns:
    ///
    /// ` searchrequest_enums.Filter `
    ///
    pub fn filter(self: KNSCore__SearchRequest) i32 {
        return qtc.KNSCore__SearchRequest_Filter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `searchTerm` instead
    ///
    pub const SearchTerm = searchTerm;

    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#searchTerm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn searchTerm(self: KNSCore__SearchRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__SearchRequest_SearchTerm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__SearchRequest.searchTerm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `categories` instead
    ///
    pub const Categories = categories;

    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn categories(self: KNSCore__SearchRequest, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__SearchRequest_Categories(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KNSCore__SearchRequest.categories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__SearchRequest.categories: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `page` instead
    ///
    pub const Page = page;

    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#page)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    pub fn page(self: KNSCore__SearchRequest) i32 {
        return qtc.KNSCore__SearchRequest_Page(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pageSize` instead
    ///
    pub const PageSize = pageSize;

    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#pageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    pub fn pageSize(self: KNSCore__SearchRequest) i32 {
        return qtc.KNSCore__SearchRequest_PageSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nextPage` instead
    ///
    pub const NextPage = nextPage;

    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#nextPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    pub fn nextPage(self: KNSCore__SearchRequest) KNSCore__SearchRequest {
        return .{ .ptr = qtc.KNSCore__SearchRequest_NextPage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    pub fn delete(self: KNSCore__SearchRequest) void {
        qtc.KNSCore__SearchRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#public-types)
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
