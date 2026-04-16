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
    /// ` param1: []const u8 `
    ///
    /// ` param2: QWidget `
    ///
    pub fn EditMimeType(param1: []const u8, param2: anytype) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        comptime _ = @TypeOf(param2)._is_QWidget;
        qtc.KMimeTypeEditor_EditMimeType(param1_str, @ptrCast(param2.ptr));
    }
};
