const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qplacesearchresult_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html)
pub const qplacesearchresult = struct {
    /// New constructs a new QPlaceSearchResult object.
    ///
    pub fn New() QtC.QPlaceSearchResult {
        return qtc.QPlaceSearchResult_new();
    }

    /// New2 constructs a new QPlaceSearchResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceSearchResult `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceSearchResult {
        return qtc.QPlaceSearchResult_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchResult `
    ///
    /// ` other: QtC.QPlaceSearchResult `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceSearchResult_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchResult `
    ///
    /// ` other: QtC.QPlaceSearchResult `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPlaceSearchResult_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchResult `
    ///
    /// ` other: QtC.QPlaceSearchResult `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPlaceSearchResult_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchResult `
    ///
    /// ## Returns:
    ///
    /// ` qplacesearchresult_enums.SearchResultType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QPlaceSearchResult_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchResult_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacesearchresult.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchResult `
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchResult `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QPlaceIcon {
        return qtc.QPlaceSearchResult_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSearchResult `
    ///
    /// ` icon: QtC.QPlaceIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QPlaceSearchResult_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#dtor.QPlaceSearchResult)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceSearchResult `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlaceSearchResult_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#public-types)
pub const enums = struct {
    pub const SearchResultType = enum {
        pub const UnknownSearchResult: i32 = 0;
        pub const PlaceResult: i32 = 1;
        pub const ProposedSearchResult: i32 = 2;
    };
};
