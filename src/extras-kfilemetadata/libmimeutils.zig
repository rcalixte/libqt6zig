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
    /// ` param1: []const u8 `
    ///
    /// ` param2: QMimeDatabase `
    ///
    pub fn StrictMimeType(param1: []const u8, param2: anytype) QMimeType {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        comptime _ = @TypeOf(param2)._is_QMimeDatabase;
        return .{ .ptr = qtc.KFileMetaData__MimeUtils_StrictMimeType(param1_str, @ptrCast(param2.ptr)) };
    }
};
