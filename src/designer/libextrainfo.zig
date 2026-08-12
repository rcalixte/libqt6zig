const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;
const QWidget = @import("libqt6").QWidget;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html)
pub const QDesignerExtraInfoExtension = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerExtraInfoExtension,

    pub const _is_QDesignerExtraInfoExtension = {};

    /// ### DEPRECATED: Use `core` instead
    ///
    pub const Core = core;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerExtraInfoExtension `
    ///
    pub fn core(self: QDesignerExtraInfoExtension) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerExtraInfoExtension_Core(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerExtraInfoExtension `
    ///
    pub fn widget(self: QDesignerExtraInfoExtension) QWidget {
        return .{ .ptr = qtc.QDesignerExtraInfoExtension_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `workingDirectory` instead
    ///
    pub const WorkingDirectory = workingDirectory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerExtraInfoExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn workingDirectory(self: QDesignerExtraInfoExtension, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerExtraInfoExtension_WorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerExtraInfoExtension.workingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWorkingDirectory` instead
    ///
    pub const SetWorkingDirectory = setWorkingDirectory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerExtraInfoExtension `
    ///
    /// ` _workingDirectory: []const u8 `
    ///
    pub fn setWorkingDirectory(self: QDesignerExtraInfoExtension, _workingDirectory: []const u8) void {
        const workingDirectory_str = qtc.libqt_string{
            .len = _workingDirectory.len,
            .data = _workingDirectory.ptr,
        };
        qtc.QDesignerExtraInfoExtension_SetWorkingDirectory(@ptrCast(self.ptr), workingDirectory_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#dtor.QDesignerExtraInfoExtension)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerExtraInfoExtension `
    ///
    pub fn delete(self: QDesignerExtraInfoExtension) void {
        qtc.QDesignerExtraInfoExtension_Delete(@ptrCast(self.ptr));
    }
};
