const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qclipboard_enums = @import("../libqclipboard.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html)
pub const qpdfselection = struct {
    /// New constructs a new QPdfSelection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPdfSelection `
    ///
    pub fn New(other: ?*anyopaque) QtC.QPdfSelection {
        return qtc.QPdfSelection_new(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfSelection `
    ///
    /// ` other: QtC.QPdfSelection `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfSelection_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfSelection `
    ///
    /// ` other: QtC.QPdfSelection `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfSelection_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfSelection `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QPdfSelection_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfSelection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfSelection_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfselection.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#boundingRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfSelection `
    ///
    pub fn BoundingRectangle(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPdfSelection_BoundingRectangle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#startIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfSelection `
    ///
    pub fn StartIndex(self: ?*anyopaque) i32 {
        return qtc.QPdfSelection_StartIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#endIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfSelection `
    ///
    pub fn EndIndex(self: ?*anyopaque) i32 {
        return qtc.QPdfSelection_EndIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfSelection `
    ///
    pub fn CopyToClipboard(self: ?*anyopaque) void {
        qtc.QPdfSelection_CopyToClipboard(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfSelection `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn CopyToClipboard1(self: ?*anyopaque, mode: i32) void {
        qtc.QPdfSelection_CopyToClipboard1(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#dtor.QPdfSelection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPdfSelection `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPdfSelection_Delete(@ptrCast(self));
    }
};
