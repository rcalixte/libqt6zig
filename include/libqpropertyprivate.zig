const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertydata.html)
pub const quntypedpropertydata = struct {
    /// New constructs a new QUntypedPropertyData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QUntypedPropertyData `
    ///
    pub fn New(other: ?*anyopaque) QtC.QUntypedPropertyData {
        return qtc.QUntypedPropertyData_new(@ptrCast(other));
    }

    /// New2 constructs a new QUntypedPropertyData object and invalidates the source QUntypedPropertyData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QUntypedPropertyData `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QUntypedPropertyData {
        return qtc.QUntypedPropertyData_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QUntypedPropertyData `
    ///
    /// ` other: QtC.QUntypedPropertyData `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedPropertyData_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QUntypedPropertyData `
    ///
    /// ` other: QtC.QUntypedPropertyData `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedPropertyData_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertydata.html#dtor.QUntypedPropertyData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QUntypedPropertyData `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUntypedPropertyData_Delete(@ptrCast(self));
    }
};
