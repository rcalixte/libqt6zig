const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html)
pub const ktexteditor__linerange = struct {
    /// New constructs a new KTextEditor::LineRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KTextEditor__LineRange `
    ///
    pub fn New(other: ?*anyopaque) QtC.KTextEditor__LineRange {
        return qtc.KTextEditor__LineRange_new(@ptrCast(other));
    }

    /// New2 constructs a new KTextEditor::LineRange object and invalidates the source KTextEditor::LineRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KTextEditor__LineRange `
    ///
    pub fn New2(other: ?*anyopaque) QtC.KTextEditor__LineRange {
        return qtc.KTextEditor__LineRange_new2(@ptrCast(other));
    }

    /// New3 constructs a new KTextEditor::LineRange object.
    ///
    pub fn New3() QtC.KTextEditor__LineRange {
        return qtc.KTextEditor__LineRange_new3();
    }

    /// New4 constructs a new KTextEditor::LineRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn New4(start: i32, end: i32) QtC.KTextEditor__LineRange {
        return qtc.KTextEditor__LineRange_new4(@intCast(start), @intCast(end));
    }

    /// New5 constructs a new KTextEditor::LineRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KTextEditor__LineRange `
    ///
    pub fn New5(param1: ?*anyopaque) QtC.KTextEditor__LineRange {
        return qtc.KTextEditor__LineRange_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` other: QtC.KTextEditor__LineRange `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KTextEditor__LineRange_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` other: QtC.KTextEditor__LineRange `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KTextEditor__LineRange_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KTextEditor__LineRange_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#invalid)
    ///
    pub fn Invalid() QtC.KTextEditor__LineRange {
        return qtc.KTextEditor__LineRange_Invalid();
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__LineRange_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::linerange.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    pub fn Start(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__LineRange_Start(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    pub fn End(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__LineRange_End(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` range: QtC.KTextEditor__LineRange `
    ///
    pub fn SetRange(self: ?*anyopaque, range: QtC.KTextEditor__LineRange) void {
        qtc.KTextEditor__LineRange_SetRange(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SetRange2(self: ?*anyopaque, start: i32, end: i32) void {
        qtc.KTextEditor__LineRange_SetRange2(@ptrCast(self), @intCast(start), @intCast(end));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setBothLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` line: i32 `
    ///
    pub fn SetBothLines(self: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__LineRange_SetBothLines(@ptrCast(self), @intCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` start: i32 `
    ///
    pub fn SetStart(self: ?*anyopaque, start: i32) void {
        qtc.KTextEditor__LineRange_SetStart(@ptrCast(self), @intCast(start));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` end: i32 `
    ///
    pub fn SetEnd(self: ?*anyopaque, end: i32) void {
        qtc.KTextEditor__LineRange_SetEnd(@ptrCast(self), @intCast(end));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#expandToRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` range: QtC.KTextEditor__LineRange `
    ///
    pub fn ExpandToRange(self: ?*anyopaque, range: QtC.KTextEditor__LineRange) bool {
        return qtc.KTextEditor__LineRange_ExpandToRange(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#confineToRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` range: QtC.KTextEditor__LineRange `
    ///
    pub fn ConfineToRange(self: ?*anyopaque, range: QtC.KTextEditor__LineRange) bool {
        return qtc.KTextEditor__LineRange_ConfineToRange(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#onSingleLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    pub fn OnSingleLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__LineRange_OnSingleLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#numberOfLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    pub fn NumberOfLines(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__LineRange_NumberOfLines(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` range: QtC.KTextEditor__LineRange `
    ///
    pub fn Contains(self: ?*anyopaque, range: QtC.KTextEditor__LineRange) bool {
        return qtc.KTextEditor__LineRange_Contains(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#containsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` line: i32 `
    ///
    pub fn ContainsLine(self: ?*anyopaque, line: i32) bool {
        return qtc.KTextEditor__LineRange_ContainsLine(@ptrCast(self), @intCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#overlaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` range: QtC.KTextEditor__LineRange `
    ///
    pub fn Overlaps(self: ?*anyopaque, range: QtC.KTextEditor__LineRange) bool {
        return qtc.KTextEditor__LineRange_Overlaps(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#overlapsLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` line: i32 `
    ///
    pub fn OverlapsLine(self: ?*anyopaque, line: i32) bool {
        return qtc.KTextEditor__LineRange_OverlapsLine(@ptrCast(self), @intCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#intersect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` range: QtC.KTextEditor__LineRange `
    ///
    pub fn Intersect(self: ?*anyopaque, range: QtC.KTextEditor__LineRange) QtC.KTextEditor__LineRange {
        return qtc.KTextEditor__LineRange_Intersect(@ptrCast(self), @ptrCast(range));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#encompass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    /// ` range: QtC.KTextEditor__LineRange `
    ///
    pub fn Encompass(self: ?*anyopaque, range: QtC.KTextEditor__LineRange) QtC.KTextEditor__LineRange {
        return qtc.KTextEditor__LineRange_Encompass(@ptrCast(self), @ptrCast(range));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEditor__LineRange `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__LineRange_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/ktexteditor.html)
pub const ktexteditor = struct {};
