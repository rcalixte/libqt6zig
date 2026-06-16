const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/khelpclient.html)
pub const KHelpClient = extern struct {
    /// ### [Upstream resources](https://api.kde.org/khelpclient.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KHelpClient,

    pub const _is_KHelpClient = {};

    /// ### [Upstream resources](https://api.kde.org/khelpclient.html#invokeHelp)
    ///
    /// ## Parameter(s):
    ///
    /// ` anchor: []const u8 `
    ///
    /// ` appname: []const u8 `
    ///
    pub fn InvokeHelp(anchor: []const u8, appname: []const u8) void {
        const anchor_str = qtc.libqt_string{
            .len = anchor.len,
            .data = anchor.ptr,
        };
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        qtc.KHelpClient_InvokeHelp(anchor_str, appname_str);
    }
};
