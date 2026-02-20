const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpagelayout_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html)
pub const qpagelayout = struct {
    /// New constructs a new QPageLayout object.
    ///
    pub fn New() QtC.QPageLayout {
        return qtc.QPageLayout_new();
    }

    /// New2 constructs a new QPageLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSize: QtC.QPageSize `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    pub fn New2(pageSize: ?*anyopaque, orientation: i32, margins: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPageLayout_new2(@ptrCast(pageSize), @bitCast(orientation), @ptrCast(margins));
    }

    /// New3 constructs a new QPageLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPageLayout `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPageLayout_new3(@ptrCast(other));
    }

    /// New4 constructs a new QPageLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSize: QtC.QPageSize `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn New4(pageSize: ?*anyopaque, orientation: i32, margins: ?*anyopaque, units: i32) QtC.QPageLayout {
        return qtc.QPageLayout_new4(@ptrCast(pageSize), @bitCast(orientation), @ptrCast(margins), @bitCast(units));
    }

    /// New5 constructs a new QPageLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSize: QtC.QPageSize `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    /// ` minMargins: QtC.QMarginsF `
    ///
    pub fn New5(pageSize: ?*anyopaque, orientation: i32, margins: ?*anyopaque, units: i32, minMargins: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPageLayout_new5(@ptrCast(pageSize), @bitCast(orientation), @ptrCast(margins), @bitCast(units), @ptrCast(minMargins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` other: QtC.QPageLayout `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageLayout_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` other: QtC.QPageLayout `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageLayout_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#isEquivalentTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` other: QtC.QPageLayout `
    ///
    pub fn IsEquivalentTo(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPageLayout_IsEquivalentTo(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QPageLayout_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` mode: qpagelayout_enums.Mode `
    ///
    pub fn SetMode(self: ?*anyopaque, mode: i32) void {
        qtc.QPageLayout_SetMode(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ## Returns:
    ///
    /// ` qpagelayout_enums.Mode `
    ///
    pub fn Mode(self: ?*anyopaque) i32 {
        return qtc.QPageLayout_Mode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` pageSize: QtC.QPageSize `
    ///
    pub fn SetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) void {
        qtc.QPageLayout_SetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#pageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    pub fn PageSize(self: ?*anyopaque) QtC.QPageSize {
        return qtc.QPageLayout_PageSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QPageLayout_SetOrientation(@ptrCast(self), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ## Returns:
    ///
    /// ` qpagelayout_enums.Orientation `
    ///
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QPageLayout_Orientation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setUnits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn SetUnits(self: ?*anyopaque, units: i32) void {
        qtc.QPageLayout_SetUnits(@ptrCast(self), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#units)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ## Returns:
    ///
    /// ` qpagelayout_enums.Unit `
    ///
    pub fn Units(self: ?*anyopaque) i32 {
        return qtc.QPageLayout_Units(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    pub fn SetMargins(self: ?*anyopaque, margins: ?*anyopaque) bool {
        return qtc.QPageLayout_SetMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setLeftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` leftMargin: f64 `
    ///
    pub fn SetLeftMargin(self: ?*anyopaque, leftMargin: f64) bool {
        return qtc.QPageLayout_SetLeftMargin(@ptrCast(self), @bitCast(leftMargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setRightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` rightMargin: f64 `
    ///
    pub fn SetRightMargin(self: ?*anyopaque, rightMargin: f64) bool {
        return qtc.QPageLayout_SetRightMargin(@ptrCast(self), @bitCast(rightMargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setTopMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` topMargin: f64 `
    ///
    pub fn SetTopMargin(self: ?*anyopaque, topMargin: f64) bool {
        return qtc.QPageLayout_SetTopMargin(@ptrCast(self), @bitCast(topMargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setBottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` bottomMargin: f64 `
    ///
    pub fn SetBottomMargin(self: ?*anyopaque, bottomMargin: f64) bool {
        return qtc.QPageLayout_SetBottomMargin(@ptrCast(self), @bitCast(bottomMargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#margins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    pub fn Margins(self: ?*anyopaque) QtC.QMarginsF {
        return qtc.QPageLayout_Margins(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#margins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn Margins2(self: ?*anyopaque, units: i32) QtC.QMarginsF {
        return qtc.QPageLayout_Margins2(@ptrCast(self), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#marginsPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    pub fn MarginsPoints(self: ?*anyopaque) QtC.QMargins {
        return qtc.QPageLayout_MarginsPoints(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#marginsPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` resolution: i32 `
    ///
    pub fn MarginsPixels(self: ?*anyopaque, resolution: i32) QtC.QMargins {
        return qtc.QPageLayout_MarginsPixels(@ptrCast(self), @bitCast(resolution));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setMinimumMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` minMargins: QtC.QMarginsF `
    ///
    pub fn SetMinimumMargins(self: ?*anyopaque, minMargins: ?*anyopaque) void {
        qtc.QPageLayout_SetMinimumMargins(@ptrCast(self), @ptrCast(minMargins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#minimumMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    pub fn MinimumMargins(self: ?*anyopaque) QtC.QMarginsF {
        return qtc.QPageLayout_MinimumMargins(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#maximumMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    pub fn MaximumMargins(self: ?*anyopaque) QtC.QMarginsF {
        return qtc.QPageLayout_MaximumMargins(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    pub fn FullRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPageLayout_FullRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn FullRect2(self: ?*anyopaque, units: i32) QtC.QRectF {
        return qtc.QPageLayout_FullRect2(@ptrCast(self), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    pub fn FullRectPoints(self: ?*anyopaque) QtC.QRect {
        return qtc.QPageLayout_FullRectPoints(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` resolution: i32 `
    ///
    pub fn FullRectPixels(self: ?*anyopaque, resolution: i32) QtC.QRect {
        return qtc.QPageLayout_FullRectPixels(@ptrCast(self), @bitCast(resolution));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    pub fn PaintRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPageLayout_PaintRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn PaintRect2(self: ?*anyopaque, units: i32) QtC.QRectF {
        return qtc.QPageLayout_PaintRect2(@ptrCast(self), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    pub fn PaintRectPoints(self: ?*anyopaque) QtC.QRect {
        return qtc.QPageLayout_PaintRectPoints(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` resolution: i32 `
    ///
    pub fn PaintRectPixels(self: ?*anyopaque, resolution: i32) QtC.QRect {
        return qtc.QPageLayout_PaintRectPixels(@ptrCast(self), @bitCast(resolution));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` pageSize: QtC.QPageSize `
    ///
    /// ` minMargins: QtC.QMarginsF `
    ///
    pub fn SetPageSize2(self: ?*anyopaque, pageSize: ?*anyopaque, minMargins: ?*anyopaque) void {
        qtc.QPageLayout_SetPageSize2(@ptrCast(self), @ptrCast(pageSize), @ptrCast(minMargins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    /// ` outOfBoundsPolicy: qpagelayout_enums.OutOfBoundsPolicy `
    ///
    pub fn SetMargins2(self: ?*anyopaque, margins: ?*anyopaque, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetMargins2(@ptrCast(self), @ptrCast(margins), @bitCast(outOfBoundsPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setLeftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` leftMargin: f64 `
    ///
    /// ` outOfBoundsPolicy: qpagelayout_enums.OutOfBoundsPolicy `
    ///
    pub fn SetLeftMargin2(self: ?*anyopaque, leftMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetLeftMargin2(@ptrCast(self), @bitCast(leftMargin), @bitCast(outOfBoundsPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setRightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` rightMargin: f64 `
    ///
    /// ` outOfBoundsPolicy: qpagelayout_enums.OutOfBoundsPolicy `
    ///
    pub fn SetRightMargin2(self: ?*anyopaque, rightMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetRightMargin2(@ptrCast(self), @bitCast(rightMargin), @bitCast(outOfBoundsPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setTopMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` topMargin: f64 `
    ///
    /// ` outOfBoundsPolicy: qpagelayout_enums.OutOfBoundsPolicy `
    ///
    pub fn SetTopMargin2(self: ?*anyopaque, topMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetTopMargin2(@ptrCast(self), @bitCast(topMargin), @bitCast(outOfBoundsPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setBottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageLayout `
    ///
    /// ` bottomMargin: f64 `
    ///
    /// ` outOfBoundsPolicy: qpagelayout_enums.OutOfBoundsPolicy `
    ///
    pub fn SetBottomMargin2(self: ?*anyopaque, bottomMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetBottomMargin2(@ptrCast(self), @bitCast(bottomMargin), @bitCast(outOfBoundsPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#dtor.QPageLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPageLayout `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPageLayout_Delete(@ptrCast(self));
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
