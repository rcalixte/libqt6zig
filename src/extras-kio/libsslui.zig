const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KSslErrorUiData = @import("libqt6").KSslErrorUiData;
const sslui_enums = enums;

/// ### [Upstream resources](https://api.kde.org/kio-sslui.html)
pub const KIO__SslUi = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-sslui.html#askIgnoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KSslErrorUiData `
    ///
    /// ` param2: sslui_enums.RulesStorage `
    ///
    pub fn AskIgnoreSslErrors(param1: anytype, param2: i32) bool {
        comptime _ = @TypeOf(param1)._is_KSslErrorUiData;
        return qtc.KIO__SslUi_AskIgnoreSslErrors(@ptrCast(param1.ptr), @bitCast(param2));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-sslui.html#public-types)
pub const enums = struct {
    pub const RulesStorage = enum(i32) {
        pub const RecallRules: i32 = 1;
        pub const StoreRules: i32 = 2;
        pub const RecallAndStoreRules: i32 = 3;
    };
};
