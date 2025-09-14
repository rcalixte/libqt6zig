const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kio.html
pub const kio = struct {
    /// [Qt documentation](https://api.kde.org/kio.html#canPasteMimeData)
    ///
    /// ``` param1: QtC.QMimeData ```
    pub fn CanPasteMimeData(param1: ?*anyopaque) bool {
        return qtc.KIO_CanPasteMimeData(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#pasteActionText)
    ///
    /// ``` param1: QtC.QMimeData, param2: *bool, param3: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn PasteActionText(param1: ?*anyopaque, param2: *bool, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO_PasteActionText(@ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.PasteActionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio.html#setClipboardDataCut)
    ///
    /// ``` param1: QtC.QMimeData, param2: bool ```
    pub fn SetClipboardDataCut(param1: ?*anyopaque, param2: bool) void {
        qtc.KIO_SetClipboardDataCut(@ptrCast(param1), param2);
    }

    /// [Qt documentation](https://api.kde.org/kio.html#isClipboardDataCut)
    ///
    /// ``` param1: QtC.QMimeData ```
    pub fn IsClipboardDataCut(param1: ?*anyopaque) bool {
        return qtc.KIO_IsClipboardDataCut(@ptrCast(param1));
    }
};
