const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/ktexteditor-cursor.html
pub const ktexteditor__cursor = struct {
    /// New constructs a new KTextEditor::Cursor object.
    ///
    /// ``` other: QtC.KTextEditor__Cursor ```
    pub fn New(other: ?*anyopaque) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__Cursor_new(@ptrCast(other));
    }

    /// New2 constructs a new KTextEditor::Cursor object and invalidates the source KTextEditor::Cursor object.
    ///
    /// ``` other: QtC.KTextEditor__Cursor ```
    pub fn New2(other: ?*anyopaque) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__Cursor_new2(@ptrCast(other));
    }

    /// New3 constructs a new KTextEditor::Cursor object.
    ///
    ///
    pub fn New3() QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__Cursor_new3();
    }

    /// New4 constructs a new KTextEditor::Cursor object.
    ///
    /// ``` line: i32, column: i32 ```
    pub fn New4(line: i32, column: i32) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__Cursor_new4(@intCast(line), @intCast(column));
    }

    /// New5 constructs a new KTextEditor::Cursor object.
    ///
    /// ``` param1: QtC.KTextEditor__Cursor ```
    pub fn New5(param1: ?*anyopaque) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__Cursor_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KTextEditor__Cursor, other: QtC.KTextEditor__Cursor ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KTextEditor__Cursor_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KTextEditor__Cursor, other: QtC.KTextEditor__Cursor ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KTextEditor__Cursor_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#isValid)
    ///
    /// ``` self: QtC.KTextEditor__Cursor ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Cursor_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#invalid)
    ///
    ///
    pub fn Invalid() QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__Cursor_Invalid();
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#start)
    ///
    ///
    pub fn Start() QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__Cursor_Start();
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#toString)
    ///
    /// ``` self: QtC.KTextEditor__Cursor, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Cursor_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::cursor.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#setPosition)
    ///
    /// ``` self: QtC.KTextEditor__Cursor, position: QtC.KTextEditor__Cursor ```
    pub fn SetPosition(self: ?*anyopaque, position: QtC.KTextEditor__Cursor) void {
        qtc.KTextEditor__Cursor_SetPosition(@ptrCast(self), @ptrCast(position));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#setPosition)
    ///
    /// ``` self: QtC.KTextEditor__Cursor, line: i32, column: i32 ```
    pub fn SetPosition2(self: ?*anyopaque, line: i32, column: i32) void {
        qtc.KTextEditor__Cursor_SetPosition2(@ptrCast(self), @intCast(line), @intCast(column));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#line)
    ///
    /// ``` self: QtC.KTextEditor__Cursor ```
    pub fn Line(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__Cursor_Line(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#setLine)
    ///
    /// ``` self: QtC.KTextEditor__Cursor, line: i32 ```
    pub fn SetLine(self: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__Cursor_SetLine(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#column)
    ///
    /// ``` self: QtC.KTextEditor__Cursor ```
    pub fn Column(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__Cursor_Column(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#setColumn)
    ///
    /// ``` self: QtC.KTextEditor__Cursor, column: i32 ```
    pub fn SetColumn(self: ?*anyopaque, column: i32) void {
        qtc.KTextEditor__Cursor_SetColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#atStartOfLine)
    ///
    /// ``` self: QtC.KTextEditor__Cursor ```
    pub fn AtStartOfLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Cursor_AtStartOfLine(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#atStartOfDocument)
    ///
    /// ``` self: QtC.KTextEditor__Cursor ```
    pub fn AtStartOfDocument(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Cursor_AtStartOfDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-cursor.html#position)
    ///
    /// ``` self: QtC.KTextEditor__Cursor, line: *i32, column: *i32 ```
    pub fn Position(self: ?*anyopaque, line: *i32, column: *i32) void {
        qtc.KTextEditor__Cursor_Position(@ptrCast(self), @ptrCast(line), @ptrCast(column));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__Cursor ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__Cursor_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/ktexteditor.html
pub const ktexteditor = struct {};
