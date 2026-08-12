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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFileItemListProperties object in C++ memory
    ///
    pub fn new() KFileItemListProperties {
        return .{ .ptr = qtc.KFileItemListProperties_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFileItemListProperties object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` items: KFileItemList `
    ///
    pub fn new2(items: anytype) KFileItemListProperties {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        return .{ .ptr = qtc.KFileItemListProperties_new2(@ptrCast(items.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KFileItemListProperties object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KFileItemListProperties `
    ///
    pub fn new3(param1: anytype) KFileItemListProperties {
        comptime _ = @TypeOf(param1)._is_KFileItemListProperties;
        return .{ .ptr = qtc.KFileItemListProperties_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    /// ` other: KFileItemListProperties `
    ///
    pub fn operatorAssign(self: KFileItemListProperties, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KFileItemListProperties;
        qtc.KFileItemListProperties_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setItems` instead
    ///
    pub const SetItems = setItems;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#setItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn setItems(self: KFileItemListProperties, items: anytype) void {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KFileItemListProperties_SetItems(@ptrCast(self.ptr), @ptrCast(items.ptr));
    }

    /// ### DEPRECATED: Use `supportsReading` instead
    ///
    pub const SupportsReading = supportsReading;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsReading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn supportsReading(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_SupportsReading(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportsDeleting` instead
    ///
    pub const SupportsDeleting = supportsDeleting;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsDeleting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn supportsDeleting(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_SupportsDeleting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportsWriting` instead
    ///
    pub const SupportsWriting = supportsWriting;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn supportsWriting(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_SupportsWriting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportsMoving` instead
    ///
    pub const SupportsMoving = supportsMoving;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsMoving)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn supportsMoving(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_SupportsMoving(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLocal` instead
    ///
    pub const IsLocal = isLocal;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#isLocal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn isLocal(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_IsLocal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `urlList` instead
    ///
    pub const UrlList = urlList;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#urlList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn urlList(self: KFileItemListProperties, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KFileItemListProperties_UrlList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("KFileItemListProperties.urlList: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isDirectory` instead
    ///
    pub const IsDirectory = isDirectory;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#isDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn isDirectory(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_IsDirectory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFile` instead
    ///
    pub const IsFile = isFile;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn isFile(self: KFileItemListProperties) bool {
        return qtc.KFileItemListProperties_IsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mimeType` instead
    ///
    pub const MimeType = mimeType;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeType(self: KFileItemListProperties, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItemListProperties_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItemListProperties.mimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mimeGroup` instead
    ///
    pub const MimeGroup = mimeGroup;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#mimeGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemListProperties `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeGroup(self: KFileItemListProperties, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItemListProperties_MimeGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItemListProperties.mimeGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#dtor.KFileItemListProperties)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileItemListProperties `
    ///
    pub fn delete(self: KFileItemListProperties) void {
        qtc.KFileItemListProperties_Delete(@ptrCast(self.ptr));
    }
};
