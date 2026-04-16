const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPlaceIcon = @import("libqt6").QPlaceIcon;
const qplacesearchresult_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html)
pub const QPlaceSearchResult = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceSearchResult,

    pub const _is_QPlaceSearchResult = {};

    /// New constructs a new QPlaceSearchResult object.
    ///
    pub fn New() QPlaceSearchResult {
        return .{ .ptr = qtc.QPlaceSearchResult_new() };
    }

    /// New2 constructs a new QPlaceSearchResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn New2(other: anytype) QPlaceSearchResult {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return .{ .ptr = qtc.QPlaceSearchResult_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn OperatorAssign(self: QPlaceSearchResult, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        qtc.QPlaceSearchResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn OperatorEqual(self: QPlaceSearchResult, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return qtc.QPlaceSearchResult_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn OperatorNotEqual(self: QPlaceSearchResult, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return qtc.QPlaceSearchResult_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ## Returns:
    ///
    /// ` qplacesearchresult_enums.SearchResultType `
    ///
    pub fn Type(self: QPlaceSearchResult) i32 {
        return qtc.QPlaceSearchResult_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: QPlaceSearchResult, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchResult_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacesearchresult.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: QPlaceSearchResult, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QPlaceSearchResult_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    pub fn Icon(self: QPlaceSearchResult) QPlaceIcon {
        return .{ .ptr = qtc.QPlaceSearchResult_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ` icon: QPlaceIcon `
    ///
    pub fn SetIcon(self: QPlaceSearchResult, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QPlaceIcon;
        qtc.QPlaceSearchResult_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#dtor.QPlaceSearchResult)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceSearchResult `
    ///
    pub fn Delete(self: QPlaceSearchResult) void {
        qtc.QPlaceSearchResult_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#public-types)
pub const enums = struct {
    pub const SearchResultType = enum(i32) {
        pub const UnknownSearchResult: i32 = 0;
        pub const PlaceResult: i32 = 1;
        pub const ProposedSearchResult: i32 = 2;
    };
};
