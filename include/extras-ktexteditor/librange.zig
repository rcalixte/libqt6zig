const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/ktexteditor-range.html
pub const ktexteditor__range = struct {
    /// New constructs a new KTextEditor::Range object.
    ///
    /// ``` other: QtC.KTextEditor__Range ```
    pub fn New(other: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__Range_new(@ptrCast(other));
    }

    /// New2 constructs a new KTextEditor::Range object and invalidates the source KTextEditor::Range object.
    ///
    /// ``` other: QtC.KTextEditor__Range ```
    pub fn New2(other: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__Range_new2(@ptrCast(other));
    }

    /// New3 constructs a new KTextEditor::Range object.
    ///
    ///
    pub fn New3() QtC.KTextEditor__Range {
        return qtc.KTextEditor__Range_new3();
    }

    /// New4 constructs a new KTextEditor::Range object.
    ///
    /// ``` start: QtC.KTextEditor__Cursor, end: QtC.KTextEditor__Cursor ```
    pub fn New4(start: QtC.KTextEditor__Cursor, end: QtC.KTextEditor__Cursor) QtC.KTextEditor__Range {
        return qtc.KTextEditor__Range_new4(@ptrCast(start), @ptrCast(end));
    }

    /// New5 constructs a new KTextEditor::Range object.
    ///
    /// ``` start: QtC.KTextEditor__Cursor, width: i32 ```
    pub fn New5(start: QtC.KTextEditor__Cursor, width: i32) QtC.KTextEditor__Range {
        return qtc.KTextEditor__Range_new5(@ptrCast(start), @intCast(width));
    }

    /// New6 constructs a new KTextEditor::Range object.
    ///
    /// ``` start: QtC.KTextEditor__Cursor, endLine: i32, endColumn: i32 ```
    pub fn New6(start: QtC.KTextEditor__Cursor, endLine: i32, endColumn: i32) QtC.KTextEditor__Range {
        return qtc.KTextEditor__Range_new6(@ptrCast(start), @intCast(endLine), @intCast(endColumn));
    }

    /// New7 constructs a new KTextEditor::Range object.
    ///
    /// ``` startLine: i32, startColumn: i32, endLine: i32, endColumn: i32 ```
    pub fn New7(startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) QtC.KTextEditor__Range {
        return qtc.KTextEditor__Range_new7(@intCast(startLine), @intCast(startColumn), @intCast(endLine), @intCast(endColumn));
    }

    /// New8 constructs a new KTextEditor::Range object.
    ///
    /// ``` param1: QtC.KTextEditor__Range ```
    pub fn New8(param1: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__Range_new8(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KTextEditor__Range, other: QtC.KTextEditor__Range ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KTextEditor__Range_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KTextEditor__Range, other: QtC.KTextEditor__Range ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KTextEditor__Range_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#isValid)
    ///
    /// ``` self: QtC.KTextEditor__Range ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Range_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#invalid)
    ///
    ///
    pub fn Invalid() QtC.KTextEditor__Range {
        return qtc.KTextEditor__Range_Invalid();
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#toString)
    ///
    /// ``` self: QtC.KTextEditor__Range, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Range_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::range.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#start)
    ///
    /// ``` self: QtC.KTextEditor__Range ```
    pub fn Start(self: ?*anyopaque) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__Range_Start(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#end)
    ///
    /// ``` self: QtC.KTextEditor__Range ```
    pub fn End(self: ?*anyopaque) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__Range_End(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#toLineRange)
    ///
    /// ``` self: QtC.KTextEditor__Range ```
    pub fn ToLineRange(self: ?*anyopaque) QtC.KTextEditor__LineRange {
        return qtc.KTextEditor__Range_ToLineRange(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#setBothLines)
    ///
    /// ``` self: QtC.KTextEditor__Range, line: i32 ```
    pub fn SetBothLines(self: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__Range_SetBothLines(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#setBothColumns)
    ///
    /// ``` self: QtC.KTextEditor__Range, column: i32 ```
    pub fn SetBothColumns(self: ?*anyopaque, column: i32) void {
        qtc.KTextEditor__Range_SetBothColumns(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#setRange)
    ///
    /// ``` self: QtC.KTextEditor__Range, range: QtC.KTextEditor__Range ```
    pub fn SetRange(self: ?*anyopaque, range: QtC.KTextEditor__Range) void {
        qtc.KTextEditor__Range_SetRange(@ptrCast(self), @ptrCast(range));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#setRange)
    ///
    /// ``` self: QtC.KTextEditor__Range, start: QtC.KTextEditor__Cursor, end: QtC.KTextEditor__Cursor ```
    pub fn SetRange2(self: ?*anyopaque, start: QtC.KTextEditor__Cursor, end: QtC.KTextEditor__Cursor) void {
        qtc.KTextEditor__Range_SetRange2(@ptrCast(self), @ptrCast(start), @ptrCast(end));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#setStart)
    ///
    /// ``` self: QtC.KTextEditor__Range, start: QtC.KTextEditor__Cursor ```
    pub fn SetStart(self: ?*anyopaque, start: QtC.KTextEditor__Cursor) void {
        qtc.KTextEditor__Range_SetStart(@ptrCast(self), @ptrCast(start));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#setEnd)
    ///
    /// ``` self: QtC.KTextEditor__Range, end: QtC.KTextEditor__Cursor ```
    pub fn SetEnd(self: ?*anyopaque, end: QtC.KTextEditor__Cursor) void {
        qtc.KTextEditor__Range_SetEnd(@ptrCast(self), @ptrCast(end));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#expandToRange)
    ///
    /// ``` self: QtC.KTextEditor__Range, range: QtC.KTextEditor__Range ```
    pub fn ExpandToRange(self: ?*anyopaque, range: QtC.KTextEditor__Range) bool {
        return qtc.KTextEditor__Range_ExpandToRange(@ptrCast(self), @ptrCast(range));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#confineToRange)
    ///
    /// ``` self: QtC.KTextEditor__Range, range: QtC.KTextEditor__Range ```
    pub fn ConfineToRange(self: ?*anyopaque, range: QtC.KTextEditor__Range) bool {
        return qtc.KTextEditor__Range_ConfineToRange(@ptrCast(self), @ptrCast(range));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#onSingleLine)
    ///
    /// ``` self: QtC.KTextEditor__Range ```
    pub fn OnSingleLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Range_OnSingleLine(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#numberOfLines)
    ///
    /// ``` self: QtC.KTextEditor__Range ```
    pub fn NumberOfLines(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__Range_NumberOfLines(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#columnWidth)
    ///
    /// ``` self: QtC.KTextEditor__Range ```
    pub fn ColumnWidth(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__Range_ColumnWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#isEmpty)
    ///
    /// ``` self: QtC.KTextEditor__Range ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Range_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#contains)
    ///
    /// ``` self: QtC.KTextEditor__Range, range: QtC.KTextEditor__Range ```
    pub fn Contains(self: ?*anyopaque, range: QtC.KTextEditor__Range) bool {
        return qtc.KTextEditor__Range_Contains(@ptrCast(self), @ptrCast(range));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#contains)
    ///
    /// ``` self: QtC.KTextEditor__Range, cursor: QtC.KTextEditor__Cursor ```
    pub fn Contains2(self: ?*anyopaque, cursor: QtC.KTextEditor__Cursor) bool {
        return qtc.KTextEditor__Range_Contains2(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#containsLine)
    ///
    /// ``` self: QtC.KTextEditor__Range, line: i32 ```
    pub fn ContainsLine(self: ?*anyopaque, line: i32) bool {
        return qtc.KTextEditor__Range_ContainsLine(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#containsColumn)
    ///
    /// ``` self: QtC.KTextEditor__Range, column: i32 ```
    pub fn ContainsColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.KTextEditor__Range_ContainsColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#overlaps)
    ///
    /// ``` self: QtC.KTextEditor__Range, range: QtC.KTextEditor__Range ```
    pub fn Overlaps(self: ?*anyopaque, range: QtC.KTextEditor__Range) bool {
        return qtc.KTextEditor__Range_Overlaps(@ptrCast(self), @ptrCast(range));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#overlapsLine)
    ///
    /// ``` self: QtC.KTextEditor__Range, line: i32 ```
    pub fn OverlapsLine(self: ?*anyopaque, line: i32) bool {
        return qtc.KTextEditor__Range_OverlapsLine(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#overlapsColumn)
    ///
    /// ``` self: QtC.KTextEditor__Range, column: i32 ```
    pub fn OverlapsColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.KTextEditor__Range_OverlapsColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#boundaryAtCursor)
    ///
    /// ``` self: QtC.KTextEditor__Range, cursor: QtC.KTextEditor__Cursor ```
    pub fn BoundaryAtCursor(self: ?*anyopaque, cursor: QtC.KTextEditor__Cursor) bool {
        return qtc.KTextEditor__Range_BoundaryAtCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#intersect)
    ///
    /// ``` self: QtC.KTextEditor__Range, range: QtC.KTextEditor__Range ```
    pub fn Intersect(self: ?*anyopaque, range: QtC.KTextEditor__Range) QtC.KTextEditor__Range {
        return qtc.KTextEditor__Range_Intersect(@ptrCast(self), @ptrCast(range));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-range.html#encompass)
    ///
    /// ``` self: QtC.KTextEditor__Range, range: QtC.KTextEditor__Range ```
    pub fn Encompass(self: ?*anyopaque, range: QtC.KTextEditor__Range) QtC.KTextEditor__Range {
        return qtc.KTextEditor__Range_Encompass(@ptrCast(self), @ptrCast(range));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__Range ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__Range_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/ktexteditor.html
pub const ktexteditor = struct {};
