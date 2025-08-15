const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qclipboard_enums = @import("../libqclipboard.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpdflink.html
pub const qpdflink = struct {
    /// New constructs a new QPdfLink object.
    ///
    ///
    pub fn New() QtC.QPdfLink {
        return qtc.QPdfLink_new();
    }

    /// New2 constructs a new QPdfLink object.
    ///
    /// ``` other: QtC.QPdfLink ```
    pub fn New2(other: ?*anyopaque) QtC.QPdfLink {
        return qtc.QPdfLink_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#operator-eq)
    ///
    /// ``` self: QtC.QPdfLink, other: QtC.QPdfLink ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfLink_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#swap)
    ///
    /// ``` self: QtC.QPdfLink, other: QtC.QPdfLink ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfLink_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#isValid)
    ///
    /// ``` self: QtC.QPdfLink ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QPdfLink_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#page)
    ///
    /// ``` self: QtC.QPdfLink ```
    pub fn Page(self: ?*anyopaque) i32 {
        return qtc.QPdfLink_Page(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#location)
    ///
    /// ``` self: QtC.QPdfLink ```
    pub fn Location(self: ?*anyopaque) QtC.QPointF {
        return qtc.QPdfLink_Location(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#zoom)
    ///
    /// ``` self: QtC.QPdfLink ```
    pub fn Zoom(self: ?*anyopaque) f64 {
        return qtc.QPdfLink_Zoom(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#url)
    ///
    /// ``` self: QtC.QPdfLink ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QPdfLink_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#contextBefore)
    ///
    /// ``` self: QtC.QPdfLink, allocator: std.mem.Allocator ```
    pub fn ContextBefore(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfLink_ContextBefore(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdflink.ContextBefore: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#contextAfter)
    ///
    /// ``` self: QtC.QPdfLink, allocator: std.mem.Allocator ```
    pub fn ContextAfter(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfLink_ContextAfter(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdflink.ContextAfter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#rectangles)
    ///
    /// ``` self: QtC.QPdfLink, allocator: std.mem.Allocator ```
    pub fn Rectangles(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QRectF {
        const _arr: qtc.libqt_list = qtc.QPdfLink_Rectangles(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QRectF, _arr.len) catch @panic("qpdflink.Rectangles: Memory allocation failed");
        const _data: [*]QtC.QRectF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#toString)
    ///
    /// ``` self: QtC.QPdfLink, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfLink_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdflink.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
    ///
    /// ``` self: QtC.QPdfLink ```
    pub fn CopyToClipboard(self: ?*anyopaque) void {
        qtc.QPdfLink_CopyToClipboard(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
    ///
    /// ``` self: QtC.QPdfLink, mode: qclipboard_enums.Mode ```
    pub fn CopyToClipboard1(self: ?*anyopaque, mode: i64) void {
        qtc.QPdfLink_CopyToClipboard1(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#dtor.QPdfLink)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPdfLink ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPdfLink_Delete(@ptrCast(self));
    }
};
