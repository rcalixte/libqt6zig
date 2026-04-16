const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html)
pub const QDBusUnixFileDescriptor = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusUnixFileDescriptor,

    pub const _is_QDBusUnixFileDescriptor = {};

    /// New constructs a new QDBusUnixFileDescriptor object.
    ///
    pub fn New() QDBusUnixFileDescriptor {
        return .{ .ptr = qtc.QDBusUnixFileDescriptor_new() };
    }

    /// New2 constructs a new QDBusUnixFileDescriptor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileDescriptor: i32 `
    ///
    pub fn New2(fileDescriptor: i32) QDBusUnixFileDescriptor {
        return .{ .ptr = qtc.QDBusUnixFileDescriptor_new2(@bitCast(fileDescriptor)) };
    }

    /// New3 constructs a new QDBusUnixFileDescriptor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusUnixFileDescriptor `
    ///
    pub fn New3(other: anytype) QDBusUnixFileDescriptor {
        comptime _ = @TypeOf(other)._is_QDBusUnixFileDescriptor;
        return .{ .ptr = qtc.QDBusUnixFileDescriptor_new3(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    /// ` other: QDBusUnixFileDescriptor `
    ///
    pub fn OperatorAssign(self: QDBusUnixFileDescriptor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusUnixFileDescriptor;
        qtc.QDBusUnixFileDescriptor_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    /// ` other: QDBusUnixFileDescriptor `
    ///
    pub fn Swap(self: QDBusUnixFileDescriptor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusUnixFileDescriptor;
        qtc.QDBusUnixFileDescriptor_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    pub fn IsValid(self: QDBusUnixFileDescriptor) bool {
        return qtc.QDBusUnixFileDescriptor_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#fileDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    pub fn FileDescriptor(self: QDBusUnixFileDescriptor) i32 {
        return qtc.QDBusUnixFileDescriptor_FileDescriptor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#setFileDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    /// ` fileDescriptor: i32 `
    ///
    pub fn SetFileDescriptor(self: QDBusUnixFileDescriptor, fileDescriptor: i32) void {
        qtc.QDBusUnixFileDescriptor_SetFileDescriptor(@ptrCast(self.ptr), @bitCast(fileDescriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#giveFileDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    /// ` fileDescriptor: i32 `
    ///
    pub fn GiveFileDescriptor(self: QDBusUnixFileDescriptor, fileDescriptor: i32) void {
        qtc.QDBusUnixFileDescriptor_GiveFileDescriptor(@ptrCast(self.ptr), @bitCast(fileDescriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#takeFileDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    pub fn TakeFileDescriptor(self: QDBusUnixFileDescriptor) i32 {
        return qtc.QDBusUnixFileDescriptor_TakeFileDescriptor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#isSupported)
    ///
    pub fn IsSupported() bool {
        return qtc.QDBusUnixFileDescriptor_IsSupported();
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#dtor.QDBusUnixFileDescriptor)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    pub fn Delete(self: QDBusUnixFileDescriptor) void {
        qtc.QDBusUnixFileDescriptor_Delete(@ptrCast(self.ptr));
    }
};
