const C = @import("qt6c");
const qclipboard_enums = @import("../libqclipboard.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpdfselection.html
pub const qpdfselection = struct {
    /// New constructs a new QPdfSelection object.
    ///
    /// ``` other: ?*C.QPdfSelection ```
    pub fn New(other: ?*anyopaque) ?*C.QPdfSelection {
        return C.QPdfSelection_new(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#operator=)
    ///
    /// ``` self: ?*C.QPdfSelection, other: ?*C.QPdfSelection ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QPdfSelection_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#swap)
    ///
    /// ``` self: ?*C.QPdfSelection, other: ?*C.QPdfSelection ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QPdfSelection_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#isValid)
    ///
    /// ``` self: ?*C.QPdfSelection ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QPdfSelection_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#text)
    ///
    /// ``` self: ?*C.QPdfSelection, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QPdfSelection_Text(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#boundingRectangle)
    ///
    /// ``` self: ?*C.QPdfSelection ```
    pub fn BoundingRectangle(self: ?*anyopaque) ?*C.QRectF {
        return C.QPdfSelection_BoundingRectangle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#startIndex)
    ///
    /// ``` self: ?*C.QPdfSelection ```
    pub fn StartIndex(self: ?*anyopaque) i32 {
        return C.QPdfSelection_StartIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#endIndex)
    ///
    /// ``` self: ?*C.QPdfSelection ```
    pub fn EndIndex(self: ?*anyopaque) i32 {
        return C.QPdfSelection_EndIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
    ///
    /// ``` self: ?*C.QPdfSelection ```
    pub fn CopyToClipboard(self: ?*anyopaque) void {
        C.QPdfSelection_CopyToClipboard(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
    ///
    /// ``` self: ?*C.QPdfSelection, mode: qclipboard_enums.Mode ```
    pub fn CopyToClipboard1(self: ?*anyopaque, mode: i64) void {
        C.QPdfSelection_CopyToClipboard1(@ptrCast(self), @intCast(mode));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QPdfSelection ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QPdfSelection_Delete(@ptrCast(self));
    }
};
