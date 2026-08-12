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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::DocumentCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _document: KTextEditor__Document `
    ///
    pub fn new(_document: anytype) KTextEditor__DocumentCursor {
        comptime _ = @TypeOf(_document)._is_KTextEditor__Document;
        return .{ .ptr = qtc.KTextEditor__DocumentCursor_new(@ptrCast(_document.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTextEditor::DocumentCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _document: KTextEditor__Document `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn new2(_document: anytype, position: anytype) KTextEditor__DocumentCursor {
        comptime _ = @TypeOf(_document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__DocumentCursor_new2(@ptrCast(_document.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KTextEditor::DocumentCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _document: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn new3(_document: anytype, _line: i32, _column: i32) KTextEditor__DocumentCursor {
        comptime _ = @TypeOf(_document)._is_KTextEditor__Document;
        return .{ .ptr = qtc.KTextEditor__DocumentCursor_new3(@ptrCast(_document.ptr), @bitCast(_line), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KTextEditor::DocumentCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__DocumentCursor `
    ///
    pub fn new4(other: anytype) KTextEditor__DocumentCursor {
        comptime _ = @TypeOf(other)._is_KTextEditor__DocumentCursor;
        return .{ .ptr = qtc.KTextEditor__DocumentCursor_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn document(self: KTextEditor__DocumentCursor) KTextEditor__Document {
        return .{ .ptr = qtc.KTextEditor__DocumentCursor_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn setPosition(self: KTextEditor__DocumentCursor, position: anytype) void {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        qtc.KTextEditor__DocumentCursor_SetPosition(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `line` instead
    ///
    pub const Line = line;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#line)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn line(self: KTextEditor__DocumentCursor) i32 {
        return qtc.KTextEditor__DocumentCursor_Line(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `column` instead
    ///
    pub const Column = column;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn column(self: KTextEditor__DocumentCursor) i32 {
        return qtc.KTextEditor__DocumentCursor_Column(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn isValid(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValidTextPosition` instead
    ///
    pub const IsValidTextPosition = isValidTextPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#isValidTextPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn isValidTextPosition(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_IsValidTextPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `makeValid` instead
    ///
    pub const MakeValid = makeValid;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#makeValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn makeValid(self: KTextEditor__DocumentCursor) void {
        qtc.KTextEditor__DocumentCursor_MakeValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition2` instead
    ///
    pub const SetPosition2 = setPosition2;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` _line: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn setPosition2(self: KTextEditor__DocumentCursor, _line: i32, _column: i32) void {
        qtc.KTextEditor__DocumentCursor_SetPosition2(@ptrCast(self.ptr), @bitCast(_line), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `setLine` instead
    ///
    pub const SetLine = setLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` _line: i32 `
    ///
    pub fn setLine(self: KTextEditor__DocumentCursor, _line: i32) void {
        qtc.KTextEditor__DocumentCursor_SetLine(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `setColumn` instead
    ///
    pub const SetColumn = setColumn;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#setColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` _column: i32 `
    ///
    pub fn setColumn(self: KTextEditor__DocumentCursor, _column: i32) void {
        qtc.KTextEditor__DocumentCursor_SetColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `atStartOfLine` instead
    ///
    pub const AtStartOfLine = atStartOfLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#atStartOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn atStartOfLine(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_AtStartOfLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atEndOfLine` instead
    ///
    pub const AtEndOfLine = atEndOfLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#atEndOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn atEndOfLine(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_AtEndOfLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atStartOfDocument` instead
    ///
    pub const AtStartOfDocument = atStartOfDocument;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#atStartOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn atStartOfDocument(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_AtStartOfDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atEndOfDocument` instead
    ///
    pub const AtEndOfDocument = atEndOfDocument;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#atEndOfDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn atEndOfDocument(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_AtEndOfDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `gotoNextLine` instead
    ///
    pub const GotoNextLine = gotoNextLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#gotoNextLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn gotoNextLine(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_GotoNextLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `gotoPreviousLine` instead
    ///
    pub const GotoPreviousLine = gotoPreviousLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#gotoPreviousLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn gotoPreviousLine(self: KTextEditor__DocumentCursor) bool {
        return qtc.KTextEditor__DocumentCursor_GotoPreviousLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `move` instead
    ///
    pub const Move = move;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` chars: i32 `
    ///
    pub fn move(self: KTextEditor__DocumentCursor, chars: i32) bool {
        return qtc.KTextEditor__DocumentCursor_Move(@ptrCast(self.ptr), @bitCast(chars));
    }

    /// ### DEPRECATED: Use `toCursor` instead
    ///
    pub const ToCursor = toCursor;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#toCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn toCursor(self: KTextEditor__DocumentCursor) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__DocumentCursor_ToCursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-documentcursor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    /// ` other: KTextEditor__DocumentCursor `
    ///
    pub fn operatorAssign(self: KTextEditor__DocumentCursor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KTextEditor__DocumentCursor;
        qtc.KTextEditor__DocumentCursor_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `move2` instead
    ///
    pub const Move2 = move2;

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
    pub fn move2(self: KTextEditor__DocumentCursor, chars: i32, wrapBehavior: i32) bool {
        return qtc.KTextEditor__DocumentCursor_Move2(@ptrCast(self.ptr), @bitCast(chars), @bitCast(wrapBehavior));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__DocumentCursor `
    ///
    pub fn delete(self: KTextEditor__DocumentCursor) void {
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
