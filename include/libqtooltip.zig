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

    /// New constructs a new QToolTip object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QToolTip `
    ///
    pub fn New(other: anytype) QToolTip {
        comptime _ = @TypeOf(other)._is_QToolTip;
        return .{ .ptr = qtc.QToolTip_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QToolTip object and invalidates the source QToolTip object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QToolTip `
    ///
    pub fn New2(other: anytype) QToolTip {
        comptime _ = @TypeOf(other)._is_QToolTip;
        return .{ .ptr = qtc.QToolTip_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QToolTip `
    ///
    /// ` other: QToolTip `
    ///
    pub fn CopyAssign(self: QToolTip, other: QToolTip) void {
        qtc.QToolTip_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QToolTip `
    ///
    /// ` other: QToolTip `
    ///
    pub fn MoveAssign(self: QToolTip, other: QToolTip) void {
        qtc.QToolTip_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#showText)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ShowText(pos: anytype, text: []const u8) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QToolTip_ShowText(@ptrCast(pos.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#hideText)
    ///
    pub fn HideText() void {
        qtc.QToolTip_HideText();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#isVisible)
    ///
    pub fn IsVisible() bool {
        return qtc.QToolTip_IsVisible();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QToolTip_Text();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtooltip.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#palette)
    ///
    pub fn Palette() QPalette {
        return .{ .ptr = qtc.QToolTip_Palette() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QToolTip_SetPalette(@ptrCast(palette.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#font)
    ///
    pub fn Font() QFont {
        return .{ .ptr = qtc.QToolTip_Font() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QToolTip_SetFont(@ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#showText)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` text: []const u8 `
    ///
    /// ` w: QWidget `
    ///
    pub fn ShowText3(pos: anytype, text: []const u8, w: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QToolTip_ShowText3(@ptrCast(pos.ptr), text_str, @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#showText)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` text: []const u8 `
    ///
    /// ` w: QWidget `
    ///
    /// ` rect: QRect `
    ///
    pub fn ShowText4(pos: anytype, text: []const u8, w: anytype, rect: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QToolTip_ShowText4(@ptrCast(pos.ptr), text_str, @ptrCast(w.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#showText)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` text: []const u8 `
    ///
    /// ` w: QWidget `
    ///
    /// ` rect: QRect `
    ///
    /// ` msecShowTime: i32 `
    ///
    pub fn ShowText5(pos: anytype, text: []const u8, w: anytype, rect: anytype, msecShowTime: i32) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QToolTip_ShowText5(@ptrCast(pos.ptr), text_str, @ptrCast(w.ptr), @ptrCast(rect.ptr), @bitCast(msecShowTime));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtooltip.html#dtor.QToolTip)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QToolTip `
    ///
    pub fn Delete(self: QToolTip) void {
        qtc.QToolTip_Delete(@ptrCast(self.ptr));
    }
};
