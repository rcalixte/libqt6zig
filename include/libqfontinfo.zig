const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfont_enums = @import("libqfont.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qfontinfo.html
pub const qfontinfo = struct {
    /// New constructs a new QFontInfo object.
    ///
    /// ``` param1: QtC.QFont ```
    pub fn New(param1: ?*anyopaque) QtC.QFontInfo {
        return qtc.QFontInfo_new(@ptrCast(param1));
    }

    /// New2 constructs a new QFontInfo object.
    ///
    /// ``` param1: QtC.QFontInfo ```
    pub fn New2(param1: ?*anyopaque) QtC.QFontInfo {
        return qtc.QFontInfo_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#operator-eq)
    ///
    /// ``` self: QtC.QFontInfo, param1: QtC.QFontInfo ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFontInfo_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#swap)
    ///
    /// ``` self: QtC.QFontInfo, other: QtC.QFontInfo ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFontInfo_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#family)
    ///
    /// ``` self: QtC.QFontInfo, allocator: std.mem.Allocator ```
    pub fn Family(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontInfo_Family(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontinfo.Family: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#styleName)
    ///
    /// ``` self: QtC.QFontInfo, allocator: std.mem.Allocator ```
    pub fn StyleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontInfo_StyleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontinfo.StyleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#pixelSize)
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn PixelSize(self: ?*anyopaque) i32 {
        return qtc.QFontInfo_PixelSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#pointSize)
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn PointSize(self: ?*anyopaque) i32 {
        return qtc.QFontInfo_PointSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#pointSizeF)
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn PointSizeF(self: ?*anyopaque) f64 {
        return qtc.QFontInfo_PointSizeF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#italic)
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn Italic(self: ?*anyopaque) bool {
        return qtc.QFontInfo_Italic(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#style)
    ///
    /// ``` self: QtC.QFontInfo ```
    ///
    /// Returns: ``` qfont_enums.Style ```
    pub fn Style(self: ?*anyopaque) i32 {
        return qtc.QFontInfo_Style(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#weight)
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn Weight(self: ?*anyopaque) i32 {
        return qtc.QFontInfo_Weight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#bold)
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn Bold(self: ?*anyopaque) bool {
        return qtc.QFontInfo_Bold(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#underline)
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn Underline(self: ?*anyopaque) bool {
        return qtc.QFontInfo_Underline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#overline)
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn Overline(self: ?*anyopaque) bool {
        return qtc.QFontInfo_Overline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#strikeOut)
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn StrikeOut(self: ?*anyopaque) bool {
        return qtc.QFontInfo_StrikeOut(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#fixedPitch)
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn FixedPitch(self: ?*anyopaque) bool {
        return qtc.QFontInfo_FixedPitch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#styleHint)
    ///
    /// ``` self: QtC.QFontInfo ```
    ///
    /// Returns: ``` qfont_enums.StyleHint ```
    pub fn StyleHint(self: ?*anyopaque) i32 {
        return qtc.QFontInfo_StyleHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#legacyWeight)
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn LegacyWeight(self: ?*anyopaque) i32 {
        return qtc.QFontInfo_LegacyWeight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#exactMatch)
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn ExactMatch(self: ?*anyopaque) bool {
        return qtc.QFontInfo_ExactMatch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#dtor.QFontInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFontInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFontInfo_Delete(@ptrCast(self));
    }
};
