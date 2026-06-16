const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMimeDatabase = @import("libqt6").QMimeDatabase;
const QMimeType = @import("libqt6").QMimeType;

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-mimeutils.html)
pub const KFileMetaData__MimeUtils = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-mimeutils.html#strictMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` db: QMimeDatabase `
    ///
    pub fn StrictMimeType(filePath: []const u8, db: anytype) QMimeType {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        comptime _ = @TypeOf(db)._is_QMimeDatabase;
        return .{ .ptr = qtc.KFileMetaData__MimeUtils_StrictMimeType(filePath_str, @ptrCast(db.ptr)) };
    }
};
