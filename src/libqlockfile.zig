const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlockfile_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html)
pub const qlockfile = struct {
    /// New constructs a new QLockFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New(fileName: []const u8) QtC.QLockFile {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QLockFile_new(fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLockFile_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlockfile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    pub fn Lock(self: ?*anyopaque) bool {
        return qtc.QLockFile_Lock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    /// ` timeout: i32 `
    ///
    pub fn TryLock(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QLockFile_TryLock(@ptrCast(self), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    pub fn Unlock(self: ?*anyopaque) void {
        qtc.QLockFile_Unlock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#setStaleLockTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    /// ` staleLockTime: i32 `
    ///
    pub fn SetStaleLockTime(self: ?*anyopaque, staleLockTime: i32) void {
        qtc.QLockFile_SetStaleLockTime(@ptrCast(self), @bitCast(staleLockTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#staleLockTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    pub fn StaleLockTime(self: ?*anyopaque) i32 {
        return qtc.QLockFile_StaleLockTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    pub fn TryLock2(self: ?*anyopaque) bool {
        return qtc.QLockFile_TryLock2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#setStaleLockTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    /// ` value: i64 of milliseconds `
    ///
    pub fn SetStaleLockTime2(self: ?*anyopaque, value: i64) void {
        qtc.QLockFile_SetStaleLockTime2(@ptrCast(self), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#staleLockTimeAsDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    /// ## Returns:
    ///
    /// ` i64 of milliseconds `
    ///
    pub fn StaleLockTimeAsDuration(self: ?*anyopaque) i64 {
        return qtc.QLockFile_StaleLockTimeAsDuration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#isLocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    pub fn IsLocked(self: ?*anyopaque) bool {
        return qtc.QLockFile_IsLocked(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#removeStaleLockFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    pub fn RemoveStaleLockFile(self: ?*anyopaque) bool {
        return qtc.QLockFile_RemoveStaleLockFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    /// ## Returns:
    ///
    /// ` qlockfile_enums.LockError `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QLockFile_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLockFile `
    ///
    /// ` timeout: i64 of milliseconds `
    ///
    pub fn TryLock1(self: ?*anyopaque, timeout: i64) bool {
        return qtc.QLockFile_TryLock1(@ptrCast(self), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#dtor.QLockFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLockFile `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLockFile_Delete(@ptrCast(self));
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
