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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLockFile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn new(_fileName: []const u8) QLockFile {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        return .{ .ptr = qtc.QLockFile_new(fileName_str) };
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: QLockFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLockFile_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLockFile.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `lock` instead
    ///
    pub const Lock = lock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    pub fn lock(self: QLockFile) bool {
        return qtc.QLockFile_Lock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryLock` instead
    ///
    pub const TryLock = tryLock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    /// ` timeout: i32 `
    ///
    pub fn tryLock(self: QLockFile, timeout: i32) bool {
        return qtc.QLockFile_TryLock(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `unlock` instead
    ///
    pub const Unlock = unlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    pub fn unlock(self: QLockFile) void {
        qtc.QLockFile_Unlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStaleLockTime` instead
    ///
    pub const SetStaleLockTime = setStaleLockTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#setStaleLockTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    /// ` _staleLockTime: i32 `
    ///
    pub fn setStaleLockTime(self: QLockFile, _staleLockTime: i32) void {
        qtc.QLockFile_SetStaleLockTime(@ptrCast(self.ptr), @bitCast(_staleLockTime));
    }

    /// ### DEPRECATED: Use `staleLockTime` instead
    ///
    pub const StaleLockTime = staleLockTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#staleLockTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    pub fn staleLockTime(self: QLockFile) i32 {
        return qtc.QLockFile_StaleLockTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryLock2` instead
    ///
    pub const TryLock2 = tryLock2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    pub fn tryLock2(self: QLockFile) bool {
        return qtc.QLockFile_TryLock2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStaleLockTime2` instead
    ///
    pub const SetStaleLockTime2 = setStaleLockTime2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#setStaleLockTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    /// ` value: i64 of milliseconds `
    ///
    pub fn setStaleLockTime2(self: QLockFile, value: i64) void {
        qtc.QLockFile_SetStaleLockTime2(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `staleLockTimeAsDuration` instead
    ///
    pub const StaleLockTimeAsDuration = staleLockTimeAsDuration;

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
    pub fn staleLockTimeAsDuration(self: QLockFile) i64 {
        return qtc.QLockFile_StaleLockTimeAsDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLocked` instead
    ///
    pub const IsLocked = isLocked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#isLocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    pub fn isLocked(self: QLockFile) bool {
        return qtc.QLockFile_IsLocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeStaleLockFile` instead
    ///
    pub const RemoveStaleLockFile = removeStaleLockFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#removeStaleLockFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    pub fn removeStaleLockFile(self: QLockFile) bool {
        return qtc.QLockFile_RemoveStaleLockFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QLockFile) i32 {
        return qtc.QLockFile_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryLock1` instead
    ///
    pub const TryLock1 = tryLock1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLockFile `
    ///
    /// ` timeout: i64 of milliseconds `
    ///
    pub fn tryLock1(self: QLockFile, timeout: i64) bool {
        return qtc.QLockFile_TryLock1(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#dtor.QLockFile)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLockFile `
    ///
    pub fn delete(self: QLockFile) void {
        qtc.QLockFile_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlockfile.html#public-types)
pub const enums = struct {
    pub const LockError = enum {
        pub const NoError: i32 = 0;
        pub const LockFailedError: i32 = 1;
        pub const PermissionError: i32 = 2;
        pub const UnknownError: i32 = 3;
    };
};
