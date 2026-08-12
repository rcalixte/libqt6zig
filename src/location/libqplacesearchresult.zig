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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceSearchResult object in C++ memory
    ///
    pub fn new() QPlaceSearchResult {
        return .{ .ptr = qtc.QPlaceSearchResult_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceSearchResult object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn new2(other: anytype) QPlaceSearchResult {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return .{ .ptr = qtc.QPlaceSearchResult_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn operatorAssign(self: QPlaceSearchResult, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        qtc.QPlaceSearchResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn operatorEqual(self: QPlaceSearchResult, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return qtc.QPlaceSearchResult_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ` other: QPlaceSearchResult `
    ///
    pub fn operatorNotEqual(self: QPlaceSearchResult, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceSearchResult;
        return qtc.QPlaceSearchResult_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QPlaceSearchResult) i32 {
        return qtc.QPlaceSearchResult_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: QPlaceSearchResult, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSearchResult_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceSearchResult.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: QPlaceSearchResult, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QPlaceSearchResult_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    pub fn icon(self: QPlaceSearchResult) QPlaceIcon {
        return .{ .ptr = qtc.QPlaceSearchResult_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchResult `
    ///
    /// ` _icon: QPlaceIcon `
    ///
    pub fn setIcon(self: QPlaceSearchResult, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QPlaceIcon;
        qtc.QPlaceSearchResult_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#dtor.QPlaceSearchResult)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceSearchResult `
    ///
    pub fn delete(self: QPlaceSearchResult) void {
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
