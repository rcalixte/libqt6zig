const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const documentcursor_enums = enums;

/// https://api.kde.org/ktexteditor-documentcursor.html
pub const ktexteditor__documentcursor = struct {
    /// New constructs a new KTextEditor::DocumentCursor object.
    ///
    /// ``` document: QtC.KTextEditor__Document ```
    pub fn New(document: ?*anyopaque) QtC.KTextEditor__DocumentCursor {
        return qtc.KTextEditor__DocumentCursor_new(@ptrCast(document));
    }

    /// New2 constructs a new KTextEditor::DocumentCursor object.
    ///
    /// ``` document: QtC.KTextEditor__Document, position: QtC.KTextEditor__Cursor ```
    pub fn New2(document: ?*anyopaque, position: QtC.KTextEditor__Cursor) QtC.KTextEditor__DocumentCursor {
        return qtc.KTextEditor__DocumentCursor_new2(@ptrCast(document), @ptrCast(position));
    }

    /// New3 constructs a new KTextEditor::DocumentCursor object.
    ///
    /// ``` document: QtC.KTextEditor__Document, line: i32, column: i32 ```
    pub fn New3(document: ?*anyopaque, line: i32, column: i32) QtC.KTextEditor__DocumentCursor {
        return qtc.KTextEditor__DocumentCursor_new3(@ptrCast(document), @intCast(line), @intCast(column));
    }

    /// New4 constructs a new KTextEditor::DocumentCursor object.
    ///
    /// ``` other: QtC.KTextEditor__DocumentCursor ```
    pub fn New4(other: ?*anyopaque) QtC.KTextEditor__DocumentCursor {
        return qtc.KTextEditor__DocumentCursor_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#document)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn Document(self: ?*anyopaque) QtC.KTextEditor__Document {
        return qtc.KTextEditor__DocumentCursor_Document(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#setPosition)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor, position: QtC.KTextEditor__Cursor ```
    pub fn SetPosition(self: ?*anyopaque, position: QtC.KTextEditor__Cursor) void {
        qtc.KTextEditor__DocumentCursor_SetPosition(@ptrCast(self), @ptrCast(position));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#line)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn Line(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__DocumentCursor_Line(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#column)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn Column(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__DocumentCursor_Column(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#isValid)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#isValidTextPosition)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn IsValidTextPosition(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_IsValidTextPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#makeValid)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn MakeValid(self: ?*anyopaque) void {
        qtc.KTextEditor__DocumentCursor_MakeValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#setPosition)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor, line: i32, column: i32 ```
    pub fn SetPosition2(self: ?*anyopaque, line: i32, column: i32) void {
        qtc.KTextEditor__DocumentCursor_SetPosition2(@ptrCast(self), @intCast(line), @intCast(column));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#setLine)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor, line: i32 ```
    pub fn SetLine(self: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__DocumentCursor_SetLine(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#setColumn)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor, column: i32 ```
    pub fn SetColumn(self: ?*anyopaque, column: i32) void {
        qtc.KTextEditor__DocumentCursor_SetColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#atStartOfLine)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn AtStartOfLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_AtStartOfLine(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#atEndOfLine)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn AtEndOfLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_AtEndOfLine(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#atStartOfDocument)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn AtStartOfDocument(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_AtStartOfDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#atEndOfDocument)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn AtEndOfDocument(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_AtEndOfDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#gotoNextLine)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn GotoNextLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_GotoNextLine(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#gotoPreviousLine)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn GotoPreviousLine(self: ?*anyopaque) bool {
        return qtc.KTextEditor__DocumentCursor_GotoPreviousLine(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#move)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor, chars: i32 ```
    pub fn Move(self: ?*anyopaque, chars: i32) bool {
        return qtc.KTextEditor__DocumentCursor_Move(@ptrCast(self), @intCast(chars));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#toCursor)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn ToCursor(self: ?*anyopaque) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__DocumentCursor_ToCursor(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#operator-eq)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor, other: QtC.KTextEditor__DocumentCursor ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KTextEditor__DocumentCursor_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#move)
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor, chars: i32, wrapBehavior: documentcursor_enums.WrapBehavior ```
    pub fn Move2(self: ?*anyopaque, chars: i32, wrapBehavior: i32) bool {
        return qtc.KTextEditor__DocumentCursor_Move2(@ptrCast(self), @intCast(chars), @intCast(wrapBehavior));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__DocumentCursor ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__DocumentCursor_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/documentcursor.html#types
pub const enums = struct {
    pub const WrapBehavior = enum {
        pub const Wrap: i32 = 0;
        pub const NoWrap: i32 = 1;
    };
};
