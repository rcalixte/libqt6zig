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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::Range object in C++ memory
    ///
    pub fn new() KTextEditor__Range {
        return .{ .ptr = qtc.KTextEditor__Range_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTextEditor::Range object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__Range `
    ///
    pub fn new2(other: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(other)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__Range_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KTextEditor::Range object and invalidate the source KTextEditor::Range object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__Range `
    ///
    pub fn new3(other: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(other)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__Range_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KTextEditor::Range object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _start: KTextEditor__Cursor `
    ///
    /// ` _end: KTextEditor__Cursor `
    ///
    pub fn new4(_start: anytype, _end: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(_start)._is_KTextEditor__Cursor;
        comptime _ = @TypeOf(_end)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Range_new4(@ptrCast(_start.ptr), @ptrCast(_end.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KTextEditor::Range object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _start: KTextEditor__Cursor `
    ///
    /// ` width: i32 `
    ///
    pub fn new5(_start: anytype, width: i32) KTextEditor__Range {
        comptime _ = @TypeOf(_start)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Range_new5(@ptrCast(_start.ptr), @bitCast(width)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KTextEditor::Range object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _start: KTextEditor__Cursor `
    ///
    /// ` endLine: i32 `
    ///
    /// ` endColumn: i32 `
    ///
    pub fn new6(_start: anytype, endLine: i32, endColumn: i32) KTextEditor__Range {
        comptime _ = @TypeOf(_start)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Range_new6(@ptrCast(_start.ptr), @bitCast(endLine), @bitCast(endColumn)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new KTextEditor::Range object in C++ memory
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
    pub fn new7(startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) KTextEditor__Range {
        return .{ .ptr = qtc.KTextEditor__Range_new7(@bitCast(startLine), @bitCast(startColumn), @bitCast(endLine), @bitCast(endColumn)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new KTextEditor::Range object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KTextEditor__Range `
    ///
    pub fn new8(param1: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(param1)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__Range_new8(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` other: KTextEditor__Range `
    ///
    pub fn copyAssign(self: KTextEditor__Range, other: KTextEditor__Range) void {
        qtc.KTextEditor__Range_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` other: KTextEditor__Range `
    ///
    pub fn moveAssign(self: KTextEditor__Range, other: KTextEditor__Range) void {
        qtc.KTextEditor__Range_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn isValid(self: KTextEditor__Range) bool {
        return qtc.KTextEditor__Range_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `invalid` instead
    ///
    pub const Invalid = invalid;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#invalid)
    ///
    pub fn invalid() KTextEditor__Range {
        return .{ .ptr = qtc.KTextEditor__Range_Invalid() };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: KTextEditor__Range, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Range_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Range.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn fromString(str: []const u8) KTextEditor__Range {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Range_FromString(str_str) };
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn start(self: KTextEditor__Range) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Range_Start(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn end(self: KTextEditor__Range) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Range_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toLineRange` instead
    ///
    pub const ToLineRange = toLineRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#toLineRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn toLineRange(self: KTextEditor__Range) KTextEditor__LineRange {
        return .{ .ptr = qtc.KTextEditor__Range_ToLineRange(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBothLines` instead
    ///
    pub const SetBothLines = setBothLines;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#setBothLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` line: i32 `
    ///
    pub fn setBothLines(self: KTextEditor__Range, line: i32) void {
        qtc.KTextEditor__Range_SetBothLines(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `setBothColumns` instead
    ///
    pub const SetBothColumns = setBothColumns;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#setBothColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` column: i32 `
    ///
    pub fn setBothColumns(self: KTextEditor__Range, column: i32) void {
        qtc.KTextEditor__Range_SetBothColumns(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setRange` instead
    ///
    pub const SetRange = setRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn setRange(self: KTextEditor__Range, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        qtc.KTextEditor__Range_SetRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `setRange2` instead
    ///
    pub const SetRange2 = setRange2;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` _start: KTextEditor__Cursor `
    ///
    /// ` _end: KTextEditor__Cursor `
    ///
    pub fn setRange2(self: KTextEditor__Range, _start: anytype, _end: anytype) void {
        comptime _ = @TypeOf(_start)._is_KTextEditor__Cursor;
        comptime _ = @TypeOf(_end)._is_KTextEditor__Cursor;
        qtc.KTextEditor__Range_SetRange2(@ptrCast(self.ptr), @ptrCast(_start.ptr), @ptrCast(_end.ptr));
    }

    /// ### DEPRECATED: Use `setStart` instead
    ///
    pub const SetStart = setStart;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#setStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` _start: KTextEditor__Cursor `
    ///
    pub fn setStart(self: KTextEditor__Range, _start: anytype) void {
        comptime _ = @TypeOf(_start)._is_KTextEditor__Cursor;
        qtc.KTextEditor__Range_SetStart(@ptrCast(self.ptr), @ptrCast(_start.ptr));
    }

    /// ### DEPRECATED: Use `setEnd` instead
    ///
    pub const SetEnd = setEnd;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#setEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` _end: KTextEditor__Cursor `
    ///
    pub fn setEnd(self: KTextEditor__Range, _end: anytype) void {
        comptime _ = @TypeOf(_end)._is_KTextEditor__Cursor;
        qtc.KTextEditor__Range_SetEnd(@ptrCast(self.ptr), @ptrCast(_end.ptr));
    }

    /// ### DEPRECATED: Use `expandToRange` instead
    ///
    pub const ExpandToRange = expandToRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#expandToRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn expandToRange(self: KTextEditor__Range, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__Range_ExpandToRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `confineToRange` instead
    ///
    pub const ConfineToRange = confineToRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#confineToRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn confineToRange(self: KTextEditor__Range, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__Range_ConfineToRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `onSingleLine` instead
    ///
    pub const OnSingleLine = onSingleLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#onSingleLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn onSingleLine(self: KTextEditor__Range) bool {
        return qtc.KTextEditor__Range_OnSingleLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `numberOfLines` instead
    ///
    pub const NumberOfLines = numberOfLines;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#numberOfLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn numberOfLines(self: KTextEditor__Range) i32 {
        return qtc.KTextEditor__Range_NumberOfLines(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnWidth` instead
    ///
    pub const ColumnWidth = columnWidth;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#columnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn columnWidth(self: KTextEditor__Range) i32 {
        return qtc.KTextEditor__Range_ColumnWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn isEmpty(self: KTextEditor__Range) bool {
        return qtc.KTextEditor__Range_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn contains(self: KTextEditor__Range, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__Range_Contains(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `contains2` instead
    ///
    pub const Contains2 = contains2;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn contains2(self: KTextEditor__Range, cursor: anytype) bool {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__Range_Contains2(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### DEPRECATED: Use `containsLine` instead
    ///
    pub const ContainsLine = containsLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#containsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` line: i32 `
    ///
    pub fn containsLine(self: KTextEditor__Range, line: i32) bool {
        return qtc.KTextEditor__Range_ContainsLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `containsColumn` instead
    ///
    pub const ContainsColumn = containsColumn;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#containsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` column: i32 `
    ///
    pub fn containsColumn(self: KTextEditor__Range, column: i32) bool {
        return qtc.KTextEditor__Range_ContainsColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `overlaps` instead
    ///
    pub const Overlaps = overlaps;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#overlaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn overlaps(self: KTextEditor__Range, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__Range_Overlaps(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `overlapsLine` instead
    ///
    pub const OverlapsLine = overlapsLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#overlapsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` line: i32 `
    ///
    pub fn overlapsLine(self: KTextEditor__Range, line: i32) bool {
        return qtc.KTextEditor__Range_OverlapsLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `overlapsColumn` instead
    ///
    pub const OverlapsColumn = overlapsColumn;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#overlapsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` column: i32 `
    ///
    pub fn overlapsColumn(self: KTextEditor__Range, column: i32) bool {
        return qtc.KTextEditor__Range_OverlapsColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `boundaryAtCursor` instead
    ///
    pub const BoundaryAtCursor = boundaryAtCursor;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#boundaryAtCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn boundaryAtCursor(self: KTextEditor__Range, cursor: anytype) bool {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__Range_BoundaryAtCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### DEPRECATED: Use `intersect` instead
    ///
    pub const Intersect = intersect;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#intersect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn intersect(self: KTextEditor__Range, range: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__Range_Intersect(@ptrCast(self.ptr), @ptrCast(range.ptr)) };
    }

    /// ### DEPRECATED: Use `encompass` instead
    ///
    pub const Encompass = encompass;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-range.html#encompass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Range `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn encompass(self: KTextEditor__Range, range: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__Range_Encompass(@ptrCast(self.ptr), @ptrCast(range.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Range `
    ///
    pub fn delete(self: KTextEditor__Range) void {
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
