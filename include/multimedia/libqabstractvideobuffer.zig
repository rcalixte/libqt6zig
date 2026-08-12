const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVideoFrameFormat = @import("libqt6").QVideoFrameFormat;
const qvideoframe_enums = @import("libqvideoframe.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html)
pub const QAbstractVideoBuffer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractVideoBuffer,

    pub const _is_QAbstractVideoBuffer = {};

    /// ### DEPRECATED: Use `map` instead
    ///
    pub const Map = map;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractVideoBuffer `
    ///
    /// ` mode: qvideoframe_enums.MapMode `
    ///
    pub fn map(self: QAbstractVideoBuffer, mode: i32) QAbstractVideoBuffer__MapData {
        return .{ .ptr = qtc.QAbstractVideoBuffer_Map(@ptrCast(self.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `unmap` instead
    ///
    pub const Unmap = unmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#unmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractVideoBuffer `
    ///
    pub fn unmap(self: QAbstractVideoBuffer) void {
        qtc.QAbstractVideoBuffer_Unmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractVideoBuffer `
    ///
    pub fn format(self: QAbstractVideoBuffer) QVideoFrameFormat {
        return .{ .ptr = qtc.QAbstractVideoBuffer_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractVideoBuffer `
    ///
    /// ` param1: QAbstractVideoBuffer `
    ///
    pub fn operatorAssign(self: QAbstractVideoBuffer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractVideoBuffer;
        qtc.QAbstractVideoBuffer_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#dtor.QAbstractVideoBuffer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractVideoBuffer `
    ///
    pub fn delete(self: QAbstractVideoBuffer) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAbstractVideoBuffer::MapData object in C++ memory
    ///
    pub fn new() QAbstractVideoBuffer__MapData {
        return .{ .ptr = qtc.QAbstractVideoBuffer__MapData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAbstractVideoBuffer::MapData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAbstractVideoBuffer__MapData `
    ///
    pub fn new2(other: anytype) QAbstractVideoBuffer__MapData {
        comptime _ = @TypeOf(other)._is_QAbstractVideoBuffer__MapData;
        return .{ .ptr = qtc.QAbstractVideoBuffer__MapData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QAbstractVideoBuffer::MapData object and invalidate the source QAbstractVideoBuffer::MapData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAbstractVideoBuffer__MapData `
    ///
    pub fn new3(other: anytype) QAbstractVideoBuffer__MapData {
        comptime _ = @TypeOf(other)._is_QAbstractVideoBuffer__MapData;
        return .{ .ptr = qtc.QAbstractVideoBuffer__MapData_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractVideoBuffer__MapData `
    ///
    /// ` other: QAbstractVideoBuffer__MapData `
    ///
    pub fn copyAssign(self: QAbstractVideoBuffer__MapData, other: QAbstractVideoBuffer__MapData) void {
        qtc.QAbstractVideoBuffer__MapData_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractVideoBuffer__MapData `
    ///
    /// ` other: QAbstractVideoBuffer__MapData `
    ///
    pub fn moveAssign(self: QAbstractVideoBuffer__MapData, other: QAbstractVideoBuffer__MapData) void {
        qtc.QAbstractVideoBuffer__MapData_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `planeCount` instead
    ///
    pub const PlaneCount = planeCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html#planeCount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractVideoBuffer__MapData `
    ///
    pub fn planeCount(self: QAbstractVideoBuffer__MapData) i32 {
        return qtc.QAbstractVideoBuffer__MapData_PlaneCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPlaneCount` instead
    ///
    pub const SetPlaneCount = setPlaneCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html#planeCount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractVideoBuffer__MapData `
    ///
    /// ` _planeCount: i32 `
    ///
    pub fn setPlaneCount(self: QAbstractVideoBuffer__MapData, _planeCount: i32) void {
        qtc.QAbstractVideoBuffer__MapData_SetPlaneCount(@ptrCast(self.ptr), @bitCast(_planeCount));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractVideoBuffer__MapData `
    ///
    pub fn delete(self: QAbstractVideoBuffer__MapData) void {
        qtc.QAbstractVideoBuffer__MapData_Delete(@ptrCast(self.ptr));
    }
};
