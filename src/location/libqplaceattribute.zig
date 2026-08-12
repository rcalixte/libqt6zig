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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceAttribute object in C++ memory
    ///
    pub fn new() QPlaceAttribute {
        return .{ .ptr = qtc.QPlaceAttribute_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceAttribute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceAttribute `
    ///
    pub fn new2(other: anytype) QPlaceAttribute {
        comptime _ = @TypeOf(other)._is_QPlaceAttribute;
        return .{ .ptr = qtc.QPlaceAttribute_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    /// ` other: QPlaceAttribute `
    ///
    pub fn operatorAssign(self: QPlaceAttribute, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceAttribute;
        qtc.QPlaceAttribute_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    /// ` other: QPlaceAttribute `
    ///
    pub fn swap(self: QPlaceAttribute, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceAttribute;
        qtc.QPlaceAttribute_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: QPlaceAttribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceAttribute_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceAttribute.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabel` instead
    ///
    pub const SetLabel = setLabel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn setLabel(self: QPlaceAttribute, _label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        qtc.QPlaceAttribute_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QPlaceAttribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceAttribute_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceAttribute.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QPlaceAttribute, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QPlaceAttribute_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceAttribute `
    ///
    pub fn isEmpty(self: QPlaceAttribute) bool {
        return qtc.QPlaceAttribute_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#dtor.QPlaceAttribute)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceAttribute `
    ///
    pub fn delete(self: QPlaceAttribute) void {
        qtc.QPlaceAttribute_Delete(@ptrCast(self.ptr));
    }
};
