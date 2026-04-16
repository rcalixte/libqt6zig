const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPointF = @import("libqt6").QPointF;
const QRawFont = @import("libqt6").QRawFont;
const QRectF = @import("libqt6").QRectF;
const qglyphrun_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html)
pub const QGlyphRun = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGlyphRun,

    pub const _is_QGlyphRun = {};

    /// New constructs a new QGlyphRun object.
    ///
    pub fn New() QGlyphRun {
        return .{ .ptr = qtc.QGlyphRun_new() };
    }

    /// New2 constructs a new QGlyphRun object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGlyphRun `
    ///
    pub fn New2(other: anytype) QGlyphRun {
        comptime _ = @TypeOf(other)._is_QGlyphRun;
        return .{ .ptr = qtc.QGlyphRun_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` other: QGlyphRun `
    ///
    pub fn OperatorAssign(self: QGlyphRun, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGlyphRun;
        qtc.QGlyphRun_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` other: QGlyphRun `
    ///
    pub fn Swap(self: QGlyphRun, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGlyphRun;
        qtc.QGlyphRun_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#rawFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn RawFont(self: QGlyphRun) QRawFont {
        return .{ .ptr = qtc.QGlyphRun_RawFont(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setRawFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` rawFont: QRawFont `
    ///
    pub fn SetRawFont(self: QGlyphRun, rawFont: anytype) void {
        comptime _ = @TypeOf(rawFont)._is_QRawFont;
        qtc.QGlyphRun_SetRawFont(@ptrCast(self.ptr), @ptrCast(rawFont.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setRawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` glyphIndexArray: *const u32 `
    ///
    /// ` glyphPositionArray: QPointF `
    ///
    /// ` size: i32 `
    ///
    pub fn SetRawData(self: QGlyphRun, glyphIndexArray: *const u32, glyphPositionArray: anytype, size: i32) void {
        comptime _ = @TypeOf(glyphPositionArray)._is_QPointF;
        qtc.QGlyphRun_SetRawData(@ptrCast(self.ptr), @ptrCast(glyphIndexArray), @ptrCast(glyphPositionArray.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#glyphIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GlyphIndexes(self: QGlyphRun, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.QGlyphRun_GlyphIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("qglyphrun.GlyphIndexes: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setGlyphIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` glyphIndexes: []u32 `
    ///
    pub fn SetGlyphIndexes(self: QGlyphRun, glyphIndexes: []u32) void {
        const glyphIndexes_list = qtc.libqt_list{
            .len = glyphIndexes.len,
            .data = glyphIndexes.ptr,
        };
        qtc.QGlyphRun_SetGlyphIndexes(@ptrCast(self.ptr), glyphIndexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#positions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Positions(self: QGlyphRun, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QGlyphRun_Positions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("qglyphrun.Positions: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` positions: []QPointF `
    ///
    pub fn SetPositions(self: QGlyphRun, positions: []QPointF) void {
        const positions_list = qtc.libqt_list{
            .len = positions.len,
            .data = @ptrCast(positions.ptr),
        };
        qtc.QGlyphRun_SetPositions(@ptrCast(self.ptr), positions_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn Clear(self: QGlyphRun) void {
        qtc.QGlyphRun_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` other: QGlyphRun `
    ///
    pub fn OperatorEqual(self: QGlyphRun, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QGlyphRun;
        return qtc.QGlyphRun_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` other: QGlyphRun `
    ///
    pub fn OperatorNotEqual(self: QGlyphRun, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QGlyphRun;
        return qtc.QGlyphRun_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` overline: bool `
    ///
    pub fn SetOverline(self: QGlyphRun, overline: bool) void {
        qtc.QGlyphRun_SetOverline(@ptrCast(self.ptr), overline);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#overline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn Overline(self: QGlyphRun) bool {
        return qtc.QGlyphRun_Overline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` underline: bool `
    ///
    pub fn SetUnderline(self: QGlyphRun, underline: bool) void {
        qtc.QGlyphRun_SetUnderline(@ptrCast(self.ptr), underline);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#underline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn Underline(self: QGlyphRun) bool {
        return qtc.QGlyphRun_Underline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` strikeOut: bool `
    ///
    pub fn SetStrikeOut(self: QGlyphRun, strikeOut: bool) void {
        qtc.QGlyphRun_SetStrikeOut(@ptrCast(self.ptr), strikeOut);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#strikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn StrikeOut(self: QGlyphRun) bool {
        return qtc.QGlyphRun_StrikeOut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` on: bool `
    ///
    pub fn SetRightToLeft(self: QGlyphRun, on: bool) void {
        qtc.QGlyphRun_SetRightToLeft(@ptrCast(self.ptr), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn IsRightToLeft(self: QGlyphRun) bool {
        return qtc.QGlyphRun_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` flag: qglyphrun_enums.GlyphRunFlag `
    ///
    pub fn SetFlag(self: QGlyphRun, flag: i32) void {
        qtc.QGlyphRun_SetFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` flags: flag of qglyphrun_enums.GlyphRunFlag `
    ///
    pub fn SetFlags(self: QGlyphRun, flags: i32) void {
        qtc.QGlyphRun_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ## Returns:
    ///
    /// ` flag of qglyphrun_enums.GlyphRunFlag `
    ///
    pub fn Flags(self: QGlyphRun) i32 {
        return qtc.QGlyphRun_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` boundingRect: QRectF `
    ///
    pub fn SetBoundingRect(self: QGlyphRun, boundingRect: anytype) void {
        comptime _ = @TypeOf(boundingRect)._is_QRectF;
        qtc.QGlyphRun_SetBoundingRect(@ptrCast(self.ptr), @ptrCast(boundingRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn BoundingRect(self: QGlyphRun) QRectF {
        return .{ .ptr = qtc.QGlyphRun_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#stringIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StringIndexes(self: QGlyphRun, allocator: std.mem.Allocator) []isize {
        const _arr: qtc.libqt_list = qtc.QGlyphRun_StringIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(isize, _arr.len) catch @panic("qglyphrun.StringIndexes: Memory allocation failed");
        const _data: [*]isize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setStringIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` stringIndexes: []isize `
    ///
    pub fn SetStringIndexes(self: QGlyphRun, stringIndexes: []isize) void {
        const stringIndexes_list = qtc.libqt_list{
            .len = stringIndexes.len,
            .data = stringIndexes.ptr,
        };
        qtc.QGlyphRun_SetStringIndexes(@ptrCast(self.ptr), stringIndexes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setSourceString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` sourceString: []const u8 `
    ///
    pub fn SetSourceString(self: QGlyphRun, sourceString: []const u8) void {
        const sourceString_str = qtc.libqt_string{
            .len = sourceString.len,
            .data = sourceString.ptr,
        };
        qtc.QGlyphRun_SetSourceString(@ptrCast(self.ptr), sourceString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#sourceString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SourceString(self: QGlyphRun, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGlyphRun_SourceString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qglyphrun.SourceString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn IsEmpty(self: QGlyphRun) bool {
        return qtc.QGlyphRun_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` flag: qglyphrun_enums.GlyphRunFlag `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFlag2(self: QGlyphRun, flag: i32, enabled: bool) void {
        qtc.QGlyphRun_SetFlag2(@ptrCast(self.ptr), @bitCast(flag), enabled);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#dtor.QGlyphRun)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn Delete(self: QGlyphRun) void {
        qtc.QGlyphRun_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#public-types)
pub const enums = struct {
    pub const GlyphRunFlag = enum(i32) {
        pub const Overline: i32 = 1;
        pub const Underline: i32 = 2;
        pub const StrikeOut: i32 = 4;
        pub const RightToLeft: i32 = 8;
        pub const SplitLigature: i32 = 16;
    };
};
