const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QWidget = @import("libqt6").QWidget;

/// ### [Upstream resources](https://api.kde.org/kmimetypeeditor.html)
pub const KMimeTypeEditor = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kmimetypeeditor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KMimeTypeEditor,

    pub const _is_KMimeTypeEditor = {};

    /// ### [Upstream resources](https://api.kde.org/kmimetypeeditor.html#editMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeType: []const u8 `
    ///
    /// ` widget: QWidget `
    ///
    pub fn EditMimeType(mimeType: []const u8, widget: anytype) void {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KMimeTypeEditor_EditMimeType(mimeType_str, @ptrCast(widget.ptr));
    }
};
