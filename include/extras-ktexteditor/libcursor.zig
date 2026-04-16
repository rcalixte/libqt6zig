const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html)
pub const KTextEditor__Cursor = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__Cursor,

    pub const _is_KTextEditor__Cursor = {};

    /// New constructs a new KTextEditor::Cursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__Cursor `
    ///
    pub fn New(other: anytype) KTextEditor__Cursor {
        comptime _ = @TypeOf(other)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Cursor_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KTextEditor::Cursor object and invalidates the source KTextEditor::Cursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__Cursor `
    ///
    pub fn New2(other: anytype) KTextEditor__Cursor {
        comptime _ = @TypeOf(other)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Cursor_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new KTextEditor::Cursor object.
    ///
    pub fn New3() KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Cursor_new3() };
    }

    /// New4 constructs a new KTextEditor::Cursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn New4(line: i32, column: i32) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Cursor_new4(@bitCast(line), @bitCast(column)) };
    }

    /// New5 constructs a new KTextEditor::Cursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KTextEditor__Cursor `
    ///
    pub fn New5(param1: anytype) KTextEditor__Cursor {
        comptime _ = @TypeOf(param1)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Cursor_new5(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` other: KTextEditor__Cursor `
    ///
    pub fn CopyAssign(self: KTextEditor__Cursor, other: KTextEditor__Cursor) void {
        qtc.KTextEditor__Cursor_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` other: KTextEditor__Cursor `
    ///
    pub fn MoveAssign(self: KTextEditor__Cursor, other: KTextEditor__Cursor) void {
        qtc.KTextEditor__Cursor_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    pub fn IsValid(self: KTextEditor__Cursor) bool {
        return qtc.KTextEditor__Cursor_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#invalid)
    ///
    pub fn Invalid() KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Cursor_Invalid() };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#start)
    ///
    pub fn Start() KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Cursor_Start() };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: KTextEditor__Cursor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Cursor_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__cursor.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn SetPosition(self: KTextEditor__Cursor, position: anytype) void {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        qtc.KTextEditor__Cursor_SetPosition(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SetPosition2(self: KTextEditor__Cursor, line: i32, column: i32) void {
        qtc.KTextEditor__Cursor_SetPosition2(@ptrCast(self.ptr), @bitCast(line), @bitCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#line)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    pub fn Line(self: KTextEditor__Cursor) i32 {
        return qtc.KTextEditor__Cursor_Line(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` line: i32 `
    ///
    pub fn SetLine(self: KTextEditor__Cursor, line: i32) void {
        qtc.KTextEditor__Cursor_SetLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    pub fn Column(self: KTextEditor__Cursor) i32 {
        return qtc.KTextEditor__Cursor_Column(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#setColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` column: i32 `
    ///
    pub fn SetColumn(self: KTextEditor__Cursor, column: i32) void {
        qtc.KTextEditor__Cursor_SetColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#atStartOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    pub fn AtStartOfLine(self: KTextEditor__Cursor) bool {
        return qtc.KTextEditor__Cursor_AtStartOfLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#atStartOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    pub fn AtStartOfDocument(self: KTextEditor__Cursor) bool {
        return qtc.KTextEditor__Cursor_AtStartOfDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` line: *i32 `
    ///
    /// ` column: *i32 `
    ///
    pub fn Position(self: KTextEditor__Cursor, line: *i32, column: *i32) void {
        qtc.KTextEditor__Cursor_Position(@ptrCast(self.ptr), @ptrCast(line), @ptrCast(column));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    pub fn Delete(self: KTextEditor__Cursor) void {
        qtc.KTextEditor__Cursor_Delete(@ptrCast(self.ptr));
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
