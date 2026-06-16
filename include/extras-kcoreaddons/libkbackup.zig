const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kbackup.html)
pub const KBackup = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kbackup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KBackup,

    pub const _is_KBackup = {};

    /// ### [Upstream resources](https://api.kde.org/kbackup.html#simpleBackupFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    /// ` backupDir: []const u8 `
    ///
    /// ` backupExtension: []const u8 `
    ///
    pub fn SimpleBackupFile(filename: []const u8, backupDir: []const u8, backupExtension: []const u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const backupDir_str = qtc.libqt_string{
            .len = backupDir.len,
            .data = backupDir.ptr,
        };
        const backupExtension_str = qtc.libqt_string{
            .len = backupExtension.len,
            .data = backupExtension.ptr,
        };
        return qtc.KBackup_SimpleBackupFile(filename_str, backupDir_str, backupExtension_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kbackup.html#numberedBackupFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    /// ` backupDir: []const u8 `
    ///
    /// ` backupExtension: []const u8 `
    ///
    /// ` maxBackups: u32 `
    ///
    pub fn NumberedBackupFile(filename: []const u8, backupDir: []const u8, backupExtension: []const u8, maxBackups: u32) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const backupDir_str = qtc.libqt_string{
            .len = backupDir.len,
            .data = backupDir.ptr,
        };
        const backupExtension_str = qtc.libqt_string{
            .len = backupExtension.len,
            .data = backupExtension.ptr,
        };
        return qtc.KBackup_NumberedBackupFile(filename_str, backupDir_str, backupExtension_str, @bitCast(maxBackups));
    }
};
