const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
pub const TextEmoticonsCore__EmoticonCategory = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextEmoticonsCore__EmoticonCategory,

    pub const _is_TextEmoticonsCore__EmoticonCategory = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextEmoticonsCore::EmoticonCategory object in C++ memory
    ///
    pub fn new() TextEmoticonsCore__EmoticonCategory {
        return .{ .ptr = qtc.TextEmoticonsCore__EmoticonCategory_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextEmoticonsCore::EmoticonCategory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: TextEmoticonsCore__EmoticonCategory `
    ///
    pub fn new2(param1: anytype) TextEmoticonsCore__EmoticonCategory {
        comptime _ = @TypeOf(param1)._is_TextEmoticonsCore__EmoticonCategory;
        return .{ .ptr = qtc.TextEmoticonsCore__EmoticonCategory_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: TextEmoticonsCore__EmoticonCategory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmoticonCategory_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__EmoticonCategory.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: TextEmoticonsCore__EmoticonCategory, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.TextEmoticonsCore__EmoticonCategory_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn category(self: TextEmoticonsCore__EmoticonCategory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmoticonCategory_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__EmoticonCategory.category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCategory` instead
    ///
    pub const SetCategory = setCategory;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` _category: []const u8 `
    ///
    pub fn setCategory(self: TextEmoticonsCore__EmoticonCategory, _category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = _category.len,
            .data = _category.ptr,
        };
        qtc.TextEmoticonsCore__EmoticonCategory_SetCategory(@ptrCast(self.ptr), category_str);
    }

    /// ### DEPRECATED: Use `i18nName` instead
    ///
    pub const I18nName = i18nName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn i18nName(self: TextEmoticonsCore__EmoticonCategory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmoticonCategory_I18nName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__EmoticonCategory.i18nName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setI18nName` instead
    ///
    pub const SetI18nName = setI18nName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` newI18nName: []const u8 `
    ///
    pub fn setI18nName(self: TextEmoticonsCore__EmoticonCategory, newI18nName: []const u8) void {
        const newI18nName_str = qtc.libqt_string{
            .len = newI18nName.len,
            .data = newI18nName.ptr,
        };
        qtc.TextEmoticonsCore__EmoticonCategory_SetI18nName(@ptrCast(self.ptr), newI18nName_str);
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` other: TextEmoticonsCore__EmoticonCategory `
    ///
    pub fn operatorLesser(self: TextEmoticonsCore__EmoticonCategory, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_TextEmoticonsCore__EmoticonCategory;
        return qtc.TextEmoticonsCore__EmoticonCategory_OperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `order` instead
    ///
    pub const Order = order;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    pub fn order(self: TextEmoticonsCore__EmoticonCategory) i32 {
        return qtc.TextEmoticonsCore__EmoticonCategory_Order(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOrder` instead
    ///
    pub const SetOrder = setOrder;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` newOrder: i32 `
    ///
    pub fn setOrder(self: TextEmoticonsCore__EmoticonCategory, newOrder: i32) void {
        qtc.TextEmoticonsCore__EmoticonCategory_SetOrder(@ptrCast(self.ptr), @bitCast(newOrder));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    pub fn delete(self: TextEmoticonsCore__EmoticonCategory) void {
        qtc.TextEmoticonsCore__EmoticonCategory_Delete(@ptrCast(self.ptr));
    }
};
