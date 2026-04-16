const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QRectF = @import("libqt6").QRectF;
const qclipboard_enums = @import("../libqclipboard.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html)
pub const QPdfSelection = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPdfSelection,

    pub const _is_QPdfSelection = {};

    /// New constructs a new QPdfSelection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPdfSelection `
    ///
    pub fn New(other: anytype) QPdfSelection {
        comptime _ = @TypeOf(other)._is_QPdfSelection;
        return .{ .ptr = qtc.QPdfSelection_new(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    /// ` other: QPdfSelection `
    ///
    pub fn OperatorAssign(self: QPdfSelection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPdfSelection;
        qtc.QPdfSelection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    /// ` other: QPdfSelection `
    ///
    pub fn Swap(self: QPdfSelection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPdfSelection;
        qtc.QPdfSelection_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    pub fn IsValid(self: QPdfSelection) bool {
        return qtc.QPdfSelection_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QPdfSelection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfSelection_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfselection.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#boundingRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    pub fn BoundingRectangle(self: QPdfSelection) QRectF {
        return .{ .ptr = qtc.QPdfSelection_BoundingRectangle(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#startIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    pub fn StartIndex(self: QPdfSelection) i32 {
        return qtc.QPdfSelection_StartIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#endIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    pub fn EndIndex(self: QPdfSelection) i32 {
        return qtc.QPdfSelection_EndIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    pub fn CopyToClipboard(self: QPdfSelection) void {
        qtc.QPdfSelection_CopyToClipboard(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn CopyToClipboard1(self: QPdfSelection, mode: i32) void {
        qtc.QPdfSelection_CopyToClipboard1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#dtor.QPdfSelection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPdfSelection `
    ///
    pub fn Delete(self: QPdfSelection) void {
        qtc.QPdfSelection_Delete(@ptrCast(self.ptr));
    }
};
