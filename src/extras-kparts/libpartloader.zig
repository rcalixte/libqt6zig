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

    /// ### [Upstream resources](https://api.kde.org/kparts.html#qt_getEnumMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: partloader_enums.PartCapability `
    ///
    pub fn GetEnumMetaObject(param1: i32) QMetaObject {
        return .{ .ptr = qtc.KParts_GetEnumMetaObject(@bitCast(param1)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts.html#qt_getEnumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: partloader_enums.PartCapability `
    ///
    pub fn GetEnumName(param1: i32) [:0]const u8 {
        const _ret = qtc.KParts_GetEnumName(@bitCast(param1));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts.html#qt_getEnumMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: flag of partloader_enums.PartCapability `
    ///
    pub fn GetEnumMetaObject2(param1: i32) QMetaObject {
        return .{ .ptr = qtc.KParts_GetEnumMetaObject2(@bitCast(param1)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts.html#qt_getEnumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: flag of partloader_enums.PartCapability `
    ///
    pub fn GetEnumName2(param1: i32) [:0]const u8 {
        const _ret = qtc.KParts_GetEnumName2(@bitCast(param1));
        return std.mem.span(_ret);
    }
};

/// ### [Upstream resources](https://api.kde.org/kparts-partloader.html)
pub const KParts__PartLoader = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kparts-partloader.html#partCapabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KPluginMetaData `
    ///
    /// ## Returns:
    ///
    /// ` flag of partloader_enums.PartCapability `
    ///
    pub fn PartCapabilities(param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_KPluginMetaData;
        return qtc.KParts__PartLoader_PartCapabilities(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partloader.html#partsForMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn PartsForMimeType(allocator: std.mem.Allocator, param1: []const u8) []KPluginMetaData {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KParts__PartLoader_PartsForMimeType(param1_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KPluginMetaData, _arr.len) catch @panic("kparts__partloader.PartsForMimeType: Memory allocation failed");
        const _data: [*]QtC.KPluginMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }
};

/// ### [Upstream resources](https://api.kde.org/kparts-partloader.html#public-types)
pub const enums = struct {
    pub const PartCapability = enum(i32) {
        pub const ReadOnly: i32 = 1;
        pub const ReadWrite: i32 = 2;
        pub const BrowserView: i32 = 4;
    };

    pub const ErrorType = enum(i32) {
        pub const CouldNotLoadPlugin: i32 = 0;
        pub const NoPartFoundForMimeType: i32 = 1;
        pub const NoPartInstantiatedForMimeType: i32 = 2;
    };
};
