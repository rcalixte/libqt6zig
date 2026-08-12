const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html)
pub const QTemporaryDir = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTemporaryDir,

    pub const _is_QTemporaryDir = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTemporaryDir object in C++ memory
    ///
    pub fn new() QTemporaryDir {
        return .{ .ptr = qtc.QTemporaryDir_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTemporaryDir object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` templateName: []const u8 `
    ///
    pub fn new2(templateName: []const u8) QTemporaryDir {
        const templateName_str = qtc.libqt_string{
            .len = templateName.len,
            .data = templateName.ptr,
        };
        return .{ .ptr = qtc.QTemporaryDir_new2(templateName_str) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    /// ` other: QTemporaryDir `
    ///
    pub fn swap(self: QTemporaryDir, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTemporaryDir;
        qtc.QTemporaryDir_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    pub fn isValid(self: QTemporaryDir) bool {
        return qtc.QTemporaryDir_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QTemporaryDir, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTemporaryDir_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTemporaryDir.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `autoRemove` instead
    ///
    pub const AutoRemove = autoRemove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#autoRemove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    pub fn autoRemove(self: QTemporaryDir) bool {
        return qtc.QTemporaryDir_AutoRemove(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoRemove` instead
    ///
    pub const SetAutoRemove = setAutoRemove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#setAutoRemove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    /// ` b: bool `
    ///
    pub fn setAutoRemove(self: QTemporaryDir, b: bool) void {
        qtc.QTemporaryDir_SetAutoRemove(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    pub fn remove(self: QTemporaryDir) bool {
        return qtc.QTemporaryDir_Remove(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: QTemporaryDir, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTemporaryDir_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTemporaryDir.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn filePath(self: QTemporaryDir, allocator: std.mem.Allocator, fileName: []const u8) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QTemporaryDir_FilePath(@ptrCast(self.ptr), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTemporaryDir.filePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#dtor.QTemporaryDir)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTemporaryDir `
    ///
    pub fn delete(self: QTemporaryDir) void {
        qtc.QTemporaryDir_Delete(@ptrCast(self.ptr));
    }
};
