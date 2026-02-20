const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlocation_enums = @import("libqlocation.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html)
pub const qplacecategory = struct {
    /// New constructs a new QPlaceCategory object.
    ///
    pub fn New() QtC.QPlaceCategory {
        return qtc.QPlaceCategory_new();
    }

    /// New2 constructs a new QPlaceCategory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceCategory `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceCategory {
        return qtc.QPlaceCategory_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceCategory `
    ///
    /// ` other: QtC.QPlaceCategory `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceCategory_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceCategory `
    ///
    /// ` other: QtC.QPlaceCategory `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceCategory_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#categoryId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CategoryId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceCategory_CategoryId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacecategory.CategoryId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setCategoryId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceCategory `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetCategoryId(self: ?*anyopaque, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlaceCategory_SetCategoryId(@ptrCast(self), identifier_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceCategory_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacecategory.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceCategory `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QPlaceCategory_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#visibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceCategory `
    ///
    /// ## Returns:
    ///
    /// ` qlocation_enums.Visibility `
    ///
    pub fn Visibility(self: ?*anyopaque) i32 {
        return qtc.QPlaceCategory_Visibility(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceCategory `
    ///
    /// ` visibility: qlocation_enums.Visibility `
    ///
    pub fn SetVisibility(self: ?*anyopaque, visibility: i32) void {
        qtc.QPlaceCategory_SetVisibility(@ptrCast(self), @bitCast(visibility));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceCategory `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QPlaceIcon {
        return qtc.QPlaceCategory_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceCategory `
    ///
    /// ` icon: QtC.QPlaceIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QPlaceCategory_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceCategory `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QPlaceCategory_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#dtor.QPlaceCategory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceCategory `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlaceCategory_Delete(@ptrCast(self));
    }
};
