const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html)
pub const QPen = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPen,

    pub const _is_QPen = {};

    /// New constructs a new QPen object.
    ///
    pub fn New() QPen {
        return .{ .ptr = qtc.QPen_new() };
    }

    /// New2 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.PenStyle `
    ///
    pub fn New2(param1: i32) QPen {
        return .{ .ptr = qtc.QPen_new2(@bitCast(param1)) };
    }

    /// New3 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    pub fn New3(color: anytype) QPen {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.QPen_new3(@ptrCast(color.ptr)) };
    }

    /// New4 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` brush: QBrush `
    ///
    /// ` width: f64 `
    ///
    pub fn New4(brush: anytype, width: f64) QPen {
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QPen_new4(@ptrCast(brush.ptr), @bitCast(width)) };
    }

    /// New5 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pen: QPen `
    ///
    pub fn New5(pen: anytype) QPen {
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QPen_new5(@ptrCast(pen.ptr)) };
    }

    /// New6 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` brush: QBrush `
    ///
    /// ` width: f64 `
    ///
    /// ` s: qnamespace_enums.PenStyle `
    ///
    pub fn New6(brush: anytype, width: f64, s: i32) QPen {
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QPen_new6(@ptrCast(brush.ptr), @bitCast(width), @bitCast(s)) };
    }

    /// New7 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` brush: QBrush `
    ///
    /// ` width: f64 `
    ///
    /// ` s: qnamespace_enums.PenStyle `
    ///
    /// ` c: qnamespace_enums.PenCapStyle `
    ///
    pub fn New7(brush: anytype, width: f64, s: i32, c: i32) QPen {
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QPen_new7(@ptrCast(brush.ptr), @bitCast(width), @bitCast(s), @bitCast(c)) };
    }

    /// New8 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` brush: QBrush `
    ///
    /// ` width: f64 `
    ///
    /// ` s: qnamespace_enums.PenStyle `
    ///
    /// ` c: qnamespace_enums.PenCapStyle `
    ///
    /// ` j: qnamespace_enums.PenJoinStyle `
    ///
    pub fn New8(brush: anytype, width: f64, s: i32, c: i32, j: i32) QPen {
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QPen_new8(@ptrCast(brush.ptr), @bitCast(width), @bitCast(s), @bitCast(c), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` pen: QPen `
    ///
    pub fn OperatorAssign(self: QPen, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QPen_OperatorAssign(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` other: QPen `
    ///
    pub fn Swap(self: QPen, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPen;
        qtc.QPen_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PenStyle `
    ///
    pub fn Style(self: QPen) i32 {
        return qtc.QPen_Style(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` style: qnamespace_enums.PenStyle `
    ///
    pub fn SetStyle(self: QPen, style: i32) void {
        qtc.QPen_SetStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#dashPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DashPattern(self: QPen, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.QPen_DashPattern(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("qpen.DashPattern: Memory allocation failed");
        const _data: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setDashPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` pattern: []f64 `
    ///
    pub fn SetDashPattern(self: QPen, pattern: []f64) void {
        const pattern_list = qtc.libqt_list{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QPen_SetDashPattern(@ptrCast(self.ptr), pattern_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#dashOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn DashOffset(self: QPen) f64 {
        return qtc.QPen_DashOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setDashOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` doffset: f64 `
    ///
    pub fn SetDashOffset(self: QPen, doffset: f64) void {
        qtc.QPen_SetDashOffset(@ptrCast(self.ptr), @bitCast(doffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#miterLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn MiterLimit(self: QPen) f64 {
        return qtc.QPen_MiterLimit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setMiterLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` limit: f64 `
    ///
    pub fn SetMiterLimit(self: QPen, limit: f64) void {
        qtc.QPen_SetMiterLimit(@ptrCast(self.ptr), @bitCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#widthF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn WidthF(self: QPen) f64 {
        return qtc.QPen_WidthF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setWidthF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` width: f64 `
    ///
    pub fn SetWidthF(self: QPen, width: f64) void {
        qtc.QPen_SetWidthF(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn Width(self: QPen) i32 {
        return qtc.QPen_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` width: i32 `
    ///
    pub fn SetWidth(self: QPen, width: i32) void {
        qtc.QPen_SetWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn Color(self: QPen) QColor {
        return .{ .ptr = qtc.QPen_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: QPen, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPen_SetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn Brush(self: QPen) QBrush {
        return .{ .ptr = qtc.QPen_Brush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBrush(self: QPen, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QPen_SetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#isSolid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn IsSolid(self: QPen) bool {
        return qtc.QPen_IsSolid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#capStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PenCapStyle `
    ///
    pub fn CapStyle(self: QPen) i32 {
        return qtc.QPen_CapStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setCapStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` pcs: qnamespace_enums.PenCapStyle `
    ///
    pub fn SetCapStyle(self: QPen, pcs: i32) void {
        qtc.QPen_SetCapStyle(@ptrCast(self.ptr), @bitCast(pcs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#joinStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PenJoinStyle `
    ///
    pub fn JoinStyle(self: QPen) i32 {
        return qtc.QPen_JoinStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setJoinStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` pcs: qnamespace_enums.PenJoinStyle `
    ///
    pub fn SetJoinStyle(self: QPen, pcs: i32) void {
        qtc.QPen_SetJoinStyle(@ptrCast(self.ptr), @bitCast(pcs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#isCosmetic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn IsCosmetic(self: QPen) bool {
        return qtc.QPen_IsCosmetic(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setCosmetic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` cosmetic: bool `
    ///
    pub fn SetCosmetic(self: QPen, cosmetic: bool) void {
        qtc.QPen_SetCosmetic(@ptrCast(self.ptr), cosmetic);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` p: QPen `
    ///
    pub fn OperatorEqual(self: QPen, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPen;
        return qtc.QPen_OperatorEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` p: QPen `
    ///
    pub fn OperatorNotEqual(self: QPen, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPen;
        return qtc.QPen_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn ToQVariant(self: QPen) QVariant {
        return .{ .ptr = qtc.QPen_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn IsDetached(self: QPen) bool {
        return qtc.QPen_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#dtor.QPen)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPen `
    ///
    pub fn Delete(self: QPen) void {
        qtc.QPen_Delete(@ptrCast(self.ptr));
    }
};
