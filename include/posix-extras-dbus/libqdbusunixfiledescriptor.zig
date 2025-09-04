const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html
pub const qdbusunixfiledescriptor = struct {
    /// New constructs a new QDBusUnixFileDescriptor object.
    ///
    ///
    pub fn New() QtC.QDBusUnixFileDescriptor {
        return qtc.QDBusUnixFileDescriptor_new();
    }

    /// New2 constructs a new QDBusUnixFileDescriptor object.
    ///
    /// ``` fileDescriptor: i32 ```
    pub fn New2(fileDescriptor: i32) QtC.QDBusUnixFileDescriptor {
        return qtc.QDBusUnixFileDescriptor_new2(@intCast(fileDescriptor));
    }

    /// New3 constructs a new QDBusUnixFileDescriptor object.
    ///
    /// ``` other: QtC.QDBusUnixFileDescriptor ```
    pub fn New3(other: ?*anyopaque) QtC.QDBusUnixFileDescriptor {
        return qtc.QDBusUnixFileDescriptor_new3(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#operator-eq)
    ///
    /// ``` self: QtC.QDBusUnixFileDescriptor, other: QtC.QDBusUnixFileDescriptor ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusUnixFileDescriptor_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#swap)
    ///
    /// ``` self: QtC.QDBusUnixFileDescriptor, other: QtC.QDBusUnixFileDescriptor ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusUnixFileDescriptor_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#isValid)
    ///
    /// ``` self: QtC.QDBusUnixFileDescriptor ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QDBusUnixFileDescriptor_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#fileDescriptor)
    ///
    /// ``` self: QtC.QDBusUnixFileDescriptor ```
    pub fn FileDescriptor(self: ?*anyopaque) i32 {
        return qtc.QDBusUnixFileDescriptor_FileDescriptor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#setFileDescriptor)
    ///
    /// ``` self: QtC.QDBusUnixFileDescriptor, fileDescriptor: i32 ```
    pub fn SetFileDescriptor(self: ?*anyopaque, fileDescriptor: i32) void {
        qtc.QDBusUnixFileDescriptor_SetFileDescriptor(@ptrCast(self), @intCast(fileDescriptor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#giveFileDescriptor)
    ///
    /// ``` self: QtC.QDBusUnixFileDescriptor, fileDescriptor: i32 ```
    pub fn GiveFileDescriptor(self: ?*anyopaque, fileDescriptor: i32) void {
        qtc.QDBusUnixFileDescriptor_GiveFileDescriptor(@ptrCast(self), @intCast(fileDescriptor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#takeFileDescriptor)
    ///
    /// ``` self: QtC.QDBusUnixFileDescriptor ```
    pub fn TakeFileDescriptor(self: ?*anyopaque) i32 {
        return qtc.QDBusUnixFileDescriptor_TakeFileDescriptor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#isSupported)
    ///
    ///
    pub fn IsSupported() bool {
        return qtc.QDBusUnixFileDescriptor_IsSupported();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#dtor.QDBusUnixFileDescriptor)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDBusUnixFileDescriptor ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDBusUnixFileDescriptor_Delete(@ptrCast(self));
    }
};
