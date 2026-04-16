const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVideoFrameFormat = @import("libqt6").QVideoFrameFormat;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html)
pub const QAbstractVideoBuffer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractVideoBuffer,

    pub const _is_QAbstractVideoBuffer = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#unmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractVideoBuffer `
    ///
    pub fn Unmap(self: QAbstractVideoBuffer) void {
        qtc.QAbstractVideoBuffer_Unmap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractVideoBuffer `
    ///
    pub fn Format(self: QAbstractVideoBuffer) QVideoFrameFormat {
        return .{ .ptr = qtc.QAbstractVideoBuffer_Format(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractVideoBuffer `
    ///
    /// ` param1: QAbstractVideoBuffer `
    ///
    pub fn OperatorAssign(self: QAbstractVideoBuffer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractVideoBuffer;
        qtc.QAbstractVideoBuffer_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#dtor.QAbstractVideoBuffer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractVideoBuffer `
    ///
    pub fn Delete(self: QAbstractVideoBuffer) void {
        qtc.QAbstractVideoBuffer_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html)
pub const QAbstractVideoBuffer__MapData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractVideoBuffer__MapData,

    pub const _is_QAbstractVideoBuffer__MapData = {};

    /// New constructs a new QAbstractVideoBuffer::MapData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAbstractVideoBuffer__MapData `
    ///
    pub fn New(other: anytype) QAbstractVideoBuffer__MapData {
        comptime _ = @TypeOf(other)._is_QAbstractVideoBuffer__MapData;
        return .{ .ptr = qtc.QAbstractVideoBuffer__MapData_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QAbstractVideoBuffer::MapData object and invalidates the source QAbstractVideoBuffer::MapData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAbstractVideoBuffer__MapData `
    ///
    pub fn New2(other: anytype) QAbstractVideoBuffer__MapData {
        comptime _ = @TypeOf(other)._is_QAbstractVideoBuffer__MapData;
        return .{ .ptr = qtc.QAbstractVideoBuffer__MapData_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractVideoBuffer__MapData `
    ///
    /// ` other: QAbstractVideoBuffer__MapData `
    ///
    pub fn CopyAssign(self: QAbstractVideoBuffer__MapData, other: QAbstractVideoBuffer__MapData) void {
        qtc.QAbstractVideoBuffer__MapData_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractVideoBuffer__MapData `
    ///
    /// ` other: QAbstractVideoBuffer__MapData `
    ///
    pub fn MoveAssign(self: QAbstractVideoBuffer__MapData, other: QAbstractVideoBuffer__MapData) void {
        qtc.QAbstractVideoBuffer__MapData_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html#planeCount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractVideoBuffer__MapData `
    ///
    pub fn PlaneCount(self: QAbstractVideoBuffer__MapData) i32 {
        return qtc.QAbstractVideoBuffer__MapData_PlaneCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html#planeCount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractVideoBuffer__MapData `
    ///
    /// ` planeCount: i32 `
    ///
    pub fn SetPlaneCount(self: QAbstractVideoBuffer__MapData, planeCount: i32) void {
        qtc.QAbstractVideoBuffer__MapData_SetPlaneCount(@ptrCast(self.ptr), @bitCast(planeCount));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractVideoBuffer__MapData `
    ///
    pub fn Delete(self: QAbstractVideoBuffer__MapData) void {
        qtc.QAbstractVideoBuffer__MapData_Delete(@ptrCast(self.ptr));
    }
};
