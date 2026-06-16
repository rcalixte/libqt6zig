const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QJsonObject = @import("libqt6").QJsonObject;
const QJsonValue = @import("libqt6").QJsonValue;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kjsonutils.html)
pub const KJsonUtils = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kjsonutils.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KJsonUtils,

    pub const _is_KJsonUtils = {};

    /// ### [Upstream resources](https://api.kde.org/kjsonutils.html#readTranslatedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` jo: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: QJsonValue `
    ///
    pub fn ReadTranslatedValue(jo: anytype, key: []const u8, defaultValue: anytype) QJsonValue {
        comptime _ = @TypeOf(jo)._is_QJsonObject;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(defaultValue)._is_QJsonValue;
        return .{ .ptr = qtc.KJsonUtils_ReadTranslatedValue(@ptrCast(jo.ptr), key_str, @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kjsonutils.html#readTranslatedString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` jo: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn ReadTranslatedString(allocator: std.mem.Allocator, jo: anytype, key: []const u8, defaultValue: []const u8) []const u8 {
        comptime _ = @TypeOf(jo)._is_QJsonObject;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.KJsonUtils_ReadTranslatedString(@ptrCast(jo.ptr), key_str, defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjsonutils.ReadTranslatedString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
