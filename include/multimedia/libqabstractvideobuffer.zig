const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html)
pub const qabstractvideobuffer = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#unmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractVideoBuffer `
    ///
    pub fn Unmap(self: ?*anyopaque) void {
        qtc.QAbstractVideoBuffer_Unmap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractVideoBuffer `
    ///
    pub fn Format(self: ?*anyopaque) QtC.QVideoFrameFormat {
        return qtc.QAbstractVideoBuffer_Format(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractVideoBuffer `
    ///
    /// ` param1: QtC.QAbstractVideoBuffer `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractVideoBuffer_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#dtor.QAbstractVideoBuffer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAbstractVideoBuffer `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractVideoBuffer_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html)
pub const qabstractvideobuffer__mapdata = struct {
    /// New constructs a new QAbstractVideoBuffer::MapData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QAbstractVideoBuffer__MapData `
    ///
    pub fn New(other: ?*anyopaque) QtC.QAbstractVideoBuffer__MapData {
        return qtc.QAbstractVideoBuffer__MapData_new(@ptrCast(other));
    }

    /// New2 constructs a new QAbstractVideoBuffer::MapData object and invalidates the source QAbstractVideoBuffer::MapData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QAbstractVideoBuffer__MapData `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QAbstractVideoBuffer__MapData {
        return qtc.QAbstractVideoBuffer__MapData_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractVideoBuffer__MapData `
    ///
    /// ` other: QtC.QAbstractVideoBuffer__MapData `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAbstractVideoBuffer__MapData_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractVideoBuffer__MapData `
    ///
    /// ` other: QtC.QAbstractVideoBuffer__MapData `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAbstractVideoBuffer__MapData_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html#planeCount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractVideoBuffer__MapData `
    ///
    pub fn PlaneCount(self: ?*anyopaque) i32 {
        return qtc.QAbstractVideoBuffer__MapData_PlaneCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html#planeCount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractVideoBuffer__MapData `
    ///
    /// ` planeCount: i32 `
    ///
    pub fn SetPlaneCount(self: ?*anyopaque, planeCount: i32) void {
        qtc.QAbstractVideoBuffer__MapData_SetPlaneCount(@ptrCast(self), @bitCast(planeCount));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAbstractVideoBuffer__MapData `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractVideoBuffer__MapData_Delete(@ptrCast(self));
    }
};
