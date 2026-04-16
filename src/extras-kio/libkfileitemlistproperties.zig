const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KFileItemList = @import("libqt6").KFileItemList;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html)
pub const KFileItemListProperties = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileItemListProperties,

    pub const _is_KFileItemListProperties = {};

    /// New constructs a new KFileItemListProperties object.
    ///
    pub fn New() KFileItemListProperties {
        return .{ .ptr = qtc.KFileItemListProperties_new() };
    }

    /// New2 constructs a new KFileItemListProperties object.
    ///
    /// ## Parameter(s):
    ///
    /// ` items: KFileItemList `
    ///
    pub fn New2(items: anytype) KFileItemListProperties {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        return .{ .ptr = qtc.KFileItemListProperties_new2(@ptrCast(items.ptr)) };
    }

    /// New3 constructs a new KFileItemListProperties object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KFileItemListProperties `
    ///
    pub fn New3(param1: anytype) KFileItemListProperties {
        comptime _ = @TypeOf(param1)._is_KFileItemListProperties;
        return .{ .ptr = qtc.KFileItemListProperties_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    /// ` other: KFileItemListProperties `
    ///
    pub fn OperatorAssign(self: KFileItemListProperties, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KFileItemListProperties;
        qtc.KFileItemListProperties_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#setItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn SetItems(self: KFileItemListProperties, items: anytype) void {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KFileItemListProperties_SetItems(@ptrCast(self.ptr), @ptrCast(items.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsReading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn SupportsReading(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_SupportsReading(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsDeleting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn SupportsDeleting(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_SupportsDeleting(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn SupportsWriting(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_SupportsWriting(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsMoving)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn SupportsMoving(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_SupportsMoving(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#isLocal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn IsLocal(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_IsLocal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#urlList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UrlList(self: KFileItemListProperties, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KFileItemListProperties_UrlList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("kfileitemlistproperties.UrlList: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#isDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn IsDirectory(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_IsDirectory(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn IsFile(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_IsFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: KFileItemListProperties, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItemListProperties_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitemlistproperties.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#mimeGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeGroup(self: KFileItemListProperties, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItemListProperties_MimeGroup(@ptrCast(self.ptr));
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
    /// ` self: KFileItemListProperties `
    ///
    pub fn Delete(self: KFileItemListProperties) void {
        qtc.KFileItemListProperties_Delete(@ptrCast(self.ptr));
    }
};
