const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfig = @import("libqt6").KConfig;

/// ### [Upstream resources](https://api.kde.org/kconfiggui.html)
pub const KConfigGui = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfiggui.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigGui,

    pub const _is_KConfigGui = {};

    /// ### [Upstream resources](https://api.kde.org/kconfiggui.html#sessionConfig)
    ///
    pub fn SessionConfig() KConfig {
        return .{ .ptr = qtc.KConfigGui_SessionConfig() };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggui.html#setSessionConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SetSessionConfig(id: []const u8, key: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.KConfigGui_SetSessionConfig(id_str, key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggui.html#hasSessionConfig)
    ///
    pub fn HasSessionConfig() bool {
        return qtc.KConfigGui_HasSessionConfig();
    }
};
