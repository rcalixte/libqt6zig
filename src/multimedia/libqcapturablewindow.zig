const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html)
pub const QCapturableWindow = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCapturableWindow,

    pub const _is_QCapturableWindow = {};

    /// New constructs a new QCapturableWindow object.
    ///
    pub fn New() QCapturableWindow {
        return .{ .ptr = qtc.QCapturableWindow_new() };
    }

    /// New2 constructs a new QCapturableWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCapturableWindow `
    ///
    pub fn New2(other: anytype) QCapturableWindow {
        comptime _ = @TypeOf(other)._is_QCapturableWindow;
        return .{ .ptr = qtc.QCapturableWindow_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCapturableWindow `
    ///
    /// ` other: QCapturableWindow `
    ///
    pub fn OperatorAssign(self: QCapturableWindow, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCapturableWindow;
        qtc.QCapturableWindow_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCapturableWindow `
    ///
    /// ` other: QCapturableWindow `
    ///
    pub fn Swap(self: QCapturableWindow, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCapturableWindow;
        qtc.QCapturableWindow_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCapturableWindow `
    ///
    pub fn IsValid(self: QCapturableWindow) bool {
        return qtc.QCapturableWindow_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCapturableWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: QCapturableWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCapturableWindow_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcapturablewindow.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#dtor.QCapturableWindow)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCapturableWindow `
    ///
    pub fn Delete(self: QCapturableWindow) void {
        qtc.QCapturableWindow_Delete(@ptrCast(self.ptr));
    }
};
