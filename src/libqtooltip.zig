const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QFont = @import("libqt6").QFont;
const QPalette = @import("libqt6").QPalette;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QWidget = @import("libqt6").QWidget;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html)
pub const QToolTip = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QToolTip,

    pub const _is_QToolTip = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QToolTip object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QToolTip `
    ///
    pub fn new(other: anytype) QToolTip {
        comptime _ = @TypeOf(other)._is_QToolTip;
        return .{ .ptr = qtc.QToolTip_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QToolTip object and invalidate the source QToolTip object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QToolTip `
    ///
    pub fn new2(other: anytype) QToolTip {
        comptime _ = @TypeOf(other)._is_QToolTip;
        return .{ .ptr = qtc.QToolTip_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QToolTip `
    ///
    /// ` other: QToolTip `
    ///
    pub fn copyAssign(self: QToolTip, other: QToolTip) void {
        qtc.QToolTip_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QToolTip `
    ///
    /// ` other: QToolTip `
    ///
    pub fn moveAssign(self: QToolTip, other: QToolTip) void {
        qtc.QToolTip_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `showText` instead
    ///
    pub const ShowText = showText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#showText)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn showText(pos: anytype, _text: []const u8) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QToolTip_ShowText(@ptrCast(pos.ptr), text_str);
    }

    /// ### DEPRECATED: Use `hideText` instead
    ///
    pub const HideText = hideText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#hideText)
    ///
    pub fn hideText() void {
        qtc.QToolTip_HideText();
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#isVisible)
    ///
    pub fn isVisible() bool {
        return qtc.QToolTip_IsVisible();
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QToolTip_Text();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QToolTip.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#palette)
    ///
    pub fn palette() QPalette {
        return .{ .ptr = qtc.QToolTip_Palette() };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(_palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QToolTip_SetPalette(@ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#font)
    ///
    pub fn font() QFont {
        return .{ .ptr = qtc.QToolTip_Font() };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(_font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QToolTip_SetFont(@ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `showText3` instead
    ///
    pub const ShowText3 = showText3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#showText)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` w: QWidget `
    ///
    pub fn showText3(pos: anytype, _text: []const u8, w: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QToolTip_ShowText3(@ptrCast(pos.ptr), text_str, @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `showText4` instead
    ///
    pub const ShowText4 = showText4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#showText)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` w: QWidget `
    ///
    /// ` rect: QRect `
    ///
    pub fn showText4(pos: anytype, _text: []const u8, w: anytype, rect: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QToolTip_ShowText4(@ptrCast(pos.ptr), text_str, @ptrCast(w.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `showText5` instead
    ///
    pub const ShowText5 = showText5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#showText)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` w: QWidget `
    ///
    /// ` rect: QRect `
    ///
    /// ` msecShowTime: i32 `
    ///
    pub fn showText5(pos: anytype, _text: []const u8, w: anytype, rect: anytype, msecShowTime: i32) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QToolTip_ShowText5(@ptrCast(pos.ptr), text_str, @ptrCast(w.ptr), @ptrCast(rect.ptr), @bitCast(msecShowTime));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#dtor.QToolTip)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QToolTip `
    ///
    pub fn delete(self: QToolTip) void {
        qtc.QToolTip_Delete(@ptrCast(self.ptr));
    }
};
