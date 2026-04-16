const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMargins = @import("libqt6").QMargins;
const QMarginsF = @import("libqt6").QMarginsF;
const QPageSize = @import("libqt6").QPageSize;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const qpagelayout_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html)
pub const QPageLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPageLayout,

    pub const _is_QPageLayout = {};

    /// New constructs a new QPageLayout object.
    ///
    pub fn New() QPageLayout {
        return .{ .ptr = qtc.QPageLayout_new() };
    }

    /// New2 constructs a new QPageLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSize: QPageSize `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn New2(pageSize: anytype, orientation: i32, margins: anytype) QPageLayout {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QPageLayout_new2(@ptrCast(pageSize.ptr), @bitCast(orientation), @ptrCast(margins.ptr)) };
    }

    /// New3 constructs a new QPageLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPageLayout `
    ///
    pub fn New3(other: anytype) QPageLayout {
        comptime _ = @TypeOf(other)._is_QPageLayout;
        return .{ .ptr = qtc.QPageLayout_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QPageLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSize: QPageSize `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    /// ` margins: QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn New4(pageSize: anytype, orientation: i32, margins: anytype, units: i32) QPageLayout {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QPageLayout_new4(@ptrCast(pageSize.ptr), @bitCast(orientation), @ptrCast(margins.ptr), @bitCast(units)) };
    }

    /// New5 constructs a new QPageLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSize: QPageSize `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    /// ` margins: QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    /// ` minMargins: QMarginsF `
    ///
    pub fn New5(pageSize: anytype, orientation: i32, margins: anytype, units: i32, minMargins: anytype) QPageLayout {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        comptime _ = @TypeOf(minMargins)._is_QMarginsF;
        return .{ .ptr = qtc.QPageLayout_new5(@ptrCast(pageSize.ptr), @bitCast(orientation), @ptrCast(margins.ptr), @bitCast(units), @ptrCast(minMargins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` other: QPageLayout `
    ///
    pub fn OperatorAssign(self: QPageLayout, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPageLayout;
        qtc.QPageLayout_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` other: QPageLayout `
    ///
    pub fn Swap(self: QPageLayout, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPageLayout;
        qtc.QPageLayout_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#isEquivalentTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` other: QPageLayout `
    ///
    pub fn IsEquivalentTo(self: QPageLayout, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPageLayout;
        return qtc.QPageLayout_IsEquivalentTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn IsValid(self: QPageLayout) bool {
        return qtc.QPageLayout_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` mode: qpagelayout_enums.Mode `
    ///
    pub fn SetMode(self: QPageLayout, mode: i32) void {
        qtc.QPageLayout_SetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ## Returns:
    ///
    /// ` qpagelayout_enums.Mode `
    ///
    pub fn Mode(self: QPageLayout) i32 {
        return qtc.QPageLayout_Mode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` pageSize: QPageSize `
    ///
    pub fn SetPageSize(self: QPageLayout, pageSize: anytype) void {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        qtc.QPageLayout_SetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#pageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn PageSize(self: QPageLayout) QPageSize {
        return .{ .ptr = qtc.QPageLayout_PageSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn SetOrientation(self: QPageLayout, orientation: i32) void {
        qtc.QPageLayout_SetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ## Returns:
    ///
    /// ` qpagelayout_enums.Orientation `
    ///
    pub fn Orientation(self: QPageLayout) i32 {
        return qtc.QPageLayout_Orientation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setUnits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn SetUnits(self: QPageLayout, units: i32) void {
        qtc.QPageLayout_SetUnits(@ptrCast(self.ptr), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#units)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ## Returns:
    ///
    /// ` qpagelayout_enums.Unit `
    ///
    pub fn Units(self: QPageLayout) i32 {
        return qtc.QPageLayout_Units(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn SetMargins(self: QPageLayout, margins: anytype) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QPageLayout_SetMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setLeftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` leftMargin: f64 `
    ///
    pub fn SetLeftMargin(self: QPageLayout, leftMargin: f64) bool {
        return qtc.QPageLayout_SetLeftMargin(@ptrCast(self.ptr), @bitCast(leftMargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setRightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` rightMargin: f64 `
    ///
    pub fn SetRightMargin(self: QPageLayout, rightMargin: f64) bool {
        return qtc.QPageLayout_SetRightMargin(@ptrCast(self.ptr), @bitCast(rightMargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setTopMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` topMargin: f64 `
    ///
    pub fn SetTopMargin(self: QPageLayout, topMargin: f64) bool {
        return qtc.QPageLayout_SetTopMargin(@ptrCast(self.ptr), @bitCast(topMargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setBottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` bottomMargin: f64 `
    ///
    pub fn SetBottomMargin(self: QPageLayout, bottomMargin: f64) bool {
        return qtc.QPageLayout_SetBottomMargin(@ptrCast(self.ptr), @bitCast(bottomMargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#margins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn Margins(self: QPageLayout) QMarginsF {
        return .{ .ptr = qtc.QPageLayout_Margins(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#margins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn Margins2(self: QPageLayout, units: i32) QMarginsF {
        return .{ .ptr = qtc.QPageLayout_Margins2(@ptrCast(self.ptr), @bitCast(units)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#marginsPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn MarginsPoints(self: QPageLayout) QMargins {
        return .{ .ptr = qtc.QPageLayout_MarginsPoints(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#marginsPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` resolution: i32 `
    ///
    pub fn MarginsPixels(self: QPageLayout, resolution: i32) QMargins {
        return .{ .ptr = qtc.QPageLayout_MarginsPixels(@ptrCast(self.ptr), @bitCast(resolution)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setMinimumMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` minMargins: QMarginsF `
    ///
    pub fn SetMinimumMargins(self: QPageLayout, minMargins: anytype) void {
        comptime _ = @TypeOf(minMargins)._is_QMarginsF;
        qtc.QPageLayout_SetMinimumMargins(@ptrCast(self.ptr), @ptrCast(minMargins.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#minimumMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn MinimumMargins(self: QPageLayout) QMarginsF {
        return .{ .ptr = qtc.QPageLayout_MinimumMargins(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#maximumMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn MaximumMargins(self: QPageLayout) QMarginsF {
        return .{ .ptr = qtc.QPageLayout_MaximumMargins(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn FullRect(self: QPageLayout) QRectF {
        return .{ .ptr = qtc.QPageLayout_FullRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn FullRect2(self: QPageLayout, units: i32) QRectF {
        return .{ .ptr = qtc.QPageLayout_FullRect2(@ptrCast(self.ptr), @bitCast(units)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn FullRectPoints(self: QPageLayout) QRect {
        return .{ .ptr = qtc.QPageLayout_FullRectPoints(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` resolution: i32 `
    ///
    pub fn FullRectPixels(self: QPageLayout, resolution: i32) QRect {
        return .{ .ptr = qtc.QPageLayout_FullRectPixels(@ptrCast(self.ptr), @bitCast(resolution)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn PaintRect(self: QPageLayout) QRectF {
        return .{ .ptr = qtc.QPageLayout_PaintRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn PaintRect2(self: QPageLayout, units: i32) QRectF {
        return .{ .ptr = qtc.QPageLayout_PaintRect2(@ptrCast(self.ptr), @bitCast(units)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn PaintRectPoints(self: QPageLayout) QRect {
        return .{ .ptr = qtc.QPageLayout_PaintRectPoints(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` resolution: i32 `
    ///
    pub fn PaintRectPixels(self: QPageLayout, resolution: i32) QRect {
        return .{ .ptr = qtc.QPageLayout_PaintRectPixels(@ptrCast(self.ptr), @bitCast(resolution)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` pageSize: QPageSize `
    ///
    /// ` minMargins: QMarginsF `
    ///
    pub fn SetPageSize2(self: QPageLayout, pageSize: anytype, minMargins: anytype) void {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        comptime _ = @TypeOf(minMargins)._is_QMarginsF;
        qtc.QPageLayout_SetPageSize2(@ptrCast(self.ptr), @ptrCast(pageSize.ptr), @ptrCast(minMargins.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` margins: QMarginsF `
    ///
    /// ` outOfBoundsPolicy: qpagelayout_enums.OutOfBoundsPolicy `
    ///
    pub fn SetMargins2(self: QPageLayout, margins: anytype, outOfBoundsPolicy: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QPageLayout_SetMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(outOfBoundsPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setLeftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` leftMargin: f64 `
    ///
    /// ` outOfBoundsPolicy: qpagelayout_enums.OutOfBoundsPolicy `
    ///
    pub fn SetLeftMargin2(self: QPageLayout, leftMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetLeftMargin2(@ptrCast(self.ptr), @bitCast(leftMargin), @bitCast(outOfBoundsPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setRightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` rightMargin: f64 `
    ///
    /// ` outOfBoundsPolicy: qpagelayout_enums.OutOfBoundsPolicy `
    ///
    pub fn SetRightMargin2(self: QPageLayout, rightMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetRightMargin2(@ptrCast(self.ptr), @bitCast(rightMargin), @bitCast(outOfBoundsPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setTopMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` topMargin: f64 `
    ///
    /// ` outOfBoundsPolicy: qpagelayout_enums.OutOfBoundsPolicy `
    ///
    pub fn SetTopMargin2(self: QPageLayout, topMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetTopMargin2(@ptrCast(self.ptr), @bitCast(topMargin), @bitCast(outOfBoundsPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setBottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` bottomMargin: f64 `
    ///
    /// ` outOfBoundsPolicy: qpagelayout_enums.OutOfBoundsPolicy `
    ///
    pub fn SetBottomMargin2(self: QPageLayout, bottomMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetBottomMargin2(@ptrCast(self.ptr), @bitCast(bottomMargin), @bitCast(outOfBoundsPolicy));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#dtor.QPageLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPageLayout `
    ///
    pub fn Delete(self: QPageLayout) void {
        qtc.QPageLayout_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#public-types)
pub const enums = struct {
    pub const Unit = enum(i32) {
        pub const Millimeter: i32 = 0;
        pub const Point: i32 = 1;
        pub const Inch: i32 = 2;
        pub const Pica: i32 = 3;
        pub const Didot: i32 = 4;
        pub const Cicero: i32 = 5;
    };

    pub const Orientation = enum(i32) {
        pub const Portrait: i32 = 0;
        pub const Landscape: i32 = 1;
    };

    pub const Mode = enum(i32) {
        pub const StandardMode: i32 = 0;
        pub const FullPageMode: i32 = 1;
    };

    pub const OutOfBoundsPolicy = enum(i32) {
        pub const Reject: i32 = 0;
        pub const Clamp: i32 = 1;
    };
};
