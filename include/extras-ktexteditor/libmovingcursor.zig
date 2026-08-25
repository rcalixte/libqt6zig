const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__Cursor = @import("libqt6").KTextEditor__Cursor;
const KTextEditor__Document = @import("libqt6").KTextEditor__Document;
const KTextEditor__MovingRange = @import("libqt6").KTextEditor__MovingRange;
const movingcursor_enums = enums;

/// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html)
pub const KTextEditor__MovingCursor = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__MovingCursor,

    pub const _is_KTextEditor__MovingCursor = {};

    /// ### DEPRECATED: Use `setInsertBehavior` instead
    ///
    pub const SetInsertBehavior = setInsertBehavior;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setInsertBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` _insertBehavior: movingcursor_enums.InsertBehavior `
    ///
    pub fn setInsertBehavior(self: KTextEditor__MovingCursor, _insertBehavior: i32) void {
        qtc.KTextEditor__MovingCursor_SetInsertBehavior(@ptrCast(self.ptr), @bitCast(_insertBehavior));
    }

    /// ### DEPRECATED: Use `insertBehavior` instead
    ///
    pub const InsertBehavior = insertBehavior;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#insertBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ## Returns:
    ///
    /// ` movingcursor_enums.InsertBehavior `
    ///
    pub fn insertBehavior(self: KTextEditor__MovingCursor) i32 {
        return qtc.KTextEditor__MovingCursor_InsertBehavior(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn document(self: KTextEditor__MovingCursor) KTextEditor__Document {
        return .{ .ptr = qtc.KTextEditor__MovingCursor_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `range` instead
    ///
    pub const Range = range;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#range)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn range(self: KTextEditor__MovingCursor) KTextEditor__MovingRange {
        return .{ .ptr = qtc.KTextEditor__MovingCursor_Range(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn setPosition(self: KTextEditor__MovingCursor, position: anytype) void {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        qtc.KTextEditor__MovingCursor_SetPosition(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `line` instead
    ///
    pub const Line = line;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#line)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn line(self: KTextEditor__MovingCursor) i32 {
        return qtc.KTextEditor__MovingCursor_Line(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `column` instead
    ///
    pub const Column = column;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn column(self: KTextEditor__MovingCursor) i32 {
        return qtc.KTextEditor__MovingCursor_Column(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn isValid(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValidTextPosition` instead
    ///
    pub const IsValidTextPosition = isValidTextPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#isValidTextPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn isValidTextPosition(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_IsValidTextPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition2` instead
    ///
    pub const SetPosition2 = setPosition2;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` _line: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn setPosition2(self: KTextEditor__MovingCursor, _line: i32, _column: i32) void {
        qtc.KTextEditor__MovingCursor_SetPosition2(@ptrCast(self.ptr), @bitCast(_line), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `setLine` instead
    ///
    pub const SetLine = setLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` _line: i32 `
    ///
    pub fn setLine(self: KTextEditor__MovingCursor, _line: i32) void {
        qtc.KTextEditor__MovingCursor_SetLine(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `setColumn` instead
    ///
    pub const SetColumn = setColumn;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` _column: i32 `
    ///
    pub fn setColumn(self: KTextEditor__MovingCursor, _column: i32) void {
        qtc.KTextEditor__MovingCursor_SetColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `atStartOfLine` instead
    ///
    pub const AtStartOfLine = atStartOfLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atStartOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn atStartOfLine(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_AtStartOfLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atEndOfLine` instead
    ///
    pub const AtEndOfLine = atEndOfLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atEndOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn atEndOfLine(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_AtEndOfLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atStartOfDocument` instead
    ///
    pub const AtStartOfDocument = atStartOfDocument;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atStartOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn atStartOfDocument(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_AtStartOfDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atEndOfDocument` instead
    ///
    pub const AtEndOfDocument = atEndOfDocument;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atEndOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn atEndOfDocument(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_AtEndOfDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `gotoNextLine` instead
    ///
    pub const GotoNextLine = gotoNextLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#gotoNextLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn gotoNextLine(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_GotoNextLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `gotoPreviousLine` instead
    ///
    pub const GotoPreviousLine = gotoPreviousLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#gotoPreviousLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn gotoPreviousLine(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_GotoPreviousLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `move` instead
    ///
    pub const Move = move;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` chars: i32 `
    ///
    pub fn move(self: KTextEditor__MovingCursor, chars: i32) bool {
        return qtc.KTextEditor__MovingCursor_Move(@ptrCast(self.ptr), @bitCast(chars));
    }

    /// ### DEPRECATED: Use `toCursor` instead
    ///
    pub const ToCursor = toCursor;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#toCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn toCursor(self: KTextEditor__MovingCursor) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__MovingCursor_ToCursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `move2` instead
    ///
    pub const Move2 = move2;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` chars: i32 `
    ///
    /// ` wrapBehavior: movingcursor_enums.WrapBehavior `
    ///
    pub fn move2(self: KTextEditor__MovingCursor, chars: i32, wrapBehavior: i32) bool {
        return qtc.KTextEditor__MovingCursor_Move2(@ptrCast(self.ptr), @bitCast(chars), @bitCast(wrapBehavior));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn delete(self: KTextEditor__MovingCursor) void {
        qtc.KTextEditor__MovingCursor_Delete(@ptrCast(self.ptr));
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
