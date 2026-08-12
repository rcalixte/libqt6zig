const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html)
pub const QPlaceContactDetail = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceContactDetail,

    pub const _is_QPlaceContactDetail = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceContactDetail object in C++ memory
    ///
    pub fn new() QPlaceContactDetail {
        return .{ .ptr = qtc.QPlaceContactDetail_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceContactDetail object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceContactDetail `
    ///
    pub fn new2(other: anytype) QPlaceContactDetail {
        comptime _ = @TypeOf(other)._is_QPlaceContactDetail;
        return .{ .ptr = qtc.QPlaceContactDetail_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    /// ` other: QPlaceContactDetail `
    ///
    pub fn operatorAssign(self: QPlaceContactDetail, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceContactDetail;
        qtc.QPlaceContactDetail_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    /// ` other: QPlaceContactDetail `
    ///
    pub fn swap(self: QPlaceContactDetail, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceContactDetail;
        qtc.QPlaceContactDetail_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: QPlaceContactDetail, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceContactDetail_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceContactDetail.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabel` instead
    ///
    pub const SetLabel = setLabel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn setLabel(self: QPlaceContactDetail, _label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        qtc.QPlaceContactDetail_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn value(self: QPlaceContactDetail, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceContactDetail_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceContactDetail.value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setValue(self: QPlaceContactDetail, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QPlaceContactDetail_SetValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    pub fn clear(self: QPlaceContactDetail) void {
        qtc.QPlaceContactDetail_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#dtor.QPlaceContactDetail)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceContactDetail `
    ///
    pub fn delete(self: QPlaceContactDetail) void {
        qtc.QPlaceContactDetail_Delete(@ptrCast(self.ptr));
    }
};
