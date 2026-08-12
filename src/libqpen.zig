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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPen object in C++ memory
    ///
    pub fn new() QPen {
        return .{ .ptr = qtc.QPen_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPen object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.PenStyle `
    ///
    pub fn new2(param1: i32) QPen {
        return .{ .ptr = qtc.QPen_new2(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPen object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _color: QColor `
    ///
    pub fn new3(_color: anytype) QPen {
        comptime _ = @TypeOf(_color)._is_QColor;
        return .{ .ptr = qtc.QPen_new3(@ptrCast(_color.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPen object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _brush: QBrush `
    ///
    /// ` _width: f64 `
    ///
    pub fn new4(_brush: anytype, _width: f64) QPen {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        return .{ .ptr = qtc.QPen_new4(@ptrCast(_brush.ptr), @bitCast(_width)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QPen object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pen: QPen `
    ///
    pub fn new5(pen: anytype) QPen {
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QPen_new5(@ptrCast(pen.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QPen object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _brush: QBrush `
    ///
    /// ` _width: f64 `
    ///
    /// ` s: qnamespace_enums.PenStyle `
    ///
    pub fn new6(_brush: anytype, _width: f64, s: i32) QPen {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        return .{ .ptr = qtc.QPen_new6(@ptrCast(_brush.ptr), @bitCast(_width), @bitCast(s)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QPen object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _brush: QBrush `
    ///
    /// ` _width: f64 `
    ///
    /// ` s: qnamespace_enums.PenStyle `
    ///
    /// ` c: qnamespace_enums.PenCapStyle `
    ///
    pub fn new7(_brush: anytype, _width: f64, s: i32, c: i32) QPen {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        return .{ .ptr = qtc.QPen_new7(@ptrCast(_brush.ptr), @bitCast(_width), @bitCast(s), @bitCast(c)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QPen object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _brush: QBrush `
    ///
    /// ` _width: f64 `
    ///
    /// ` s: qnamespace_enums.PenStyle `
    ///
    /// ` c: qnamespace_enums.PenCapStyle `
    ///
    /// ` j: qnamespace_enums.PenJoinStyle `
    ///
    pub fn new8(_brush: anytype, _width: f64, s: i32, c: i32, j: i32) QPen {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        return .{ .ptr = qtc.QPen_new8(@ptrCast(_brush.ptr), @bitCast(_width), @bitCast(s), @bitCast(c), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` pen: QPen `
    ///
    pub fn operatorAssign(self: QPen, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QPen_OperatorAssign(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` other: QPen `
    ///
    pub fn swap(self: QPen, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPen;
        qtc.QPen_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

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
    pub fn style(self: QPen) i32 {
        return qtc.QPen_Style(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` _style: qnamespace_enums.PenStyle `
    ///
    pub fn setStyle(self: QPen, _style: i32) void {
        qtc.QPen_SetStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `dashPattern` instead
    ///
    pub const DashPattern = dashPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#dashPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dashPattern(self: QPen, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.QPen_DashPattern(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("QPen.dashPattern: Memory allocation failed");
        const _data_val: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDashPattern` instead
    ///
    pub const SetDashPattern = setDashPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setDashPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` pattern: []f64 `
    ///
    pub fn setDashPattern(self: QPen, pattern: []f64) void {
        const pattern_list = qtc.libqt_list{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QPen_SetDashPattern(@ptrCast(self.ptr), pattern_list);
    }

    /// ### DEPRECATED: Use `dashOffset` instead
    ///
    pub const DashOffset = dashOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#dashOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn dashOffset(self: QPen) f64 {
        return qtc.QPen_DashOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDashOffset` instead
    ///
    pub const SetDashOffset = setDashOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setDashOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` doffset: f64 `
    ///
    pub fn setDashOffset(self: QPen, doffset: f64) void {
        qtc.QPen_SetDashOffset(@ptrCast(self.ptr), @bitCast(doffset));
    }

    /// ### DEPRECATED: Use `miterLimit` instead
    ///
    pub const MiterLimit = miterLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#miterLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn miterLimit(self: QPen) f64 {
        return qtc.QPen_MiterLimit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMiterLimit` instead
    ///
    pub const SetMiterLimit = setMiterLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setMiterLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` limit: f64 `
    ///
    pub fn setMiterLimit(self: QPen, limit: f64) void {
        qtc.QPen_SetMiterLimit(@ptrCast(self.ptr), @bitCast(limit));
    }

    /// ### DEPRECATED: Use `widthF` instead
    ///
    pub const WidthF = widthF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#widthF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn widthF(self: QPen) f64 {
        return qtc.QPen_WidthF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidthF` instead
    ///
    pub const SetWidthF = setWidthF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setWidthF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` _width: f64 `
    ///
    pub fn setWidthF(self: QPen, _width: f64) void {
        qtc.QPen_SetWidthF(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn width(self: QPen) i32 {
        return qtc.QPen_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` _width: i32 `
    ///
    pub fn setWidth(self: QPen, _width: i32) void {
        qtc.QPen_SetWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn color(self: QPen) QColor {
        return .{ .ptr = qtc.QPen_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QPen, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QPen_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn brush(self: QPen) QBrush {
        return .{ .ptr = qtc.QPen_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QPen, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QPen_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `isSolid` instead
    ///
    pub const IsSolid = isSolid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#isSolid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn isSolid(self: QPen) bool {
        return qtc.QPen_IsSolid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `capStyle` instead
    ///
    pub const CapStyle = capStyle;

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
    pub fn capStyle(self: QPen) i32 {
        return qtc.QPen_CapStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCapStyle` instead
    ///
    pub const SetCapStyle = setCapStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setCapStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` pcs: qnamespace_enums.PenCapStyle `
    ///
    pub fn setCapStyle(self: QPen, pcs: i32) void {
        qtc.QPen_SetCapStyle(@ptrCast(self.ptr), @bitCast(pcs));
    }

    /// ### DEPRECATED: Use `joinStyle` instead
    ///
    pub const JoinStyle = joinStyle;

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
    pub fn joinStyle(self: QPen) i32 {
        return qtc.QPen_JoinStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setJoinStyle` instead
    ///
    pub const SetJoinStyle = setJoinStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setJoinStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` pcs: qnamespace_enums.PenJoinStyle `
    ///
    pub fn setJoinStyle(self: QPen, pcs: i32) void {
        qtc.QPen_SetJoinStyle(@ptrCast(self.ptr), @bitCast(pcs));
    }

    /// ### DEPRECATED: Use `isCosmetic` instead
    ///
    pub const IsCosmetic = isCosmetic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#isCosmetic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn isCosmetic(self: QPen) bool {
        return qtc.QPen_IsCosmetic(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCosmetic` instead
    ///
    pub const SetCosmetic = setCosmetic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setCosmetic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` cosmetic: bool `
    ///
    pub fn setCosmetic(self: QPen, cosmetic: bool) void {
        qtc.QPen_SetCosmetic(@ptrCast(self.ptr), cosmetic);
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` p: QPen `
    ///
    pub fn operatorEqual(self: QPen, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPen;
        return qtc.QPen_OperatorEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    /// ` p: QPen `
    ///
    pub fn operatorNotEqual(self: QPen, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPen;
        return qtc.QPen_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn toQVariant(self: QPen) QVariant {
        return .{ .ptr = qtc.QPen_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isDetached` instead
    ///
    pub const IsDetached = isDetached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPen `
    ///
    pub fn isDetached(self: QPen) bool {
        return qtc.QPen_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpen.html#dtor.QPen)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPen `
    ///
    pub fn delete(self: QPen) void {
        qtc.QPen_Delete(@ptrCast(self.ptr));
    }
};
