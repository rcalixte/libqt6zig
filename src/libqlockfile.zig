const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlockfile_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qlockfile.html
pub const qlockfile = struct {
    /// New constructs a new QLockFile object.
    ///
    /// ``` fileName: []const u8 ```
    pub fn New(fileName: []const u8) QtC.QLockFile {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QLockFile_new(fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#fileName)
    ///
    /// ``` self: QtC.QLockFile, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLockFile_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlockfile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#lock)
    ///
    /// ``` self: QtC.QLockFile ```
    pub fn Lock(self: ?*anyopaque) bool {
        return qtc.QLockFile_Lock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
    ///
    /// ``` self: QtC.QLockFile, timeout: i32 ```
    pub fn TryLock(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QLockFile_TryLock(@ptrCast(self), @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#unlock)
    ///
    /// ``` self: QtC.QLockFile ```
    pub fn Unlock(self: ?*anyopaque) void {
        qtc.QLockFile_Unlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#setStaleLockTime)
    ///
    /// ``` self: QtC.QLockFile, staleLockTime: i32 ```
    pub fn SetStaleLockTime(self: ?*anyopaque, staleLockTime: i32) void {
        qtc.QLockFile_SetStaleLockTime(@ptrCast(self), @intCast(staleLockTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#staleLockTime)
    ///
    /// ``` self: QtC.QLockFile ```
    pub fn StaleLockTime(self: ?*anyopaque) i32 {
        return qtc.QLockFile_StaleLockTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
    ///
    /// ``` self: QtC.QLockFile ```
    pub fn TryLock2(self: ?*anyopaque) bool {
        return qtc.QLockFile_TryLock2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#isLocked)
    ///
    /// ``` self: QtC.QLockFile ```
    pub fn IsLocked(self: ?*anyopaque) bool {
        return qtc.QLockFile_IsLocked(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#removeStaleLockFile)
    ///
    /// ``` self: QtC.QLockFile ```
    pub fn RemoveStaleLockFile(self: ?*anyopaque) bool {
        return qtc.QLockFile_RemoveStaleLockFile(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#error)
    ///
    /// ``` self: QtC.QLockFile ```
    pub fn Error(self: ?*anyopaque) i64 {
        return qtc.QLockFile_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#dtor.QLockFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QLockFile ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLockFile_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlockfile.html#types
pub const enums = struct {
    pub const LockError = enum {
        pub const NoError: i32 = 0;
        pub const LockFailedError: i32 = 1;
        pub const PermissionError: i32 = 2;
        pub const UnknownError: i32 = 3;
    };
};
