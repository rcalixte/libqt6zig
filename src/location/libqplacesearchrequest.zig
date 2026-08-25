const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGeoShape = @import("libqt6").QGeoShape;
const QPlaceCategory = @import("libqt6").QPlaceCategory;
const QVariant = @import("libqt6").QVariant;
const qlocation_enums = @import("libqlocation.zig").enums;
const qplacesearchrequest_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html)
pub const QPlaceSearchRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceSearchRequest,

    pub const _is_QPlaceSearchRequest = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceSearchRequest object in C++ memory
    ///
    pub fn new() QPlaceSearchRequest {
        return .{ .ptr = qtc.QPlaceSearchRequest_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceSearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceSearchRequest `
    ///
    pub fn new2(other: anytype) QPlaceSearchRequest {
        comptime _ = @TypeOf(other)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceSearchRequest_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` other: QPlaceSearchRequest `
    ///
    pub fn operatorAssign(self: QPlaceSearchRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSearchRequest;
        qtc.QPlaceSearchRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` other: QPlaceSearchRequest `
    ///
    pub fn swap(self: QPlaceSearchRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSearchRequest;
        qtc.QPlaceSearchRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `searchTerm` instead
    ///
    pub const SearchTerm = searchTerm;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#searchTerm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn searchTerm(self: QPlaceSearchRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchRequest_SearchTerm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceSearchRequest.searchTerm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSearchTerm` instead
    ///
    pub const SetSearchTerm = setSearchTerm;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setSearchTerm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` term: []const u8 `
    ///
    pub fn setSearchTerm(self: QPlaceSearchRequest, term: []const u8) void {
        const term_str = qtc.libqt_string{
            .len = term.len,
            .data = term.ptr,
        };
        qtc.QPlaceSearchRequest_SetSearchTerm(@ptrCast(self.ptr), term_str);
    }

    /// ### DEPRECATED: Use `categories` instead
    ///
    pub const Categories = categories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn categories(self: QPlaceSearchRequest, allocator: std.mem.Allocator) []QPlaceCategory {
        const _arr: qtc.libqt_list = qtc.QPlaceSearchRequest_Categories(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceCategory, _arr.len) catch @panic("QPlaceSearchRequest.categories: Memory allocation failed");
        const _data_val: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setCategory` instead
    ///
    pub const SetCategory = setCategory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` category: QPlaceCategory `
    ///
    pub fn setCategory(self: QPlaceSearchRequest, category: anytype) void {
        comptime _ = @TypeOf(category)._is_QPlaceCategory;
        qtc.QPlaceSearchRequest_SetCategory(@ptrCast(self.ptr), @ptrCast(category.ptr));
    }

    /// ### DEPRECATED: Use `setCategories` instead
    ///
    pub const SetCategories = setCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` _categories: []QPlaceCategory `
    ///
    pub fn setCategories(self: QPlaceSearchRequest, _categories: []QPlaceCategory) void {
        const categories_list = qtc.libqt_list{
            .len = _categories.len,
            .data = @ptrCast(_categories.ptr),
        };
        qtc.QPlaceSearchRequest_SetCategories(@ptrCast(self.ptr), categories_list);
    }

    /// ### DEPRECATED: Use `searchArea` instead
    ///
    pub const SearchArea = searchArea;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#searchArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    pub fn searchArea(self: QPlaceSearchRequest) QGeoShape {
        return .{ .ptr = qtc.QPlaceSearchRequest_SearchArea(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSearchArea` instead
    ///
    pub const SetSearchArea = setSearchArea;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setSearchArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` area: QGeoShape `
    ///
    pub fn setSearchArea(self: QPlaceSearchRequest, area: anytype) void {
        comptime _ = @TypeOf(area)._is_QGeoShape;
        qtc.QPlaceSearchRequest_SetSearchArea(@ptrCast(self.ptr), @ptrCast(area.ptr));
    }

    /// ### DEPRECATED: Use `recommendationId` instead
    ///
    pub const RecommendationId = recommendationId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#recommendationId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn recommendationId(self: QPlaceSearchRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchRequest_RecommendationId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceSearchRequest.recommendationId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRecommendationId` instead
    ///
    pub const SetRecommendationId = setRecommendationId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setRecommendationId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` _recommendationId: []const u8 `
    ///
    pub fn setRecommendationId(self: QPlaceSearchRequest, _recommendationId: []const u8) void {
        const recommendationId_str = qtc.libqt_string{
            .len = _recommendationId.len,
            .data = _recommendationId.ptr,
        };
        qtc.QPlaceSearchRequest_SetRecommendationId(@ptrCast(self.ptr), recommendationId_str);
    }

    /// ### DEPRECATED: Use `searchContext` instead
    ///
    pub const SearchContext = searchContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#searchContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    pub fn searchContext(self: QPlaceSearchRequest) QVariant {
        return .{ .ptr = qtc.QPlaceSearchRequest_SearchContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSearchContext` instead
    ///
    pub const SetSearchContext = setSearchContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setSearchContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` context: QVariant `
    ///
    pub fn setSearchContext(self: QPlaceSearchRequest, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QVariant;
        qtc.QPlaceSearchRequest_SetSearchContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
    }

    /// ### DEPRECATED: Use `visibilityScope` instead
    ///
    pub const VisibilityScope = visibilityScope;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#visibilityScope)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ## Returns:
    ///
    /// ` flag of qlocation_enums.Visibility `
    ///
    pub fn visibilityScope(self: QPlaceSearchRequest) i32 {
        return qtc.QPlaceSearchRequest_VisibilityScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisibilityScope` instead
    ///
    pub const SetVisibilityScope = setVisibilityScope;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setVisibilityScope)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` visibilityScopes: flag of qlocation_enums.Visibility `
    ///
    pub fn setVisibilityScope(self: QPlaceSearchRequest, visibilityScopes: i32) void {
        qtc.QPlaceSearchRequest_SetVisibilityScope(@ptrCast(self.ptr), @bitCast(visibilityScopes));
    }

    /// ### DEPRECATED: Use `relevanceHint` instead
    ///
    pub const RelevanceHint = relevanceHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#relevanceHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ## Returns:
    ///
    /// ` qplacesearchrequest_enums.RelevanceHint `
    ///
    pub fn relevanceHint(self: QPlaceSearchRequest) i32 {
        return qtc.QPlaceSearchRequest_RelevanceHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRelevanceHint` instead
    ///
    pub const SetRelevanceHint = setRelevanceHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setRelevanceHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` hint: qplacesearchrequest_enums.RelevanceHint `
    ///
    pub fn setRelevanceHint(self: QPlaceSearchRequest, hint: i32) void {
        qtc.QPlaceSearchRequest_SetRelevanceHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `limit` instead
    ///
    pub const Limit = limit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#limit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    pub fn limit(self: QPlaceSearchRequest) i32 {
        return qtc.QPlaceSearchRequest_Limit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLimit` instead
    ///
    pub const SetLimit = setLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` _limit: i32 `
    ///
    pub fn setLimit(self: QPlaceSearchRequest, _limit: i32) void {
        qtc.QPlaceSearchRequest_SetLimit(@ptrCast(self.ptr), @bitCast(_limit));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    pub fn clear(self: QPlaceSearchRequest) void {
        qtc.QPlaceSearchRequest_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#dtor.QPlaceSearchRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    pub fn delete(self: QPlaceSearchRequest) void {
        qtc.QPlaceSearchRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#public-types)
pub const enums = struct {
    pub const RelevanceHint = enum {
        pub const UnspecifiedHint: i32 = 0;
        pub const DistanceHint: i32 = 1;
        pub const LexicalPlaceNameHint: i32 = 2;
    };
};
