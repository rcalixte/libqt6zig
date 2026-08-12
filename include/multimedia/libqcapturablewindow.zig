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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCapturableWindow object in C++ memory
    ///
    pub fn new() QCapturableWindow {
        return .{ .ptr = qtc.QCapturableWindow_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCapturableWindow object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCapturableWindow `
    ///
    pub fn new2(other: anytype) QCapturableWindow {
        comptime _ = @TypeOf(other)._is_QCapturableWindow;
        return .{ .ptr = qtc.QCapturableWindow_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCapturableWindow `
    ///
    /// ` other: QCapturableWindow `
    ///
    pub fn operatorAssign(self: QCapturableWindow, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCapturableWindow;
        qtc.QCapturableWindow_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCapturableWindow `
    ///
    /// ` other: QCapturableWindow `
    ///
    pub fn swap(self: QCapturableWindow, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCapturableWindow;
        qtc.QCapturableWindow_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCapturableWindow `
    ///
    pub fn isValid(self: QCapturableWindow) bool {
        return qtc.QCapturableWindow_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCapturableWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: QCapturableWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCapturableWindow_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCapturableWindow.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#dtor.QCapturableWindow)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCapturableWindow `
    ///
    pub fn delete(self: QCapturableWindow) void {
        qtc.QCapturableWindow_Delete(@ptrCast(self.ptr));
    }
};
