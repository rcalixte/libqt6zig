const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstatus.html)
pub const qbindingstatus = struct {
    /// New constructs a new QBindingStatus object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QBindingStatus `
    ///
    pub fn New(other: ?*anyopaque) QtC.QBindingStatus {
        return qtc.QBindingStatus_new(@ptrCast(other));
    }

    /// New2 constructs a new QBindingStatus object and invalidates the source QBindingStatus object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QBindingStatus `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QBindingStatus {
        return qtc.QBindingStatus_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBindingStatus `
    ///
    /// ` other: QtC.QBindingStatus `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBindingStatus_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBindingStatus `
    ///
    /// ` other: QtC.QBindingStatus `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBindingStatus_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstatus.html#dtor.QBindingStatus)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QBindingStatus `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBindingStatus_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html)
pub const qbindingstorage = struct {
    /// New constructs a new QBindingStorage object.
    ///
    pub fn New() QtC.QBindingStorage {
        return qtc.QBindingStorage_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBindingStorage `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QBindingStorage_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBindingStorage `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QBindingStorage_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#registerDependency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBindingStorage `
    ///
    /// ` data: QtC.QUntypedPropertyData `
    ///
    pub fn RegisterDependency(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QBindingStorage_RegisterDependency(@ptrCast(self), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#dtor.QBindingStorage)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QBindingStorage `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBindingStorage_Delete(@ptrCast(self));
    }
};
