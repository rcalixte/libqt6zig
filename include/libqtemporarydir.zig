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

    /// New constructs a new QTemporaryDir object.
    ///
    pub fn New() QTemporaryDir {
        return .{ .ptr = qtc.QTemporaryDir_new() };
    }

    /// New2 constructs a new QTemporaryDir object.
    ///
    /// ## Parameter(s):
    ///
    /// ` templateName: []const u8 `
    ///
    pub fn New2(templateName: []const u8) QTemporaryDir {
        const templateName_str = qtc.libqt_string{
            .len = templateName.len,
            .data = templateName.ptr,
        };
        return .{ .ptr = qtc.QTemporaryDir_new2(templateName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    /// ` other: QTemporaryDir `
    ///
    pub fn Swap(self: QTemporaryDir, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTemporaryDir;
        qtc.QTemporaryDir_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    pub fn IsValid(self: QTemporaryDir) bool {
        return qtc.QTemporaryDir_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QTemporaryDir, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTemporaryDir_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporarydir.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#autoRemove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    pub fn AutoRemove(self: QTemporaryDir) bool {
        return qtc.QTemporaryDir_AutoRemove(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#setAutoRemove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    /// ` b: bool `
    ///
    pub fn SetAutoRemove(self: QTemporaryDir, b: bool) void {
        qtc.QTemporaryDir_SetAutoRemove(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    pub fn Remove(self: QTemporaryDir) bool {
        return qtc.QTemporaryDir_Remove(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: QTemporaryDir, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTemporaryDir_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporarydir.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn FilePath(self: QTemporaryDir, allocator: std.mem.Allocator, fileName: []const u8) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QTemporaryDir_FilePath(@ptrCast(self.ptr), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporarydir.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporarydir.html#dtor.QTemporaryDir)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTemporaryDir `
    ///
    pub fn Delete(self: QTemporaryDir) void {
        qtc.QTemporaryDir_Delete(@ptrCast(self.ptr));
    }
};
