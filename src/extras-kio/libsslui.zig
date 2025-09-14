const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const sslui_enums = enums;

/// https://api.kde.org/kio-sslui.html
pub const kio__sslui = struct {
    /// [Qt documentation](https://api.kde.org/kio-sslui.html#askIgnoreSslErrors)
    ///
    /// ``` param1: QtC.KSslErrorUiData, param2: sslui_enums.RulesStorage ```
    pub fn AskIgnoreSslErrors(param1: ?*anyopaque, param2: i32) bool {
        return qtc.KIO__SslUi_AskIgnoreSslErrors(@ptrCast(param1), @intCast(param2));
    }
};

/// https://api.kde.org/kio-sslui.html#types
pub const enums = struct {
    pub const RulesStorage = enum {
        pub const RecallRules: i32 = 1;
        pub const StoreRules: i32 = 2;
        pub const RecallAndStoreRules: i32 = 3;
    };
};
