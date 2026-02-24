const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html)
pub const kfileitemlistproperties = struct {
    /// New constructs a new KFileItemListProperties object.
    ///
    pub fn New() QtC.KFileItemListProperties {
        return qtc.KFileItemListProperties_new();
    }

    /// New2 constructs a new KFileItemListProperties object.
    ///
    /// ## Parameter(s):
    ///
    /// ` items: QtC.KFileItemList `
    ///
    pub fn New2(items: ?*anyopaque) QtC.KFileItemListProperties {
        return qtc.KFileItemListProperties_new2(@ptrCast(items));
    }

    /// New3 constructs a new KFileItemListProperties object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KFileItemListProperties `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.KFileItemListProperties {
        return qtc.KFileItemListProperties_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    /// ` other: QtC.KFileItemListProperties `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KFileItemListProperties_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#setItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    /// ` items: QtC.KFileItemList `
    ///
    pub fn SetItems(self: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KFileItemListProperties_SetItems(@ptrCast(self), @ptrCast(items));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsReading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    pub fn SupportsReading(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_SupportsReading(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsDeleting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    pub fn SupportsDeleting(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_SupportsDeleting(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    pub fn SupportsWriting(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_SupportsWriting(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsMoving)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    pub fn SupportsMoving(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_SupportsMoving(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#isLocal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    pub fn IsLocal(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_IsLocal(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#urlList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UrlList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.KFileItemListProperties_UrlList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("kfileitemlistproperties.UrlList: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#isDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    pub fn IsDirectory(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_IsDirectory(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    pub fn IsFile(self: ?*anyopaque) bool {
        return qtc.KFileItemListProperties_IsFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItemListProperties_MimeType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitemlistproperties.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#mimeGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeGroup(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItemListProperties_MimeGroup(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitemlistproperties.MimeGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#dtor.KFileItemListProperties)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KFileItemListProperties `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KFileItemListProperties_Delete(@ptrCast(self));
    }
};
