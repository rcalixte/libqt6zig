const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html)
pub const qpen = struct {
    /// New constructs a new QPen object.
    ///
    pub fn New() QtC.QPen {
        return qtc.QPen_new();
    }

    /// New2 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.PenStyle `
    ///
    pub fn New2(param1: i32) QtC.QPen {
        return qtc.QPen_new2(@bitCast(param1));
    }

    /// New3 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn New3(color: ?*anyopaque) QtC.QPen {
        return qtc.QPen_new3(@ptrCast(color));
    }

    /// New4 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` brush: QtC.QBrush `
    ///
    /// ` width: f64 `
    ///
    pub fn New4(brush: ?*anyopaque, width: f64) QtC.QPen {
        return qtc.QPen_new4(@ptrCast(brush), @bitCast(width));
    }

    /// New5 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn New5(pen: ?*anyopaque) QtC.QPen {
        return qtc.QPen_new5(@ptrCast(pen));
    }

    /// New6 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` brush: QtC.QBrush `
    ///
    /// ` width: f64 `
    ///
    /// ` s: qnamespace_enums.PenStyle `
    ///
    pub fn New6(brush: ?*anyopaque, width: f64, s: i32) QtC.QPen {
        return qtc.QPen_new6(@ptrCast(brush), @bitCast(width), @bitCast(s));
    }

    /// New7 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` brush: QtC.QBrush `
    ///
    /// ` width: f64 `
    ///
    /// ` s: qnamespace_enums.PenStyle `
    ///
    /// ` c: qnamespace_enums.PenCapStyle `
    ///
    pub fn New7(brush: ?*anyopaque, width: f64, s: i32, c: i32) QtC.QPen {
        return qtc.QPen_new7(@ptrCast(brush), @bitCast(width), @bitCast(s), @bitCast(c));
    }

    /// New8 constructs a new QPen object.
    ///
    /// ## Parameter(s):
    ///
    /// ` brush: QtC.QBrush `
    ///
    /// ` width: f64 `
    ///
    /// ` s: qnamespace_enums.PenStyle `
    ///
    /// ` c: qnamespace_enums.PenCapStyle `
    ///
    /// ` j: qnamespace_enums.PenJoinStyle `
    ///
    pub fn New8(brush: ?*anyopaque, width: f64, s: i32, c: i32, j: i32) QtC.QPen {
        return qtc.QPen_new8(@ptrCast(brush), @bitCast(width), @bitCast(s), @bitCast(c), @bitCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QPen_OperatorAssign(@ptrCast(self), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` other: QtC.QPen `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPen_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PenStyle `
    ///
    pub fn Style(self: ?*anyopaque) i32 {
        return qtc.QPen_Style(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` style: qnamespace_enums.PenStyle `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: i32) void {
        qtc.QPen_SetStyle(@ptrCast(self), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#dashPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DashPattern(self: ?*anyopaque, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.QPen_DashPattern(@ptrCast(self));
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
    /// ` self: QtC.QPen `
    ///
    /// ` pattern: []f64 `
    ///
    pub fn SetDashPattern(self: ?*anyopaque, pattern: []f64) void {
        const pattern_list = qtc.libqt_list{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QPen_SetDashPattern(@ptrCast(self), pattern_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#dashOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    pub fn DashOffset(self: ?*anyopaque) f64 {
        return qtc.QPen_DashOffset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setDashOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` doffset: f64 `
    ///
    pub fn SetDashOffset(self: ?*anyopaque, doffset: f64) void {
        qtc.QPen_SetDashOffset(@ptrCast(self), @bitCast(doffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#miterLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    pub fn MiterLimit(self: ?*anyopaque) f64 {
        return qtc.QPen_MiterLimit(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setMiterLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` limit: f64 `
    ///
    pub fn SetMiterLimit(self: ?*anyopaque, limit: f64) void {
        qtc.QPen_SetMiterLimit(@ptrCast(self), @bitCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#widthF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    pub fn WidthF(self: ?*anyopaque) f64 {
        return qtc.QPen_WidthF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setWidthF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` width: f64 `
    ///
    pub fn SetWidthF(self: ?*anyopaque, width: f64) void {
        qtc.QPen_SetWidthF(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPen_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` width: i32 `
    ///
    pub fn SetWidth(self: ?*anyopaque, width: i32) void {
        qtc.QPen_SetWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.QPen_Color(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QPen_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPen_Brush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPen_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#isSolid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    pub fn IsSolid(self: ?*anyopaque) bool {
        return qtc.QPen_IsSolid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#capStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PenCapStyle `
    ///
    pub fn CapStyle(self: ?*anyopaque) i32 {
        return qtc.QPen_CapStyle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setCapStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` pcs: qnamespace_enums.PenCapStyle `
    ///
    pub fn SetCapStyle(self: ?*anyopaque, pcs: i32) void {
        qtc.QPen_SetCapStyle(@ptrCast(self), @bitCast(pcs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#joinStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PenJoinStyle `
    ///
    pub fn JoinStyle(self: ?*anyopaque) i32 {
        return qtc.QPen_JoinStyle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setJoinStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` pcs: qnamespace_enums.PenJoinStyle `
    ///
    pub fn SetJoinStyle(self: ?*anyopaque, pcs: i32) void {
        qtc.QPen_SetJoinStyle(@ptrCast(self), @bitCast(pcs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#isCosmetic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    pub fn IsCosmetic(self: ?*anyopaque) bool {
        return qtc.QPen_IsCosmetic(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setCosmetic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` cosmetic: bool `
    ///
    pub fn SetCosmetic(self: ?*anyopaque, cosmetic: bool) void {
        qtc.QPen_SetCosmetic(@ptrCast(self), cosmetic);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` p: QtC.QPen `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPen_OperatorEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    /// ` p: QtC.QPen `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPen_OperatorNotEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QPen_ToQVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPen `
    ///
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QPen_IsDetached(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#dtor.QPen)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPen `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPen_Delete(@ptrCast(self));
    }
};
