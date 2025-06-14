const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qglyphrun_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qglyphrun.html
pub const qglyphrun = struct {
    /// New constructs a new QGlyphRun object.
    ///
    ///
    pub fn New() QtC.QGlyphRun {
        return qtc.QGlyphRun_new();
    }

    /// New2 constructs a new QGlyphRun object.
    ///
    /// ``` other: QtC.QGlyphRun ```
    pub fn New2(other: ?*anyopaque) QtC.QGlyphRun {
        return qtc.QGlyphRun_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#operator=)
    ///
    /// ``` self: QtC.QGlyphRun, other: QtC.QGlyphRun ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGlyphRun_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#swap)
    ///
    /// ``` self: QtC.QGlyphRun, other: QtC.QGlyphRun ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGlyphRun_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#rawFont)
    ///
    /// ``` self: QtC.QGlyphRun ```
    pub fn RawFont(self: ?*anyopaque) QtC.QRawFont {
        return qtc.QGlyphRun_RawFont(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setRawFont)
    ///
    /// ``` self: QtC.QGlyphRun, rawFont: QtC.QRawFont ```
    pub fn SetRawFont(self: ?*anyopaque, rawFont: ?*anyopaque) void {
        qtc.QGlyphRun_SetRawFont(@ptrCast(self), @ptrCast(rawFont));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setRawData)
    ///
    /// ``` self: QtC.QGlyphRun, glyphIndexArray: ?*u32, glyphPositionArray: QtC.QPointF, size: i32 ```
    pub fn SetRawData(self: ?*anyopaque, glyphIndexArray: ?*anyopaque, glyphPositionArray: ?*anyopaque, size: i32) void {
        qtc.QGlyphRun_SetRawData(@ptrCast(self), @intCast(glyphIndexArray), @ptrCast(glyphPositionArray), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#glyphIndexes)
    ///
    /// ``` self: QtC.QGlyphRun, allocator: std.mem.Allocator ```
    pub fn GlyphIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.struct_libqt_list = qtc.QGlyphRun_GlyphIndexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("qglyphrun.GlyphIndexes: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setGlyphIndexes)
    ///
    /// ``` self: QtC.QGlyphRun, glyphIndexes: []u32 ```
    pub fn SetGlyphIndexes(self: ?*anyopaque, glyphIndexes: []u32) void {
        const glyphIndexes_list = qtc.struct_libqt_list{
            .len = glyphIndexes.len,
            .data = glyphIndexes.ptr,
        };
        qtc.QGlyphRun_SetGlyphIndexes(@ptrCast(self), glyphIndexes_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#positions)
    ///
    /// ``` self: QtC.QGlyphRun, allocator: std.mem.Allocator ```
    pub fn Positions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPointF {
        const _arr: qtc.struct_libqt_list = qtc.QGlyphRun_Positions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPointF, _arr.len) catch @panic("qglyphrun.Positions: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setPositions)
    ///
    /// ``` self: QtC.QGlyphRun, positions: []QtC.QPointF ```
    pub fn SetPositions(self: ?*anyopaque, positions: []QtC.QPointF) void {
        const positions_list = qtc.struct_libqt_list{
            .len = positions.len,
            .data = @ptrCast(positions.ptr),
        };
        qtc.QGlyphRun_SetPositions(@ptrCast(self), positions_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#clear)
    ///
    /// ``` self: QtC.QGlyphRun ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QGlyphRun_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#operator==)
    ///
    /// ``` self: QtC.QGlyphRun, other: QtC.QGlyphRun ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QGlyphRun_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#operator!=)
    ///
    /// ``` self: QtC.QGlyphRun, other: QtC.QGlyphRun ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QGlyphRun_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setOverline)
    ///
    /// ``` self: QtC.QGlyphRun, overline: bool ```
    pub fn SetOverline(self: ?*anyopaque, overline: bool) void {
        qtc.QGlyphRun_SetOverline(@ptrCast(self), overline);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#overline)
    ///
    /// ``` self: QtC.QGlyphRun ```
    pub fn Overline(self: ?*anyopaque) bool {
        return qtc.QGlyphRun_Overline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setUnderline)
    ///
    /// ``` self: QtC.QGlyphRun, underline: bool ```
    pub fn SetUnderline(self: ?*anyopaque, underline: bool) void {
        qtc.QGlyphRun_SetUnderline(@ptrCast(self), underline);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#underline)
    ///
    /// ``` self: QtC.QGlyphRun ```
    pub fn Underline(self: ?*anyopaque) bool {
        return qtc.QGlyphRun_Underline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setStrikeOut)
    ///
    /// ``` self: QtC.QGlyphRun, strikeOut: bool ```
    pub fn SetStrikeOut(self: ?*anyopaque, strikeOut: bool) void {
        qtc.QGlyphRun_SetStrikeOut(@ptrCast(self), strikeOut);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#strikeOut)
    ///
    /// ``` self: QtC.QGlyphRun ```
    pub fn StrikeOut(self: ?*anyopaque) bool {
        return qtc.QGlyphRun_StrikeOut(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setRightToLeft)
    ///
    /// ``` self: QtC.QGlyphRun, on: bool ```
    pub fn SetRightToLeft(self: ?*anyopaque, on: bool) void {
        qtc.QGlyphRun_SetRightToLeft(@ptrCast(self), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#isRightToLeft)
    ///
    /// ``` self: QtC.QGlyphRun ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QGlyphRun_IsRightToLeft(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
    ///
    /// ``` self: QtC.QGlyphRun, flag: qglyphrun_enums.GlyphRunFlag ```
    pub fn SetFlag(self: ?*anyopaque, flag: i64) void {
        qtc.QGlyphRun_SetFlag(@ptrCast(self), @intCast(flag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setFlags)
    ///
    /// ``` self: QtC.QGlyphRun, flags: i32 ```
    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        qtc.QGlyphRun_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#flags)
    ///
    /// ``` self: QtC.QGlyphRun ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return qtc.QGlyphRun_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setBoundingRect)
    ///
    /// ``` self: QtC.QGlyphRun, boundingRect: QtC.QRectF ```
    pub fn SetBoundingRect(self: ?*anyopaque, boundingRect: ?*anyopaque) void {
        qtc.QGlyphRun_SetBoundingRect(@ptrCast(self), @ptrCast(boundingRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#boundingRect)
    ///
    /// ``` self: QtC.QGlyphRun ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGlyphRun_BoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#isEmpty)
    ///
    /// ``` self: QtC.QGlyphRun ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGlyphRun_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
    ///
    /// ``` self: QtC.QGlyphRun, flag: qglyphrun_enums.GlyphRunFlag, enabled: bool ```
    pub fn SetFlag2(self: ?*anyopaque, flag: i64, enabled: bool) void {
        qtc.QGlyphRun_SetFlag2(@ptrCast(self), @intCast(flag), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#dtor.QGlyphRun)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGlyphRun ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGlyphRun_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qglyphrun.html#types
pub const enums = struct {
    pub const GlyphRunFlag = enum {
        pub const Overline: i32 = 1;
        pub const Underline: i32 = 2;
        pub const StrikeOut: i32 = 4;
        pub const RightToLeft: i32 = 8;
        pub const SplitLigature: i32 = 16;
    };
};
