const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qcolortransform.html
pub const qcolortransform = struct {
    /// New constructs a new QColorTransform object.
    ///
    ///
    pub fn New() QtC.QColorTransform {
        return qtc.QColorTransform_new();
    }

    /// New2 constructs a new QColorTransform object.
    ///
    /// ``` colorTransform: QtC.QColorTransform ```
    pub fn New2(colorTransform: ?*anyopaque) QtC.QColorTransform {
        return qtc.QColorTransform_new2(@ptrCast(colorTransform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#operator=)
    ///
    /// ``` self: QtC.QColorTransform, other: QtC.QColorTransform ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QColorTransform_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#swap)
    ///
    /// ``` self: QtC.QColorTransform, other: QtC.QColorTransform ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QColorTransform_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#isIdentity)
    ///
    /// ``` self: QtC.QColorTransform ```
    pub fn IsIdentity(self: ?*anyopaque) bool {
        return qtc.QColorTransform_IsIdentity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#map)
    ///
    /// ``` self: QtC.QColorTransform, argb: u32 ```
    pub fn Map(self: ?*anyopaque, argb: u32) u32 {
        return qtc.QColorTransform_Map(@ptrCast(self), @intCast(argb));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#map)
    ///
    /// ``` self: QtC.QColorTransform, rgba64: QtC.QRgba64 ```
    pub fn Map2(self: ?*anyopaque, rgba64: QtC.QRgba64) QtC.QRgba64 {
        return qtc.QColorTransform_Map2(@ptrCast(self), @ptrCast(rgba64));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#map)
    ///
    /// ``` self: QtC.QColorTransform, color: QtC.QColor ```
    pub fn Map5(self: ?*anyopaque, color: ?*anyopaque) QtC.QColor {
        return qtc.QColorTransform_Map5(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#dtor.QColorTransform)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QColorTransform ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QColorTransform_Delete(@ptrCast(self));
    }
};
