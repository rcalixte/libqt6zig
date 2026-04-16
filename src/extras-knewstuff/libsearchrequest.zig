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

    /// ### [Upstream resources](https://api.kde.org/knscore.html#qt_getEnumMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: searchrequest_enums.SortMode `
    ///
    pub fn GetEnumMetaObject(param1: i32) QMetaObject {
        return .{ .ptr = qtc.KNSCore_GetEnumMetaObject(@bitCast(param1)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore.html#qt_getEnumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: searchrequest_enums.SortMode `
    ///
    pub fn GetEnumName(param1: i32) [:0]const u8 {
        const _ret = qtc.KNSCore_GetEnumName(@bitCast(param1));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore.html#qt_getEnumMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: searchrequest_enums.Filter `
    ///
    pub fn GetEnumMetaObject2(param1: i32) QMetaObject {
        return .{ .ptr = qtc.KNSCore_GetEnumMetaObject2(@bitCast(param1)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore.html#qt_getEnumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: searchrequest_enums.Filter `
    ///
    pub fn GetEnumName2(param1: i32) [:0]const u8 {
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

    /// New constructs a new KNSCore::SearchRequest object.
    ///
    pub fn New() KNSCore__SearchRequest {
        return .{ .ptr = qtc.KNSCore__SearchRequest_new() };
    }

    /// New2 constructs a new KNSCore::SearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__SearchRequest `
    ///
    pub fn New2(param1: anytype) KNSCore__SearchRequest {
        comptime _ = @TypeOf(param1)._is_KNSCore__SearchRequest;
        return .{ .ptr = qtc.KNSCore__SearchRequest_new2(@ptrCast(param1.ptr)) };
    }

    /// New3 constructs a new KNSCore::SearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: searchrequest_enums.SortMode `
    ///
    pub fn New3(sortMode_: i32) KNSCore__SearchRequest {
        return .{ .ptr = qtc.KNSCore__SearchRequest_new3(@bitCast(sortMode_)) };
    }

    /// New4 constructs a new KNSCore::SearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: searchrequest_enums.SortMode `
    ///
    /// ` filter_: searchrequest_enums.Filter `
    ///
    pub fn New4(sortMode_: i32, filter_: i32) KNSCore__SearchRequest {
        return .{ .ptr = qtc.KNSCore__SearchRequest_new4(@bitCast(sortMode_), @bitCast(filter_)) };
    }

    /// New5 constructs a new KNSCore::SearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: searchrequest_enums.SortMode `
    ///
    /// ` filter_: searchrequest_enums.Filter `
    ///
    /// ` searchTerm_: []const u8 `
    ///
    pub fn New5(sortMode_: i32, filter_: i32, searchTerm_: []const u8) KNSCore__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        return .{ .ptr = qtc.KNSCore__SearchRequest_new5(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str) };
    }

    /// New6 constructs a new KNSCore::SearchRequest object.
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
    pub fn New6(allocator: std.mem.Allocator, sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8) KNSCore__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("knscore__searchrequest.New6: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |item, i|
            categories__arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__SearchRequest_new6(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list) };
    }

    /// New7 constructs a new KNSCore::SearchRequest object.
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
    pub fn New7(allocator: std.mem.Allocator, sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8, page_: i32) KNSCore__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("knscore__searchrequest.New7: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |item, i|
            categories__arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__SearchRequest_new7(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list, @bitCast(page_)) };
    }

    /// New8 constructs a new KNSCore::SearchRequest object.
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
    pub fn New8(allocator: std.mem.Allocator, sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8, page_: i32, pageSize_: i32) KNSCore__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("knscore__searchrequest.New8: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |item, i|
            categories__arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__SearchRequest_new8(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list, @bitCast(page_), @bitCast(pageSize_)) };
    }

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
    pub fn SortMode(self: KNSCore__SearchRequest) i32 {
        return qtc.KNSCore__SearchRequest_SortMode(@ptrCast(self.ptr));
    }

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
    pub fn Filter(self: KNSCore__SearchRequest) i32 {
        return qtc.KNSCore__SearchRequest_Filter(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#searchTerm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchTerm(self: KNSCore__SearchRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__SearchRequest_SearchTerm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__searchrequest.SearchTerm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Categories(self: KNSCore__SearchRequest, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__SearchRequest_Categories(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore__searchrequest.Categories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__searchrequest.Categories: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#page)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    pub fn Page(self: KNSCore__SearchRequest) i32 {
        return qtc.KNSCore__SearchRequest_Page(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#pageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    pub fn PageSize(self: KNSCore__SearchRequest) i32 {
        return qtc.KNSCore__SearchRequest_PageSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#nextPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    pub fn NextPage(self: KNSCore__SearchRequest) KNSCore__SearchRequest {
        return .{ .ptr = qtc.KNSCore__SearchRequest_NextPage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__SearchRequest `
    ///
    pub fn Delete(self: KNSCore__SearchRequest) void {
        qtc.KNSCore__SearchRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-searchrequest.html#public-types)
pub const enums = struct {
    pub const SortMode = enum(i32) {
        pub const Newest: i32 = 0;
        pub const Alphabetical: i32 = 1;
        pub const Rating: i32 = 2;
        pub const Downloads: i32 = 3;
    };

    pub const Filter = enum(i32) {
        pub const None: i32 = 0;
        pub const Installed: i32 = 1;
        pub const Updates: i32 = 2;
        pub const ExactEntryId: i32 = 3;
    };
};
