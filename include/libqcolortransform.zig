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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QColorTransform object in C++ memory
    ///
    pub fn new() QColorTransform {
        return .{ .ptr = qtc.QColorTransform_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QColorTransform object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` colorTransform: QColorTransform `
    ///
    pub fn new2(colorTransform: anytype) QColorTransform {
        comptime _ = @TypeOf(colorTransform)._is_QColorTransform;
        return .{ .ptr = qtc.QColorTransform_new2(@ptrCast(colorTransform.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorTransform `
    ///
    /// ` other: QColorTransform `
    ///
    pub fn operatorAssign(self: QColorTransform, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QColorTransform;
        qtc.QColorTransform_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorTransform `
    ///
    /// ` other: QColorTransform `
    ///
    pub fn swap(self: QColorTransform, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QColorTransform;
        qtc.QColorTransform_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isIdentity` instead
    ///
    pub const IsIdentity = isIdentity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#isIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorTransform `
    ///
    pub fn isIdentity(self: QColorTransform) bool {
        return qtc.QColorTransform_IsIdentity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `map` instead
    ///
    pub const Map = map;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorTransform `
    ///
    /// ` argb: u32 `
    ///
    pub fn map(self: QColorTransform, argb: u32) u32 {
        return qtc.QColorTransform_Map(@ptrCast(self.ptr), @bitCast(argb));
    }

    /// ### DEPRECATED: Use `map2` instead
    ///
    pub const Map2 = map2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorTransform `
    ///
    /// ` rgba64: QRgba64 `
    ///
    pub fn map2(self: QColorTransform, rgba64: anytype) QRgba64 {
        comptime _ = @TypeOf(rgba64)._is_QRgba64;
        return .{ .ptr = qtc.QColorTransform_Map2(@ptrCast(self.ptr), @ptrCast(rgba64.ptr)) };
    }

    /// ### DEPRECATED: Use `map5` instead
    ///
    pub const Map5 = map5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorTransform `
    ///
    /// ` color: QColor `
    ///
    pub fn map5(self: QColorTransform, color: anytype) QColor {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.QColorTransform_Map5(@ptrCast(self.ptr), @ptrCast(color.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#dtor.QColorTransform)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QColorTransform `
    ///
    pub fn delete(self: QColorTransform) void {
        qtc.QColorTransform_Delete(@ptrCast(self.ptr));
    }
};
