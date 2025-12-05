const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const movingcursor_enums = enums;

/// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html)
pub const ktexteditor__movingcursor = struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setInsertBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    /// ` insertBehavior: movingcursor_enums.InsertBehavior `
    ///
    pub fn SetInsertBehavior(self: ?*anyopaque, insertBehavior: i32) void {
        qtc.KTextEditor__MovingCursor_SetInsertBehavior(@ptrCast(self), @intCast(insertBehavior));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#insertBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    /// ## Returns:
    ///
    /// ` movingcursor_enums.InsertBehavior `
    ///
    pub fn InsertBehavior(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__MovingCursor_InsertBehavior(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn Document(self: ?*anyopaque) QtC.KTextEditor__Document {
        return qtc.KTextEditor__MovingCursor_Document(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#range)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn Range(self: ?*anyopaque) QtC.KTextEditor__MovingRange {
        return qtc.KTextEditor__MovingCursor_Range(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    /// ` position: QtC.KTextEditor__Cursor `
    ///
    pub fn SetPosition(self: ?*anyopaque, position: QtC.KTextEditor__Cursor) void {
        qtc.KTextEditor__MovingCursor_SetPosition(@ptrCast(self), @ptrCast(position));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#line)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn Line(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__MovingCursor_Line(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn Column(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__MovingCursor_Column(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#isValidTextPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn IsValidTextPosition(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_IsValidTextPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SetPosition2(self: ?*anyopaque, line: i32, column: i32) void {
        qtc.KTextEditor__MovingCursor_SetPosition2(@ptrCast(self), @intCast(line), @intCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    /// ` line: i32 `
    ///
    pub fn SetLine(self: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__MovingCursor_SetLine(@ptrCast(self), @intCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    /// ` column: i32 `
    ///
    pub fn SetColumn(self: ?*anyopaque, column: i32) void {
        qtc.KTextEditor__MovingCursor_SetColumn(@ptrCast(self), @intCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atStartOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn AtStartOfLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_AtStartOfLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atEndOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn AtEndOfLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_AtEndOfLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atStartOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn AtStartOfDocument(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_AtStartOfDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atEndOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn AtEndOfDocument(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_AtEndOfDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#gotoNextLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn GotoNextLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_GotoNextLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#gotoPreviousLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn GotoPreviousLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_GotoPreviousLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    /// ` chars: i32 `
    ///
    pub fn Move(self: ?*anyopaque, chars: i32) bool {
        return qtc.KTextEditor__MovingCursor_Move(@ptrCast(self), @intCast(chars));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#toCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn ToCursor(self: ?*anyopaque) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__MovingCursor_ToCursor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    /// ` chars: i32 `
    ///
    /// ` wrapBehavior: movingcursor_enums.WrapBehavior `
    ///
    pub fn Move2(self: ?*anyopaque, chars: i32, wrapBehavior: i32) bool {
        return qtc.KTextEditor__MovingCursor_Move2(@ptrCast(self), @intCast(chars), @intCast(wrapBehavior));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEditor__MovingCursor `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__MovingCursor_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/movingcursor.html#public-types)
pub const enums = struct {
    pub const InsertBehavior = enum {
        pub const StayOnInsert: i32 = 0;
        pub const MoveOnInsert: i32 = 1;
    };

    pub const WrapBehavior = enum {
        pub const Wrap: i32 = 0;
        pub const NoWrap: i32 = 1;
    };
};
