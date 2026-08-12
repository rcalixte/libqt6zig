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

    /// ### DEPRECATED: Use `canPasteMimeData` instead
    ///
    pub const CanPasteMimeData = canPasteMimeData;

    /// ### [Upstream resources](https://api.kde.org/kio.html#canPasteMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: QMimeData `
    ///
    pub fn canPasteMimeData(data: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        return qtc.KIO_CanPasteMimeData(@ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `pasteActionText` instead
    ///
    pub const PasteActionText = pasteActionText;

    /// ### [Upstream resources](https://api.kde.org/kio.html#pasteActionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeData: QMimeData `
    ///
    /// ` enable: *bool `
    ///
    /// ` destItem: KFileItem `
    ///
    pub fn pasteActionText(allocator: std.mem.Allocator, mimeData: anytype, enable: *bool, destItem: anytype) []const u8 {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        comptime _ = @TypeOf(destItem)._is_KFileItem;
        var _str = qtc.KIO_PasteActionText(@ptrCast(mimeData.ptr), @ptrCast(enable), @ptrCast(destItem.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO.pasteActionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setClipboardDataCut` instead
    ///
    pub const SetClipboardDataCut = setClipboardDataCut;

    /// ### [Upstream resources](https://api.kde.org/kio.html#setClipboardDataCut)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeData: QMimeData `
    ///
    /// ` cut: bool `
    ///
    pub fn setClipboardDataCut(mimeData: anytype, cut: bool) void {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        qtc.KIO_SetClipboardDataCut(@ptrCast(mimeData.ptr), cut);
    }

    /// ### DEPRECATED: Use `isClipboardDataCut` instead
    ///
    pub const IsClipboardDataCut = isClipboardDataCut;

    /// ### [Upstream resources](https://api.kde.org/kio.html#isClipboardDataCut)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn isClipboardDataCut(mimeData: anytype) bool {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        return qtc.KIO_IsClipboardDataCut(@ptrCast(mimeData.ptr));
    }
};
