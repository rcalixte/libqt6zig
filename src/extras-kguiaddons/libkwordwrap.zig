const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QFontMetrics = @import("libqt6").QFontMetrics;
const QPainter = @import("libqt6").QPainter;
const QRect = @import("libqt6").QRect;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kwordwrap.html)
pub const KWordWrap = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KWordWrap,

    pub const _is_KWordWrap = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KWordWrap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KWordWrap `
    ///
    pub fn new(other: anytype) KWordWrap {
        comptime _ = @TypeOf(other)._is_KWordWrap;
        return .{ .ptr = qtc.KWordWrap_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `formatText` instead
    ///
    pub const FormatText = formatText;

    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html#formatText)
    ///
    /// ## Parameter(s):
    ///
    /// ` fm: QFontMetrics `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    pub fn formatText(fm: anytype, r: anytype, flags: i32, str: []const u8) KWordWrap {
        comptime _ = @TypeOf(fm)._is_QFontMetrics;
        comptime _ = @TypeOf(r)._is_QRect;
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.KWordWrap_FormatText(@ptrCast(fm.ptr), @ptrCast(r.ptr), @bitCast(flags), str_str) };
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordWrap `
    ///
    pub fn boundingRect(self: KWordWrap) QRect {
        return .{ .ptr = qtc.KWordWrap_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `wrappedString` instead
    ///
    pub const WrappedString = wrappedString;

    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html#wrappedString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordWrap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn wrappedString(self: KWordWrap, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWordWrap_WrappedString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWordWrap.wrappedString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `truncatedString` instead
    ///
    pub const TruncatedString = truncatedString;

    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html#truncatedString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordWrap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn truncatedString(self: KWordWrap, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWordWrap_TruncatedString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWordWrap.truncatedString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `drawText` instead
    ///
    pub const DrawText = drawText;

    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordWrap `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn drawText(self: KWordWrap, painter: anytype, x: i32, y: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KWordWrap_DrawText(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordWrap `
    ///
    /// ` other: KWordWrap `
    ///
    pub fn operatorAssign(self: KWordWrap, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KWordWrap;
        qtc.KWordWrap_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `drawFadeoutText` instead
    ///
    pub const DrawFadeoutText = drawFadeoutText;

    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html#drawFadeoutText)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` maxW: i32 `
    ///
    /// ` t: []const u8 `
    ///
    pub fn drawFadeoutText(p: anytype, x: i32, y: i32, maxW: i32, t: []const u8) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KWordWrap_DrawFadeoutText(@ptrCast(p.ptr), @bitCast(x), @bitCast(y), @bitCast(maxW), t_str);
    }

    /// ### DEPRECATED: Use `drawTruncateText` instead
    ///
    pub const DrawTruncateText = drawTruncateText;

    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html#drawTruncateText)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` maxW: i32 `
    ///
    /// ` t: []const u8 `
    ///
    pub fn drawTruncateText(p: anytype, x: i32, y: i32, maxW: i32, t: []const u8) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        qtc.KWordWrap_DrawTruncateText(@ptrCast(p.ptr), @bitCast(x), @bitCast(y), @bitCast(maxW), t_str);
    }

    /// ### DEPRECATED: Use `formatText5` instead
    ///
    pub const FormatText5 = formatText5;

    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html#formatText)
    ///
    /// ## Parameter(s):
    ///
    /// ` fm: QFontMetrics `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    /// ` len: i32 `
    ///
    pub fn formatText5(fm: anytype, r: anytype, flags: i32, str: []const u8, len: i32) KWordWrap {
        comptime _ = @TypeOf(fm)._is_QFontMetrics;
        comptime _ = @TypeOf(r)._is_QRect;
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.KWordWrap_FormatText5(@ptrCast(fm.ptr), @ptrCast(r.ptr), @bitCast(flags), str_str, @bitCast(len)) };
    }

    /// ### DEPRECATED: Use `truncatedString1` instead
    ///
    pub const TruncatedString1 = truncatedString1;

    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html#truncatedString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordWrap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dots: bool `
    ///
    pub fn truncatedString1(self: KWordWrap, allocator: std.mem.Allocator, dots: bool) []const u8 {
        var _str = qtc.KWordWrap_TruncatedString1(@ptrCast(self.ptr), dots);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWordWrap.truncatedString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `drawText4` instead
    ///
    pub const DrawText4 = drawText4;

    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordWrap `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` flags: i32 `
    ///
    pub fn drawText4(self: KWordWrap, painter: anytype, x: i32, y: i32, flags: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KWordWrap_DrawText4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kwordwrap.html#dtor.KWordWrap)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KWordWrap `
    ///
    pub fn delete(self: KWordWrap) void {
        qtc.KWordWrap_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kwordwrap.html#public-types)
pub const enums = struct {
    pub const KWordWrap = enum(i32) {
        pub const FadeOut: i32 = 268435456;
        pub const Truncate: i32 = 536870912;
    };
};
