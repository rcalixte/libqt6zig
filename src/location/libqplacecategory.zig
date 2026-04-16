const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPlaceIcon = @import("libqt6").QPlaceIcon;
const qlocation_enums = @import("libqlocation.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html)
pub const QPlaceCategory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceCategory,

    pub const _is_QPlaceCategory = {};

    /// New constructs a new QPlaceCategory object.
    ///
    pub fn New() QPlaceCategory {
        return .{ .ptr = qtc.QPlaceCategory_new() };
    }

    /// New2 constructs a new QPlaceCategory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceCategory `
    ///
    pub fn New2(other: anytype) QPlaceCategory {
        comptime _ = @TypeOf(other)._is_QPlaceCategory;
        return .{ .ptr = qtc.QPlaceCategory_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` other: QPlaceCategory `
    ///
    pub fn OperatorAssign(self: QPlaceCategory, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceCategory;
        qtc.QPlaceCategory_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` other: QPlaceCategory `
    ///
    pub fn Swap(self: QPlaceCategory, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceCategory;
        qtc.QPlaceCategory_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#categoryId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CategoryId(self: QPlaceCategory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceCategory_CategoryId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacecategory.CategoryId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setCategoryId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetCategoryId(self: QPlaceCategory, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlaceCategory_SetCategoryId(@ptrCast(self.ptr), identifier_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QPlaceCategory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceCategory_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacecategory.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QPlaceCategory, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QPlaceCategory_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#visibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ## Returns:
    ///
    /// ` qlocation_enums.Visibility `
    ///
    pub fn Visibility(self: QPlaceCategory) i32 {
        return qtc.QPlaceCategory_Visibility(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` visibility: qlocation_enums.Visibility `
    ///
    pub fn SetVisibility(self: QPlaceCategory, visibility: i32) void {
        qtc.QPlaceCategory_SetVisibility(@ptrCast(self.ptr), @bitCast(visibility));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    pub fn Icon(self: QPlaceCategory) QPlaceIcon {
        return .{ .ptr = qtc.QPlaceCategory_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` icon: QPlaceIcon `
    ///
    pub fn SetIcon(self: QPlaceCategory, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QPlaceIcon;
        qtc.QPlaceCategory_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    pub fn IsEmpty(self: QPlaceCategory) bool {
        return qtc.QPlaceCategory_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#dtor.QPlaceCategory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceCategory `
    ///
    pub fn Delete(self: QPlaceCategory) void {
        qtc.QPlaceCategory_Delete(@ptrCast(self.ptr));
    }
};
