const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html)
pub const KTextEditor__LineRange = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__LineRange,

    pub const _is_KTextEditor__LineRange = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::LineRange object in C++ memory
    ///
    pub fn new() KTextEditor__LineRange {
        return .{ .ptr = qtc.KTextEditor__LineRange_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTextEditor::LineRange object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__LineRange `
    ///
    pub fn new2(other: anytype) KTextEditor__LineRange {
        comptime _ = @TypeOf(other)._is_KTextEditor__LineRange;
        return .{ .ptr = qtc.KTextEditor__LineRange_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KTextEditor::LineRange object and invalidate the source KTextEditor::LineRange object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__LineRange `
    ///
    pub fn new3(other: anytype) KTextEditor__LineRange {
        comptime _ = @TypeOf(other)._is_KTextEditor__LineRange;
        return .{ .ptr = qtc.KTextEditor__LineRange_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KTextEditor::LineRange object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _start: i32 `
    ///
    /// ` _end: i32 `
    ///
    pub fn new4(_start: i32, _end: i32) KTextEditor__LineRange {
        return .{ .ptr = qtc.KTextEditor__LineRange_new4(@bitCast(_start), @bitCast(_end)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KTextEditor::LineRange object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KTextEditor__LineRange `
    ///
    pub fn new5(param1: anytype) KTextEditor__LineRange {
        comptime _ = @TypeOf(param1)._is_KTextEditor__LineRange;
        return .{ .ptr = qtc.KTextEditor__LineRange_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` other: KTextEditor__LineRange `
    ///
    pub fn copyAssign(self: KTextEditor__LineRange, other: KTextEditor__LineRange) void {
        qtc.KTextEditor__LineRange_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` other: KTextEditor__LineRange `
    ///
    pub fn moveAssign(self: KTextEditor__LineRange, other: KTextEditor__LineRange) void {
        qtc.KTextEditor__LineRange_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    pub fn isValid(self: KTextEditor__LineRange) bool {
        return qtc.KTextEditor__LineRange_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `invalid` instead
    ///
    pub const Invalid = invalid;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#invalid)
    ///
    pub fn invalid() KTextEditor__LineRange {
        return .{ .ptr = qtc.KTextEditor__LineRange_Invalid() };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: KTextEditor__LineRange, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__LineRange_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__LineRange.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn fromString(str: []const u8) KTextEditor__LineRange {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__LineRange_FromString(str_str) };
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    pub fn start(self: KTextEditor__LineRange) i32 {
        return qtc.KTextEditor__LineRange_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    pub fn end(self: KTextEditor__LineRange) i32 {
        return qtc.KTextEditor__LineRange_End(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRange` instead
    ///
    pub const SetRange = setRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn setRange(self: KTextEditor__LineRange, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        qtc.KTextEditor__LineRange_SetRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `setRange2` instead
    ///
    pub const SetRange2 = setRange2;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` _start: i32 `
    ///
    /// ` _end: i32 `
    ///
    pub fn setRange2(self: KTextEditor__LineRange, _start: i32, _end: i32) void {
        qtc.KTextEditor__LineRange_SetRange2(@ptrCast(self.ptr), @bitCast(_start), @bitCast(_end));
    }

    /// ### DEPRECATED: Use `setBothLines` instead
    ///
    pub const SetBothLines = setBothLines;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setBothLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` line: i32 `
    ///
    pub fn setBothLines(self: KTextEditor__LineRange, line: i32) void {
        qtc.KTextEditor__LineRange_SetBothLines(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `setStart` instead
    ///
    pub const SetStart = setStart;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` _start: i32 `
    ///
    pub fn setStart(self: KTextEditor__LineRange, _start: i32) void {
        qtc.KTextEditor__LineRange_SetStart(@ptrCast(self.ptr), @bitCast(_start));
    }

    /// ### DEPRECATED: Use `setEnd` instead
    ///
    pub const SetEnd = setEnd;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` _end: i32 `
    ///
    pub fn setEnd(self: KTextEditor__LineRange, _end: i32) void {
        qtc.KTextEditor__LineRange_SetEnd(@ptrCast(self.ptr), @bitCast(_end));
    }

    /// ### DEPRECATED: Use `expandToRange` instead
    ///
    pub const ExpandToRange = expandToRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#expandToRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn expandToRange(self: KTextEditor__LineRange, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        return qtc.KTextEditor__LineRange_ExpandToRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `confineToRange` instead
    ///
    pub const ConfineToRange = confineToRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#confineToRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn confineToRange(self: KTextEditor__LineRange, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        return qtc.KTextEditor__LineRange_ConfineToRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `onSingleLine` instead
    ///
    pub const OnSingleLine = onSingleLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#onSingleLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    pub fn onSingleLine(self: KTextEditor__LineRange) bool {
        return qtc.KTextEditor__LineRange_OnSingleLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `numberOfLines` instead
    ///
    pub const NumberOfLines = numberOfLines;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#numberOfLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    pub fn numberOfLines(self: KTextEditor__LineRange) i32 {
        return qtc.KTextEditor__LineRange_NumberOfLines(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn contains(self: KTextEditor__LineRange, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        return qtc.KTextEditor__LineRange_Contains(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `containsLine` instead
    ///
    pub const ContainsLine = containsLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#containsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` line: i32 `
    ///
    pub fn containsLine(self: KTextEditor__LineRange, line: i32) bool {
        return qtc.KTextEditor__LineRange_ContainsLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `overlaps` instead
    ///
    pub const Overlaps = overlaps;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#overlaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn overlaps(self: KTextEditor__LineRange, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        return qtc.KTextEditor__LineRange_Overlaps(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `overlapsLine` instead
    ///
    pub const OverlapsLine = overlapsLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#overlapsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` line: i32 `
    ///
    pub fn overlapsLine(self: KTextEditor__LineRange, line: i32) bool {
        return qtc.KTextEditor__LineRange_OverlapsLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `intersect` instead
    ///
    pub const Intersect = intersect;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#intersect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn intersect(self: KTextEditor__LineRange, range: anytype) KTextEditor__LineRange {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        return .{ .ptr = qtc.KTextEditor__LineRange_Intersect(@ptrCast(self.ptr), @ptrCast(range.ptr)) };
    }

    /// ### DEPRECATED: Use `encompass` instead
    ///
    pub const Encompass = encompass;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#encompass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn encompass(self: KTextEditor__LineRange, range: anytype) KTextEditor__LineRange {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        return .{ .ptr = qtc.KTextEditor__LineRange_Encompass(@ptrCast(self.ptr), @ptrCast(range.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    pub fn delete(self: KTextEditor__LineRange) void {
        qtc.KTextEditor__LineRange_Delete(@ptrCast(self.ptr));
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
