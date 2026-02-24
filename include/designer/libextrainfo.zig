const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html)
pub const qdesignerextrainfoextension = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerExtraInfoExtension `
    ///
    pub fn Core(self: ?*anyopaque) QtC.QDesignerFormEditorInterface {
        return qtc.QDesignerExtraInfoExtension_Core(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerExtraInfoExtension `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerExtraInfoExtension_Widget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerExtraInfoExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WorkingDirectory(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerExtraInfoExtension_WorkingDirectory(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerextrainfoextension.WorkingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerExtraInfoExtension `
    ///
    /// ` workingDirectory: []const u8 `
    ///
    pub fn SetWorkingDirectory(self: ?*anyopaque, workingDirectory: []const u8) void {
        const workingDirectory_str = qtc.libqt_string{
            .len = workingDirectory.len,
            .data = workingDirectory.ptr,
        };
        qtc.QDesignerExtraInfoExtension_SetWorkingDirectory(@ptrCast(self), workingDirectory_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#dtor.QDesignerExtraInfoExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerExtraInfoExtension `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDesignerExtraInfoExtension_Delete(@ptrCast(self));
    }
};
