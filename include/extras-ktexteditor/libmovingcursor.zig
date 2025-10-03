const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const movingcursor_enums = enums;

/// https://api.kde.org/ktexteditor-movingcursor.html
pub const ktexteditor__movingcursor = struct {
    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#setInsertBehavior)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor, insertBehavior: movingcursor_enums.InsertBehavior ```
    pub fn SetInsertBehavior(self: ?*anyopaque, insertBehavior: i32) void {
        qtc.KTextEditor__MovingCursor_SetInsertBehavior(@ptrCast(self), @intCast(insertBehavior));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#insertBehavior)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    ///
    /// Returns: ``` movingcursor_enums.InsertBehavior ```
    pub fn InsertBehavior(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__MovingCursor_InsertBehavior(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#document)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn Document(self: ?*anyopaque) QtC.KTextEditor__Document {
        return qtc.KTextEditor__MovingCursor_Document(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#range)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn Range(self: ?*anyopaque) QtC.KTextEditor__MovingRange {
        return qtc.KTextEditor__MovingCursor_Range(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#setPosition)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor, position: QtC.KTextEditor__Cursor ```
    pub fn SetPosition(self: ?*anyopaque, position: QtC.KTextEditor__Cursor) void {
        qtc.KTextEditor__MovingCursor_SetPosition(@ptrCast(self), @ptrCast(position));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#line)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn Line(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__MovingCursor_Line(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#column)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn Column(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__MovingCursor_Column(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#isValid)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#isValidTextPosition)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn IsValidTextPosition(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_IsValidTextPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#setPosition)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor, line: i32, column: i32 ```
    pub fn SetPosition2(self: ?*anyopaque, line: i32, column: i32) void {
        qtc.KTextEditor__MovingCursor_SetPosition2(@ptrCast(self), @intCast(line), @intCast(column));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#setLine)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor, line: i32 ```
    pub fn SetLine(self: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__MovingCursor_SetLine(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#setColumn)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor, column: i32 ```
    pub fn SetColumn(self: ?*anyopaque, column: i32) void {
        qtc.KTextEditor__MovingCursor_SetColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#atStartOfLine)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn AtStartOfLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_AtStartOfLine(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#atEndOfLine)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn AtEndOfLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_AtEndOfLine(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#atStartOfDocument)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn AtStartOfDocument(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_AtStartOfDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#atEndOfDocument)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn AtEndOfDocument(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_AtEndOfDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#gotoNextLine)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn GotoNextLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_GotoNextLine(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#gotoPreviousLine)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn GotoPreviousLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__MovingCursor_GotoPreviousLine(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#move)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor, chars: i32 ```
    pub fn Move(self: ?*anyopaque, chars: i32) bool {
        return qtc.KTextEditor__MovingCursor_Move(@ptrCast(self), @intCast(chars));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#toCursor)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn ToCursor(self: ?*anyopaque) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__MovingCursor_ToCursor(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#move)
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor, chars: i32, wrapBehavior: movingcursor_enums.WrapBehavior ```
    pub fn Move2(self: ?*anyopaque, chars: i32, wrapBehavior: i32) bool {
        return qtc.KTextEditor__MovingCursor_Move2(@ptrCast(self), @intCast(chars), @intCast(wrapBehavior));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__MovingCursor ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__MovingCursor_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/movingcursor.html#types
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
