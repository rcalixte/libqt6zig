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

    /// New constructs a new QSharedData object.
    ///
    pub fn New() QSharedData {
        return .{ .ptr = qtc.QSharedData_new() };
    }

    /// New2 constructs a new QSharedData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSharedData `
    ///
    pub fn New2(param1: anytype) QSharedData {
        comptime _ = @TypeOf(param1)._is_QSharedData;
        return .{ .ptr = qtc.QSharedData_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshareddata.html#dtor.QSharedData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSharedData `
    ///
    pub fn Delete(self: QSharedData) void {
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

    /// New constructs a new QAdoptSharedDataTag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAdoptSharedDataTag `
    ///
    pub fn New(other: anytype) QAdoptSharedDataTag {
        comptime _ = @TypeOf(other)._is_QAdoptSharedDataTag;
        return .{ .ptr = qtc.QAdoptSharedDataTag_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QAdoptSharedDataTag object and invalidates the source QAdoptSharedDataTag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAdoptSharedDataTag `
    ///
    pub fn New2(other: anytype) QAdoptSharedDataTag {
        comptime _ = @TypeOf(other)._is_QAdoptSharedDataTag;
        return .{ .ptr = qtc.QAdoptSharedDataTag_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QAdoptSharedDataTag object.
    ///
    pub fn New3() QAdoptSharedDataTag {
        return .{ .ptr = qtc.QAdoptSharedDataTag_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAdoptSharedDataTag `
    ///
    /// ` other: QAdoptSharedDataTag `
    ///
    pub fn CopyAssign(self: QAdoptSharedDataTag, other: QAdoptSharedDataTag) void {
        qtc.QAdoptSharedDataTag_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAdoptSharedDataTag `
    ///
    /// ` other: QAdoptSharedDataTag `
    ///
    pub fn MoveAssign(self: QAdoptSharedDataTag, other: QAdoptSharedDataTag) void {
        qtc.QAdoptSharedDataTag_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qadoptshareddatatag.html#dtor.QAdoptSharedDataTag)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAdoptSharedDataTag `
    ///
    pub fn Delete(self: QAdoptSharedDataTag) void {
        qtc.QAdoptSharedDataTag_Delete(@ptrCast(self.ptr));
    }
};
