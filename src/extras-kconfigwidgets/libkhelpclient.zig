const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/khelpclient.html
pub const khelpclient = struct {
    /// [Qt documentation](https://api.kde.org/khelpclient.html#invokeHelp)
    ///
    /// ``` param1: []const u8, param2: []const u8 ```
    pub fn InvokeHelp(param1: []const u8, param2: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KHelpClient_InvokeHelp(param1_str, param2_str);
    }
};
