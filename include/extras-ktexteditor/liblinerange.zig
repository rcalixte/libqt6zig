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

    /// New constructs a new KTextEditor::LineRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__LineRange `
    ///
    pub fn New(other: anytype) KTextEditor__LineRange {
        comptime _ = @TypeOf(other)._is_KTextEditor__LineRange;
        return .{ .ptr = qtc.KTextEditor__LineRange_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KTextEditor::LineRange object and invalidates the source KTextEditor::LineRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__LineRange `
    ///
    pub fn New2(other: anytype) KTextEditor__LineRange {
        comptime _ = @TypeOf(other)._is_KTextEditor__LineRange;
        return .{ .ptr = qtc.KTextEditor__LineRange_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new KTextEditor::LineRange object.
    ///
    pub fn New3() KTextEditor__LineRange {
        return .{ .ptr = qtc.KTextEditor__LineRange_new3() };
    }

    /// New4 constructs a new KTextEditor::LineRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn New4(start: i32, end: i32) KTextEditor__LineRange {
        return .{ .ptr = qtc.KTextEditor__LineRange_new4(@bitCast(start), @bitCast(end)) };
    }

    /// New5 constructs a new KTextEditor::LineRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KTextEditor__LineRange `
    ///
    pub fn New5(param1: anytype) KTextEditor__LineRange {
        comptime _ = @TypeOf(param1)._is_KTextEditor__LineRange;
        return .{ .ptr = qtc.KTextEditor__LineRange_new5(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` other: KTextEditor__LineRange `
    ///
    pub fn CopyAssign(self: KTextEditor__LineRange, other: KTextEditor__LineRange) void {
        qtc.KTextEditor__LineRange_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` other: KTextEditor__LineRange `
    ///
    pub fn MoveAssign(self: KTextEditor__LineRange, other: KTextEditor__LineRange) void {
        qtc.KTextEditor__LineRange_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    pub fn IsValid(self: KTextEditor__LineRange) bool {
        return qtc.KTextEditor__LineRange_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#invalid)
    ///
    pub fn Invalid() KTextEditor__LineRange {
        return .{ .ptr = qtc.KTextEditor__LineRange_Invalid() };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: KTextEditor__LineRange, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__LineRange_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__linerange.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    pub fn Start(self: KTextEditor__LineRange) i32 {
        return qtc.KTextEditor__LineRange_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    pub fn End(self: KTextEditor__LineRange) i32 {
        return qtc.KTextEditor__LineRange_End(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn SetRange(self: KTextEditor__LineRange, range: anytype) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        qtc.KTextEditor__LineRange_SetRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SetRange2(self: KTextEditor__LineRange, start: i32, end: i32) void {
        qtc.KTextEditor__LineRange_SetRange2(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setBothLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` line: i32 `
    ///
    pub fn SetBothLines(self: KTextEditor__LineRange, line: i32) void {
        qtc.KTextEditor__LineRange_SetBothLines(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` start: i32 `
    ///
    pub fn SetStart(self: KTextEditor__LineRange, start: i32) void {
        qtc.KTextEditor__LineRange_SetStart(@ptrCast(self.ptr), @bitCast(start));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` end: i32 `
    ///
    pub fn SetEnd(self: KTextEditor__LineRange, end: i32) void {
        qtc.KTextEditor__LineRange_SetEnd(@ptrCast(self.ptr), @bitCast(end));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#expandToRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn ExpandToRange(self: KTextEditor__LineRange, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        return qtc.KTextEditor__LineRange_ExpandToRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#confineToRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn ConfineToRange(self: KTextEditor__LineRange, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        return qtc.KTextEditor__LineRange_ConfineToRange(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#onSingleLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    pub fn OnSingleLine(self: KTextEditor__LineRange) bool {
        return qtc.KTextEditor__LineRange_OnSingleLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#numberOfLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    pub fn NumberOfLines(self: KTextEditor__LineRange) i32 {
        return qtc.KTextEditor__LineRange_NumberOfLines(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn Contains(self: KTextEditor__LineRange, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        return qtc.KTextEditor__LineRange_Contains(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#containsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` line: i32 `
    ///
    pub fn ContainsLine(self: KTextEditor__LineRange, line: i32) bool {
        return qtc.KTextEditor__LineRange_ContainsLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#overlaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn Overlaps(self: KTextEditor__LineRange, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        return qtc.KTextEditor__LineRange_Overlaps(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#overlapsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` line: i32 `
    ///
    pub fn OverlapsLine(self: KTextEditor__LineRange, line: i32) bool {
        return qtc.KTextEditor__LineRange_OverlapsLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#intersect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn Intersect(self: KTextEditor__LineRange, range: anytype) KTextEditor__LineRange {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        return .{ .ptr = qtc.KTextEditor__LineRange_Intersect(@ptrCast(self.ptr), @ptrCast(range.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#encompass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    /// ` range: KTextEditor__LineRange `
    ///
    pub fn Encompass(self: KTextEditor__LineRange, range: anytype) KTextEditor__LineRange {
        comptime _ = @TypeOf(range)._is_KTextEditor__LineRange;
        return .{ .ptr = qtc.KTextEditor__LineRange_Encompass(@ptrCast(self.ptr), @ptrCast(range.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__LineRange `
    ///
    pub fn Delete(self: KTextEditor__LineRange) void {
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
