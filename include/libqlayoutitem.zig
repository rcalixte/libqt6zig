const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;

/// https://doc.qt.io/qt-6/qlayoutitem.html
pub const qlayoutitem = struct {
    /// New constructs a new QLayoutItem object.
    ///
    ///
    pub fn New() QtC.QLayoutItem {
        return qtc.QLayoutItem_new();
    }

    /// New2 constructs a new QLayoutItem object.
    ///
    /// ``` param1: QtC.QLayoutItem ```
    pub fn New2(param1: ?*anyopaque) QtC.QLayoutItem {
        return qtc.QLayoutItem_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QLayoutItem object.
    ///
    /// ``` alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn New3(alignment: i64) QtC.QLayoutItem {
        return qtc.QLayoutItem_new3(@intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayoutItem_SizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QLayoutItem_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayoutItem_QBaseSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QLayoutItem_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayoutItem_QBaseMinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QLayoutItem_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayoutItem_QBaseMaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
    ///
    /// ``` self: QtC.QLayoutItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.Orientation ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_ExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QLayoutItem_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.Orientation ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_QBaseExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
    ///
    /// ``` self: QtC.QLayoutItem, geometry: QtC.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QLayoutItem_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn (self: QtC.QLayoutItem, geometry: QtC.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayoutItem_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem, geometry: QtC.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QLayoutItem_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayoutItem_Geometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QLayoutItem_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn QBaseGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayoutItem_QBaseGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QLayoutItem_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QLayoutItem_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QLayoutItem_QBaseIsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QLayoutItem_HasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QLayoutItem_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QLayoutItem_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// ``` self: QtC.QLayoutItem, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayoutItem_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn (self: QtC.QLayoutItem, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLayoutItem_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayoutItem_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// ``` self: QtC.QLayoutItem, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayoutItem_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn (self: QtC.QLayoutItem, param1: i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLayoutItem_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayoutItem_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QLayoutItem_Invalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QLayoutItem_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QLayoutItem_QBaseInvalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayoutItem_Widget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn () callconv(.c) QtC.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWidget) void {
        qtc.QLayoutItem_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn QBaseWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayoutItem_QBaseWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QLayoutItem_Layout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn () callconv(.c) QtC.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QLayout) void {
        qtc.QLayoutItem_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn QBaseLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QLayoutItem_QBaseLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QLayoutItem_SpacerItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn () callconv(.c) QtC.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QLayoutItem_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QLayoutItem_QBaseSpacerItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: QtC.QLayoutItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ``` self: QtC.QLayoutItem, a: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment(self: ?*anyopaque, a: i64) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// ``` self: QtC.QLayoutItem ```
    ///
    /// Returns: ``` flag of qsizepolicy_enums.ControlType ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_ControlTypes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QLayoutItem_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem ```
    ///
    /// Returns: ``` flag of qsizepolicy_enums.ControlType ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_QBaseControlTypes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
    ///
    /// ``` self: QtC.QLayoutItem, param1: QtC.QLayoutItem ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayoutItem_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayoutItem, slot: fn (self: QtC.QLayoutItem, param1: QtC.QLayoutItem) callconv(.c) void ```
    pub fn OnOperatorAssign(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayoutItem_OnOperatorAssign(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayoutItem, param1: QtC.QLayoutItem ```
    pub fn QBaseOperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayoutItem_QBaseOperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#dtor.QLayoutItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QLayoutItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLayoutItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qspaceritem.html
pub const qspaceritem = struct {
    /// New constructs a new QSpacerItem object.
    ///
    /// ``` w: i32, h: i32 ```
    pub fn New(w: i32, h: i32) QtC.QSpacerItem {
        return qtc.QSpacerItem_new(@intCast(w), @intCast(h));
    }

    /// New2 constructs a new QSpacerItem object.
    ///
    /// ``` param1: QtC.QSpacerItem ```
    pub fn New2(param1: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QSpacerItem_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QSpacerItem object.
    ///
    /// ``` w: i32, h: i32, hData: qsizepolicy_enums.Policy ```
    pub fn New3(w: i32, h: i32, hData: i32) QtC.QSpacerItem {
        return qtc.QSpacerItem_new3(@intCast(w), @intCast(h), @intCast(hData));
    }

    /// New4 constructs a new QSpacerItem object.
    ///
    /// ``` w: i32, h: i32, hData: qsizepolicy_enums.Policy, vData: qsizepolicy_enums.Policy ```
    pub fn New4(w: i32, h: i32, hData: i32, vData: i32) QtC.QSpacerItem {
        return qtc.QSpacerItem_new4(@intCast(w), @intCast(h), @intCast(hData), @intCast(vData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
    ///
    /// ``` self: QtC.QSpacerItem, w: i32, h: i32 ```
    pub fn ChangeSize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QSpacerItem_ChangeSize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QSpacerItem_SizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QSpacerItem_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QSpacerItem_QBaseSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QSpacerItem_MinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QSpacerItem_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QSpacerItem_QBaseMinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QSpacerItem_MaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QSpacerItem_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QSpacerItem_QBaseMaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
    ///
    /// ``` self: QtC.QSpacerItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.Orientation ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QSpacerItem_ExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QSpacerItem_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSpacerItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.Orientation ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QSpacerItem_QBaseExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QSpacerItem_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QSpacerItem_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QSpacerItem_QBaseIsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
    ///
    /// ``` self: QtC.QSpacerItem, geometry: QtC.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QSpacerItem_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn (self: QtC.QSpacerItem, geometry: QtC.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSpacerItem_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSpacerItem, geometry: QtC.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QSpacerItem_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QSpacerItem_Geometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QSpacerItem_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn QBaseGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QSpacerItem_QBaseGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QSpacerItem_SpacerItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn () callconv(.c) QtC.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QSpacerItem_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QSpacerItem_QBaseSpacerItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizePolicy)
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QSpacerItem_SizePolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
    ///
    /// ``` self: QtC.QSpacerItem, w: i32, h: i32, hData: qsizepolicy_enums.Policy ```
    pub fn ChangeSize3(self: ?*anyopaque, w: i32, h: i32, hData: i32) void {
        qtc.QSpacerItem_ChangeSize3(@ptrCast(self), @intCast(w), @intCast(h), @intCast(hData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
    ///
    /// ``` self: QtC.QSpacerItem, w: i32, h: i32, hData: qsizepolicy_enums.Policy, vData: qsizepolicy_enums.Policy ```
    pub fn ChangeSize4(self: ?*anyopaque, w: i32, h: i32, hData: i32, vData: i32) void {
        qtc.QSpacerItem_ChangeSize4(@ptrCast(self), @intCast(w), @intCast(h), @intCast(hData), @intCast(vData));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: QtC.QSpacerItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ``` self: QtC.QSpacerItem, a: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment(self: ?*anyopaque, a: i64) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self), @intCast(a));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QSpacerItem_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QSpacerItem_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QSpacerItem_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QSpacerItem_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QSpacerItem_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn (self: QtC.QSpacerItem, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QSpacerItem_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QSpacerItem_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QSpacerItem_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn (self: QtC.QSpacerItem, param1: i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QSpacerItem_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QSpacerItem_Invalidate(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QSpacerItem_QBaseInvalidate(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QSpacerItem_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QSpacerItem_Widget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn QBaseWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QSpacerItem_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn () callconv(.c) QtC.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWidget) void {
        qtc.QSpacerItem_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QSpacerItem_Layout(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn QBaseLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QSpacerItem_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn () callconv(.c) QtC.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QLayout) void {
        qtc.QSpacerItem_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem ```
    ///
    /// Returns: ``` flag of qsizepolicy_enums.ControlType ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return qtc.QSpacerItem_ControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem ```
    ///
    /// Returns: ``` flag of qsizepolicy_enums.ControlType ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return qtc.QSpacerItem_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpacerItem, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QSpacerItem_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#dtor.QSpacerItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSpacerItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSpacerItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwidgetitem.html
pub const qwidgetitem = struct {
    /// New constructs a new QWidgetItem object.
    ///
    /// ``` w: QtC.QWidget ```
    pub fn New(w: ?*anyopaque) QtC.QWidgetItem {
        return qtc.QWidgetItem_new(@ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItem_SizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QWidgetItem_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItem_QBaseSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItem_MinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QWidgetItem_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItem_QBaseMinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItem_MaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QWidgetItem_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItem_QBaseMaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// ``` self: QtC.QWidgetItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.Orientation ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QWidgetItem_ExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QWidgetItem_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.Orientation ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QWidgetItem_QBaseExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QWidgetItem_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QWidgetItem_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QWidgetItem_QBaseIsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// ``` self: QtC.QWidgetItem, geometry: QtC.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidgetItem_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn (self: QtC.QWidgetItem, geometry: QtC.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidgetItem_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItem, geometry: QtC.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidgetItem_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidgetItem_Geometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QWidgetItem_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn QBaseGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidgetItem_QBaseGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetItem_Widget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn () callconv(.c) QtC.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWidget) void {
        qtc.QWidgetItem_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn QBaseWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetItem_QBaseWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QWidgetItem_HasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QWidgetItem_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QWidgetItem_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
    ///
    /// ``` self: QtC.QWidgetItem, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItem_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn (self: QtC.QWidgetItem, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidgetItem_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItem, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItem_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// ``` self: QtC.QWidgetItem, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItem_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn (self: QtC.QWidgetItem, param1: i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidgetItem_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItem, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItem_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// ``` self: QtC.QWidgetItem ```
    ///
    /// Returns: ``` flag of qsizepolicy_enums.ControlType ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return qtc.QWidgetItem_ControlTypes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QWidgetItem_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItem ```
    ///
    /// Returns: ``` flag of qsizepolicy_enums.ControlType ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return qtc.QWidgetItem_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: QtC.QWidgetItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ``` self: QtC.QWidgetItem, a: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment(self: ?*anyopaque, a: i64) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self), @intCast(a));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QWidgetItem_Invalidate(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QWidgetItem_QBaseInvalidate(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QWidgetItem_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidgetItem_Layout(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn QBaseLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidgetItem_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn () callconv(.c) QtC.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QLayout) void {
        qtc.QWidgetItem_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QWidgetItem_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QWidgetItem_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItem, slot: fn () callconv(.c) QtC.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QWidgetItem_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#dtor.QWidgetItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWidgetItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWidgetItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwidgetitemv2.html
pub const qwidgetitemv2 = struct {
    /// New constructs a new QWidgetItemV2 object.
    ///
    /// ``` widget: QtC.QWidget ```
    pub fn New(widget: ?*anyopaque) QtC.QWidgetItemV2 {
        return qtc.QWidgetItemV2_new(@ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItemV2_SizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QWidgetItemV2_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItemV2_QBaseSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItemV2_MinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QWidgetItemV2_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItemV2_QBaseMinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItemV2_MaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QWidgetItemV2_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItemV2_QBaseMaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
    ///
    /// ``` self: QtC.QWidgetItemV2, width: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QWidgetItemV2_HeightForWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn (self: QtC.QWidgetItemV2, width: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWidgetItemV2, width: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QWidgetItemV2_QBaseHeightForWidth(@ptrCast(self), @intCast(width));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ``` self: QtC.QWidgetItemV2, a: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment(self: ?*anyopaque, a: i64) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self), @intCast(a));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    ///
    /// Returns: ``` flag of qnamespace_enums.Orientation ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QWidgetItemV2_ExpandingDirections(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    ///
    /// Returns: ``` flag of qnamespace_enums.Orientation ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QWidgetItemV2_QBaseExpandingDirections(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QWidgetItemV2_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QWidgetItemV2_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QWidgetItemV2_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QWidgetItemV2_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, geometry: QtC.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidgetItemV2_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, geometry: QtC.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidgetItemV2_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn (self: QtC.QWidgetItemV2, geometry: QtC.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidgetItemV2_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidgetItemV2_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn QBaseGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidgetItemV2_QBaseGeometry(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QWidgetItemV2_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetItemV2_Widget(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn QBaseWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetItemV2_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn () callconv(.c) QtC.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWidget) void {
        qtc.QWidgetItemV2_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QWidgetItemV2_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QWidgetItemV2_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QWidgetItemV2_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItemV2_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItemV2_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn (self: QtC.QWidgetItemV2, param1: i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    ///
    /// Returns: ``` flag of qsizepolicy_enums.ControlType ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return qtc.QWidgetItemV2_ControlTypes(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    ///
    /// Returns: ``` flag of qsizepolicy_enums.ControlType ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return qtc.QWidgetItemV2_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QWidgetItemV2_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QWidgetItemV2_Invalidate(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QWidgetItemV2_QBaseInvalidate(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QWidgetItemV2_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidgetItemV2_Layout(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn QBaseLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidgetItemV2_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn () callconv(.c) QtC.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QLayout) void {
        qtc.QWidgetItemV2_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QWidgetItemV2_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QWidgetItemV2_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWidgetItemV2, slot: fn () callconv(.c) QtC.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QWidgetItemV2_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#dtor.QWidgetItemV2)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWidgetItemV2 ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWidgetItemV2_Delete(@ptrCast(self));
    }
};
