const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api-staging.kde.org/kwordwrap.html
pub const kwordwrap = struct {
    /// New constructs a new KWordWrap object.
    ///
    /// ``` other: QtC.KWordWrap ```
    pub fn New(other: ?*anyopaque) QtC.KWordWrap {
        return qtc.KWordWrap_new(@ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kwordwrap.html#formatText)
    ///
    /// ``` fm: QtC.QFontMetrics, r: QtC.QRect, flags: i32, str: []const u8 ```
    pub fn FormatText(fm: ?*anyopaque, r: ?*anyopaque, flags: i32, str: []const u8) QtC.KWordWrap {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KWordWrap_FormatText(@ptrCast(fm), @ptrCast(r), @intCast(flags), str_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kwordwrap.html#boundingRect)
    ///
    /// ``` self: QtC.KWordWrap ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRect {
        return qtc.KWordWrap_BoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kwordwrap.html#wrappedString)
    ///
    /// ``` self: QtC.KWordWrap, allocator: std.mem.Allocator ```
    pub fn WrappedString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KWordWrap_WrappedString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwordwrap.WrappedString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kwordwrap.html#truncatedString)
    ///
    /// ``` self: QtC.KWordWrap, allocator: std.mem.Allocator ```
    pub fn TruncatedString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KWordWrap_TruncatedString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwordwrap.TruncatedString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kwordwrap.html#drawText)
    ///
    /// ``` self: QtC.KWordWrap, painter: QtC.QPainter, x: i32, y: i32 ```
    pub fn DrawText(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32) void {
        qtc.KWordWrap_DrawText(@ptrCast(self), @ptrCast(painter), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://api-staging.kde.org/kwordwrap.html#operator-eq)
    ///
    /// ``` self: QtC.KWordWrap, other: QtC.KWordWrap ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KWordWrap_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kwordwrap.html#drawFadeoutText)
    ///
    /// ``` p: QtC.QPainter, x: i32, y: i32, maxW: i32, t: []const u8 ```
    pub fn DrawFadeoutText(p: ?*anyopaque, x: i32, y: i32, maxW: i32, t: []const u8) void {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KWordWrap_DrawFadeoutText(@ptrCast(p), @intCast(x), @intCast(y), @intCast(maxW), t_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kwordwrap.html#drawTruncateText)
    ///
    /// ``` p: QtC.QPainter, x: i32, y: i32, maxW: i32, t: []const u8 ```
    pub fn DrawTruncateText(p: ?*anyopaque, x: i32, y: i32, maxW: i32, t: []const u8) void {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KWordWrap_DrawTruncateText(@ptrCast(p), @intCast(x), @intCast(y), @intCast(maxW), t_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kwordwrap.html#formatText)
    ///
    /// ``` fm: QtC.QFontMetrics, r: QtC.QRect, flags: i32, str: []const u8, lenVal: i32 ```
    pub fn FormatText5(fm: ?*anyopaque, r: ?*anyopaque, flags: i32, str: []const u8, lenVal: i32) QtC.KWordWrap {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KWordWrap_FormatText5(@ptrCast(fm), @ptrCast(r), @intCast(flags), str_str, @intCast(lenVal));
    }

    /// [Qt documentation](https://api-staging.kde.org/kwordwrap.html#truncatedString)
    ///
    /// ``` self: QtC.KWordWrap, dots: bool, allocator: std.mem.Allocator ```
    pub fn TruncatedString1(self: ?*anyopaque, dots: bool, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KWordWrap_TruncatedString1(@ptrCast(self), dots);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwordwrap.TruncatedString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kwordwrap.html#drawText)
    ///
    /// ``` self: QtC.KWordWrap, painter: QtC.QPainter, x: i32, y: i32, flags: i32 ```
    pub fn DrawText4(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32, flags: i32) void {
        qtc.KWordWrap_DrawText4(@ptrCast(self), @ptrCast(painter), @intCast(x), @intCast(y), @intCast(flags));
    }

    /// [Qt documentation](https://api-staging.kde.org/kwordwrap.html#dtor.KWordWrap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KWordWrap ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KWordWrap_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kwordwrap.html#types
pub const enums = struct {
    pub const KWordWrap = enum {
        pub const FadeOut: i32 = 268435456;
        pub const Truncate: i32 = 536870912;
    };
};
