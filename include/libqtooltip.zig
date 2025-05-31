const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qtooltip.html
pub const qtooltip = struct {
    /// New constructs a new QToolTip object.
    ///
    /// ``` other: QtC.QToolTip ```
    pub fn New(other: ?*anyopaque) QtC.QToolTip {
        return qtc.QToolTip_new(@ptrCast(other));
    }

    /// New2 constructs a new QToolTip object and invalidates the source QToolTip object.
    ///
    /// ``` other: QtC.QToolTip ```
    pub fn New2(other: ?*anyopaque) QtC.QToolTip {
        return qtc.QToolTip_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QToolTip, other: QtC.QToolTip ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QToolTip_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QToolTip, other: QtC.QToolTip ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QToolTip_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
    ///
    /// ``` pos: QtC.QPoint, text: []const u8 ```
    pub fn ShowText(pos: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        qtc.QToolTip_ShowText(@ptrCast(pos), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#hideText)
    ///
    ///
    pub fn HideText() void {
        qtc.QToolTip_HideText();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#isVisible)
    ///
    ///
    pub fn IsVisible() bool {
        return qtc.QToolTip_IsVisible();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#text)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Text(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolTip_Text();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtooltip.Text: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#palette)
    ///
    ///
    pub fn Palette() QtC.QPalette {
        return qtc.QToolTip_Palette();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#setPalette)
    ///
    /// ``` palette: QtC.QPalette ```
    pub fn SetPalette(palette: ?*anyopaque) void {
        qtc.QToolTip_SetPalette(@ptrCast(palette));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#font)
    ///
    ///
    pub fn Font() QtC.QFont {
        return qtc.QToolTip_Font();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#setFont)
    ///
    /// ``` font: QtC.QFont ```
    pub fn SetFont(font: ?*anyopaque) void {
        qtc.QToolTip_SetFont(@ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
    ///
    /// ``` pos: QtC.QPoint, text: []const u8, w: QtC.QWidget ```
    pub fn ShowText3(pos: ?*anyopaque, text: []const u8, w: ?*anyopaque) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        qtc.QToolTip_ShowText3(@ptrCast(pos), text_str, @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
    ///
    /// ``` pos: QtC.QPoint, text: []const u8, w: QtC.QWidget, rect: QtC.QRect ```
    pub fn ShowText4(pos: ?*anyopaque, text: []const u8, w: ?*anyopaque, rect: ?*anyopaque) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        qtc.QToolTip_ShowText4(@ptrCast(pos), text_str, @ptrCast(w), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
    ///
    /// ``` pos: QtC.QPoint, text: []const u8, w: QtC.QWidget, rect: QtC.QRect, msecShowTime: i32 ```
    pub fn ShowText5(pos: ?*anyopaque, text: []const u8, w: ?*anyopaque, rect: ?*anyopaque, msecShowTime: i32) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        qtc.QToolTip_ShowText5(@ptrCast(pos), text_str, @ptrCast(w), @ptrCast(rect), @intCast(msecShowTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#dtor.QToolTip)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QToolTip ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QToolTip_Delete(@ptrCast(self));
    }
};
