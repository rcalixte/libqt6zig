const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QUrl = @import("libqt6").QUrl;
const qclipboard_enums = @import("../libqclipboard.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html)
pub const QPdfLink = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPdfLink,

    pub const _is_QPdfLink = {};

    /// New constructs a new QPdfLink object.
    ///
    pub fn New() QPdfLink {
        return .{ .ptr = qtc.QPdfLink_new() };
    }

    /// New2 constructs a new QPdfLink object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPdfLink `
    ///
    pub fn New2(other: anytype) QPdfLink {
        comptime _ = @TypeOf(other)._is_QPdfLink;
        return .{ .ptr = qtc.QPdfLink_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` other: QPdfLink `
    ///
    pub fn OperatorAssign(self: QPdfLink, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPdfLink;
        qtc.QPdfLink_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` other: QPdfLink `
    ///
    pub fn Swap(self: QPdfLink, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPdfLink;
        qtc.QPdfLink_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    pub fn IsValid(self: QPdfLink) bool {
        return qtc.QPdfLink_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#page)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    pub fn Page(self: QPdfLink) i32 {
        return qtc.QPdfLink_Page(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#location)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    pub fn Location(self: QPdfLink) QPointF {
        return .{ .ptr = qtc.QPdfLink_Location(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#zoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    pub fn Zoom(self: QPdfLink) f64 {
        return qtc.QPdfLink_Zoom(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    pub fn Url(self: QPdfLink) QUrl {
        return .{ .ptr = qtc.QPdfLink_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#contextBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContextBefore(self: QPdfLink, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfLink_ContextBefore(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdflink.ContextBefore: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#contextAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContextAfter(self: QPdfLink, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfLink_ContextAfter(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdflink.ContextAfter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#rectangles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Rectangles(self: QPdfLink, allocator: std.mem.Allocator) []QRectF {
        const _arr: qtc.libqt_list = qtc.QPdfLink_Rectangles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QRectF, _arr.len) catch @panic("qpdflink.Rectangles: Memory allocation failed");
        const _data: [*]QtC.QRectF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QPdfLink, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfLink_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdflink.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    pub fn CopyToClipboard(self: QPdfLink) void {
        qtc.QPdfLink_CopyToClipboard(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn CopyToClipboard1(self: QPdfLink, mode: i32) void {
        qtc.QPdfLink_CopyToClipboard1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#dtor.QPdfLink)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPdfLink `
    ///
    pub fn Delete(self: QPdfLink) void {
        qtc.QPdfLink_Delete(@ptrCast(self.ptr));
    }
};
