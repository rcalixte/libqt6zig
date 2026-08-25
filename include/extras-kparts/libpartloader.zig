const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KPluginMetaData = @import("libqt6").KPluginMetaData;
const QMetaObject = @import("libqt6").QMetaObject;
const partloader_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kparts.html)
pub const KParts = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kparts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KParts,

    pub const _is_KParts = {};

    /// ### DEPRECATED: Use `getEnumMetaObject` instead
    ///
    pub const GetEnumMetaObject = getEnumMetaObject;

    /// ### [Upstream resources](https://api.kde.org/kparts.html#qt_getEnumMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: partloader_enums.PartCapability `
    ///
    pub fn getEnumMetaObject(param1: i32) QMetaObject {
        return .{ .ptr = qtc.KParts_GetEnumMetaObject(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `getEnumName` instead
    ///
    pub const GetEnumName = getEnumName;

    /// ### [Upstream resources](https://api.kde.org/kparts.html#qt_getEnumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: partloader_enums.PartCapability `
    ///
    pub fn getEnumName(param1: i32) [:0]const u8 {
        const _ret = qtc.KParts_GetEnumName(@bitCast(param1));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `getEnumMetaObject2` instead
    ///
    pub const GetEnumMetaObject2 = getEnumMetaObject2;

    /// ### [Upstream resources](https://api.kde.org/kparts.html#qt_getEnumMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: flag of partloader_enums.PartCapability `
    ///
    pub fn getEnumMetaObject2(param1: i32) QMetaObject {
        return .{ .ptr = qtc.KParts_GetEnumMetaObject2(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `getEnumName2` instead
    ///
    pub const GetEnumName2 = getEnumName2;

    /// ### [Upstream resources](https://api.kde.org/kparts.html#qt_getEnumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: flag of partloader_enums.PartCapability `
    ///
    pub fn getEnumName2(param1: i32) [:0]const u8 {
        const _ret = qtc.KParts_GetEnumName2(@bitCast(param1));
        return std.mem.span(_ret);
    }
};

/// ### [Upstream resources](https://api.kde.org/kparts-partloader.html)
pub const KParts__PartLoader = extern struct {
    /// ### DEPRECATED: Use `partCapabilities` instead
    ///
    pub const PartCapabilities = partCapabilities;

    /// ### [Upstream resources](https://api.kde.org/kparts-partloader.html#partCapabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: KPluginMetaData `
    ///
    /// ## Returns:
    ///
    /// ` flag of partloader_enums.PartCapability `
    ///
    pub fn partCapabilities(data: anytype) i32 {
        comptime _ = @TypeOf(data)._is_KPluginMetaData;
        return qtc.KParts__PartLoader_PartCapabilities(@ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `partsForMimeType` instead
    ///
    pub const PartsForMimeType = partsForMimeType;

    /// ### [Upstream resources](https://api.kde.org/kparts-partloader.html#partsForMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn partsForMimeType(allocator: std.mem.Allocator, mimeType: []const u8) []KPluginMetaData {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KParts__PartLoader_PartsForMimeType(mimeType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KPluginMetaData, _arr.len) catch @panic("KParts__PartLoader.partsForMimeType: Memory allocation failed");
        const _data_val: [*]QtC.KPluginMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }
};

/// ### [Upstream resources](https://api.kde.org/kparts-partloader.html#public-types)
pub const enums = struct {
    pub const PartCapability = enum {
        pub const ReadOnly: i32 = 1;
        pub const ReadWrite: i32 = 2;
        pub const BrowserView: i32 = 4;
    };

    pub const ErrorType = enum {
        pub const CouldNotLoadPlugin: i32 = 0;
        pub const NoPartFoundForMimeType: i32 = 1;
        pub const NoPartInstantiatedForMimeType: i32 = 2;
    };
};
