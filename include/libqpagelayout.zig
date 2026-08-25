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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPageLayout object in C++ memory
    ///
    pub fn new() QPageLayout {
        return .{ .ptr = qtc.QPageLayout_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPageLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pageSize: QPageSize `
    ///
    /// ` _orientation: qpagelayout_enums.Orientation `
    ///
    /// ` _margins: QMarginsF `
    ///
    pub fn new2(_pageSize: anytype, _orientation: i32, _margins: anytype) QPageLayout {
        comptime _ = @TypeOf(_pageSize)._is_QPageSize;
        comptime _ = @TypeOf(_margins)._is_QMarginsF;
        return .{ .ptr = qtc.QPageLayout_new2(@ptrCast(_pageSize.ptr), @bitCast(_orientation), @ptrCast(_margins.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPageLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPageLayout `
    ///
    pub fn new3(other: anytype) QPageLayout {
        comptime _ = @TypeOf(other)._is_QPageLayout;
        return .{ .ptr = qtc.QPageLayout_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPageLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pageSize: QPageSize `
    ///
    /// ` _orientation: qpagelayout_enums.Orientation `
    ///
    /// ` _margins: QMarginsF `
    ///
    /// ` _units: qpagelayout_enums.Unit `
    ///
    pub fn new4(_pageSize: anytype, _orientation: i32, _margins: anytype, _units: i32) QPageLayout {
        comptime _ = @TypeOf(_pageSize)._is_QPageSize;
        comptime _ = @TypeOf(_margins)._is_QMarginsF;
        return .{ .ptr = qtc.QPageLayout_new4(@ptrCast(_pageSize.ptr), @bitCast(_orientation), @ptrCast(_margins.ptr), @bitCast(_units)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QPageLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pageSize: QPageSize `
    ///
    /// ` _orientation: qpagelayout_enums.Orientation `
    ///
    /// ` _margins: QMarginsF `
    ///
    /// ` _units: qpagelayout_enums.Unit `
    ///
    /// ` minMargins: QMarginsF `
    ///
    pub fn new5(_pageSize: anytype, _orientation: i32, _margins: anytype, _units: i32, minMargins: anytype) QPageLayout {
        comptime _ = @TypeOf(_pageSize)._is_QPageSize;
        comptime _ = @TypeOf(_margins)._is_QMarginsF;
        comptime _ = @TypeOf(minMargins)._is_QMarginsF;
        return .{ .ptr = qtc.QPageLayout_new5(@ptrCast(_pageSize.ptr), @bitCast(_orientation), @ptrCast(_margins.ptr), @bitCast(_units), @ptrCast(minMargins.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` other: QPageLayout `
    ///
    pub fn operatorAssign(self: QPageLayout, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPageLayout;
        qtc.QPageLayout_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` other: QPageLayout `
    ///
    pub fn swap(self: QPageLayout, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPageLayout;
        qtc.QPageLayout_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEquivalentTo` instead
    ///
    pub const IsEquivalentTo = isEquivalentTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#isEquivalentTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` other: QPageLayout `
    ///
    pub fn isEquivalentTo(self: QPageLayout, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPageLayout;
        return qtc.QPageLayout_IsEquivalentTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn isValid(self: QPageLayout) bool {
        return qtc.QPageLayout_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMode` instead
    ///
    pub const SetMode = setMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` _mode: qpagelayout_enums.Mode `
    ///
    pub fn setMode(self: QPageLayout, _mode: i32) void {
        qtc.QPageLayout_SetMode(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

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
    pub fn mode(self: QPageLayout) i32 {
        return qtc.QPageLayout_Mode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPageSize` instead
    ///
    pub const SetPageSize = setPageSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` _pageSize: QPageSize `
    ///
    pub fn setPageSize(self: QPageLayout, _pageSize: anytype) void {
        comptime _ = @TypeOf(_pageSize)._is_QPageSize;
        qtc.QPageLayout_SetPageSize(@ptrCast(self.ptr), @ptrCast(_pageSize.ptr));
    }

    /// ### DEPRECATED: Use `pageSize` instead
    ///
    pub const PageSize = pageSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#pageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn pageSize(self: QPageLayout) QPageSize {
        return .{ .ptr = qtc.QPageLayout_PageSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOrientation` instead
    ///
    pub const SetOrientation = setOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` _orientation: qpagelayout_enums.Orientation `
    ///
    pub fn setOrientation(self: QPageLayout, _orientation: i32) void {
        qtc.QPageLayout_SetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

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
    pub fn orientation(self: QPageLayout) i32 {
        return qtc.QPageLayout_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnits` instead
    ///
    pub const SetUnits = setUnits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setUnits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` _units: qpagelayout_enums.Unit `
    ///
    pub fn setUnits(self: QPageLayout, _units: i32) void {
        qtc.QPageLayout_SetUnits(@ptrCast(self.ptr), @bitCast(_units));
    }

    /// ### DEPRECATED: Use `units` instead
    ///
    pub const Units = units;

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
    pub fn units(self: QPageLayout) i32 {
        return qtc.QPageLayout_Units(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMargins` instead
    ///
    pub const SetMargins = setMargins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` _margins: QMarginsF `
    ///
    pub fn setMargins(self: QPageLayout, _margins: anytype) bool {
        comptime _ = @TypeOf(_margins)._is_QMarginsF;
        return qtc.QPageLayout_SetMargins(@ptrCast(self.ptr), @ptrCast(_margins.ptr));
    }

    /// ### DEPRECATED: Use `setLeftMargin` instead
    ///
    pub const SetLeftMargin = setLeftMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setLeftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` leftMargin: f64 `
    ///
    pub fn setLeftMargin(self: QPageLayout, leftMargin: f64) bool {
        return qtc.QPageLayout_SetLeftMargin(@ptrCast(self.ptr), @bitCast(leftMargin));
    }

    /// ### DEPRECATED: Use `setRightMargin` instead
    ///
    pub const SetRightMargin = setRightMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setRightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` rightMargin: f64 `
    ///
    pub fn setRightMargin(self: QPageLayout, rightMargin: f64) bool {
        return qtc.QPageLayout_SetRightMargin(@ptrCast(self.ptr), @bitCast(rightMargin));
    }

    /// ### DEPRECATED: Use `setTopMargin` instead
    ///
    pub const SetTopMargin = setTopMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setTopMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` topMargin: f64 `
    ///
    pub fn setTopMargin(self: QPageLayout, topMargin: f64) bool {
        return qtc.QPageLayout_SetTopMargin(@ptrCast(self.ptr), @bitCast(topMargin));
    }

    /// ### DEPRECATED: Use `setBottomMargin` instead
    ///
    pub const SetBottomMargin = setBottomMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setBottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` bottomMargin: f64 `
    ///
    pub fn setBottomMargin(self: QPageLayout, bottomMargin: f64) bool {
        return qtc.QPageLayout_SetBottomMargin(@ptrCast(self.ptr), @bitCast(bottomMargin));
    }

    /// ### DEPRECATED: Use `margins` instead
    ///
    pub const Margins = margins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#margins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn margins(self: QPageLayout) QMarginsF {
        return .{ .ptr = qtc.QPageLayout_Margins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `margins2` instead
    ///
    pub const Margins2 = margins2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#margins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` _units: qpagelayout_enums.Unit `
    ///
    pub fn margins2(self: QPageLayout, _units: i32) QMarginsF {
        return .{ .ptr = qtc.QPageLayout_Margins2(@ptrCast(self.ptr), @bitCast(_units)) };
    }

    /// ### DEPRECATED: Use `marginsPoints` instead
    ///
    pub const MarginsPoints = marginsPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#marginsPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn marginsPoints(self: QPageLayout) QMargins {
        return .{ .ptr = qtc.QPageLayout_MarginsPoints(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `marginsPixels` instead
    ///
    pub const MarginsPixels = marginsPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#marginsPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` resolution: i32 `
    ///
    pub fn marginsPixels(self: QPageLayout, resolution: i32) QMargins {
        return .{ .ptr = qtc.QPageLayout_MarginsPixels(@ptrCast(self.ptr), @bitCast(resolution)) };
    }

    /// ### DEPRECATED: Use `setMinimumMargins` instead
    ///
    pub const SetMinimumMargins = setMinimumMargins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setMinimumMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` minMargins: QMarginsF `
    ///
    pub fn setMinimumMargins(self: QPageLayout, minMargins: anytype) void {
        comptime _ = @TypeOf(minMargins)._is_QMarginsF;
        qtc.QPageLayout_SetMinimumMargins(@ptrCast(self.ptr), @ptrCast(minMargins.ptr));
    }

    /// ### DEPRECATED: Use `minimumMargins` instead
    ///
    pub const MinimumMargins = minimumMargins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#minimumMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn minimumMargins(self: QPageLayout) QMarginsF {
        return .{ .ptr = qtc.QPageLayout_MinimumMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumMargins` instead
    ///
    pub const MaximumMargins = maximumMargins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#maximumMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn maximumMargins(self: QPageLayout) QMarginsF {
        return .{ .ptr = qtc.QPageLayout_MaximumMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fullRect` instead
    ///
    pub const FullRect = fullRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn fullRect(self: QPageLayout) QRectF {
        return .{ .ptr = qtc.QPageLayout_FullRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fullRect2` instead
    ///
    pub const FullRect2 = fullRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` _units: qpagelayout_enums.Unit `
    ///
    pub fn fullRect2(self: QPageLayout, _units: i32) QRectF {
        return .{ .ptr = qtc.QPageLayout_FullRect2(@ptrCast(self.ptr), @bitCast(_units)) };
    }

    /// ### DEPRECATED: Use `fullRectPoints` instead
    ///
    pub const FullRectPoints = fullRectPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn fullRectPoints(self: QPageLayout) QRect {
        return .{ .ptr = qtc.QPageLayout_FullRectPoints(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fullRectPixels` instead
    ///
    pub const FullRectPixels = fullRectPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` resolution: i32 `
    ///
    pub fn fullRectPixels(self: QPageLayout, resolution: i32) QRect {
        return .{ .ptr = qtc.QPageLayout_FullRectPixels(@ptrCast(self.ptr), @bitCast(resolution)) };
    }

    /// ### DEPRECATED: Use `paintRect` instead
    ///
    pub const PaintRect = paintRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn paintRect(self: QPageLayout) QRectF {
        return .{ .ptr = qtc.QPageLayout_PaintRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `paintRect2` instead
    ///
    pub const PaintRect2 = paintRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` _units: qpagelayout_enums.Unit `
    ///
    pub fn paintRect2(self: QPageLayout, _units: i32) QRectF {
        return .{ .ptr = qtc.QPageLayout_PaintRect2(@ptrCast(self.ptr), @bitCast(_units)) };
    }

    /// ### DEPRECATED: Use `paintRectPoints` instead
    ///
    pub const PaintRectPoints = paintRectPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    pub fn paintRectPoints(self: QPageLayout) QRect {
        return .{ .ptr = qtc.QPageLayout_PaintRectPoints(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `paintRectPixels` instead
    ///
    pub const PaintRectPixels = paintRectPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` resolution: i32 `
    ///
    pub fn paintRectPixels(self: QPageLayout, resolution: i32) QRect {
        return .{ .ptr = qtc.QPageLayout_PaintRectPixels(@ptrCast(self.ptr), @bitCast(resolution)) };
    }

    /// ### DEPRECATED: Use `setPageSize2` instead
    ///
    pub const SetPageSize2 = setPageSize2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` _pageSize: QPageSize `
    ///
    /// ` minMargins: QMarginsF `
    ///
    pub fn setPageSize2(self: QPageLayout, _pageSize: anytype, minMargins: anytype) void {
        comptime _ = @TypeOf(_pageSize)._is_QPageSize;
        comptime _ = @TypeOf(minMargins)._is_QMarginsF;
        qtc.QPageLayout_SetPageSize2(@ptrCast(self.ptr), @ptrCast(_pageSize.ptr), @ptrCast(minMargins.ptr));
    }

    /// ### DEPRECATED: Use `setMargins2` instead
    ///
    pub const SetMargins2 = setMargins2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#setMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageLayout `
    ///
    /// ` _margins: QMarginsF `
    ///
    /// ` outOfBoundsPolicy: qpagelayout_enums.OutOfBoundsPolicy `
    ///
    pub fn setMargins2(self: QPageLayout, _margins: anytype, outOfBoundsPolicy: i32) bool {
        comptime _ = @TypeOf(_margins)._is_QMarginsF;
        return qtc.QPageLayout_SetMargins2(@ptrCast(self.ptr), @ptrCast(_margins.ptr), @bitCast(outOfBoundsPolicy));
    }

    /// ### DEPRECATED: Use `setLeftMargin2` instead
    ///
    pub const SetLeftMargin2 = setLeftMargin2;

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
    pub fn setLeftMargin2(self: QPageLayout, leftMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetLeftMargin2(@ptrCast(self.ptr), @bitCast(leftMargin), @bitCast(outOfBoundsPolicy));
    }

    /// ### DEPRECATED: Use `setRightMargin2` instead
    ///
    pub const SetRightMargin2 = setRightMargin2;

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
    pub fn setRightMargin2(self: QPageLayout, rightMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetRightMargin2(@ptrCast(self.ptr), @bitCast(rightMargin), @bitCast(outOfBoundsPolicy));
    }

    /// ### DEPRECATED: Use `setTopMargin2` instead
    ///
    pub const SetTopMargin2 = setTopMargin2;

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
    pub fn setTopMargin2(self: QPageLayout, topMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetTopMargin2(@ptrCast(self.ptr), @bitCast(topMargin), @bitCast(outOfBoundsPolicy));
    }

    /// ### DEPRECATED: Use `setBottomMargin2` instead
    ///
    pub const SetBottomMargin2 = setBottomMargin2;

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
    pub fn setBottomMargin2(self: QPageLayout, bottomMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetBottomMargin2(@ptrCast(self.ptr), @bitCast(bottomMargin), @bitCast(outOfBoundsPolicy));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#dtor.QPageLayout)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPageLayout `
    ///
    pub fn delete(self: QPageLayout) void {
        qtc.QPageLayout_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpagelayout.html#public-types)
pub const enums = struct {
    pub const Unit = enum {
        pub const Millimeter: i32 = 0;
        pub const Point: i32 = 1;
        pub const Inch: i32 = 2;
        pub const Pica: i32 = 3;
        pub const Didot: i32 = 4;
        pub const Cicero: i32 = 5;
    };

    pub const Orientation = enum {
        pub const Portrait: i32 = 0;
        pub const Landscape: i32 = 1;
    };

    pub const Mode = enum {
        pub const StandardMode: i32 = 0;
        pub const FullPageMode: i32 = 1;
    };

    pub const OutOfBoundsPolicy = enum {
        pub const Reject: i32 = 0;
        pub const Clamp: i32 = 1;
    };
};
