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
    /// ` param1: []const u8 `
    ///
    /// ` param2: i32 `
    ///
    pub fn Load(param1: []const u8, param2: i32) KPixmapSequence {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return .{ .ptr = qtc.KPixmapSequenceLoader_Load(param1_str, @bitCast(param2)) };
    }
};
