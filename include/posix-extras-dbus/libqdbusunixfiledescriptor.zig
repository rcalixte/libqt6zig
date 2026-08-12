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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusUnixFileDescriptor object in C++ memory
    ///
    pub fn new() QDBusUnixFileDescriptor {
        return .{ .ptr = qtc.QDBusUnixFileDescriptor_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDBusUnixFileDescriptor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileDescriptor: i32 `
    ///
    pub fn new2(_fileDescriptor: i32) QDBusUnixFileDescriptor {
        return .{ .ptr = qtc.QDBusUnixFileDescriptor_new2(@bitCast(_fileDescriptor)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDBusUnixFileDescriptor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusUnixFileDescriptor `
    ///
    pub fn new3(other: anytype) QDBusUnixFileDescriptor {
        comptime _ = @TypeOf(other)._is_QDBusUnixFileDescriptor;
        return .{ .ptr = qtc.QDBusUnixFileDescriptor_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    /// ` other: QDBusUnixFileDescriptor `
    ///
    pub fn operatorAssign(self: QDBusUnixFileDescriptor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusUnixFileDescriptor;
        qtc.QDBusUnixFileDescriptor_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    /// ` other: QDBusUnixFileDescriptor `
    ///
    pub fn swap(self: QDBusUnixFileDescriptor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusUnixFileDescriptor;
        qtc.QDBusUnixFileDescriptor_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    pub fn isValid(self: QDBusUnixFileDescriptor) bool {
        return qtc.QDBusUnixFileDescriptor_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fileDescriptor` instead
    ///
    pub const FileDescriptor = fileDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#fileDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    pub fn fileDescriptor(self: QDBusUnixFileDescriptor) i32 {
        return qtc.QDBusUnixFileDescriptor_FileDescriptor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFileDescriptor` instead
    ///
    pub const SetFileDescriptor = setFileDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#setFileDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    /// ` _fileDescriptor: i32 `
    ///
    pub fn setFileDescriptor(self: QDBusUnixFileDescriptor, _fileDescriptor: i32) void {
        qtc.QDBusUnixFileDescriptor_SetFileDescriptor(@ptrCast(self.ptr), @bitCast(_fileDescriptor));
    }

    /// ### DEPRECATED: Use `giveFileDescriptor` instead
    ///
    pub const GiveFileDescriptor = giveFileDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#giveFileDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    /// ` _fileDescriptor: i32 `
    ///
    pub fn giveFileDescriptor(self: QDBusUnixFileDescriptor, _fileDescriptor: i32) void {
        qtc.QDBusUnixFileDescriptor_GiveFileDescriptor(@ptrCast(self.ptr), @bitCast(_fileDescriptor));
    }

    /// ### DEPRECATED: Use `takeFileDescriptor` instead
    ///
    pub const TakeFileDescriptor = takeFileDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#takeFileDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    pub fn takeFileDescriptor(self: QDBusUnixFileDescriptor) i32 {
        return qtc.QDBusUnixFileDescriptor_TakeFileDescriptor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#isSupported)
    ///
    pub fn isSupported() bool {
        return qtc.QDBusUnixFileDescriptor_IsSupported();
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#dtor.QDBusUnixFileDescriptor)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusUnixFileDescriptor `
    ///
    pub fn delete(self: QDBusUnixFileDescriptor) void {
        qtc.QDBusUnixFileDescriptor_Delete(@ptrCast(self.ptr));
    }
};
