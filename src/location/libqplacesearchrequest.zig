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

    /// New constructs a new QPlaceSearchRequest object.
    ///
    pub fn New() QPlaceSearchRequest {
        return .{ .ptr = qtc.QPlaceSearchRequest_new() };
    }

    /// New2 constructs a new QPlaceSearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceSearchRequest `
    ///
    pub fn New2(other: anytype) QPlaceSearchRequest {
        comptime _ = @TypeOf(other)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceSearchRequest_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` other: QPlaceSearchRequest `
    ///
    pub fn OperatorAssign(self: QPlaceSearchRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSearchRequest;
        qtc.QPlaceSearchRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` other: QPlaceSearchRequest `
    ///
    pub fn Swap(self: QPlaceSearchRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSearchRequest;
        qtc.QPlaceSearchRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#searchTerm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchTerm(self: QPlaceSearchRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchRequest_SearchTerm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacesearchrequest.SearchTerm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setSearchTerm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` term: []const u8 `
    ///
    pub fn SetSearchTerm(self: QPlaceSearchRequest, term: []const u8) void {
        const term_str = qtc.libqt_string{
            .len = term.len,
            .data = term.ptr,
        };
        qtc.QPlaceSearchRequest_SetSearchTerm(@ptrCast(self.ptr), term_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Categories(self: QPlaceSearchRequest, allocator: std.mem.Allocator) []QPlaceCategory {
        const _arr: qtc.libqt_list = qtc.QPlaceSearchRequest_Categories(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceCategory, _arr.len) catch @panic("qplacesearchrequest.Categories: Memory allocation failed");
        const _data: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` category: QPlaceCategory `
    ///
    pub fn SetCategory(self: QPlaceSearchRequest, category: anytype) void {
        comptime _ = @TypeOf(category)._is_QPlaceCategory;
        qtc.QPlaceSearchRequest_SetCategory(@ptrCast(self.ptr), @ptrCast(category.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` categories: []QPlaceCategory `
    ///
    pub fn SetCategories(self: QPlaceSearchRequest, categories: []QPlaceCategory) void {
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = @ptrCast(categories.ptr),
        };
        qtc.QPlaceSearchRequest_SetCategories(@ptrCast(self.ptr), categories_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#searchArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    pub fn SearchArea(self: QPlaceSearchRequest) QGeoShape {
        return .{ .ptr = qtc.QPlaceSearchRequest_SearchArea(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setSearchArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` area: QGeoShape `
    ///
    pub fn SetSearchArea(self: QPlaceSearchRequest, area: anytype) void {
        comptime _ = @TypeOf(area)._is_QGeoShape;
        qtc.QPlaceSearchRequest_SetSearchArea(@ptrCast(self.ptr), @ptrCast(area.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#recommendationId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RecommendationId(self: QPlaceSearchRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchRequest_RecommendationId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacesearchrequest.RecommendationId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setRecommendationId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` recommendationId: []const u8 `
    ///
    pub fn SetRecommendationId(self: QPlaceSearchRequest, recommendationId: []const u8) void {
        const recommendationId_str = qtc.libqt_string{
            .len = recommendationId.len,
            .data = recommendationId.ptr,
        };
        qtc.QPlaceSearchRequest_SetRecommendationId(@ptrCast(self.ptr), recommendationId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#searchContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    pub fn SearchContext(self: QPlaceSearchRequest) QVariant {
        return .{ .ptr = qtc.QPlaceSearchRequest_SearchContext(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setSearchContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` context: QVariant `
    ///
    pub fn SetSearchContext(self: QPlaceSearchRequest, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QVariant;
        qtc.QPlaceSearchRequest_SetSearchContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
    }

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
    pub fn VisibilityScope(self: QPlaceSearchRequest) i32 {
        return qtc.QPlaceSearchRequest_VisibilityScope(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setVisibilityScope)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` visibilityScopes: flag of qlocation_enums.Visibility `
    ///
    pub fn SetVisibilityScope(self: QPlaceSearchRequest, visibilityScopes: i32) void {
        qtc.QPlaceSearchRequest_SetVisibilityScope(@ptrCast(self.ptr), @bitCast(visibilityScopes));
    }

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
    pub fn RelevanceHint(self: QPlaceSearchRequest) i32 {
        return qtc.QPlaceSearchRequest_RelevanceHint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setRelevanceHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` hint: qplacesearchrequest_enums.RelevanceHint `
    ///
    pub fn SetRelevanceHint(self: QPlaceSearchRequest, hint: i32) void {
        qtc.QPlaceSearchRequest_SetRelevanceHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#limit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    pub fn Limit(self: QPlaceSearchRequest) i32 {
        return qtc.QPlaceSearchRequest_Limit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    /// ` limit: i32 `
    ///
    pub fn SetLimit(self: QPlaceSearchRequest, limit: i32) void {
        qtc.QPlaceSearchRequest_SetLimit(@ptrCast(self.ptr), @bitCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    pub fn Clear(self: QPlaceSearchRequest) void {
        qtc.QPlaceSearchRequest_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#dtor.QPlaceSearchRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceSearchRequest `
    ///
    pub fn Delete(self: QPlaceSearchRequest) void {
        qtc.QPlaceSearchRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#public-types)
pub const enums = struct {
    pub const RelevanceHint = enum(i32) {
        pub const UnspecifiedHint: i32 = 0;
        pub const DistanceHint: i32 = 1;
        pub const LexicalPlaceNameHint: i32 = 2;
    };
};
