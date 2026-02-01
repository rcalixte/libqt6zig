const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const documentcursor_enums = enums;

/// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html)
pub const ktexteditor__documentcursor = struct {
    /// New constructs a new KTextEditor::DocumentCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: QtC.KTextEditor__Document `
    ///
    pub fn New(document: ?*anyopaque) QtC.KTextEditor__DocumentCursor {
        return qtc.KTextEditor__DocumentCursor_new(@ptrCast(document));
    }

    /// New2 constructs a new KTextEditor::DocumentCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: QtC.KTextEditor__Document `
    ///
    /// ` position: QtC.KTextEditor__Cursor `
    ///
    pub fn New2(document: ?*anyopaque, position: QtC.KTextEditor__Cursor) QtC.KTextEditor__DocumentCursor {
        return qtc.KTextEditor__DocumentCursor_new2(@ptrCast(document), @ptrCast(position));
    }

    /// New3 constructs a new KTextEditor::DocumentCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: QtC.KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn New3(document: ?*anyopaque, line: i32, column: i32) QtC.KTextEditor__DocumentCursor {
        return qtc.KTextEditor__DocumentCursor_new3(@ptrCast(document), @intCast(line), @intCast(column));
    }

    /// New4 constructs a new KTextEditor::DocumentCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn New4(other: ?*anyopaque) QtC.KTextEditor__DocumentCursor {
        return qtc.KTextEditor__DocumentCursor_new4(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn Document(self: ?*anyopaque) QtC.KTextEditor__Document {
        return qtc.KTextEditor__DocumentCursor_Document(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    /// ` position: QtC.KTextEditor__Cursor `
    ///
    pub fn SetPosition(self: ?*anyopaque, position: QtC.KTextEditor__Cursor) void {
        qtc.KTextEditor__DocumentCursor_SetPosition(@ptrCast(self), @ptrCast(position));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#line)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn Line(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__DocumentCursor_Line(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn Column(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__DocumentCursor_Column(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#isValidTextPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn IsValidTextPosition(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_IsValidTextPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#makeValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn MakeValid(self: ?*anyopaque) void {
        qtc.KTextEditor__DocumentCursor_MakeValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SetPosition2(self: ?*anyopaque, line: i32, column: i32) void {
        qtc.KTextEditor__DocumentCursor_SetPosition2(@ptrCast(self), @intCast(line), @intCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    /// ` line: i32 `
    ///
    pub fn SetLine(self: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__DocumentCursor_SetLine(@ptrCast(self), @intCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#setColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    /// ` column: i32 `
    ///
    pub fn SetColumn(self: ?*anyopaque, column: i32) void {
        qtc.KTextEditor__DocumentCursor_SetColumn(@ptrCast(self), @intCast(column));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#atStartOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn AtStartOfLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_AtStartOfLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#atEndOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn AtEndOfLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_AtEndOfLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#atStartOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn AtStartOfDocument(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_AtStartOfDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#atEndOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn AtEndOfDocument(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_AtEndOfDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#gotoNextLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn GotoNextLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_GotoNextLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#gotoPreviousLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn GotoPreviousLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_GotoPreviousLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    /// ` chars: i32 `
    ///
    pub fn Move(self: ?*anyopaque, chars: i32) bool {
        return qtc.KTextEditor__DocumentCursor_Move(@ptrCast(self), @intCast(chars));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#toCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn ToCursor(self: ?*anyopaque) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__DocumentCursor_ToCursor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    /// ` other: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KTextEditor__DocumentCursor_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    /// ` chars: i32 `
    ///
    /// ` wrapBehavior: documentcursor_enums.WrapBehavior `
    ///
    pub fn Move2(self: ?*anyopaque, chars: i32, wrapBehavior: i32) bool {
        return qtc.KTextEditor__DocumentCursor_Move2(@ptrCast(self), @intCast(chars), @intCast(wrapBehavior));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEditor__DocumentCursor `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__DocumentCursor_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/documentcursor.html#public-types)
pub const enums = struct {
    pub const WrapBehavior = enum(i32) {
        pub const Wrap: i32 = 0;
        pub const NoWrap: i32 = 1;
    };
};
