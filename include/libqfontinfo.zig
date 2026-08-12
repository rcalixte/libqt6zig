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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFontInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFont `
    ///
    pub fn new(param1: anytype) QFontInfo {
        comptime _ = @TypeOf(param1)._is_QFont;
        return .{ .ptr = qtc.QFontInfo_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFontInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFontInfo `
    ///
    pub fn new2(param1: anytype) QFontInfo {
        comptime _ = @TypeOf(param1)._is_QFontInfo;
        return .{ .ptr = qtc.QFontInfo_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    /// ` param1: QFontInfo `
    ///
    pub fn operatorAssign(self: QFontInfo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFontInfo;
        qtc.QFontInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    /// ` other: QFontInfo `
    ///
    pub fn swap(self: QFontInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFontInfo;
        qtc.QFontInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `family` instead
    ///
    pub const Family = family;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#family)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn family(self: QFontInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFontInfo_Family(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFontInfo.family: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `styleName` instead
    ///
    pub const StyleName = styleName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#styleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleName(self: QFontInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFontInfo_StyleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFontInfo.styleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pixelSize` instead
    ///
    pub const PixelSize = pixelSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#pixelSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn pixelSize(self: QFontInfo) i32 {
        return qtc.QFontInfo_PixelSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointSize` instead
    ///
    pub const PointSize = pointSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#pointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn pointSize(self: QFontInfo) i32 {
        return qtc.QFontInfo_PointSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointSizeF` instead
    ///
    pub const PointSizeF = pointSizeF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#pointSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn pointSizeF(self: QFontInfo) f64 {
        return qtc.QFontInfo_PointSizeF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `italic` instead
    ///
    pub const Italic = italic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#italic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn italic(self: QFontInfo) bool {
        return qtc.QFontInfo_Italic(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

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
    pub fn style(self: QFontInfo) i32 {
        return qtc.QFontInfo_Style(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `weight` instead
    ///
    pub const Weight = weight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#weight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn weight(self: QFontInfo) i32 {
        return qtc.QFontInfo_Weight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bold` instead
    ///
    pub const Bold = bold;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#bold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn bold(self: QFontInfo) bool {
        return qtc.QFontInfo_Bold(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `underline` instead
    ///
    pub const Underline = underline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#underline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn underline(self: QFontInfo) bool {
        return qtc.QFontInfo_Underline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `overline` instead
    ///
    pub const Overline = overline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#overline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn overline(self: QFontInfo) bool {
        return qtc.QFontInfo_Overline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `strikeOut` instead
    ///
    pub const StrikeOut = strikeOut;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#strikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn strikeOut(self: QFontInfo) bool {
        return qtc.QFontInfo_StrikeOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fixedPitch` instead
    ///
    pub const FixedPitch = fixedPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#fixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn fixedPitch(self: QFontInfo) bool {
        return qtc.QFontInfo_FixedPitch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `styleHint` instead
    ///
    pub const StyleHint = styleHint;

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
    pub fn styleHint(self: QFontInfo) i32 {
        return qtc.QFontInfo_StyleHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `legacyWeight` instead
    ///
    pub const LegacyWeight = legacyWeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#legacyWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn legacyWeight(self: QFontInfo) i32 {
        return qtc.QFontInfo_LegacyWeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exactMatch` instead
    ///
    pub const ExactMatch = exactMatch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#exactMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontInfo `
    ///
    pub fn exactMatch(self: QFontInfo) bool {
        return qtc.QFontInfo_ExactMatch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#dtor.QFontInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFontInfo `
    ///
    pub fn delete(self: QFontInfo) void {
        qtc.QFontInfo_Delete(@ptrCast(self.ptr));
    }
};
