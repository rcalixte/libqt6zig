const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__Cursor = @import("libqt6").KTextEditor__Cursor;
const KTextEditor__LineRange = @import("libqt6").KTextEditor__LineRange;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html)
pub const KTextEditor__Range = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__Range,

    pub const _is_KTextEditor__Range = {};

    /// New constructs a new KTextEditor::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__Range `
    ///
    pub fn New(other: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(other)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__Range_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KTextEditor::Range object and invalidates the source KTextEditor::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__Range `
    ///
    pub fn New2(other: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(other)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__Range_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new KTextEditor::Range object.
    ///
    pub fn New3() KTextEditor__Range {
        return .{ .ptr = qtc.KTextEditor__Range_new3() };
    }

    /// New4 constructs a new KTextEditor::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` start: KTextEditor__Cursor `
    ///
    /// ` end: KTextEditor__Cursor `
    ///
    pub fn New4(start: anytype, end: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(start)._is_KTextEditor__Cursor;
        comptime _ = @TypeOf(end)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Range_new4(@ptrCast(start.ptr), @ptrCast(end.ptr)) };
    }

    /// New5 constructs a new KTextEditor::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` start: KTextEditor__Cursor `
    ///
    /// ` width: i32 `
    ///
    pub fn New5(start: anytype, width: i32) KTextEditor__Range {
        comptime _ = @TypeOf(start)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Range_new5(@ptrCast(start.ptr), @bitCast(width)) };
    }

    /// New6 constructs a new KTextEditor::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` start: KTextEditor__Cursor `
    ///
    /// ` endLine: i32 `
    ///
    /// ` endColumn: i32 `
    ///
    pub fn New6(start: anytype, endLine: i32, endColumn: i32) KTextEditor__Range {
        comptime _ = @TypeOf(start)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Range_new6(@ptrCast(start.ptr), @bitCast(endLine), @bitCast(endColumn)) };
    }

    /// New7 constructs a new KTextEditor::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` startLine: i32 `
    ///
    /// ` startColumn: i32 `
    ///
    /// ` endLine: i32 `
    ///
    /// ` endColumn: i32 `
    ///
    pub fn New7(startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) KTextEditor__Range {
        return .{ .ptr = qtc.KTextEditor__Range_new7(@bitCast(startLine), @bitCast(startColumn), @bitCast(endLine), @bitCast(endColumn)) };
    }

    /// New8 constructs a new KTextEditor::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KTextEditor__Range `
    ///
    pub fn New8(param1: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(param1)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__Range_new8(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` other: KTextEditor__Range `
    ///
    pub fn CopyAssign(self: KTextEditor__Range, other: KTextEditor__Range) void {
        qtc.KTextEditor__Range_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` other: KTextEditor__Range `
    ///
    pub fn MoveAssign(self: KTextEditor__Range, other: KTextEditor__Range) void {
        qtc.KTextEditor__Range_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn IsValid(self: KTextEditor__Range) bool {
        return qtc.KTextEditor__Range_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#invalid)
    ///
    pub fn Invalid() KTextEditor__Range {
        return .{ .ptr = qtc.KTextEditor__Range_Invalid() };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: KTextEditor__Range, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Range_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__range.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn Start(self: KTextEditor__Range) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Range_Start(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn End(self: KTextEditor__Range) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Range_End(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#toLineRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn ToLineRange(self: KTextEditor__Range) KTextEditor__LineRange {
        return .{ .ptr = qtc.KTextEditor__Range_ToLineRange(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#setBothLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` line: i32 `
    ///
    pub fn SetBothLines(self: KTextEditor__Range, line: i32) void {
        qtc.KTextEditor__Range_SetBothLines(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#setBothColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` column: i32 `
    ///
    pub fn SetBothColumns(self: KTextEditor__Range, column: i32) void {
        qtc.KTextEditor__Range_SetBothColumns(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn SetRange(self: KTextEditor__Range, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        qtc.KTextEditor__Range_SetRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` start: KTextEditor__Cursor `
    ///
    /// ` end: KTextEditor__Cursor `
    ///
    pub fn SetRange2(self: KTextEditor__Range, start: anytype, end: anytype) void {
        comptime _ = @TypeOf(start)._is_KTextEditor__Cursor;
        comptime _ = @TypeOf(end)._is_KTextEditor__Cursor;
        qtc.KTextEditor__Range_SetRange2(@ptrCast(self.ptr), @ptrCast(start.ptr), @ptrCast(end.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#setStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` start: KTextEditor__Cursor `
    ///
    pub fn SetStart(self: KTextEditor__Range, start: anytype) void {
        comptime _ = @TypeOf(start)._is_KTextEditor__Cursor;
        qtc.KTextEditor__Range_SetStart(@ptrCast(self.ptr), @ptrCast(start.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#setEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` end: KTextEditor__Cursor `
    ///
    pub fn SetEnd(self: KTextEditor__Range, end: anytype) void {
        comptime _ = @TypeOf(end)._is_KTextEditor__Cursor;
        qtc.KTextEditor__Range_SetEnd(@ptrCast(self.ptr), @ptrCast(end.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#expandToRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn ExpandToRange(self: KTextEditor__Range, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__Range_ExpandToRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#confineToRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn ConfineToRange(self: KTextEditor__Range, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__Range_ConfineToRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#onSingleLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn OnSingleLine(self: KTextEditor__Range) bool {
        return qtc.KTextEditor__Range_OnSingleLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#numberOfLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn NumberOfLines(self: KTextEditor__Range) i32 {
        return qtc.KTextEditor__Range_NumberOfLines(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#columnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn ColumnWidth(self: KTextEditor__Range) i32 {
        return qtc.KTextEditor__Range_ColumnWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn IsEmpty(self: KTextEditor__Range) bool {
        return qtc.KTextEditor__Range_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn Contains(self: KTextEditor__Range, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__Range_Contains(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn Contains2(self: KTextEditor__Range, cursor: anytype) bool {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__Range_Contains2(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#containsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` line: i32 `
    ///
    pub fn ContainsLine(self: KTextEditor__Range, line: i32) bool {
        return qtc.KTextEditor__Range_ContainsLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#containsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` column: i32 `
    ///
    pub fn ContainsColumn(self: KTextEditor__Range, column: i32) bool {
        return qtc.KTextEditor__Range_ContainsColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#overlaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn Overlaps(self: KTextEditor__Range, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__Range_Overlaps(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#overlapsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` line: i32 `
    ///
    pub fn OverlapsLine(self: KTextEditor__Range, line: i32) bool {
        return qtc.KTextEditor__Range_OverlapsLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#overlapsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` column: i32 `
    ///
    pub fn OverlapsColumn(self: KTextEditor__Range, column: i32) bool {
        return qtc.KTextEditor__Range_OverlapsColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#boundaryAtCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn BoundaryAtCursor(self: KTextEditor__Range, cursor: anytype) bool {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__Range_BoundaryAtCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#intersect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn Intersect(self: KTextEditor__Range, range: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__Range_Intersect(@ptrCast(self.ptr), @ptrCast(range.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#encompass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn Encompass(self: KTextEditor__Range, range: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__Range_Encompass(@ptrCast(self.ptr), @ptrCast(range.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn Delete(self: KTextEditor__Range) void {
        qtc.KTextEditor__Range_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ktexteditor.html)
pub const KTextEditor = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor,

    pub const _is_KTextEditor = {};
};
