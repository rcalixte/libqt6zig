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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceResult object in C++ memory
    ///
    pub fn new() QPlaceResult {
        return .{ .ptr = qtc.QPlaceResult_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceResult object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn new2(other: anytype) QPlaceResult {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return .{ .ptr = qtc.QPlaceResult_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPlaceResult object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPlaceResult `
    ///
    pub fn new3(param1: anytype) QPlaceResult {
        comptime _ = @TypeOf(param1)._is_QPlaceResult;
        return .{ .ptr = qtc.QPlaceResult_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `distance` instead
    ///
    pub const Distance = distance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#distance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    pub fn distance(self: QPlaceResult) f64 {
        return qtc.QPlaceResult_Distance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDistance` instead
    ///
    pub const SetDistance = setDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#setDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` _distance: f64 `
    ///
    pub fn setDistance(self: QPlaceResult, _distance: f64) void {
        qtc.QPlaceResult_SetDistance(@ptrCast(self.ptr), @bitCast(_distance));
    }

    /// ### DEPRECATED: Use `place` instead
    ///
    pub const Place = place;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#place)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    pub fn place(self: QPlaceResult) QPlace {
        return .{ .ptr = qtc.QPlaceResult_Place(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPlace` instead
    ///
    pub const SetPlace = setPlace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#setPlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` _place: QPlace `
    ///
    pub fn setPlace(self: QPlaceResult, _place: anytype) void {
        comptime _ = @TypeOf(_place)._is_QPlace;
        qtc.QPlaceResult_SetPlace(@ptrCast(self.ptr), @ptrCast(_place.ptr));
    }

    /// ### DEPRECATED: Use `isSponsored` instead
    ///
    pub const IsSponsored = isSponsored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#isSponsored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    pub fn isSponsored(self: QPlaceResult) bool {
        return qtc.QPlaceResult_IsSponsored(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSponsored` instead
    ///
    pub const SetSponsored = setSponsored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#setSponsored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` sponsored: bool `
    ///
    pub fn setSponsored(self: QPlaceResult, sponsored: bool) void {
        qtc.QPlaceResult_SetSponsored(@ptrCast(self.ptr), sponsored);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

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
    pub fn operatorAssign(self: QPlaceResult, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        qtc.QPlaceSearchResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QPlaceResult, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return qtc.QPlaceSearchResult_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QPlaceResult, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return qtc.QPlaceSearchResult_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QPlaceResult) i32 {
        return qtc.QPlaceSearchResult_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

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
    pub fn title(self: QPlaceResult, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchResult_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceResult.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: QPlaceResult, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QPlaceSearchResult_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    pub fn icon(self: QPlaceResult) QPlaceIcon {
        return .{ .ptr = qtc.QPlaceSearchResult_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// Inherited from QPlaceSearchResult
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceResult `
    ///
    /// ` _icon: QPlaceIcon `
    ///
    pub fn setIcon(self: QPlaceResult, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QPlaceIcon;
        qtc.QPlaceSearchResult_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#dtor.QPlaceResult)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceResult `
    ///
    pub fn delete(self: QPlaceResult) void {
        qtc.QPlaceResult_Delete(@ptrCast(self.ptr));
    }
};
