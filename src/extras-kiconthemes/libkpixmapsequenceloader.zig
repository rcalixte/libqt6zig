const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KPixmapSequence = @import("libqt6").KPixmapSequence;

/// ### [Upstream resources](https://api.kde.org/kpixmapsequenceloader.html)
pub const KPixmapSequenceLoader = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceloader.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KPixmapSequenceLoader,

    pub const _is_KPixmapSequenceLoader = {};

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceloader.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn Load(iconName: []const u8, size: i32) KPixmapSequence {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return .{ .ptr = qtc.KPixmapSequenceLoader_Load(iconName_str, @bitCast(size)) };
    }
};
