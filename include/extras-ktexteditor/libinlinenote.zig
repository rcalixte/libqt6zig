const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/ktexteditor-inlinenote.html
pub const ktexteditor__inlinenote = struct {
    /// New constructs a new KTextEditor::InlineNote object.
    ///
    /// ``` other: QtC.KTextEditor__InlineNote ```
    pub fn New(other: ?*anyopaque) QtC.KTextEditor__InlineNote {
        return qtc.KTextEditor__InlineNote_new(@ptrCast(other));
    }

    /// New2 constructs a new KTextEditor::InlineNote object and invalidates the source KTextEditor::InlineNote object.
    ///
    /// ``` other: QtC.KTextEditor__InlineNote ```
    pub fn New2(other: ?*anyopaque) QtC.KTextEditor__InlineNote {
        return qtc.KTextEditor__InlineNote_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#width)
    ///
    /// ``` self: QtC.KTextEditor__InlineNote ```
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.KTextEditor__InlineNote_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#provider)
    ///
    /// ``` self: QtC.KTextEditor__InlineNote ```
    pub fn Provider(self: ?*anyopaque) QtC.KTextEditor__InlineNoteProvider {
        return qtc.KTextEditor__InlineNote_Provider(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#view)
    ///
    /// ``` self: QtC.KTextEditor__InlineNote ```
    pub fn View(self: ?*anyopaque) QtC.KTextEditor__View {
        return qtc.KTextEditor__InlineNote_View(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#position)
    ///
    /// ``` self: QtC.KTextEditor__InlineNote ```
    pub fn Position(self: ?*anyopaque) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__InlineNote_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#index)
    ///
    /// ``` self: QtC.KTextEditor__InlineNote ```
    pub fn Index(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__InlineNote_Index(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#underMouse)
    ///
    /// ``` self: QtC.KTextEditor__InlineNote ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.KTextEditor__InlineNote_UnderMouse(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#font)
    ///
    /// ``` self: QtC.KTextEditor__InlineNote ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.KTextEditor__InlineNote_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#lineHeight)
    ///
    /// ``` self: QtC.KTextEditor__InlineNote ```
    pub fn LineHeight(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__InlineNote_LineHeight(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__InlineNote ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__InlineNote_Delete(@ptrCast(self));
    }
};
