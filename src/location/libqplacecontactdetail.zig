const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html)
pub const qplacecontactdetail = struct {
    /// New constructs a new QPlaceContactDetail object.
    ///
    pub fn New() QtC.QPlaceContactDetail {
        return qtc.QPlaceContactDetail_new();
    }

    /// New2 constructs a new QPlaceContactDetail object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceContactDetail `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceContactDetail {
        return qtc.QPlaceContactDetail_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContactDetail `
    ///
    /// ` other: QtC.QPlaceContactDetail `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceContactDetail_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContactDetail `
    ///
    /// ` other: QtC.QPlaceContactDetail `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceContactDetail_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContactDetail `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceContactDetail_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacecontactdetail.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContactDetail `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QPlaceContactDetail_SetLabel(@ptrCast(self), label_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContactDetail `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceContactDetail_Value(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacecontactdetail.Value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContactDetail `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QPlaceContactDetail_SetValue(@ptrCast(self), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContactDetail `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QPlaceContactDetail_Clear(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#dtor.QPlaceContactDetail)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceContactDetail `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QPlaceContactDetail_Delete(@ptrCast(self));
    }
};
