const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPlaceIcon = @import("libqt6").QPlaceIcon;
const QPlaceSearchRequest = @import("libqt6").QPlaceSearchRequest;
const QPlaceSearchResult = @import("libqt6").QPlaceSearchResult;
const qplacesearchresult_enums = @import("libqplacesearchresult.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html)
pub const QPlaceProposedSearchResult = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceProposedSearchResult,

    pub const _is_QPlaceProposedSearchResult = {};
    pub const _is_QPlaceSearchResult = {};

    /// New constructs a new QPlaceProposedSearchResult object.
    ///
    pub fn New() QPlaceProposedSearchResult {
        return .{ .ptr = qtc.QPlaceProposedSearchResult_new() };
    }

    /// New2 constructs a new QPlaceProposedSearchResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn New2(other: anytype) QPlaceProposedSearchResult {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return .{ .ptr = qtc.QPlaceProposedSearchResult_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QPlaceProposedSearchResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPlaceProposedSearchResult `
    ///
    pub fn New3(param1: anytype) QPlaceProposedSearchResult {
        comptime _ = @TypeOf(param1)._is_QPlaceProposedSearchResult;
        return .{ .ptr = qtc.QPlaceProposedSearchResult_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html#searchRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceProposedSearchResult `
    ///
    pub fn SearchRequest(self: QPlaceProposedSearchResult) QPlaceSearchRequest {
        return .{ .ptr = qtc.QPlaceProposedSearchResult_SearchRequest(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html#setSearchRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceProposedSearchResult `
    ///
    /// ` request: QPlaceSearchRequest `
    ///
    pub fn SetSearchRequest(self: QPlaceProposedSearchResult, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QPlaceSearchRequest;
        qtc.QPlaceProposedSearchResult_SetSearchRequest(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceProposedSearchResult `
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn OperatorAssign(self: QPlaceProposedSearchResult, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        qtc.QPlaceSearchResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceProposedSearchResult `
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn OperatorEqual(self: QPlaceProposedSearchResult, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return qtc.QPlaceSearchResult_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceProposedSearchResult `
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn OperatorNotEqual(self: QPlaceProposedSearchResult, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return qtc.QPlaceSearchResult_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceProposedSearchResult `
    ///
    /// ## Returns:
    ///
    /// ` qplacesearchresult_enums.SearchResultType `
    ///
    pub fn Type(self: QPlaceProposedSearchResult) i32 {
        return qtc.QPlaceSearchResult_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceProposedSearchResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: QPlaceProposedSearchResult, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchResult_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaceproposedsearchresult.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceProposedSearchResult `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: QPlaceProposedSearchResult, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QPlaceSearchResult_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceProposedSearchResult `
    ///
    pub fn Icon(self: QPlaceProposedSearchResult) QPlaceIcon {
        return .{ .ptr = qtc.QPlaceSearchResult_Icon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceProposedSearchResult `
    ///
    /// ` icon: QPlaceIcon `
    ///
    pub fn SetIcon(self: QPlaceProposedSearchResult, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QPlaceIcon;
        qtc.QPlaceSearchResult_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html#dtor.QPlaceProposedSearchResult)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceProposedSearchResult `
    ///
    pub fn Delete(self: QPlaceProposedSearchResult) void {
        qtc.QPlaceProposedSearchResult_Delete(@ptrCast(self.ptr));
    }
};
