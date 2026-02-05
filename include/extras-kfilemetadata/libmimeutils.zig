const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-mimeutils.html)
pub const kfilemetadata__mimeutils = struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-mimeutils.html#strictMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: QtC.QMimeDatabase `
    ///
    pub fn StrictMimeType(param1: []const u8, param2: ?*anyopaque) QtC.QMimeType {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KFileMetaData__MimeUtils_StrictMimeType(param1_str, @ptrCast(param2));
    }
};
