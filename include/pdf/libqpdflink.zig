const C = @import("qt6c");
const qclipboard_enums = @import("../libqclipboard.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpdflink.html
pub const qpdflink = struct {
    /// New constructs a new QPdfLink object.
    ///
    ///
    pub fn New() ?*C.QPdfLink {
        return C.QPdfLink_new();
    }

    /// New2 constructs a new QPdfLink object.
    ///
    /// ``` other: ?*C.QPdfLink ```
    pub fn New2(other: ?*anyopaque) ?*C.QPdfLink {
        return C.QPdfLink_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#operator=)
    ///
    /// ``` self: ?*C.QPdfLink, other: ?*C.QPdfLink ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QPdfLink_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#swap)
    ///
    /// ``` self: ?*C.QPdfLink, other: ?*C.QPdfLink ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QPdfLink_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#isValid)
    ///
    /// ``` self: ?*C.QPdfLink ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QPdfLink_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#page)
    ///
    /// ``` self: ?*C.QPdfLink ```
    pub fn Page(self: ?*anyopaque) i32 {
        return C.QPdfLink_Page(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#location)
    ///
    /// ``` self: ?*C.QPdfLink ```
    pub fn Location(self: ?*anyopaque) ?*C.QPointF {
        return C.QPdfLink_Location(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#zoom)
    ///
    /// ``` self: ?*C.QPdfLink ```
    pub fn Zoom(self: ?*anyopaque) f64 {
        return C.QPdfLink_Zoom(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#url)
    ///
    /// ``` self: ?*C.QPdfLink ```
    pub fn Url(self: ?*anyopaque) ?*C.QUrl {
        return C.QPdfLink_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#contextBefore)
    ///
    /// ``` self: ?*C.QPdfLink, allocator: std.mem.Allocator ```
    pub fn ContextBefore(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QPdfLink_ContextBefore(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#contextAfter)
    ///
    /// ``` self: ?*C.QPdfLink, allocator: std.mem.Allocator ```
    pub fn ContextAfter(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QPdfLink_ContextAfter(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#rectangles)
    ///
    /// ``` self: ?*C.QPdfLink, allocator: std.mem.Allocator ```
    pub fn Rectangles(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QRectF {
        const _arr: C.struct_libqt_list = C.QPdfLink_Rectangles(@ptrCast(self));
        defer {
            const _obj: [*]?*C.QRectF = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |_i| {
                if (_obj[_i]) |obj| {
                    C.libqt_free(obj);
                }
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(?*C.QRectF, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QRectF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#toString)
    ///
    /// ``` self: ?*C.QPdfLink, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QPdfLink_ToString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
    ///
    /// ``` self: ?*C.QPdfLink ```
    pub fn CopyToClipboard(self: ?*anyopaque) void {
        C.QPdfLink_CopyToClipboard(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
    ///
    /// ``` self: ?*C.QPdfLink, mode: qclipboard_enums.Mode ```
    pub fn CopyToClipboard1(self: ?*anyopaque, mode: i64) void {
        C.QPdfLink_CopyToClipboard1(@ptrCast(self), @intCast(mode));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QPdfLink ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QPdfLink_Delete(@ptrCast(self));
    }
};
