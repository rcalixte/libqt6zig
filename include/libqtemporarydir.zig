const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qtemporarydir.html
pub const qtemporarydir = struct {
    /// New constructs a new QTemporaryDir object.
    ///
    ///
    pub fn New() QtC.QTemporaryDir {
        return qtc.QTemporaryDir_new();
    }

    /// New2 constructs a new QTemporaryDir object.
    ///
    /// ``` templateName: []const u8 ```
    pub fn New2(templateName: []const u8) QtC.QTemporaryDir {
        const templateName_str = qtc.struct_libqt_string{
            .len = templateName.len,
            .data = templateName.ptr,
        };

        return qtc.QTemporaryDir_new2(templateName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#swap)
    ///
    /// ``` self: QtC.QTemporaryDir, other: QtC.QTemporaryDir ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTemporaryDir_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#isValid)
    ///
    /// ``` self: QtC.QTemporaryDir ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTemporaryDir_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#errorString)
    ///
    /// ``` self: QtC.QTemporaryDir, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTemporaryDir_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporarydir.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#autoRemove)
    ///
    /// ``` self: QtC.QTemporaryDir ```
    pub fn AutoRemove(self: ?*anyopaque) bool {
        return qtc.QTemporaryDir_AutoRemove(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#setAutoRemove)
    ///
    /// ``` self: QtC.QTemporaryDir, b: bool ```
    pub fn SetAutoRemove(self: ?*anyopaque, b: bool) void {
        qtc.QTemporaryDir_SetAutoRemove(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#remove)
    ///
    /// ``` self: QtC.QTemporaryDir ```
    pub fn Remove(self: ?*anyopaque) bool {
        return qtc.QTemporaryDir_Remove(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#path)
    ///
    /// ``` self: QtC.QTemporaryDir, allocator: std.mem.Allocator ```
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTemporaryDir_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporarydir.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#filePath)
    ///
    /// ``` self: QtC.QTemporaryDir, fileName: []const u8, allocator: std.mem.Allocator ```
    pub fn FilePath(self: ?*anyopaque, fileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const _str = qtc.QTemporaryDir_FilePath(@ptrCast(self), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporarydir.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#dtor.QTemporaryDir)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTemporaryDir ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTemporaryDir_Delete(@ptrCast(self));
    }
};
