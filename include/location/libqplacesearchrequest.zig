const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlocation_enums = @import("libqlocation.zig").enums;
const qplacesearchrequest_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html)
pub const qplacesearchrequest = struct {
    /// New constructs a new QPlaceSearchRequest object.
    ///
    pub fn New() QtC.QPlaceSearchRequest {
        return qtc.QPlaceSearchRequest_new();
    }

    /// New2 constructs a new QPlaceSearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceSearchRequest `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceSearchRequest {
        return qtc.QPlaceSearchRequest_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` other: QtC.QPlaceSearchRequest `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceSearchRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` other: QtC.QPlaceSearchRequest `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceSearchRequest_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#searchTerm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchTerm(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchRequest_SearchTerm(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacesearchrequest.SearchTerm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setSearchTerm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` term: []const u8 `
    ///
    pub fn SetSearchTerm(self: ?*anyopaque, term: []const u8) void {
        const term_str = qtc.libqt_string{
            .len = term.len,
            .data = term.ptr,
        };
        qtc.QPlaceSearchRequest_SetSearchTerm(@ptrCast(self), term_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Categories(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPlaceCategory {
        const _arr: qtc.libqt_list = qtc.QPlaceSearchRequest_Categories(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPlaceCategory, _arr.len) catch @panic("qplacesearchrequest.Categories: Memory allocation failed");
        const _data: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` category: QtC.QPlaceCategory `
    ///
    pub fn SetCategory(self: ?*anyopaque, category: ?*anyopaque) void {
        qtc.QPlaceSearchRequest_SetCategory(@ptrCast(self), @ptrCast(category));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` categories: []QtC.QPlaceCategory `
    ///
    pub fn SetCategories(self: ?*anyopaque, categories: []QtC.QPlaceCategory) void {
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = @ptrCast(categories.ptr),
        };
        qtc.QPlaceSearchRequest_SetCategories(@ptrCast(self), categories_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#searchArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    pub fn SearchArea(self: ?*anyopaque) QtC.QGeoShape {
        return qtc.QPlaceSearchRequest_SearchArea(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setSearchArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` area: QtC.QGeoShape `
    ///
    pub fn SetSearchArea(self: ?*anyopaque, area: ?*anyopaque) void {
        qtc.QPlaceSearchRequest_SetSearchArea(@ptrCast(self), @ptrCast(area));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#recommendationId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RecommendationId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchRequest_RecommendationId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacesearchrequest.RecommendationId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setRecommendationId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` recommendationId: []const u8 `
    ///
    pub fn SetRecommendationId(self: ?*anyopaque, recommendationId: []const u8) void {
        const recommendationId_str = qtc.libqt_string{
            .len = recommendationId.len,
            .data = recommendationId.ptr,
        };
        qtc.QPlaceSearchRequest_SetRecommendationId(@ptrCast(self), recommendationId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#searchContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    pub fn SearchContext(self: ?*anyopaque) QtC.QVariant {
        return qtc.QPlaceSearchRequest_SearchContext(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setSearchContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` context: QtC.QVariant `
    ///
    pub fn SetSearchContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QPlaceSearchRequest_SetSearchContext(@ptrCast(self), @ptrCast(context));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#visibilityScope)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ## Returns:
    ///
    /// ` flag of qlocation_enums.Visibility `
    ///
    pub fn VisibilityScope(self: ?*anyopaque) i32 {
        return qtc.QPlaceSearchRequest_VisibilityScope(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setVisibilityScope)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` visibilityScopes: flag of qlocation_enums.Visibility `
    ///
    pub fn SetVisibilityScope(self: ?*anyopaque, visibilityScopes: i32) void {
        qtc.QPlaceSearchRequest_SetVisibilityScope(@ptrCast(self), @bitCast(visibilityScopes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#relevanceHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ## Returns:
    ///
    /// ` qplacesearchrequest_enums.RelevanceHint `
    ///
    pub fn RelevanceHint(self: ?*anyopaque) i32 {
        return qtc.QPlaceSearchRequest_RelevanceHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setRelevanceHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` hint: qplacesearchrequest_enums.RelevanceHint `
    ///
    pub fn SetRelevanceHint(self: ?*anyopaque, hint: i32) void {
        qtc.QPlaceSearchRequest_SetRelevanceHint(@ptrCast(self), @bitCast(hint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#limit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    pub fn Limit(self: ?*anyopaque) i32 {
        return qtc.QPlaceSearchRequest_Limit(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    /// ` limit: i32 `
    ///
    pub fn SetLimit(self: ?*anyopaque, limit: i32) void {
        qtc.QPlaceSearchRequest_SetLimit(@ptrCast(self), @bitCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QPlaceSearchRequest_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#dtor.QPlaceSearchRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceSearchRequest `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlaceSearchRequest_Delete(@ptrCast(self));
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
