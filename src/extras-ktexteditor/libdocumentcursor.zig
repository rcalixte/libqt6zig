const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__Cursor = @import("libqt6").KTextEditor__Cursor;
const KTextEditor__Document = @import("libqt6").KTextEditor__Document;
const documentcursor_enums = enums;

/// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html)
pub const KTextEditor__DocumentCursor = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__DocumentCursor,

    pub const _is_KTextEditor__DocumentCursor = {};

    /// New constructs a new KTextEditor::DocumentCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn New(document: anytype) KTextEditor__DocumentCursor {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        return .{ .ptr = qtc.KTextEditor__DocumentCursor_new(@ptrCast(document.ptr)) };
    }

    /// New2 constructs a new KTextEditor::DocumentCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn New2(document: anytype, position: anytype) KTextEditor__DocumentCursor {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__DocumentCursor_new2(@ptrCast(document.ptr), @ptrCast(position.ptr)) };
    }

    /// New3 constructs a new KTextEditor::DocumentCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn New3(document: anytype, line: i32, column: i32) KTextEditor__DocumentCursor {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        return .{ .ptr = qtc.KTextEditor__DocumentCursor_new3(@ptrCast(document.ptr), @bitCast(line), @bitCast(column)) };
    }

    /// New4 constructs a new KTextEditor::DocumentCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__DocumentCursor `
    ///
    pub fn New4(other: anytype) KTextEditor__DocumentCursor {
        comptime _ = @TypeOf(other)._is_KTextEditor__DocumentCursor;
        return .{ .ptr = qtc.KTextEditor__DocumentCursor_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn Document(self: KTextEditor__DocumentCursor) KTextEditor__Document {
        return .{ .ptr = qtc.KTextEditor__DocumentCursor_Document(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn SetPosition(self: KTextEditor__DocumentCursor, position: anytype) void {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        qtc.KTextEditor__DocumentCursor_SetPosition(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#line)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn Line(self: KTextEditor__DocumentCursor) i32 {
        return qtc.KTextEditor__DocumentCursor_Line(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn Column(self: KTextEditor__DocumentCursor) i32 {
        return qtc.KTextEditor__DocumentCursor_Column(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn IsValid(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#isValidTextPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn IsValidTextPosition(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_IsValidTextPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#makeValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn MakeValid(self: KTextEditor__DocumentCursor) void {
        qtc.KTextEditor__DocumentCursor_MakeValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SetPosition2(self: KTextEditor__DocumentCursor, line: i32, column: i32) void {
        qtc.KTextEditor__DocumentCursor_SetPosition2(@ptrCast(self.ptr), @bitCast(line), @bitCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` line: i32 `
    ///
    pub fn SetLine(self: KTextEditor__DocumentCursor, line: i32) void {
        qtc.KTextEditor__DocumentCursor_SetLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#setColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` column: i32 `
    ///
    pub fn SetColumn(self: KTextEditor__DocumentCursor, column: i32) void {
        qtc.KTextEditor__DocumentCursor_SetColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#atStartOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn AtStartOfLine(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_AtStartOfLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#atEndOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn AtEndOfLine(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_AtEndOfLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#atStartOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn AtStartOfDocument(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_AtStartOfDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#atEndOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn AtEndOfDocument(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_AtEndOfDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#gotoNextLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn GotoNextLine(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_GotoNextLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#gotoPreviousLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn GotoPreviousLine(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_GotoPreviousLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` chars: i32 `
    ///
    pub fn Move(self: KTextEditor__DocumentCursor, chars: i32) bool {
        return qtc.KTextEditor__DocumentCursor_Move(@ptrCast(self.ptr), @bitCast(chars));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#toCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn ToCursor(self: KTextEditor__DocumentCursor) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__DocumentCursor_ToCursor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` other: KTextEditor__DocumentCursor `
    ///
    pub fn OperatorAssign(self: KTextEditor__DocumentCursor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KTextEditor__DocumentCursor;
        qtc.KTextEditor__DocumentCursor_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` chars: i32 `
    ///
    /// ` wrapBehavior: documentcursor_enums.WrapBehavior `
    ///
    pub fn Move2(self: KTextEditor__DocumentCursor, chars: i32, wrapBehavior: i32) bool {
        return qtc.KTextEditor__DocumentCursor_Move2(@ptrCast(self.ptr), @bitCast(chars), @bitCast(wrapBehavior));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn Delete(self: KTextEditor__DocumentCursor) void {
        qtc.KTextEditor__DocumentCursor_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/documentcursor.html#public-types)
pub const enums = struct {
    pub const WrapBehavior = enum(i32) {
        pub const Wrap: i32 = 0;
        pub const NoWrap: i32 = 1;
    };
};
