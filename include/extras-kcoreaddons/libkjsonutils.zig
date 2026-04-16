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
    /// ` param1: QJsonObject `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: QJsonValue `
    ///
    pub fn ReadTranslatedValue(param1: anytype, param2: []const u8, param3: anytype) QJsonValue {
        comptime _ = @TypeOf(param1)._is_QJsonObject;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        comptime _ = @TypeOf(param3)._is_QJsonValue;
        return .{ .ptr = qtc.KJsonUtils_ReadTranslatedValue(@ptrCast(param1.ptr), param2_str, @ptrCast(param3.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kjsonutils.html#readTranslatedString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QJsonObject `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    pub fn ReadTranslatedString(allocator: std.mem.Allocator, param1: anytype, param2: []const u8, param3: []const u8) []const u8 {
        comptime _ = @TypeOf(param1)._is_QJsonObject;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        var _str = qtc.KJsonUtils_ReadTranslatedString(@ptrCast(param1.ptr), param2_str, param3_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjsonutils.ReadTranslatedString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
