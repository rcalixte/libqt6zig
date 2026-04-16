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

    /// New constructs a new QUntypedPropertyData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUntypedPropertyData `
    ///
    pub fn New(other: anytype) QUntypedPropertyData {
        comptime _ = @TypeOf(other)._is_QUntypedPropertyData;
        return .{ .ptr = qtc.QUntypedPropertyData_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QUntypedPropertyData object and invalidates the source QUntypedPropertyData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUntypedPropertyData `
    ///
    pub fn New2(other: anytype) QUntypedPropertyData {
        comptime _ = @TypeOf(other)._is_QUntypedPropertyData;
        return .{ .ptr = qtc.QUntypedPropertyData_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QUntypedPropertyData `
    ///
    /// ` other: QUntypedPropertyData `
    ///
    pub fn CopyAssign(self: QUntypedPropertyData, other: QUntypedPropertyData) void {
        qtc.QUntypedPropertyData_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QUntypedPropertyData `
    ///
    /// ` other: QUntypedPropertyData `
    ///
    pub fn MoveAssign(self: QUntypedPropertyData, other: QUntypedPropertyData) void {
        qtc.QUntypedPropertyData_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertydata.html#dtor.QUntypedPropertyData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QUntypedPropertyData `
    ///
    pub fn Delete(self: QUntypedPropertyData) void {
        qtc.QUntypedPropertyData_Delete(@ptrCast(self.ptr));
    }
};
