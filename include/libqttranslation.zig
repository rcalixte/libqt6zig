const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qttranslation.html)
pub const qttranslation = extern struct {
    /// ### DEPRECATED: Use `qtTrId` instead
    ///
    pub const QtTrId = qtTrId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qttranslation.html#qtTrId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` id: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn qtTrId(allocator: std.mem.Allocator, id: [:0]const u8, n: i32) []const u8 {
        const id_Cstring = id.ptr;
        var _str = qtc.qttranslation_QtTrId(id_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qttranslation.qtTrId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
