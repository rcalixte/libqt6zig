const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUntypedPropertyData = @import("libqt6").QUntypedPropertyData;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstatus.html)
pub const QBindingStatus = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstatus.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBindingStatus,

    pub const _is_QBindingStatus = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBindingStatus object in C++ memory
    ///
    pub fn new() QBindingStatus {
        return .{ .ptr = qtc.QBindingStatus_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBindingStatus object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBindingStatus `
    ///
    pub fn new2(other: anytype) QBindingStatus {
        comptime _ = @TypeOf(other)._is_QBindingStatus;
        return .{ .ptr = qtc.QBindingStatus_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QBindingStatus object and invalidate the source QBindingStatus object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBindingStatus `
    ///
    pub fn new3(other: anytype) QBindingStatus {
        comptime _ = @TypeOf(other)._is_QBindingStatus;
        return .{ .ptr = qtc.QBindingStatus_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QBindingStatus `
    ///
    /// ` other: QBindingStatus `
    ///
    pub fn copyAssign(self: QBindingStatus, other: QBindingStatus) void {
        qtc.QBindingStatus_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QBindingStatus `
    ///
    /// ` other: QBindingStatus `
    ///
    pub fn moveAssign(self: QBindingStatus, other: QBindingStatus) void {
        qtc.QBindingStatus_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstatus.html#dtor.QBindingStatus)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBindingStatus `
    ///
    pub fn delete(self: QBindingStatus) void {
        qtc.QBindingStatus_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html)
pub const QBindingStorage = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBindingStorage,

    pub const _is_QBindingStorage = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBindingStorage object in C++ memory
    ///
    pub fn new() QBindingStorage {
        return .{ .ptr = qtc.QBindingStorage_new() };
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBindingStorage `
    ///
    pub fn isEmpty(self: QBindingStorage) bool {
        return qtc.QBindingStorage_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBindingStorage `
    ///
    pub fn isValid(self: QBindingStorage) bool {
        return qtc.QBindingStorage_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerDependency` instead
    ///
    pub const RegisterDependency = registerDependency;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#registerDependency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBindingStorage `
    ///
    /// ` data: QUntypedPropertyData `
    ///
    pub fn registerDependency(self: QBindingStorage, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QUntypedPropertyData;
        qtc.QBindingStorage_RegisterDependency(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#dtor.QBindingStorage)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBindingStorage `
    ///
    pub fn delete(self: QBindingStorage) void {
        qtc.QBindingStorage_Delete(@ptrCast(self.ptr));
    }
};
