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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceCategory object in C++ memory
    ///
    pub fn new() QPlaceCategory {
        return .{ .ptr = qtc.QPlaceCategory_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceCategory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceCategory `
    ///
    pub fn new2(other: anytype) QPlaceCategory {
        comptime _ = @TypeOf(other)._is_QPlaceCategory;
        return .{ .ptr = qtc.QPlaceCategory_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` other: QPlaceCategory `
    ///
    pub fn operatorAssign(self: QPlaceCategory, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceCategory;
        qtc.QPlaceCategory_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` other: QPlaceCategory `
    ///
    pub fn swap(self: QPlaceCategory, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceCategory;
        qtc.QPlaceCategory_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `categoryId` instead
    ///
    pub const CategoryId = categoryId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#categoryId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn categoryId(self: QPlaceCategory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceCategory_CategoryId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceCategory.categoryId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCategoryId` instead
    ///
    pub const SetCategoryId = setCategoryId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setCategoryId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn setCategoryId(self: QPlaceCategory, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlaceCategory_SetCategoryId(@ptrCast(self.ptr), identifier_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QPlaceCategory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceCategory_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceCategory.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QPlaceCategory, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QPlaceCategory_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `visibility` instead
    ///
    pub const Visibility = visibility;

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
    pub fn visibility(self: QPlaceCategory) i32 {
        return qtc.QPlaceCategory_Visibility(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisibility` instead
    ///
    pub const SetVisibility = setVisibility;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` _visibility: qlocation_enums.Visibility `
    ///
    pub fn setVisibility(self: QPlaceCategory, _visibility: i32) void {
        qtc.QPlaceCategory_SetVisibility(@ptrCast(self.ptr), @bitCast(_visibility));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    pub fn icon(self: QPlaceCategory) QPlaceIcon {
        return .{ .ptr = qtc.QPlaceCategory_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    /// ` _icon: QPlaceIcon `
    ///
    pub fn setIcon(self: QPlaceCategory, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QPlaceIcon;
        qtc.QPlaceCategory_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceCategory `
    ///
    pub fn isEmpty(self: QPlaceCategory) bool {
        return qtc.QPlaceCategory_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#dtor.QPlaceCategory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceCategory `
    ///
    pub fn delete(self: QPlaceCategory) void {
        qtc.QPlaceCategory_Delete(@ptrCast(self.ptr));
    }
};
