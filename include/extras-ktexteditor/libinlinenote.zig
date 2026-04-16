const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__Cursor = @import("libqt6").KTextEditor__Cursor;
const KTextEditor__InlineNoteProvider = @import("libqt6").KTextEditor__InlineNoteProvider;
const KTextEditor__View = @import("libqt6").KTextEditor__View;
const QFont = @import("libqt6").QFont;

/// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html)
pub const KTextEditor__InlineNote = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__InlineNote,

    pub const _is_KTextEditor__InlineNote = {};

    /// New constructs a new KTextEditor::InlineNote object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__InlineNote `
    ///
    pub fn New(other: anytype) KTextEditor__InlineNote {
        comptime _ = @TypeOf(other)._is_KTextEditor__InlineNote;
        return .{ .ptr = qtc.KTextEditor__InlineNote_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KTextEditor::InlineNote object and invalidates the source KTextEditor::InlineNote object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__InlineNote `
    ///
    pub fn New2(other: anytype) KTextEditor__InlineNote {
        comptime _ = @TypeOf(other)._is_KTextEditor__InlineNote;
        return .{ .ptr = qtc.KTextEditor__InlineNote_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn Width(self: KTextEditor__InlineNote) f64 {
        return qtc.KTextEditor__InlineNote_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#provider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn Provider(self: KTextEditor__InlineNote) KTextEditor__InlineNoteProvider {
        return .{ .ptr = qtc.KTextEditor__InlineNote_Provider(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn View(self: KTextEditor__InlineNote) KTextEditor__View {
        return .{ .ptr = qtc.KTextEditor__InlineNote_View(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn Position(self: KTextEditor__InlineNote) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__InlineNote_Position(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn Index(self: KTextEditor__InlineNote) i32 {
        return qtc.KTextEditor__InlineNote_Index(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn UnderMouse(self: KTextEditor__InlineNote) bool {
        return qtc.KTextEditor__InlineNote_UnderMouse(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn Font(self: KTextEditor__InlineNote) QFont {
        return .{ .ptr = qtc.KTextEditor__InlineNote_Font(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#lineHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn LineHeight(self: KTextEditor__InlineNote) i32 {
        return qtc.KTextEditor__InlineNote_LineHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn Delete(self: KTextEditor__InlineNote) void {
        qtc.KTextEditor__InlineNote_Delete(@ptrCast(self.ptr));
    }
};
