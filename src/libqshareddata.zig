const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qshareddata.html)
pub const QSharedData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshareddata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSharedData,

    pub const _is_QSharedData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSharedData object in C++ memory
    ///
    pub fn new() QSharedData {
        return .{ .ptr = qtc.QSharedData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSharedData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSharedData `
    ///
    pub fn new2(param1: anytype) QSharedData {
        comptime _ = @TypeOf(param1)._is_QSharedData;
        return .{ .ptr = qtc.QSharedData_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshareddata.html#dtor.QSharedData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSharedData `
    ///
    pub fn delete(self: QSharedData) void {
        qtc.QSharedData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qadoptshareddatatag.html)
pub const QAdoptSharedDataTag = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qadoptshareddatatag.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAdoptSharedDataTag,

    pub const _is_QAdoptSharedDataTag = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAdoptSharedDataTag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAdoptSharedDataTag `
    ///
    pub fn new(other: anytype) QAdoptSharedDataTag {
        comptime _ = @TypeOf(other)._is_QAdoptSharedDataTag;
        return .{ .ptr = qtc.QAdoptSharedDataTag_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAdoptSharedDataTag object and invalidate the source QAdoptSharedDataTag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAdoptSharedDataTag `
    ///
    pub fn new2(other: anytype) QAdoptSharedDataTag {
        comptime _ = @TypeOf(other)._is_QAdoptSharedDataTag;
        return .{ .ptr = qtc.QAdoptSharedDataTag_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QAdoptSharedDataTag object in C++ memory
    ///
    pub fn new3() QAdoptSharedDataTag {
        return .{ .ptr = qtc.QAdoptSharedDataTag_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QAdoptSharedDataTag `
    ///
    /// ` other: QAdoptSharedDataTag `
    ///
    pub fn copyAssign(self: QAdoptSharedDataTag, other: QAdoptSharedDataTag) void {
        qtc.QAdoptSharedDataTag_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QAdoptSharedDataTag `
    ///
    /// ` other: QAdoptSharedDataTag `
    ///
    pub fn moveAssign(self: QAdoptSharedDataTag, other: QAdoptSharedDataTag) void {
        qtc.QAdoptSharedDataTag_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qadoptshareddatatag.html#dtor.QAdoptSharedDataTag)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAdoptSharedDataTag `
    ///
    pub fn delete(self: QAdoptSharedDataTag) void {
        qtc.QAdoptSharedDataTag_Delete(@ptrCast(self.ptr));
    }
};
