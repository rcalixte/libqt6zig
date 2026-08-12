const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertydata.html)
pub const QUntypedPropertyData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertydata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUntypedPropertyData,

    pub const _is_QUntypedPropertyData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QUntypedPropertyData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUntypedPropertyData `
    ///
    pub fn new(other: anytype) QUntypedPropertyData {
        comptime _ = @TypeOf(other)._is_QUntypedPropertyData;
        return .{ .ptr = qtc.QUntypedPropertyData_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QUntypedPropertyData object and invalidate the source QUntypedPropertyData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUntypedPropertyData `
    ///
    pub fn new2(other: anytype) QUntypedPropertyData {
        comptime _ = @TypeOf(other)._is_QUntypedPropertyData;
        return .{ .ptr = qtc.QUntypedPropertyData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QUntypedPropertyData `
    ///
    /// ` other: QUntypedPropertyData `
    ///
    pub fn copyAssign(self: QUntypedPropertyData, other: QUntypedPropertyData) void {
        qtc.QUntypedPropertyData_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QUntypedPropertyData `
    ///
    /// ` other: QUntypedPropertyData `
    ///
    pub fn moveAssign(self: QUntypedPropertyData, other: QUntypedPropertyData) void {
        qtc.QUntypedPropertyData_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertydata.html#dtor.QUntypedPropertyData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QUntypedPropertyData `
    ///
    pub fn delete(self: QUntypedPropertyData) void {
        qtc.QUntypedPropertyData_Delete(@ptrCast(self.ptr));
    }
};
