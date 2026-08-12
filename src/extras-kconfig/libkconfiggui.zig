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

    /// ### DEPRECATED: Use `sessionConfig` instead
    ///
    pub const SessionConfig = sessionConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfiggui.html#sessionConfig)
    ///
    pub fn sessionConfig() KConfig {
        return .{ .ptr = qtc.KConfigGui_SessionConfig() };
    }

    /// ### DEPRECATED: Use `setSessionConfig` instead
    ///
    pub const SetSessionConfig = setSessionConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfiggui.html#setSessionConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn setSessionConfig(id: []const u8, key: []const u8) void {
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

    /// ### DEPRECATED: Use `hasSessionConfig` instead
    ///
    pub const HasSessionConfig = hasSessionConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfiggui.html#hasSessionConfig)
    ///
    pub fn hasSessionConfig() bool {
        return qtc.KConfigGui_HasSessionConfig();
    }
};
