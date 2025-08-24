const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api-staging.kde.org/kmimetypeeditor.html
pub const kmimetypeeditor = struct {
    /// [Qt documentation](https://api-staging.kde.org/kmimetypeeditor.html#editMimeType)
    ///
    /// ``` param1: []const u8, param2: QtC.QWidget ```
    pub fn EditMimeType(param1: []const u8, param2: ?*anyopaque) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KMimeTypeEditor_EditMimeType(param1_str, @ptrCast(param2));
    }
};
