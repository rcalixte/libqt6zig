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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPdfSelection object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPdfSelection `
    ///
    pub fn new(other: anytype) QPdfSelection {
        comptime _ = @TypeOf(other)._is_QPdfSelection;
        return .{ .ptr = qtc.QPdfSelection_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    /// ` other: QPdfSelection `
    ///
    pub fn operatorAssign(self: QPdfSelection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPdfSelection;
        qtc.QPdfSelection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    /// ` other: QPdfSelection `
    ///
    pub fn swap(self: QPdfSelection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPdfSelection;
        qtc.QPdfSelection_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    pub fn isValid(self: QPdfSelection) bool {
        return qtc.QPdfSelection_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QPdfSelection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfSelection_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfSelection.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `boundingRectangle` instead
    ///
    pub const BoundingRectangle = boundingRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#boundingRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    pub fn boundingRectangle(self: QPdfSelection) QRectF {
        return .{ .ptr = qtc.QPdfSelection_BoundingRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `startIndex` instead
    ///
    pub const StartIndex = startIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#startIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    pub fn startIndex(self: QPdfSelection) i32 {
        return qtc.QPdfSelection_StartIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endIndex` instead
    ///
    pub const EndIndex = endIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#endIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    pub fn endIndex(self: QPdfSelection) i32 {
        return qtc.QPdfSelection_EndIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copyToClipboard` instead
    ///
    pub const CopyToClipboard = copyToClipboard;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    pub fn copyToClipboard(self: QPdfSelection) void {
        qtc.QPdfSelection_CopyToClipboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copyToClipboard1` instead
    ///
    pub const CopyToClipboard1 = copyToClipboard1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfSelection `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn copyToClipboard1(self: QPdfSelection, mode: i32) void {
        qtc.QPdfSelection_CopyToClipboard1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#dtor.QPdfSelection)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPdfSelection `
    ///
    pub fn delete(self: QPdfSelection) void {
        qtc.QPdfSelection_Delete(@ptrCast(self.ptr));
    }
};
