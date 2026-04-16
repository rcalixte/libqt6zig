const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html)
pub const QPlaceAttribute = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceAttribute,

    pub const _is_QPlaceAttribute = {};

    /// New constructs a new QPlaceAttribute object.
    ///
    pub fn New() QPlaceAttribute {
        return .{ .ptr = qtc.QPlaceAttribute_new() };
    }

    /// New2 constructs a new QPlaceAttribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceAttribute `
    ///
    pub fn New2(other: anytype) QPlaceAttribute {
        comptime _ = @TypeOf(other)._is_QPlaceAttribute;
        return .{ .ptr = qtc.QPlaceAttribute_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    /// ` other: QPlaceAttribute `
    ///
    pub fn OperatorAssign(self: QPlaceAttribute, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceAttribute;
        qtc.QPlaceAttribute_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    /// ` other: QPlaceAttribute `
    ///
    pub fn Swap(self: QPlaceAttribute, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceAttribute;
        qtc.QPlaceAttribute_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: QPlaceAttribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceAttribute_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaceattribute.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: QPlaceAttribute, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QPlaceAttribute_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QPlaceAttribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceAttribute_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaceattribute.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QPlaceAttribute, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlaceAttribute_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    pub fn IsEmpty(self: QPlaceAttribute) bool {
        return qtc.QPlaceAttribute_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#dtor.QPlaceAttribute)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceAttribute `
    ///
    pub fn Delete(self: QPlaceAttribute) void {
        qtc.QPlaceAttribute_Delete(@ptrCast(self.ptr));
    }
};
