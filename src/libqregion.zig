const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBitmap = @import("libqt6").QBitmap;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QVariant = @import("libqt6").QVariant;
const qregion_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html)
pub const QRegion = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRegion,

    pub const _is_QRegion = {};

    /// New constructs a new QRegion object.
    ///
    pub fn New() QRegion {
        return .{ .ptr = qtc.QRegion_new() };
    }

    /// New2 constructs a new QRegion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn New2(x: i32, y: i32, w: i32, h: i32) QRegion {
        return .{ .ptr = qtc.QRegion_new2(@bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// New3 constructs a new QRegion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` r: QRect `
    ///
    pub fn New3(r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_new3(@ptrCast(r.ptr)) };
    }

    /// New4 constructs a new QRegion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` region: QRegion `
    ///
    pub fn New4(region: anytype) QRegion {
        comptime _ = @TypeOf(region)._is_QRegion;
        return .{ .ptr = qtc.QRegion_new4(@ptrCast(region.ptr)) };
    }

    /// New5 constructs a new QRegion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bitmap: QBitmap `
    ///
    pub fn New5(bitmap: anytype) QRegion {
        comptime _ = @TypeOf(bitmap)._is_QBitmap;
        return .{ .ptr = qtc.QRegion_new5(@ptrCast(bitmap.ptr)) };
    }

    /// New6 constructs a new QRegion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` t: qregion_enums.RegionType `
    ///
    pub fn New6(x: i32, y: i32, w: i32, h: i32, t: i32) QRegion {
        return .{ .ptr = qtc.QRegion_new6(@bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(t)) };
    }

    /// New7 constructs a new QRegion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` r: QRect `
    ///
    /// ` t: qregion_enums.RegionType `
    ///
    pub fn New7(r: anytype, t: i32) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_new7(@ptrCast(r.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` param1: QRegion `
    ///
    pub fn OperatorAssign(self: QRegion, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QRegion_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` other: QRegion `
    ///
    pub fn Swap(self: QRegion, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRegion;
        qtc.QRegion_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn IsEmpty(self: QRegion) bool {
        return qtc.QRegion_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn IsNull(self: QRegion) bool {
        return qtc.QRegion_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn Begin(self: QRegion) QRect {
        return .{ .ptr = qtc.QRegion_Begin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn Cbegin(self: QRegion) QRect {
        return .{ .ptr = qtc.QRegion_Cbegin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn End(self: QRegion) QRect {
        return .{ .ptr = qtc.QRegion_End(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn Cend(self: QRegion) QRect {
        return .{ .ptr = qtc.QRegion_Cend(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` p: QPoint `
    ///
    pub fn Contains(self: QRegion, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPoint;
        return qtc.QRegion_Contains(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn Contains2(self: QRegion, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRect;
        return qtc.QRegion_Contains2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Translate(self: QRegion, dx: i32, dy: i32) void {
        qtc.QRegion_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` p: QPoint `
    ///
    pub fn Translate2(self: QRegion, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRegion_Translate2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Translated(self: QRegion, dx: i32, dy: i32) QRegion {
        return .{ .ptr = qtc.QRegion_Translated(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` p: QPoint `
    ///
    pub fn Translated2(self: QRegion, p: anytype) QRegion {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QRegion_Translated2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn United(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_United(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn United2(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_United2(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn Intersected(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_Intersected(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn Intersected2(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_Intersected2(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#subtracted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn Subtracted(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_Subtracted(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#xored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn Xored(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_Xored(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn Intersects(self: QRegion, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRegion;
        return qtc.QRegion_Intersects(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn Intersects2(self: QRegion, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRect;
        return qtc.QRegion_Intersects2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn BoundingRect(self: QRegion) QRect {
        return .{ .ptr = qtc.QRegion_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#setRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` rect: QRect `
    ///
    /// ` num: i32 `
    ///
    pub fn SetRects(self: QRegion, rect: anytype, num: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QRegion_SetRects(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(num));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#setRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: []QRect `
    ///
    pub fn SetRects2(self: QRegion, r: []QRect) void {
        const r_list = qtc.libqt_list{
            .len = r.len,
            .data = @ptrCast(r.ptr),
        };
        qtc.QRegion_SetRects2(@ptrCast(self.ptr), r_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#rects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Rects(self: QRegion, allocator: std.mem.Allocator) []QRect {
        const _arr: qtc.libqt_list = qtc.QRegion_Rects(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QRect, _arr.len) catch @panic("qregion.Rects: Memory allocation failed");
        const _data: [*]QtC.QRect = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#rectCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn RectCount(self: QRegion) i32 {
        return qtc.QRegion_RectCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn OperatorBitwiseOr(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorBitwiseOr(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn OperatorPlus(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorPlus(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn OperatorPlus2(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_OperatorPlus2(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn OperatorBitwiseAnd(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorBitwiseAnd(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn OperatorBitwiseAnd2(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_OperatorBitwiseAnd2(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn OperatorMinus(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorMinus(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-5e)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn OperatorBitwiseNot(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorBitwiseNot(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn OperatorBitwiseOrAssign(self: QRegion, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRegion;
        qtc.QRegion_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn OperatorPlusAssign(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn OperatorPlusAssign2(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_OperatorPlusAssign2(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn OperatorBitwiseAndAssign(self: QRegion, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRegion;
        qtc.QRegion_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn OperatorBitwiseAndAssign2(self: QRegion, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QRegion_OperatorBitwiseAndAssign2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn OperatorMinusAssign(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-5e-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn OperatorBitwiseNotAssign(self: QRegion, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRegion;
        qtc.QRegion_OperatorBitwiseNotAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn OperatorEqual(self: QRegion, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRegion;
        return qtc.QRegion_OperatorEqual(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn OperatorNotEqual(self: QRegion, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRegion;
        return qtc.QRegion_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn ToQVariant(self: QRegion) QVariant {
        return .{ .ptr = qtc.QRegion_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#dtor.QRegion)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QRegion `
    ///
    pub fn Delete(self: QRegion) void {
        qtc.QRegion_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#public-types)
pub const enums = struct {
    pub const RegionType = enum(i32) {
        pub const Rectangle: i32 = 0;
        pub const Ellipse: i32 = 1;
    };
};
