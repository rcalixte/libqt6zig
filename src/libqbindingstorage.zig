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

    /// New constructs a new QBindingStatus object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBindingStatus `
    ///
    pub fn New(other: anytype) QBindingStatus {
        comptime _ = @TypeOf(other)._is_QBindingStatus;
        return .{ .ptr = qtc.QBindingStatus_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QBindingStatus object and invalidates the source QBindingStatus object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBindingStatus `
    ///
    pub fn New2(other: anytype) QBindingStatus {
        comptime _ = @TypeOf(other)._is_QBindingStatus;
        return .{ .ptr = qtc.QBindingStatus_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QBindingStatus `
    ///
    /// ` other: QBindingStatus `
    ///
    pub fn CopyAssign(self: QBindingStatus, other: QBindingStatus) void {
        qtc.QBindingStatus_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QBindingStatus `
    ///
    /// ` other: QBindingStatus `
    ///
    pub fn MoveAssign(self: QBindingStatus, other: QBindingStatus) void {
        qtc.QBindingStatus_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
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
    /// ` self: QBindingStatus `
    ///
    pub fn Delete(self: QBindingStatus) void {
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

    /// New constructs a new QBindingStorage object.
    ///
    pub fn New() QBindingStorage {
        return .{ .ptr = qtc.QBindingStorage_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBindingStorage `
    ///
    pub fn IsEmpty(self: QBindingStorage) bool {
        return qtc.QBindingStorage_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBindingStorage `
    ///
    pub fn IsValid(self: QBindingStorage) bool {
        return qtc.QBindingStorage_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#registerDependency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBindingStorage `
    ///
    /// ` data: QUntypedPropertyData `
    ///
    pub fn RegisterDependency(self: QBindingStorage, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QUntypedPropertyData;
        qtc.QBindingStorage_RegisterDependency(@ptrCast(self.ptr), @ptrCast(data.ptr));
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
    /// ` self: QBindingStorage `
    ///
    pub fn Delete(self: QBindingStorage) void {
        qtc.QBindingStorage_Delete(@ptrCast(self.ptr));
    }
};
