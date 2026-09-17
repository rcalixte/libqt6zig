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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::Cursor object in C++ memory
    ///
    pub fn new() KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Cursor_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTextEditor::Cursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__Cursor `
    ///
    pub fn new2(other: anytype) KTextEditor__Cursor {
        comptime _ = @TypeOf(other)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Cursor_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KTextEditor::Cursor object and invalidate the source KTextEditor::Cursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__Cursor `
    ///
    pub fn new3(other: anytype) KTextEditor__Cursor {
        comptime _ = @TypeOf(other)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Cursor_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KTextEditor::Cursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _line: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn new4(_line: i32, _column: i32) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Cursor_new4(@bitCast(_line), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KTextEditor::Cursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KTextEditor__Cursor `
    ///
    pub fn new5(param1: anytype) KTextEditor__Cursor {
        comptime _ = @TypeOf(param1)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Cursor_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` other: KTextEditor__Cursor `
    ///
    pub fn copyAssign(self: KTextEditor__Cursor, other: KTextEditor__Cursor) void {
        qtc.KTextEditor__Cursor_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` other: KTextEditor__Cursor `
    ///
    pub fn moveAssign(self: KTextEditor__Cursor, other: KTextEditor__Cursor) void {
        qtc.KTextEditor__Cursor_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    pub fn isValid(self: KTextEditor__Cursor) bool {
        return qtc.KTextEditor__Cursor_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `invalid` instead
    ///
    pub const Invalid = invalid;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#invalid)
    ///
    pub fn invalid() KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Cursor_Invalid() };
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#start)
    ///
    pub fn start() KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Cursor_Start() };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: KTextEditor__Cursor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Cursor_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Cursor.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn fromString(str: []const u8) KTextEditor__Cursor {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Cursor_FromString(str_str) };
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` _position: KTextEditor__Cursor `
    ///
    pub fn setPosition(self: KTextEditor__Cursor, _position: anytype) void {
        comptime _ = @TypeOf(_position)._is_KTextEditor__Cursor;
        qtc.KTextEditor__Cursor_SetPosition(@ptrCast(self.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `setPosition2` instead
    ///
    pub const SetPosition2 = setPosition2;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` _line: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn setPosition2(self: KTextEditor__Cursor, _line: i32, _column: i32) void {
        qtc.KTextEditor__Cursor_SetPosition2(@ptrCast(self.ptr), @bitCast(_line), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `line` instead
    ///
    pub const Line = line;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#line)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    pub fn line(self: KTextEditor__Cursor) i32 {
        return qtc.KTextEditor__Cursor_Line(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLine` instead
    ///
    pub const SetLine = setLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` _line: i32 `
    ///
    pub fn setLine(self: KTextEditor__Cursor, _line: i32) void {
        qtc.KTextEditor__Cursor_SetLine(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `column` instead
    ///
    pub const Column = column;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    pub fn column(self: KTextEditor__Cursor) i32 {
        return qtc.KTextEditor__Cursor_Column(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColumn` instead
    ///
    pub const SetColumn = setColumn;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#setColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` _column: i32 `
    ///
    pub fn setColumn(self: KTextEditor__Cursor, _column: i32) void {
        qtc.KTextEditor__Cursor_SetColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `atStartOfLine` instead
    ///
    pub const AtStartOfLine = atStartOfLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#atStartOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    pub fn atStartOfLine(self: KTextEditor__Cursor) bool {
        return qtc.KTextEditor__Cursor_AtStartOfLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atStartOfDocument` instead
    ///
    pub const AtStartOfDocument = atStartOfDocument;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#atStartOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    pub fn atStartOfDocument(self: KTextEditor__Cursor) bool {
        return qtc.KTextEditor__Cursor_AtStartOfDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    /// ` _line: *i32 `
    ///
    /// ` _column: *i32 `
    ///
    pub fn position(self: KTextEditor__Cursor, _line: *i32, _column: *i32) void {
        qtc.KTextEditor__Cursor_Position(@ptrCast(self.ptr), @ptrCast(_line), @ptrCast(_column));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Cursor `
    ///
    pub fn delete(self: KTextEditor__Cursor) void {
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
