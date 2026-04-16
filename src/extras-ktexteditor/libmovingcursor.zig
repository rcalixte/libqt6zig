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

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setInsertBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` insertBehavior: movingcursor_enums.InsertBehavior `
    ///
    pub fn SetInsertBehavior(self: KTextEditor__MovingCursor, insertBehavior: i32) void {
        qtc.KTextEditor__MovingCursor_SetInsertBehavior(@ptrCast(self.ptr), @bitCast(insertBehavior));
    }

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
    pub fn InsertBehavior(self: KTextEditor__MovingCursor) i32 {
        return qtc.KTextEditor__MovingCursor_InsertBehavior(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn Document(self: KTextEditor__MovingCursor) KTextEditor__Document {
        return .{ .ptr = qtc.KTextEditor__MovingCursor_Document(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#range)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn Range(self: KTextEditor__MovingCursor) KTextEditor__MovingRange {
        return .{ .ptr = qtc.KTextEditor__MovingCursor_Range(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn SetPosition(self: KTextEditor__MovingCursor, position: anytype) void {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        qtc.KTextEditor__MovingCursor_SetPosition(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#line)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn Line(self: KTextEditor__MovingCursor) i32 {
        return qtc.KTextEditor__MovingCursor_Line(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn Column(self: KTextEditor__MovingCursor) i32 {
        return qtc.KTextEditor__MovingCursor_Column(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn IsValid(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#isValidTextPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn IsValidTextPosition(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_IsValidTextPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SetPosition2(self: KTextEditor__MovingCursor, line: i32, column: i32) void {
        qtc.KTextEditor__MovingCursor_SetPosition2(@ptrCast(self.ptr), @bitCast(line), @bitCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` line: i32 `
    ///
    pub fn SetLine(self: KTextEditor__MovingCursor, line: i32) void {
        qtc.KTextEditor__MovingCursor_SetLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` column: i32 `
    ///
    pub fn SetColumn(self: KTextEditor__MovingCursor, column: i32) void {
        qtc.KTextEditor__MovingCursor_SetColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atStartOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn AtStartOfLine(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_AtStartOfLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atEndOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn AtEndOfLine(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_AtEndOfLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atStartOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn AtStartOfDocument(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_AtStartOfDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atEndOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn AtEndOfDocument(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_AtEndOfDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#gotoNextLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn GotoNextLine(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_GotoNextLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#gotoPreviousLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn GotoPreviousLine(self: KTextEditor__MovingCursor) bool {
        return qtc.KTextEditor__MovingCursor_GotoPreviousLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    /// ` chars: i32 `
    ///
    pub fn Move(self: KTextEditor__MovingCursor, chars: i32) bool {
        return qtc.KTextEditor__MovingCursor_Move(@ptrCast(self.ptr), @bitCast(chars));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#toCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn ToCursor(self: KTextEditor__MovingCursor) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__MovingCursor_ToCursor(@ptrCast(self.ptr)) };
    }

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
    pub fn Move2(self: KTextEditor__MovingCursor, chars: i32, wrapBehavior: i32) bool {
        return qtc.KTextEditor__MovingCursor_Move2(@ptrCast(self.ptr), @bitCast(chars), @bitCast(wrapBehavior));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__MovingCursor `
    ///
    pub fn Delete(self: KTextEditor__MovingCursor) void {
        qtc.KTextEditor__MovingCursor_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/movingcursor.html#public-types)
pub const enums = struct {
    pub const InsertBehavior = enum(i32) {
        pub const StayOnInsert: i32 = 0;
        pub const MoveOnInsert: i32 = 1;
    };

    pub const WrapBehavior = enum(i32) {
        pub const Wrap: i32 = 0;
        pub const NoWrap: i32 = 1;
    };
};
