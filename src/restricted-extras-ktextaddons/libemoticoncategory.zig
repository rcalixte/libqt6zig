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

    /// New constructs a new TextEmoticonsCore::EmoticonCategory object.
    ///
    pub fn New() TextEmoticonsCore__EmoticonCategory {
        return .{ .ptr = qtc.TextEmoticonsCore__EmoticonCategory_new() };
    }

    /// New2 constructs a new TextEmoticonsCore::EmoticonCategory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: TextEmoticonsCore__EmoticonCategory `
    ///
    pub fn New2(param1: anytype) TextEmoticonsCore__EmoticonCategory {
        comptime _ = @TypeOf(param1)._is_TextEmoticonsCore__EmoticonCategory;
        return .{ .ptr = qtc.TextEmoticonsCore__EmoticonCategory_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: TextEmoticonsCore__EmoticonCategory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmoticonCategory_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__emoticoncategory.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: TextEmoticonsCore__EmoticonCategory, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.TextEmoticonsCore__EmoticonCategory_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Category(self: TextEmoticonsCore__EmoticonCategory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmoticonCategory_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__emoticoncategory.Category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` category: []const u8 `
    ///
    pub fn SetCategory(self: TextEmoticonsCore__EmoticonCategory, category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        qtc.TextEmoticonsCore__EmoticonCategory_SetCategory(@ptrCast(self.ptr), category_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn I18nName(self: TextEmoticonsCore__EmoticonCategory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmoticonCategory_I18nName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__emoticoncategory.I18nName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` newI18nName: []const u8 `
    ///
    pub fn SetI18nName(self: TextEmoticonsCore__EmoticonCategory, newI18nName: []const u8) void {
        const newI18nName_str = qtc.libqt_string{
            .len = newI18nName.len,
            .data = newI18nName.ptr,
        };
        qtc.TextEmoticonsCore__EmoticonCategory_SetI18nName(@ptrCast(self.ptr), newI18nName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` other: TextEmoticonsCore__EmoticonCategory `
    ///
    pub fn OperatorLesser(self: TextEmoticonsCore__EmoticonCategory, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_TextEmoticonsCore__EmoticonCategory;
        return qtc.TextEmoticonsCore__EmoticonCategory_OperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    pub fn Order(self: TextEmoticonsCore__EmoticonCategory) i32 {
        return qtc.TextEmoticonsCore__EmoticonCategory_Order(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    /// ` newOrder: i32 `
    ///
    pub fn SetOrder(self: TextEmoticonsCore__EmoticonCategory, newOrder: i32) void {
        qtc.TextEmoticonsCore__EmoticonCategory_SetOrder(@ptrCast(self.ptr), @bitCast(newOrder));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsCore__EmoticonCategory `
    ///
    pub fn Delete(self: TextEmoticonsCore__EmoticonCategory) void {
        qtc.TextEmoticonsCore__EmoticonCategory_Delete(@ptrCast(self.ptr));
    }
};
