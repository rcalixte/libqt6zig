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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::InlineNote object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__InlineNote `
    ///
    pub fn new(other: anytype) KTextEditor__InlineNote {
        comptime _ = @TypeOf(other)._is_KTextEditor__InlineNote;
        return .{ .ptr = qtc.KTextEditor__InlineNote_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTextEditor::InlineNote object and invalidate the source KTextEditor::InlineNote object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__InlineNote `
    ///
    pub fn new2(other: anytype) KTextEditor__InlineNote {
        comptime _ = @TypeOf(other)._is_KTextEditor__InlineNote;
        return .{ .ptr = qtc.KTextEditor__InlineNote_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn width(self: KTextEditor__InlineNote) f64 {
        return qtc.KTextEditor__InlineNote_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `provider` instead
    ///
    pub const Provider = provider;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#provider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn provider(self: KTextEditor__InlineNote) KTextEditor__InlineNoteProvider {
        return .{ .ptr = qtc.KTextEditor__InlineNote_Provider(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `view` instead
    ///
    pub const View = view;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn view(self: KTextEditor__InlineNote) KTextEditor__View {
        return .{ .ptr = qtc.KTextEditor__InlineNote_View(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn position(self: KTextEditor__InlineNote) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__InlineNote_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn index(self: KTextEditor__InlineNote) i32 {
        return qtc.KTextEditor__InlineNote_Index(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `underMouse` instead
    ///
    pub const UnderMouse = underMouse;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn underMouse(self: KTextEditor__InlineNote) bool {
        return qtc.KTextEditor__InlineNote_UnderMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn font(self: KTextEditor__InlineNote) QFont {
        return .{ .ptr = qtc.KTextEditor__InlineNote_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineHeight` instead
    ///
    pub const LineHeight = lineHeight;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#lineHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn lineHeight(self: KTextEditor__InlineNote) i32 {
        return qtc.KTextEditor__InlineNote_LineHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__InlineNote `
    ///
    pub fn delete(self: KTextEditor__InlineNote) void {
        qtc.KTextEditor__InlineNote_Delete(@ptrCast(self.ptr));
    }
};
