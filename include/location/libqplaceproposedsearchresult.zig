const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qplacesearchresult_enums = @import("libqplacesearchresult.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html)
pub const qplaceproposedsearchresult = struct {
    /// New constructs a new QPlaceProposedSearchResult object.
    ///
    pub fn New() QtC.QPlaceProposedSearchResult {
        return qtc.QPlaceProposedSearchResult_new();
    }

    /// New2 constructs a new QPlaceProposedSearchResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceSearchResult `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceProposedSearchResult {
        return qtc.QPlaceProposedSearchResult_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPlaceProposedSearchResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPlaceProposedSearchResult `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QPlaceProposedSearchResult {
        return qtc.QPlaceProposedSearchResult_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html#searchRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceProposedSearchResult `
    ///
    pub fn SearchRequest(self: ?*anyopaque) QtC.QPlaceSearchRequest {
        return qtc.QPlaceProposedSearchResult_SearchRequest(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html#setSearchRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceProposedSearchResult `
    ///
    /// ` request: QtC.QPlaceSearchRequest `
    ///
    pub fn SetSearchRequest(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.QPlaceProposedSearchResult_SetSearchRequest(@ptrCast(self), @ptrCast(request));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceProposedSearchResult `
    ///
    /// ` other: QtC.QPlaceSearchResult `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceSearchResult_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceProposedSearchResult `
    ///
    /// ` other: QtC.QPlaceSearchResult `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPlaceSearchResult_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceProposedSearchResult `
    ///
    /// ` other: QtC.QPlaceSearchResult `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPlaceSearchResult_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceProposedSearchResult `
    ///
    /// ## Returns:
    ///
    /// ` qplacesearchresult_enums.SearchResultType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QPlaceSearchResult_Type(@ptrCast(self));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceProposedSearchResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchResult_Title(@ptrCast(self));
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
    /// ` self: QtC.QPlaceProposedSearchResult `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QPlaceSearchResult_SetTitle(@ptrCast(self), title_str);
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceProposedSearchResult `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QPlaceIcon {
        return qtc.QPlaceSearchResult_Icon(@ptrCast(self));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceProposedSearchResult `
    ///
    /// ` icon: QtC.QPlaceIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QPlaceSearchResult_SetIcon(@ptrCast(self), @ptrCast(icon));
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
    /// ` self: QtC.QPlaceProposedSearchResult `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QPlaceProposedSearchResult_Delete(@ptrCast(self));
    }
};
