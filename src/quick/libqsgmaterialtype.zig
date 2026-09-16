const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialtype.html)
pub const QSGMaterialType = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialtype.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGMaterialType,

    pub const _is_QSGMaterialType = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGMaterialType object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSGMaterialType `
    ///
    pub fn new(other: anytype) QSGMaterialType {
        comptime _ = @TypeOf(other)._is_QSGMaterialType;
        return .{ .ptr = qtc.QSGMaterialType_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSGMaterialType object and invalidate the source QSGMaterialType object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSGMaterialType `
    ///
    pub fn new2(other: anytype) QSGMaterialType {
        comptime _ = @TypeOf(other)._is_QSGMaterialType;
        return .{ .ptr = qtc.QSGMaterialType_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGMaterialType `
    ///
    /// ` other: QSGMaterialType `
    ///
    pub fn copyAssign(self: QSGMaterialType, other: QSGMaterialType) void {
        qtc.QSGMaterialType_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGMaterialType `
    ///
    /// ` other: QSGMaterialType `
    ///
    pub fn moveAssign(self: QSGMaterialType, other: QSGMaterialType) void {
        qtc.QSGMaterialType_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialtype.html#dtor.QSGMaterialType)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGMaterialType `
    ///
    pub fn delete(self: QSGMaterialType) void {
        qtc.QSGMaterialType_Delete(@ptrCast(self.ptr));
    }
};
