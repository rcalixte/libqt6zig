const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kjsonutils.html
pub const kjsonutils = struct {
    /// [Qt documentation](https://api.kde.org/kjsonutils.html#readTranslatedValue)
    ///
    /// ``` param1: QtC.QJsonObject, param2: []const u8, param3: QtC.QJsonValue ```
    pub fn ReadTranslatedValue(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QJsonValue {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return qtc.KJsonUtils_ReadTranslatedValue(@ptrCast(param1), param2_str, @ptrCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kjsonutils.html#readTranslatedString)
    ///
    /// ``` param1: QtC.QJsonObject, param2: []const u8, param3: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadTranslatedString(param1: ?*anyopaque, param2: []const u8, param3: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const _str = qtc.KJsonUtils_ReadTranslatedString(@ptrCast(param1), param2_str, param3_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjsonutils.ReadTranslatedString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
