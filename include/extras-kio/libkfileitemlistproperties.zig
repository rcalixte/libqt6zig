const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kfileitemlistproperties.html
pub const kfileitemlistproperties = struct {
    /// New constructs a new KFileItemListProperties object.
    ///
    ///
    pub fn New() QtC.KFileItemListProperties {
        return qtc.KFileItemListProperties_new();
    }

    /// New2 constructs a new KFileItemListProperties object.
    ///
    /// ``` items: QtC.KFileItemList ```
    pub fn New2(items: ?*anyopaque) QtC.KFileItemListProperties {
        return qtc.KFileItemListProperties_new2(@ptrCast(items));
    }

    /// New3 constructs a new KFileItemListProperties object.
    ///
    /// ``` param1: QtC.KFileItemListProperties ```
    pub fn New3(param1: ?*anyopaque) QtC.KFileItemListProperties {
        return qtc.KFileItemListProperties_new3(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#operator-eq)
    ///
    /// ``` self: QtC.KFileItemListProperties, other: QtC.KFileItemListProperties ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KFileItemListProperties_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#setItems)
    ///
    /// ``` self: QtC.KFileItemListProperties, items: QtC.KFileItemList ```
    pub fn SetItems(self: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KFileItemListProperties_SetItems(@ptrCast(self), @ptrCast(items));
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#supportsReading)
    ///
    /// ``` self: QtC.KFileItemListProperties ```
    pub fn SupportsReading(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_SupportsReading(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#supportsDeleting)
    ///
    /// ``` self: QtC.KFileItemListProperties ```
    pub fn SupportsDeleting(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_SupportsDeleting(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#supportsWriting)
    ///
    /// ``` self: QtC.KFileItemListProperties ```
    pub fn SupportsWriting(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_SupportsWriting(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#supportsMoving)
    ///
    /// ``` self: QtC.KFileItemListProperties ```
    pub fn SupportsMoving(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_SupportsMoving(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#isLocal)
    ///
    /// ``` self: QtC.KFileItemListProperties ```
    pub fn IsLocal(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_IsLocal(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#urlList)
    ///
    /// ``` self: QtC.KFileItemListProperties, allocator: std.mem.Allocator ```
    pub fn UrlList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.KFileItemListProperties_UrlList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("kfileitemlistproperties.UrlList: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#isDirectory)
    ///
    /// ``` self: QtC.KFileItemListProperties ```
    pub fn IsDirectory(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_IsDirectory(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#isFile)
    ///
    /// ``` self: QtC.KFileItemListProperties ```
    pub fn IsFile(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_IsFile(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#mimeType)
    ///
    /// ``` self: QtC.KFileItemListProperties, allocator: std.mem.Allocator ```
    pub fn MimeType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItemListProperties_MimeType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitemlistproperties.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#mimeGroup)
    ///
    /// ``` self: QtC.KFileItemListProperties, allocator: std.mem.Allocator ```
    pub fn MimeGroup(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItemListProperties_MimeGroup(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitemlistproperties.MimeGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#dtor.KFileItemListProperties)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KFileItemListProperties ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFileItemListProperties_Delete(@ptrCast(self));
    }
};
