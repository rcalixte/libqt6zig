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
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn SetSessionConfig(param1: []const u8, param2: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KConfigGui_SetSessionConfig(param1_str, param2_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfiggui.html#hasSessionConfig)
    ///
    pub fn HasSessionConfig() bool {
        return qtc.KConfigGui_HasSessionConfig();
    }
};
