const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPlace = @import("libqt6").QPlace;
const QPlaceIcon = @import("libqt6").QPlaceIcon;
const QPlaceSearchResult = @import("libqt6").QPlaceSearchResult;
const qplacesearchresult_enums = @import("libqplacesearchresult.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html)
pub const QPlaceResult = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceResult,

    pub const _is_QPlaceResult = {};
    pub const _is_QPlaceSearchResult = {};

    /// New constructs a new QPlaceResult object.
    ///
    pub fn New() QPlaceResult {
        return .{ .ptr = qtc.QPlaceResult_new() };
    }

    /// New2 constructs a new QPlaceResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn New2(other: anytype) QPlaceResult {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return .{ .ptr = qtc.QPlaceResult_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QPlaceResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPlaceResult `
    ///
    pub fn New3(param1: anytype) QPlaceResult {
        comptime _ = @TypeOf(param1)._is_QPlaceResult;
        return .{ .ptr = qtc.QPlaceResult_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#distance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    pub fn Distance(self: QPlaceResult) f64 {
        return qtc.QPlaceResult_Distance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#setDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` distance: f64 `
    ///
    pub fn SetDistance(self: QPlaceResult, distance: f64) void {
        qtc.QPlaceResult_SetDistance(@ptrCast(self.ptr), @bitCast(distance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#place)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    pub fn Place(self: QPlaceResult) QPlace {
        return .{ .ptr = qtc.QPlaceResult_Place(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#setPlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` place: QPlace `
    ///
    pub fn SetPlace(self: QPlaceResult, place: anytype) void {
        comptime _ = @TypeOf(place)._is_QPlace;
        qtc.QPlaceResult_SetPlace(@ptrCast(self.ptr), @ptrCast(place.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#isSponsored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    pub fn IsSponsored(self: QPlaceResult) bool {
        return qtc.QPlaceResult_IsSponsored(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#setSponsored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` sponsored: bool `
    ///
    pub fn SetSponsored(self: QPlaceResult, sponsored: bool) void {
        qtc.QPlaceResult_SetSponsored(@ptrCast(self.ptr), sponsored);
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn OperatorAssign(self: QPlaceResult, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        qtc.QPlaceSearchResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn OperatorEqual(self: QPlaceResult, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return qtc.QPlaceSearchResult_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn OperatorNotEqual(self: QPlaceResult, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return qtc.QPlaceSearchResult_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ## Returns:
    ///
    /// ` qplacesearchresult_enums.SearchResultType `
    ///
    pub fn Type(self: QPlaceResult) i32 {
        return qtc.QPlaceSearchResult_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: QPlaceResult, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchResult_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaceresult.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: QPlaceResult, title: []const u8) void {
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
    /// ` self: QPlaceResult `
    ///
    pub fn Icon(self: QPlaceResult) QPlaceIcon {
        return .{ .ptr = qtc.QPlaceSearchResult_Icon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` icon: QPlaceIcon `
    ///
    pub fn SetIcon(self: QPlaceResult, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QPlaceIcon;
        qtc.QPlaceSearchResult_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#dtor.QPlaceResult)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceResult `
    ///
    pub fn Delete(self: QPlaceResult) void {
        qtc.QPlaceResult_Delete(@ptrCast(self.ptr));
    }
};
