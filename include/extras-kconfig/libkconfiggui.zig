const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api-staging.kde.org/kconfiggui.html
pub const kconfiggui = struct {
    /// [Qt documentation](https://api-staging.kde.org/kconfiggui.html#sessionConfig)
    ///
    ///
    pub fn SessionConfig() QtC.KConfig {
        return qtc.KConfigGui_SessionConfig();
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfiggui.html#setSessionConfig)
    ///
    /// ``` param1: []const u8, param2: []const u8 ```
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

    /// [Qt documentation](https://api-staging.kde.org/kconfiggui.html#hasSessionConfig)
    ///
    ///
    pub fn HasSessionConfig() bool {
        return qtc.KConfigGui_HasSessionConfig();
    }
};
