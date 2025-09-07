const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kbackup.html
pub const kbackup = struct {
    /// [Qt documentation](https://api.kde.org/kbackup.html#simpleBackupFile)
    ///
    /// ``` param1: []const u8, param2: []const u8, param3: []const u8 ```
    pub fn SimpleBackupFile(param1: []const u8, param2: []const u8, param3: []const u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        return qtc.KBackup_SimpleBackupFile(param1_str, param2_str, param3_str);
    }

    /// [Qt documentation](https://api.kde.org/kbackup.html#numberedBackupFile)
    ///
    /// ``` param1: []const u8, param2: []const u8, param3: []const u8, param4: u32 ```
    pub fn NumberedBackupFile(param1: []const u8, param2: []const u8, param3: []const u8, param4: u32) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        return qtc.KBackup_NumberedBackupFile(param1_str, param2_str, param3_str, @intCast(param4));
    }
};
