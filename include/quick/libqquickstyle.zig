const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickstyle.html)
pub const QQuickStyle = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickstyle.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickStyle,

    pub const _is_QQuickStyle = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickStyle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuickStyle `
    ///
    pub fn new(other: anytype) QQuickStyle {
        comptime _ = @TypeOf(other)._is_QQuickStyle;
        return .{ .ptr = qtc.QQuickStyle_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickStyle object and invalidate the source QQuickStyle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuickStyle `
    ///
    pub fn new2(other: anytype) QQuickStyle {
        comptime _ = @TypeOf(other)._is_QQuickStyle;
        return .{ .ptr = qtc.QQuickStyle_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickStyle `
    ///
    /// ` other: QQuickStyle `
    ///
    pub fn copyAssign(self: QQuickStyle, other: QQuickStyle) void {
        qtc.QQuickStyle_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickStyle `
    ///
    /// ` other: QQuickStyle `
    ///
    pub fn moveAssign(self: QQuickStyle, other: QQuickStyle) void {
        qtc.QQuickStyle_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickstyle.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickStyle_Name();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickStyle.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickstyle.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` style: []const u8 `
    ///
    pub fn setStyle(style: []const u8) void {
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        qtc.QQuickStyle_SetStyle(style_str);
    }

    /// ### DEPRECATED: Use `setFallbackStyle` instead
    ///
    pub const SetFallbackStyle = setFallbackStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickstyle.html#setFallbackStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` style: []const u8 `
    ///
    pub fn setFallbackStyle(style: []const u8) void {
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        qtc.QQuickStyle_SetFallbackStyle(style_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickstyle.html#dtor.QQuickStyle)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickStyle `
    ///
    pub fn delete(self: QQuickStyle) void {
        qtc.QQuickStyle_Delete(@ptrCast(self.ptr));
    }
};
