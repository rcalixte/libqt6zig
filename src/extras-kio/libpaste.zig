const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KFileItem = @import("libqt6").KFileItem;
const QMimeData = @import("libqt6").QMimeData;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kio.html)
pub const KIO = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO,

    pub const _is_KIO = {};

    /// ### [Upstream resources](https://api.kde.org/kio.html#canPasteMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMimeData `
    ///
    pub fn CanPasteMimeData(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMimeData;
        return qtc.KIO_CanPasteMimeData(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#pasteActionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QMimeData `
    ///
    /// ` param2: *bool `
    ///
    /// ` param3: KFileItem `
    ///
    pub fn PasteActionText(allocator: std.mem.Allocator, param1: anytype, param2: *bool, param3: anytype) []const u8 {
        comptime _ = @TypeOf(param1)._is_QMimeData;
        comptime _ = @TypeOf(param3)._is_KFileItem;
        var _str = qtc.KIO_PasteActionText(@ptrCast(param1.ptr), @ptrCast(param2), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.PasteActionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#setClipboardDataCut)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMimeData `
    ///
    /// ` param2: bool `
    ///
    pub fn SetClipboardDataCut(param1: anytype, param2: bool) void {
        comptime _ = @TypeOf(param1)._is_QMimeData;
        qtc.KIO_SetClipboardDataCut(@ptrCast(param1.ptr), param2);
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#isClipboardDataCut)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMimeData `
    ///
    pub fn IsClipboardDataCut(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMimeData;
        return qtc.KIO_IsClipboardDataCut(@ptrCast(param1.ptr));
    }
};
