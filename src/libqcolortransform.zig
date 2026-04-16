const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QRgba64 = @import("libqt6").QRgba64;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html)
pub const QColorTransform = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QColorTransform,

    pub const _is_QColorTransform = {};

    /// New constructs a new QColorTransform object.
    ///
    pub fn New() QColorTransform {
        return .{ .ptr = qtc.QColorTransform_new() };
    }

    /// New2 constructs a new QColorTransform object.
    ///
    /// ## Parameter(s):
    ///
    /// ` colorTransform: QColorTransform `
    ///
    pub fn New2(colorTransform: anytype) QColorTransform {
        comptime _ = @TypeOf(colorTransform)._is_QColorTransform;
        return .{ .ptr = qtc.QColorTransform_new2(@ptrCast(colorTransform.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorTransform `
    ///
    /// ` other: QColorTransform `
    ///
    pub fn OperatorAssign(self: QColorTransform, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QColorTransform;
        qtc.QColorTransform_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorTransform `
    ///
    /// ` other: QColorTransform `
    ///
    pub fn Swap(self: QColorTransform, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QColorTransform;
        qtc.QColorTransform_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#isIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorTransform `
    ///
    pub fn IsIdentity(self: QColorTransform) bool {
        return qtc.QColorTransform_IsIdentity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorTransform `
    ///
    /// ` argb: u32 `
    ///
    pub fn Map(self: QColorTransform, argb: u32) u32 {
        return qtc.QColorTransform_Map(@ptrCast(self.ptr), @bitCast(argb));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorTransform `
    ///
    /// ` rgba64: QRgba64 `
    ///
    pub fn Map2(self: QColorTransform, rgba64: anytype) QRgba64 {
        comptime _ = @TypeOf(rgba64)._is_QRgba64;
        return .{ .ptr = qtc.QColorTransform_Map2(@ptrCast(self.ptr), @ptrCast(rgba64.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorTransform `
    ///
    /// ` color: QColor `
    ///
    pub fn Map5(self: QColorTransform, color: anytype) QColor {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.QColorTransform_Map5(@ptrCast(self.ptr), @ptrCast(color.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#dtor.QColorTransform)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QColorTransform `
    ///
    pub fn Delete(self: QColorTransform) void {
        qtc.QColorTransform_Delete(@ptrCast(self.ptr));
    }
};
