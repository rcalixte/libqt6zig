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

    /// New constructs a new QPlaceContactDetail object.
    ///
    pub fn New() QPlaceContactDetail {
        return .{ .ptr = qtc.QPlaceContactDetail_new() };
    }

    /// New2 constructs a new QPlaceContactDetail object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceContactDetail `
    ///
    pub fn New2(other: anytype) QPlaceContactDetail {
        comptime _ = @TypeOf(other)._is_QPlaceContactDetail;
        return .{ .ptr = qtc.QPlaceContactDetail_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    /// ` other: QPlaceContactDetail `
    ///
    pub fn OperatorAssign(self: QPlaceContactDetail, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceContactDetail;
        qtc.QPlaceContactDetail_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    /// ` other: QPlaceContactDetail `
    ///
    pub fn Swap(self: QPlaceContactDetail, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceContactDetail;
        qtc.QPlaceContactDetail_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: QPlaceContactDetail, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceContactDetail_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacecontactdetail.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: QPlaceContactDetail, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QPlaceContactDetail_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: QPlaceContactDetail, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceContactDetail_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacecontactdetail.Value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetValue(self: QPlaceContactDetail, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QPlaceContactDetail_SetValue(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContactDetail `
    ///
    pub fn Clear(self: QPlaceContactDetail) void {
        qtc.QPlaceContactDetail_Clear(@ptrCast(self.ptr));
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
    /// ` self: QPlaceContactDetail `
    ///
    pub fn Delete(self: QPlaceContactDetail) void {
        qtc.QPlaceContactDetail_Delete(@ptrCast(self.ptr));
    }
};
