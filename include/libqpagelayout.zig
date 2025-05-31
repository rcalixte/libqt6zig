const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpagelayout_enums = enums;

/// https://doc.qt.io/qt-6/qpagelayout.html
pub const qpagelayout = struct {
    /// New constructs a new QPageLayout object.
    ///
    ///
    pub fn New() QtC.QPageLayout {
        return qtc.QPageLayout_new();
    }

    /// New2 constructs a new QPageLayout object.
    ///
    /// ``` pageSize: QtC.QPageSize, orientation: qpagelayout_enums.Orientation, margins: QtC.QMarginsF ```
    pub fn New2(pageSize: ?*anyopaque, orientation: i64, margins: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPageLayout_new2(@ptrCast(pageSize), @intCast(orientation), @ptrCast(margins));
    }

    /// New3 constructs a new QPageLayout object.
    ///
    /// ``` other: QtC.QPageLayout ```
    pub fn New3(other: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPageLayout_new3(@ptrCast(other));
    }

    /// New4 constructs a new QPageLayout object.
    ///
    /// ``` pageSize: QtC.QPageSize, orientation: qpagelayout_enums.Orientation, margins: QtC.QMarginsF, units: qpagelayout_enums.Unit ```
    pub fn New4(pageSize: ?*anyopaque, orientation: i64, margins: ?*anyopaque, units: i64) QtC.QPageLayout {
        return qtc.QPageLayout_new4(@ptrCast(pageSize), @intCast(orientation), @ptrCast(margins), @intCast(units));
    }

    /// New5 constructs a new QPageLayout object.
    ///
    /// ``` pageSize: QtC.QPageSize, orientation: qpagelayout_enums.Orientation, margins: QtC.QMarginsF, units: qpagelayout_enums.Unit, minMargins: QtC.QMarginsF ```
    pub fn New5(pageSize: ?*anyopaque, orientation: i64, margins: ?*anyopaque, units: i64, minMargins: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPageLayout_new5(@ptrCast(pageSize), @intCast(orientation), @ptrCast(margins), @intCast(units), @ptrCast(minMargins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#operator=)
    ///
    /// ``` self: QtC.QPageLayout, other: QtC.QPageLayout ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageLayout_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#swap)
    ///
    /// ``` self: QtC.QPageLayout, other: QtC.QPageLayout ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageLayout_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#isEquivalentTo)
    ///
    /// ``` self: QtC.QPageLayout, other: QtC.QPageLayout ```
    pub fn IsEquivalentTo(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPageLayout_IsEquivalentTo(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#isValid)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QPageLayout_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMode)
    ///
    /// ``` self: QtC.QPageLayout, mode: qpagelayout_enums.Mode ```
    pub fn SetMode(self: ?*anyopaque, mode: i64) void {
        qtc.QPageLayout_SetMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#mode)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn Mode(self: ?*anyopaque) i64 {
        return qtc.QPageLayout_Mode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
    ///
    /// ``` self: QtC.QPageLayout, pageSize: QtC.QPageSize ```
    pub fn SetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) void {
        qtc.QPageLayout_SetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#pageSize)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn PageSize(self: ?*anyopaque) QtC.QPageSize {
        return qtc.QPageLayout_PageSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setOrientation)
    ///
    /// ``` self: QtC.QPageLayout, orientation: qpagelayout_enums.Orientation ```
    pub fn SetOrientation(self: ?*anyopaque, orientation: i64) void {
        qtc.QPageLayout_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#orientation)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return qtc.QPageLayout_Orientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setUnits)
    ///
    /// ``` self: QtC.QPageLayout, units: qpagelayout_enums.Unit ```
    pub fn SetUnits(self: ?*anyopaque, units: i64) void {
        qtc.QPageLayout_SetUnits(@ptrCast(self), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#units)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn Units(self: ?*anyopaque) i64 {
        return qtc.QPageLayout_Units(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMargins)
    ///
    /// ``` self: QtC.QPageLayout, margins: QtC.QMarginsF ```
    pub fn SetMargins(self: ?*anyopaque, margins: ?*anyopaque) bool {
        return qtc.QPageLayout_SetMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setLeftMargin)
    ///
    /// ``` self: QtC.QPageLayout, leftMargin: f64 ```
    pub fn SetLeftMargin(self: ?*anyopaque, leftMargin: f64) bool {
        return qtc.QPageLayout_SetLeftMargin(@ptrCast(self), @floatCast(leftMargin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setRightMargin)
    ///
    /// ``` self: QtC.QPageLayout, rightMargin: f64 ```
    pub fn SetRightMargin(self: ?*anyopaque, rightMargin: f64) bool {
        return qtc.QPageLayout_SetRightMargin(@ptrCast(self), @floatCast(rightMargin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setTopMargin)
    ///
    /// ``` self: QtC.QPageLayout, topMargin: f64 ```
    pub fn SetTopMargin(self: ?*anyopaque, topMargin: f64) bool {
        return qtc.QPageLayout_SetTopMargin(@ptrCast(self), @floatCast(topMargin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setBottomMargin)
    ///
    /// ``` self: QtC.QPageLayout, bottomMargin: f64 ```
    pub fn SetBottomMargin(self: ?*anyopaque, bottomMargin: f64) bool {
        return qtc.QPageLayout_SetBottomMargin(@ptrCast(self), @floatCast(bottomMargin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#margins)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn Margins(self: ?*anyopaque) QtC.QMarginsF {
        return qtc.QPageLayout_Margins(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#margins)
    ///
    /// ``` self: QtC.QPageLayout, units: qpagelayout_enums.Unit ```
    pub fn MarginsWithUnits(self: ?*anyopaque, units: i64) QtC.QMarginsF {
        return qtc.QPageLayout_MarginsWithUnits(@ptrCast(self), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#marginsPoints)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn MarginsPoints(self: ?*anyopaque) QtC.QMargins {
        return qtc.QPageLayout_MarginsPoints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#marginsPixels)
    ///
    /// ``` self: QtC.QPageLayout, resolution: i32 ```
    pub fn MarginsPixels(self: ?*anyopaque, resolution: i32) QtC.QMargins {
        return qtc.QPageLayout_MarginsPixels(@ptrCast(self), @intCast(resolution));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMinimumMargins)
    ///
    /// ``` self: QtC.QPageLayout, minMargins: QtC.QMarginsF ```
    pub fn SetMinimumMargins(self: ?*anyopaque, minMargins: ?*anyopaque) void {
        qtc.QPageLayout_SetMinimumMargins(@ptrCast(self), @ptrCast(minMargins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#minimumMargins)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn MinimumMargins(self: ?*anyopaque) QtC.QMarginsF {
        return qtc.QPageLayout_MinimumMargins(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#maximumMargins)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn MaximumMargins(self: ?*anyopaque) QtC.QMarginsF {
        return qtc.QPageLayout_MaximumMargins(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn FullRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPageLayout_FullRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
    ///
    /// ``` self: QtC.QPageLayout, units: qpagelayout_enums.Unit ```
    pub fn FullRectWithUnits(self: ?*anyopaque, units: i64) QtC.QRectF {
        return qtc.QPageLayout_FullRectWithUnits(@ptrCast(self), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPoints)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn FullRectPoints(self: ?*anyopaque) QtC.QRect {
        return qtc.QPageLayout_FullRectPoints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPixels)
    ///
    /// ``` self: QtC.QPageLayout, resolution: i32 ```
    pub fn FullRectPixels(self: ?*anyopaque, resolution: i32) QtC.QRect {
        return qtc.QPageLayout_FullRectPixels(@ptrCast(self), @intCast(resolution));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn PaintRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPageLayout_PaintRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
    ///
    /// ``` self: QtC.QPageLayout, units: qpagelayout_enums.Unit ```
    pub fn PaintRectWithUnits(self: ?*anyopaque, units: i64) QtC.QRectF {
        return qtc.QPageLayout_PaintRectWithUnits(@ptrCast(self), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPoints)
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn PaintRectPoints(self: ?*anyopaque) QtC.QRect {
        return qtc.QPageLayout_PaintRectPoints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPixels)
    ///
    /// ``` self: QtC.QPageLayout, resolution: i32 ```
    pub fn PaintRectPixels(self: ?*anyopaque, resolution: i32) QtC.QRect {
        return qtc.QPageLayout_PaintRectPixels(@ptrCast(self), @intCast(resolution));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
    ///
    /// ``` self: QtC.QPageLayout, pageSize: QtC.QPageSize, minMargins: QtC.QMarginsF ```
    pub fn SetPageSize2(self: ?*anyopaque, pageSize: ?*anyopaque, minMargins: ?*anyopaque) void {
        qtc.QPageLayout_SetPageSize2(@ptrCast(self), @ptrCast(pageSize), @ptrCast(minMargins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#dtor.QPageLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPageLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPageLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpagelayout.html#types
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
};
