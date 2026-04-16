const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlockfile_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html)
pub const QLockFile = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLockFile,

    pub const _is_QLockFile = {};

    /// New constructs a new QLockFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New(fileName: []const u8) QLockFile {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QLockFile_new(fileName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: QLockFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLockFile_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlockfile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    pub fn Lock(self: QLockFile) bool {
        return qtc.QLockFile_Lock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    /// ` timeout: i32 `
    ///
    pub fn TryLock(self: QLockFile, timeout: i32) bool {
        return qtc.QLockFile_TryLock(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    pub fn Unlock(self: QLockFile) void {
        qtc.QLockFile_Unlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#setStaleLockTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    /// ` staleLockTime: i32 `
    ///
    pub fn SetStaleLockTime(self: QLockFile, staleLockTime: i32) void {
        qtc.QLockFile_SetStaleLockTime(@ptrCast(self.ptr), @bitCast(staleLockTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#staleLockTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    pub fn StaleLockTime(self: QLockFile) i32 {
        return qtc.QLockFile_StaleLockTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    pub fn TryLock2(self: QLockFile) bool {
        return qtc.QLockFile_TryLock2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#setStaleLockTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    /// ` value: i64 of milliseconds `
    ///
    pub fn SetStaleLockTime2(self: QLockFile, value: i64) void {
        qtc.QLockFile_SetStaleLockTime2(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#staleLockTimeAsDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    /// ## Returns:
    ///
    /// ` i64 of milliseconds `
    ///
    pub fn StaleLockTimeAsDuration(self: QLockFile) i64 {
        return qtc.QLockFile_StaleLockTimeAsDuration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#isLocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    pub fn IsLocked(self: QLockFile) bool {
        return qtc.QLockFile_IsLocked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#removeStaleLockFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    pub fn RemoveStaleLockFile(self: QLockFile) bool {
        return qtc.QLockFile_RemoveStaleLockFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    /// ## Returns:
    ///
    /// ` qlockfile_enums.LockError `
    ///
    pub fn Error(self: QLockFile) i32 {
        return qtc.QLockFile_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    /// ` timeout: i64 of milliseconds `
    ///
    pub fn TryLock1(self: QLockFile, timeout: i64) bool {
        return qtc.QLockFile_TryLock1(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#dtor.QLockFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLockFile `
    ///
    pub fn Delete(self: QLockFile) void {
        qtc.QLockFile_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#public-types)
pub const enums = struct {
    pub const LockError = enum(i32) {
        pub const NoError: i32 = 0;
        pub const LockFailedError: i32 = 1;
        pub const PermissionError: i32 = 2;
        pub const UnknownError: i32 = 3;
    };
};
