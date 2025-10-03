const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const partloader_enums = enums;
const std = @import("std");

/// https://api.kde.org/kparts.html
pub const kparts = struct {
    /// [Qt documentation](https://api.kde.org/kparts.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: partloader_enums.PartCapability ```
    pub fn GetEnumMetaObject(param1: i32) QtC.QMetaObject {
        return qtc.KParts_GetEnumMetaObject(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kparts.html#qt_getEnumName)
    ///
    /// ``` param1: partloader_enums.PartCapability ```
    pub fn GetEnumName(param1: i32) []const u8 {
        const _ret = qtc.KParts_GetEnumName(@intCast(param1));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://api.kde.org/kparts.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: flag of partloader_enums.PartCapability ```
    pub fn GetEnumMetaObject2(param1: i32) QtC.QMetaObject {
        return qtc.KParts_GetEnumMetaObject2(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kparts.html#qt_getEnumName)
    ///
    /// ``` param1: flag of partloader_enums.PartCapability ```
    pub fn GetEnumName2(param1: i32) []const u8 {
        const _ret = qtc.KParts_GetEnumName2(@intCast(param1));
        return std.mem.span(_ret);
    }
};

/// https://api.kde.org/kparts-partloader.html
pub const kparts__partloader = struct {
    /// [Qt documentation](https://api.kde.org/kparts-partloader.html#partCapabilities)
    ///
    /// ``` param1: QtC.KPluginMetaData ```
    ///
    /// Returns: ``` flag of partloader_enums.PartCapability ```
    pub fn PartCapabilities(param1: ?*anyopaque) i32 {
        return qtc.KParts__PartLoader_PartCapabilities(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partloader.html#partsForMimeType)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn PartsForMimeType(param1: []const u8, allocator: std.mem.Allocator) []QtC.KPluginMetaData {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KParts__PartLoader_PartsForMimeType(param1_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KPluginMetaData, _arr.len) catch @panic("kparts::partloader.PartsForMimeType: Memory allocation failed");
        const _data: [*]QtC.KPluginMetaData = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }
};

/// https://api.kde.org/kparts-partloader.html#types
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
