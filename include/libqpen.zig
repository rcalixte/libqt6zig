const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpen.html
pub const qpen = struct {
    /// New constructs a new QPen object.
    ///
    ///
    pub fn New() QtC.QPen {
        return qtc.QPen_new();
    }

    /// New2 constructs a new QPen object.
    ///
    /// ``` param1: qnamespace_enums.PenStyle ```
    pub fn New2(param1: i64) QtC.QPen {
        return qtc.QPen_new2(@intCast(param1));
    }

    /// New3 constructs a new QPen object.
    ///
    /// ``` color: QtC.QColor ```
    pub fn New3(color: ?*anyopaque) QtC.QPen {
        return qtc.QPen_new3(@ptrCast(color));
    }

    /// New4 constructs a new QPen object.
    ///
    /// ``` brush: QtC.QBrush, width: f64 ```
    pub fn New4(brush: ?*anyopaque, width: f64) QtC.QPen {
        return qtc.QPen_new4(@ptrCast(brush), @floatCast(width));
    }

    /// New5 constructs a new QPen object.
    ///
    /// ``` pen: QtC.QPen ```
    pub fn New5(pen: ?*anyopaque) QtC.QPen {
        return qtc.QPen_new5(@ptrCast(pen));
    }

    /// New6 constructs a new QPen object.
    ///
    /// ``` brush: QtC.QBrush, width: f64, s: qnamespace_enums.PenStyle ```
    pub fn New6(brush: ?*anyopaque, width: f64, s: i64) QtC.QPen {
        return qtc.QPen_new6(@ptrCast(brush), @floatCast(width), @intCast(s));
    }

    /// New7 constructs a new QPen object.
    ///
    /// ``` brush: QtC.QBrush, width: f64, s: qnamespace_enums.PenStyle, c: qnamespace_enums.PenCapStyle ```
    pub fn New7(brush: ?*anyopaque, width: f64, s: i64, c: i64) QtC.QPen {
        return qtc.QPen_new7(@ptrCast(brush), @floatCast(width), @intCast(s), @intCast(c));
    }

    /// New8 constructs a new QPen object.
    ///
    /// ``` brush: QtC.QBrush, width: f64, s: qnamespace_enums.PenStyle, c: qnamespace_enums.PenCapStyle, j: qnamespace_enums.PenJoinStyle ```
    pub fn New8(brush: ?*anyopaque, width: f64, s: i64, c: i64, j: i64) QtC.QPen {
        return qtc.QPen_new8(@ptrCast(brush), @floatCast(width), @intCast(s), @intCast(c), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#operator=)
    ///
    /// ``` self: QtC.QPen, pen: QtC.QPen ```
    pub fn OperatorAssign(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QPen_OperatorAssign(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#swap)
    ///
    /// ``` self: QtC.QPen, other: QtC.QPen ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPen_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#style)
    ///
    /// ``` self: QtC.QPen ```
    pub fn Style(self: ?*anyopaque) i64 {
        return qtc.QPen_Style(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setStyle)
    ///
    /// ``` self: QtC.QPen, style: qnamespace_enums.PenStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: i64) void {
        qtc.QPen_SetStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#dashPattern)
    ///
    /// ``` self: QtC.QPen, allocator: std.mem.Allocator ```
    pub fn DashPattern(self: ?*anyopaque, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.struct_libqt_list = qtc.QPen_DashPattern(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("qpen.DashPattern: Memory allocation failed");
        const _data: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setDashPattern)
    ///
    /// ``` self: QtC.QPen, pattern: []f64 ```
    pub fn SetDashPattern(self: ?*anyopaque, pattern: []f64) void {
        const pattern_list = qtc.struct_libqt_list{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QPen_SetDashPattern(@ptrCast(self), pattern_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#dashOffset)
    ///
    /// ``` self: QtC.QPen ```
    pub fn DashOffset(self: ?*anyopaque) f64 {
        return qtc.QPen_DashOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setDashOffset)
    ///
    /// ``` self: QtC.QPen, doffset: f64 ```
    pub fn SetDashOffset(self: ?*anyopaque, doffset: f64) void {
        qtc.QPen_SetDashOffset(@ptrCast(self), @floatCast(doffset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#miterLimit)
    ///
    /// ``` self: QtC.QPen ```
    pub fn MiterLimit(self: ?*anyopaque) f64 {
        return qtc.QPen_MiterLimit(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setMiterLimit)
    ///
    /// ``` self: QtC.QPen, limit: f64 ```
    pub fn SetMiterLimit(self: ?*anyopaque, limit: f64) void {
        qtc.QPen_SetMiterLimit(@ptrCast(self), @floatCast(limit));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#widthF)
    ///
    /// ``` self: QtC.QPen ```
    pub fn WidthF(self: ?*anyopaque) f64 {
        return qtc.QPen_WidthF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setWidthF)
    ///
    /// ``` self: QtC.QPen, width: f64 ```
    pub fn SetWidthF(self: ?*anyopaque, width: f64) void {
        qtc.QPen_SetWidthF(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#width)
    ///
    /// ``` self: QtC.QPen ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPen_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setWidth)
    ///
    /// ``` self: QtC.QPen, width: i32 ```
    pub fn SetWidth(self: ?*anyopaque, width: i32) void {
        qtc.QPen_SetWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#color)
    ///
    /// ``` self: QtC.QPen ```
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.QPen_Color(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setColor)
    ///
    /// ``` self: QtC.QPen, color: QtC.QColor ```
    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QPen_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#brush)
    ///
    /// ``` self: QtC.QPen ```
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPen_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setBrush)
    ///
    /// ``` self: QtC.QPen, brush: QtC.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPen_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#isSolid)
    ///
    /// ``` self: QtC.QPen ```
    pub fn IsSolid(self: ?*anyopaque) bool {
        return qtc.QPen_IsSolid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#capStyle)
    ///
    /// ``` self: QtC.QPen ```
    pub fn CapStyle(self: ?*anyopaque) i64 {
        return qtc.QPen_CapStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setCapStyle)
    ///
    /// ``` self: QtC.QPen, pcs: qnamespace_enums.PenCapStyle ```
    pub fn SetCapStyle(self: ?*anyopaque, pcs: i64) void {
        qtc.QPen_SetCapStyle(@ptrCast(self), @intCast(pcs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#joinStyle)
    ///
    /// ``` self: QtC.QPen ```
    pub fn JoinStyle(self: ?*anyopaque) i64 {
        return qtc.QPen_JoinStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setJoinStyle)
    ///
    /// ``` self: QtC.QPen, pcs: qnamespace_enums.PenJoinStyle ```
    pub fn SetJoinStyle(self: ?*anyopaque, pcs: i64) void {
        qtc.QPen_SetJoinStyle(@ptrCast(self), @intCast(pcs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#isCosmetic)
    ///
    /// ``` self: QtC.QPen ```
    pub fn IsCosmetic(self: ?*anyopaque) bool {
        return qtc.QPen_IsCosmetic(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setCosmetic)
    ///
    /// ``` self: QtC.QPen, cosmetic: bool ```
    pub fn SetCosmetic(self: ?*anyopaque, cosmetic: bool) void {
        qtc.QPen_SetCosmetic(@ptrCast(self), cosmetic);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#operator==)
    ///
    /// ``` self: QtC.QPen, p: QtC.QPen ```
    pub fn OperatorEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPen_OperatorEqual(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#operator!=)
    ///
    /// ``` self: QtC.QPen, p: QtC.QPen ```
    pub fn OperatorNotEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPen_OperatorNotEqual(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#operator QVariant)
    ///
    /// ``` self: QtC.QPen ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QPen_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#isDetached)
    ///
    /// ``` self: QtC.QPen ```
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QPen_IsDetached(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#dtor.QPen)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPen ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPen_Delete(@ptrCast(self));
    }
};
