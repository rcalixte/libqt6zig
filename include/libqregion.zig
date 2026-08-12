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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRegion object in C++ memory
    ///
    pub fn new() QRegion {
        return .{ .ptr = qtc.QRegion_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QRegion object in C++ memory
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
    pub fn new2(x: i32, y: i32, w: i32, h: i32) QRegion {
        return .{ .ptr = qtc.QRegion_new2(@bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QRegion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` r: QRect `
    ///
    pub fn new3(r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_new3(@ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QRegion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` region: QRegion `
    ///
    pub fn new4(region: anytype) QRegion {
        comptime _ = @TypeOf(region)._is_QRegion;
        return .{ .ptr = qtc.QRegion_new4(@ptrCast(region.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QRegion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` bitmap: QBitmap `
    ///
    pub fn new5(bitmap: anytype) QRegion {
        comptime _ = @TypeOf(bitmap)._is_QBitmap;
        return .{ .ptr = qtc.QRegion_new5(@ptrCast(bitmap.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QRegion object in C++ memory
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
    pub fn new6(x: i32, y: i32, w: i32, h: i32, t: i32) QRegion {
        return .{ .ptr = qtc.QRegion_new6(@bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QRegion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` r: QRect `
    ///
    /// ` t: qregion_enums.RegionType `
    ///
    pub fn new7(r: anytype, t: i32) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_new7(@ptrCast(r.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` param1: QRegion `
    ///
    pub fn operatorAssign(self: QRegion, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QRegion_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` other: QRegion `
    ///
    pub fn swap(self: QRegion, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRegion;
        qtc.QRegion_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn isEmpty(self: QRegion) bool {
        return qtc.QRegion_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn isNull(self: QRegion) bool {
        return qtc.QRegion_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn begin(self: QRegion) QRect {
        return .{ .ptr = qtc.QRegion_Begin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cbegin` instead
    ///
    pub const Cbegin = cbegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn cbegin(self: QRegion) QRect {
        return .{ .ptr = qtc.QRegion_Cbegin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn end(self: QRegion) QRect {
        return .{ .ptr = qtc.QRegion_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cend` instead
    ///
    pub const Cend = cend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn cend(self: QRegion) QRect {
        return .{ .ptr = qtc.QRegion_Cend(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` p: QPoint `
    ///
    pub fn contains(self: QRegion, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPoint;
        return qtc.QRegion_Contains(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `contains2` instead
    ///
    pub const Contains2 = contains2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn contains2(self: QRegion, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRect;
        return qtc.QRegion_Contains2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

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
    pub fn translate(self: QRegion, dx: i32, dy: i32) void {
        qtc.QRegion_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `translate2` instead
    ///
    pub const Translate2 = translate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` p: QPoint `
    ///
    pub fn translate2(self: QRegion, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRegion_Translate2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

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
    pub fn translated(self: QRegion, dx: i32, dy: i32) QRegion {
        return .{ .ptr = qtc.QRegion_Translated(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

    /// ### DEPRECATED: Use `translated2` instead
    ///
    pub const Translated2 = translated2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` p: QPoint `
    ///
    pub fn translated2(self: QRegion, p: anytype) QRegion {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QRegion_Translated2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `united` instead
    ///
    pub const United = united;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn united(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_United(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `united2` instead
    ///
    pub const United2 = united2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn united2(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_United2(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `intersected` instead
    ///
    pub const Intersected = intersected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn intersected(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_Intersected(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `intersected2` instead
    ///
    pub const Intersected2 = intersected2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn intersected2(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_Intersected2(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `subtracted` instead
    ///
    pub const Subtracted = subtracted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#subtracted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn subtracted(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_Subtracted(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `xored` instead
    ///
    pub const Xored = xored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#xored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn xored(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_Xored(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `intersects` instead
    ///
    pub const Intersects = intersects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn intersects(self: QRegion, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRegion;
        return qtc.QRegion_Intersects(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `intersects2` instead
    ///
    pub const Intersects2 = intersects2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn intersects2(self: QRegion, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRect;
        return qtc.QRegion_Intersects2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn boundingRect(self: QRegion) QRect {
        return .{ .ptr = qtc.QRegion_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRects` instead
    ///
    pub const SetRects = setRects;

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
    pub fn setRects(self: QRegion, rect: anytype, num: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QRegion_SetRects(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(num));
    }

    /// ### DEPRECATED: Use `setRects2` instead
    ///
    pub const SetRects2 = setRects2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#setRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: []QRect `
    ///
    pub fn setRects2(self: QRegion, r: []QRect) void {
        const r_list = qtc.libqt_list{
            .len = r.len,
            .data = @ptrCast(r.ptr),
        };
        qtc.QRegion_SetRects2(@ptrCast(self.ptr), r_list);
    }

    /// ### DEPRECATED: Use `rects` instead
    ///
    pub const Rects = rects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#rects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rects(self: QRegion, allocator: std.mem.Allocator) []QRect {
        const _arr: qtc.libqt_list = qtc.QRegion_Rects(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QRect, _arr.len) catch @panic("QRegion.rects: Memory allocation failed");
        const _data_val: [*]QtC.QRect = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `rectCount` instead
    ///
    pub const RectCount = rectCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#rectCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn rectCount(self: QRegion) i32 {
        return qtc.QRegion_RectCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseOr` instead
    ///
    pub const OperatorBitwiseOr = operatorBitwiseOr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn operatorBitwiseOr(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorBitwiseOr(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn operatorPlus(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorPlus(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlus2` instead
    ///
    pub const OperatorPlus2 = operatorPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn operatorPlus2(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_OperatorPlus2(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseAnd` instead
    ///
    pub const OperatorBitwiseAnd = operatorBitwiseAnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn operatorBitwiseAnd(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorBitwiseAnd(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseAnd2` instead
    ///
    pub const OperatorBitwiseAnd2 = operatorBitwiseAnd2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn operatorBitwiseAnd2(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_OperatorBitwiseAnd2(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinus` instead
    ///
    pub const OperatorMinus = operatorMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn operatorMinus(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorMinus(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseNot` instead
    ///
    pub const OperatorBitwiseNot = operatorBitwiseNot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-5e)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn operatorBitwiseNot(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorBitwiseNot(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseOrAssign` instead
    ///
    pub const OperatorBitwiseOrAssign = operatorBitwiseOrAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn operatorBitwiseOrAssign(self: QRegion, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRegion;
        qtc.QRegion_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn operatorPlusAssign(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign2` instead
    ///
    pub const OperatorPlusAssign2 = operatorPlusAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn operatorPlusAssign2(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRegion_OperatorPlusAssign2(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseAndAssign` instead
    ///
    pub const OperatorBitwiseAndAssign = operatorBitwiseAndAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn operatorBitwiseAndAssign(self: QRegion, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRegion;
        qtc.QRegion_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseAndAssign2` instead
    ///
    pub const OperatorBitwiseAndAssign2 = operatorBitwiseAndAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRect `
    ///
    pub fn operatorBitwiseAndAssign2(self: QRegion, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QRegion_OperatorBitwiseAndAssign2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn operatorMinusAssign(self: QRegion, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QRegion_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseNotAssign` instead
    ///
    pub const OperatorBitwiseNotAssign = operatorBitwiseNotAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-5e-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn operatorBitwiseNotAssign(self: QRegion, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRegion;
        qtc.QRegion_OperatorBitwiseNotAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn operatorEqual(self: QRegion, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRegion;
        return qtc.QRegion_OperatorEqual(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    /// ` r: QRegion `
    ///
    pub fn operatorNotEqual(self: QRegion, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRegion;
        return qtc.QRegion_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegion `
    ///
    pub fn toQVariant(self: QRegion) QVariant {
        return .{ .ptr = qtc.QRegion_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregion.html#dtor.QRegion)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRegion `
    ///
    pub fn delete(self: QRegion) void {
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
