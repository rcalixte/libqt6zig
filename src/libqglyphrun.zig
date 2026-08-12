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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGlyphRun object in C++ memory
    ///
    pub fn new() QGlyphRun {
        return .{ .ptr = qtc.QGlyphRun_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGlyphRun object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGlyphRun `
    ///
    pub fn new2(other: anytype) QGlyphRun {
        comptime _ = @TypeOf(other)._is_QGlyphRun;
        return .{ .ptr = qtc.QGlyphRun_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` other: QGlyphRun `
    ///
    pub fn operatorAssign(self: QGlyphRun, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGlyphRun;
        qtc.QGlyphRun_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` other: QGlyphRun `
    ///
    pub fn swap(self: QGlyphRun, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGlyphRun;
        qtc.QGlyphRun_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `rawFont` instead
    ///
    pub const RawFont = rawFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#rawFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn rawFont(self: QGlyphRun) QRawFont {
        return .{ .ptr = qtc.QGlyphRun_RawFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRawFont` instead
    ///
    pub const SetRawFont = setRawFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setRawFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` _rawFont: QRawFont `
    ///
    pub fn setRawFont(self: QGlyphRun, _rawFont: anytype) void {
        comptime _ = @TypeOf(_rawFont)._is_QRawFont;
        qtc.QGlyphRun_SetRawFont(@ptrCast(self.ptr), @ptrCast(_rawFont.ptr));
    }

    /// ### DEPRECATED: Use `setRawData` instead
    ///
    pub const SetRawData = setRawData;

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
    pub fn setRawData(self: QGlyphRun, glyphIndexArray: *const u32, glyphPositionArray: anytype, size: i32) void {
        comptime _ = @TypeOf(glyphPositionArray)._is_QPointF;
        qtc.QGlyphRun_SetRawData(@ptrCast(self.ptr), @ptrCast(glyphIndexArray), @ptrCast(glyphPositionArray.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glyphIndexes` instead
    ///
    pub const GlyphIndexes = glyphIndexes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#glyphIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn glyphIndexes(self: QGlyphRun, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.QGlyphRun_GlyphIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("QGlyphRun.glyphIndexes: Memory allocation failed");
        const _data_val: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setGlyphIndexes` instead
    ///
    pub const SetGlyphIndexes = setGlyphIndexes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setGlyphIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` _glyphIndexes: []u32 `
    ///
    pub fn setGlyphIndexes(self: QGlyphRun, _glyphIndexes: []u32) void {
        const glyphIndexes_list = qtc.libqt_list{
            .len = _glyphIndexes.len,
            .data = _glyphIndexes.ptr,
        };
        qtc.QGlyphRun_SetGlyphIndexes(@ptrCast(self.ptr), glyphIndexes_list);
    }

    /// ### DEPRECATED: Use `positions` instead
    ///
    pub const Positions = positions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#positions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn positions(self: QGlyphRun, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QGlyphRun_Positions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("QGlyphRun.positions: Memory allocation failed");
        const _data_val: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setPositions` instead
    ///
    pub const SetPositions = setPositions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` _positions: []QPointF `
    ///
    pub fn setPositions(self: QGlyphRun, _positions: []QPointF) void {
        const positions_list = qtc.libqt_list{
            .len = _positions.len,
            .data = @ptrCast(_positions.ptr),
        };
        qtc.QGlyphRun_SetPositions(@ptrCast(self.ptr), positions_list);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn clear(self: QGlyphRun) void {
        qtc.QGlyphRun_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` other: QGlyphRun `
    ///
    pub fn operatorEqual(self: QGlyphRun, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QGlyphRun;
        return qtc.QGlyphRun_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` other: QGlyphRun `
    ///
    pub fn operatorNotEqual(self: QGlyphRun, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QGlyphRun;
        return qtc.QGlyphRun_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setOverline` instead
    ///
    pub const SetOverline = setOverline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` _overline: bool `
    ///
    pub fn setOverline(self: QGlyphRun, _overline: bool) void {
        qtc.QGlyphRun_SetOverline(@ptrCast(self.ptr), _overline);
    }

    /// ### DEPRECATED: Use `overline` instead
    ///
    pub const Overline = overline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#overline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn overline(self: QGlyphRun) bool {
        return qtc.QGlyphRun_Overline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnderline` instead
    ///
    pub const SetUnderline = setUnderline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` _underline: bool `
    ///
    pub fn setUnderline(self: QGlyphRun, _underline: bool) void {
        qtc.QGlyphRun_SetUnderline(@ptrCast(self.ptr), _underline);
    }

    /// ### DEPRECATED: Use `underline` instead
    ///
    pub const Underline = underline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#underline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn underline(self: QGlyphRun) bool {
        return qtc.QGlyphRun_Underline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStrikeOut` instead
    ///
    pub const SetStrikeOut = setStrikeOut;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` _strikeOut: bool `
    ///
    pub fn setStrikeOut(self: QGlyphRun, _strikeOut: bool) void {
        qtc.QGlyphRun_SetStrikeOut(@ptrCast(self.ptr), _strikeOut);
    }

    /// ### DEPRECATED: Use `strikeOut` instead
    ///
    pub const StrikeOut = strikeOut;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#strikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn strikeOut(self: QGlyphRun) bool {
        return qtc.QGlyphRun_StrikeOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRightToLeft` instead
    ///
    pub const SetRightToLeft = setRightToLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` on: bool `
    ///
    pub fn setRightToLeft(self: QGlyphRun, on: bool) void {
        qtc.QGlyphRun_SetRightToLeft(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `isRightToLeft` instead
    ///
    pub const IsRightToLeft = isRightToLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn isRightToLeft(self: QGlyphRun) bool {
        return qtc.QGlyphRun_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` flag: qglyphrun_enums.GlyphRunFlag `
    ///
    pub fn setFlag(self: QGlyphRun, flag: i32) void {
        qtc.QGlyphRun_SetFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` _flags: flag of qglyphrun_enums.GlyphRunFlag `
    ///
    pub fn setFlags(self: QGlyphRun, _flags: i32) void {
        qtc.QGlyphRun_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

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
    pub fn flags(self: QGlyphRun) i32 {
        return qtc.QGlyphRun_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBoundingRect` instead
    ///
    pub const SetBoundingRect = setBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` _boundingRect: QRectF `
    ///
    pub fn setBoundingRect(self: QGlyphRun, _boundingRect: anytype) void {
        comptime _ = @TypeOf(_boundingRect)._is_QRectF;
        qtc.QGlyphRun_SetBoundingRect(@ptrCast(self.ptr), @ptrCast(_boundingRect.ptr));
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn boundingRect(self: QGlyphRun) QRectF {
        return .{ .ptr = qtc.QGlyphRun_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `stringIndexes` instead
    ///
    pub const StringIndexes = stringIndexes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#stringIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn stringIndexes(self: QGlyphRun, allocator: std.mem.Allocator) []isize {
        const _arr: qtc.libqt_list = qtc.QGlyphRun_StringIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(isize, _arr.len) catch @panic("QGlyphRun.stringIndexes: Memory allocation failed");
        const _data_val: [*]isize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStringIndexes` instead
    ///
    pub const SetStringIndexes = setStringIndexes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setStringIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` _stringIndexes: []isize `
    ///
    pub fn setStringIndexes(self: QGlyphRun, _stringIndexes: []isize) void {
        const stringIndexes_list = qtc.libqt_list{
            .len = _stringIndexes.len,
            .data = _stringIndexes.ptr,
        };
        qtc.QGlyphRun_SetStringIndexes(@ptrCast(self.ptr), stringIndexes_list);
    }

    /// ### DEPRECATED: Use `setSourceString` instead
    ///
    pub const SetSourceString = setSourceString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setSourceString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` _sourceString: []const u8 `
    ///
    pub fn setSourceString(self: QGlyphRun, _sourceString: []const u8) void {
        const sourceString_str = qtc.libqt_string{
            .len = _sourceString.len,
            .data = _sourceString.ptr,
        };
        qtc.QGlyphRun_SetSourceString(@ptrCast(self.ptr), sourceString_str);
    }

    /// ### DEPRECATED: Use `sourceString` instead
    ///
    pub const SourceString = sourceString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#sourceString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sourceString(self: QGlyphRun, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGlyphRun_SourceString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGlyphRun.sourceString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn isEmpty(self: QGlyphRun) bool {
        return qtc.QGlyphRun_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

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
    pub fn setFlag2(self: QGlyphRun, flag: i32, enabled: bool) void {
        qtc.QGlyphRun_SetFlag2(@ptrCast(self.ptr), @bitCast(flag), enabled);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#dtor.QGlyphRun)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGlyphRun `
    ///
    pub fn delete(self: QGlyphRun) void {
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
