const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QFont = @import("libqt6").QFont;
const qfont_enums = @import("libqfont.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html)
pub const QFontInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFontInfo,

    pub const _is_QFontInfo = {};

    /// New constructs a new QFontInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFont `
    ///
    pub fn New(param1: anytype) QFontInfo {
        comptime _ = @TypeOf(param1)._is_QFont;
        return .{ .ptr = qtc.QFontInfo_new(@ptrCast(param1.ptr)) };
    }

    /// New2 constructs a new QFontInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFontInfo `
    ///
    pub fn New2(param1: anytype) QFontInfo {
        comptime _ = @TypeOf(param1)._is_QFontInfo;
        return .{ .ptr = qtc.QFontInfo_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    /// ` param1: QFontInfo `
    ///
    pub fn OperatorAssign(self: QFontInfo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFontInfo;
        qtc.QFontInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    /// ` other: QFontInfo `
    ///
    pub fn Swap(self: QFontInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFontInfo;
        qtc.QFontInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#family)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Family(self: QFontInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFontInfo_Family(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontinfo.Family: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#styleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleName(self: QFontInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFontInfo_StyleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontinfo.StyleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#pixelSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn PixelSize(self: QFontInfo) i32 {
        return qtc.QFontInfo_PixelSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#pointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn PointSize(self: QFontInfo) i32 {
        return qtc.QFontInfo_PointSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#pointSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn PointSizeF(self: QFontInfo) f64 {
        return qtc.QFontInfo_PointSizeF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#italic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn Italic(self: QFontInfo) bool {
        return qtc.QFontInfo_Italic(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Style `
    ///
    pub fn Style(self: QFontInfo) i32 {
        return qtc.QFontInfo_Style(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#weight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn Weight(self: QFontInfo) i32 {
        return qtc.QFontInfo_Weight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#bold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn Bold(self: QFontInfo) bool {
        return qtc.QFontInfo_Bold(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#underline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn Underline(self: QFontInfo) bool {
        return qtc.QFontInfo_Underline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#overline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn Overline(self: QFontInfo) bool {
        return qtc.QFontInfo_Overline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#strikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn StrikeOut(self: QFontInfo) bool {
        return qtc.QFontInfo_StrikeOut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#fixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn FixedPitch(self: QFontInfo) bool {
        return qtc.QFontInfo_FixedPitch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#styleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleHint `
    ///
    pub fn StyleHint(self: QFontInfo) i32 {
        return qtc.QFontInfo_StyleHint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#legacyWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn LegacyWeight(self: QFontInfo) i32 {
        return qtc.QFontInfo_LegacyWeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#exactMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn ExactMatch(self: QFontInfo) bool {
        return qtc.QFontInfo_ExactMatch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#dtor.QFontInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFontInfo `
    ///
    pub fn Delete(self: QFontInfo) void {
        qtc.QFontInfo_Delete(@ptrCast(self.ptr));
    }
};
