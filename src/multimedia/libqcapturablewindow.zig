const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qcapturablewindow.html
pub const qcapturablewindow = struct {
    /// New constructs a new QCapturableWindow object.
    ///
    ///
    pub fn New() QtC.QCapturableWindow {
        return qtc.QCapturableWindow_new();
    }

    /// New2 constructs a new QCapturableWindow object.
    ///
    /// ``` other: QtC.QCapturableWindow ```
    pub fn New2(other: ?*anyopaque) QtC.QCapturableWindow {
        return qtc.QCapturableWindow_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#operator=)
    ///
    /// ``` self: QtC.QCapturableWindow, other: QtC.QCapturableWindow ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCapturableWindow_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#swap)
    ///
    /// ``` self: QtC.QCapturableWindow, other: QtC.QCapturableWindow ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCapturableWindow_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#isValid)
    ///
    /// ``` self: QtC.QCapturableWindow ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QCapturableWindow_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#description)
    ///
    /// ``` self: QtC.QCapturableWindow, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCapturableWindow_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcapturablewindow.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#dtor.QCapturableWindow)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCapturableWindow ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCapturableWindow_Delete(@ptrCast(self));
    }
};
