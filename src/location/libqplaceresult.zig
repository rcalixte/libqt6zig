const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qplacesearchresult_enums = @import("libqplacesearchresult.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html)
pub const qplaceresult = struct {
    /// New constructs a new QPlaceResult object.
    ///
    pub fn New() QtC.QPlaceResult {
        return qtc.QPlaceResult_new();
    }

    /// New2 constructs a new QPlaceResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceSearchResult `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceResult {
        return qtc.QPlaceResult_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPlaceResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPlaceResult `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QPlaceResult {
        return qtc.QPlaceResult_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#distance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceResult `
    ///
    pub fn Distance(self: ?*anyopaque) f64 {
        return qtc.QPlaceResult_Distance(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#setDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceResult `
    ///
    /// ` distance: f64 `
    ///
    pub fn SetDistance(self: ?*anyopaque, distance: f64) void {
        qtc.QPlaceResult_SetDistance(@ptrCast(self), @floatCast(distance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#place)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceResult `
    ///
    pub fn Place(self: ?*anyopaque) QtC.QPlace {
        return qtc.QPlaceResult_Place(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#setPlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceResult `
    ///
    /// ` place: QtC.QPlace `
    ///
    pub fn SetPlace(self: ?*anyopaque, place: ?*anyopaque) void {
        qtc.QPlaceResult_SetPlace(@ptrCast(self), @ptrCast(place));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#isSponsored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceResult `
    ///
    pub fn IsSponsored(self: ?*anyopaque) bool {
        return qtc.QPlaceResult_IsSponsored(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#setSponsored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceResult `
    ///
    /// ` sponsored: bool `
    ///
    pub fn SetSponsored(self: ?*anyopaque, sponsored: bool) void {
        qtc.QPlaceResult_SetSponsored(@ptrCast(self), sponsored);
    }

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceResult `
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
    /// ` self: QtC.QPlaceResult `
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
    /// ` self: QtC.QPlaceResult `
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
    /// ` self: QtC.QPlaceResult `
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
    /// ` self: QtC.QPlaceResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchResult_Title(@ptrCast(self));
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
    /// ` self: QtC.QPlaceResult `
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
    /// ` self: QtC.QPlaceResult `
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
    /// ` self: QtC.QPlaceResult `
    ///
    /// ` icon: QtC.QPlaceIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QPlaceSearchResult_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#dtor.QPlaceResult)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceResult `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlaceResult_Delete(@ptrCast(self));
    }
};
