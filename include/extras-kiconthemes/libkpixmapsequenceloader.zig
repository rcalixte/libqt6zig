const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kpixmapsequenceloader.html
pub const kpixmapsequenceloader = struct {
    /// [Qt documentation](https://api.kde.org/kpixmapsequenceloader.html#load)
    ///
    /// ``` param1: []const u8, param2: i32 ```
    pub fn Load(param1: []const u8, param2: i32) QtC.KPixmapSequence {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KPixmapSequenceLoader_Load(param1_str, @intCast(param2));
    }
};
