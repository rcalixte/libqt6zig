const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html)
pub const qplaceattribute = struct {
    /// New constructs a new QPlaceAttribute object.
    ///
    pub fn New() QtC.QPlaceAttribute {
        return qtc.QPlaceAttribute_new();
    }

    /// New2 constructs a new QPlaceAttribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceAttribute `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceAttribute {
        return qtc.QPlaceAttribute_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceAttribute `
    ///
    /// ` other: QtC.QPlaceAttribute `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceAttribute_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceAttribute `
    ///
    /// ` other: QtC.QPlaceAttribute `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceAttribute_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceAttribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceAttribute_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaceattribute.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceAttribute `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QPlaceAttribute_SetLabel(@ptrCast(self), label_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceAttribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceAttribute_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaceattribute.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceAttribute `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlaceAttribute_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceAttribute `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QPlaceAttribute_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#dtor.QPlaceAttribute)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceAttribute `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlaceAttribute_Delete(@ptrCast(self));
    }
};
