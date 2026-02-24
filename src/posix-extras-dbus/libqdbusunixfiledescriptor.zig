const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html)
pub const qdbusunixfiledescriptor = struct {
    /// New constructs a new QDBusUnixFileDescriptor object.
    ///
    pub fn New() QtC.QDBusUnixFileDescriptor {
        return qtc.QDBusUnixFileDescriptor_new();
    }

    /// New2 constructs a new QDBusUnixFileDescriptor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileDescriptor: i32 `
    ///
    pub fn New2(fileDescriptor: i32) QtC.QDBusUnixFileDescriptor {
        return qtc.QDBusUnixFileDescriptor_new2(@bitCast(fileDescriptor));
    }

    /// New3 constructs a new QDBusUnixFileDescriptor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QDBusUnixFileDescriptor `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QDBusUnixFileDescriptor {
        return qtc.QDBusUnixFileDescriptor_new3(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusUnixFileDescriptor `
    ///
    /// ` other: QtC.QDBusUnixFileDescriptor `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusUnixFileDescriptor_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusUnixFileDescriptor `
    ///
    /// ` other: QtC.QDBusUnixFileDescriptor `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusUnixFileDescriptor_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusUnixFileDescriptor `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QDBusUnixFileDescriptor_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#fileDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusUnixFileDescriptor `
    ///
    pub fn FileDescriptor(self: ?*anyopaque) i32 {
        return qtc.QDBusUnixFileDescriptor_FileDescriptor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#setFileDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusUnixFileDescriptor `
    ///
    /// ` fileDescriptor: i32 `
    ///
    pub fn SetFileDescriptor(self: ?*anyopaque, fileDescriptor: i32) void {
        qtc.QDBusUnixFileDescriptor_SetFileDescriptor(@ptrCast(self), @bitCast(fileDescriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#giveFileDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusUnixFileDescriptor `
    ///
    /// ` fileDescriptor: i32 `
    ///
    pub fn GiveFileDescriptor(self: ?*anyopaque, fileDescriptor: i32) void {
        qtc.QDBusUnixFileDescriptor_GiveFileDescriptor(@ptrCast(self), @bitCast(fileDescriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#takeFileDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusUnixFileDescriptor `
    ///
    pub fn TakeFileDescriptor(self: ?*anyopaque) i32 {
        return qtc.QDBusUnixFileDescriptor_TakeFileDescriptor(@ptrCast(self));
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
    /// ` self: QtC.QDBusUnixFileDescriptor `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDBusUnixFileDescriptor_Delete(@ptrCast(self));
    }
};
