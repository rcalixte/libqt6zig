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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPdfLink object in C++ memory
    ///
    pub fn new() QPdfLink {
        return .{ .ptr = qtc.QPdfLink_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPdfLink object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPdfLink `
    ///
    pub fn new2(other: anytype) QPdfLink {
        comptime _ = @TypeOf(other)._is_QPdfLink;
        return .{ .ptr = qtc.QPdfLink_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` other: QPdfLink `
    ///
    pub fn operatorAssign(self: QPdfLink, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPdfLink;
        qtc.QPdfLink_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` other: QPdfLink `
    ///
    pub fn swap(self: QPdfLink, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPdfLink;
        qtc.QPdfLink_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    pub fn isValid(self: QPdfLink) bool {
        return qtc.QPdfLink_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `page` instead
    ///
    pub const Page = page;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#page)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    pub fn page(self: QPdfLink) i32 {
        return qtc.QPdfLink_Page(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `location` instead
    ///
    pub const Location = location;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#location)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    pub fn location(self: QPdfLink) QPointF {
        return .{ .ptr = qtc.QPdfLink_Location(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `zoom` instead
    ///
    pub const Zoom = zoom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#zoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    pub fn zoom(self: QPdfLink) f64 {
        return qtc.QPdfLink_Zoom(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    pub fn url(self: QPdfLink) QUrl {
        return .{ .ptr = qtc.QPdfLink_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contextBefore` instead
    ///
    pub const ContextBefore = contextBefore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#contextBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contextBefore(self: QPdfLink, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfLink_ContextBefore(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfLink.contextBefore: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `contextAfter` instead
    ///
    pub const ContextAfter = contextAfter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#contextAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contextAfter(self: QPdfLink, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfLink_ContextAfter(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfLink.contextAfter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `rectangles` instead
    ///
    pub const Rectangles = rectangles;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#rectangles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rectangles(self: QPdfLink, allocator: std.mem.Allocator) []QRectF {
        const _arr: qtc.libqt_list = qtc.QPdfLink_Rectangles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QRectF, _arr.len) catch @panic("QPdfLink.rectangles: Memory allocation failed");
        const _data_val: [*]QtC.QRectF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QPdfLink, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfLink_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfLink.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `copyToClipboard` instead
    ///
    pub const CopyToClipboard = copyToClipboard;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    pub fn copyToClipboard(self: QPdfLink) void {
        qtc.QPdfLink_CopyToClipboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copyToClipboard1` instead
    ///
    pub const CopyToClipboard1 = copyToClipboard1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLink `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn copyToClipboard1(self: QPdfLink, mode: i32) void {
        qtc.QPdfLink_CopyToClipboard1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#dtor.QPdfLink)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPdfLink `
    ///
    pub fn delete(self: QPdfLink) void {
        qtc.QPdfLink_Delete(@ptrCast(self.ptr));
    }
};
