const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html)
pub const qlayoutitem = struct {
    /// New constructs a new QLayoutItem object.
    ///
    pub fn New() QtC.QLayoutItem {
        return qtc.QLayoutItem_new();
    }

    /// New2 constructs a new QLayoutItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QLayoutItem `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QLayoutItem {
        return qtc.QLayoutItem_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QLayoutItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn New3(alignment: i32) QtC.QLayoutItem {
        return qtc.QLayoutItem_new3(@bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayoutItem_SizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QLayoutItem_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayoutItem_SuperSizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QLayoutItem_OnMinimumSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumSize` instead
    ///
    pub const QBaseMinimumSize = SuperMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn SuperMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayoutItem_SuperMinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QLayoutItem_OnMaximumSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaximumSize` instead
    ///
    pub const QBaseMaximumSize = SuperMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn SuperMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayoutItem_SuperMaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QLayoutItem_ExpandingDirections(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLayoutItem_OnExpandingDirections(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandingDirections` instead
    ///
    pub const QBaseExpandingDirections = SuperExpandingDirections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QLayoutItem_SuperExpandingDirections(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QLayoutItem_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn (self: QtC.QLayoutItem, geometry: QtC.QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayoutItem_OnSetGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn SuperSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QLayoutItem_SuperSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayoutItem_Geometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QRect `
    ///
    pub fn OnGeometry(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QRect) void {
        qtc.QLayoutItem_OnGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGeometry` instead
    ///
    pub const QBaseGeometry = SuperGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn SuperGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayoutItem_SuperGeometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QLayoutItem_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QLayoutItem_OnIsEmpty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn SuperIsEmpty(self: ?*anyopaque) bool {
        return qtc.QLayoutItem_SuperIsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QLayoutItem_HasHeightForWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QLayoutItem_OnHasHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn SuperHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QLayoutItem_SuperHasHeightForWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayoutItem_HeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn (self: QtC.QLayoutItem, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLayoutItem_OnHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayoutItem_SuperHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayoutItem_MinimumHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn (self: QtC.QLayoutItem, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLayoutItem_OnMinimumHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumHeightForWidth` instead
    ///
    pub const QBaseMinimumHeightForWidth = SuperMinimumHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayoutItem_SuperMinimumHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QLayoutItem_Invalidate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QLayoutItem_OnInvalidate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn SuperInvalidate(self: ?*anyopaque) void {
        qtc.QLayoutItem_SuperInvalidate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayoutItem_Widget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWidget `
    ///
    pub fn OnWidget(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWidget) void {
        qtc.QLayoutItem_OnWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn SuperWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayoutItem_SuperWidget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QLayoutItem_Layout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QLayout `
    ///
    pub fn OnLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QLayout) void {
        qtc.QLayoutItem_OnLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLayout` instead
    ///
    pub const QBaseLayout = SuperLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn SuperLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QLayoutItem_SuperLayout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QLayoutItem_SpacerItem(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSpacerItem `
    ///
    pub fn OnSpacerItem(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QLayoutItem_OnSpacerItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSpacerItem` instead
    ///
    pub const QBaseSpacerItem = SuperSpacerItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn SuperSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QLayoutItem_SuperSpacerItem(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` a: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: ?*anyopaque, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: ?*anyopaque) i32 {
        return qtc.QLayoutItem_ControlTypes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLayoutItem_OnControlTypes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperControlTypes` instead
    ///
    pub const QBaseControlTypes = SuperControlTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: ?*anyopaque) i32 {
        return qtc.QLayoutItem_SuperControlTypes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` param1: QtC.QLayoutItem `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayoutItem_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` callback: *const fn (self: QtC.QLayoutItem, param1: QtC.QLayoutItem) callconv(.c) void `
    ///
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayoutItem_OnOperatorAssign(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOperatorAssign` instead
    ///
    pub const QBaseOperatorAssign = SuperOperatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    /// ` param1: QtC.QLayoutItem `
    ///
    pub fn SuperOperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayoutItem_SuperOperatorAssign(@ptrCast(self), @ptrCast(param1));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#dtor.QLayoutItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLayoutItem `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLayoutItem_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html)
pub const qspaceritem = struct {
    /// New constructs a new QSpacerItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn New(w: i32, h: i32) QtC.QSpacerItem {
        return qtc.QSpacerItem_new(@bitCast(w), @bitCast(h));
    }

    /// New2 constructs a new QSpacerItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QSpacerItem `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QSpacerItem_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QSpacerItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` hData: qsizepolicy_enums.Policy `
    ///
    pub fn New3(w: i32, h: i32, hData: i32) QtC.QSpacerItem {
        return qtc.QSpacerItem_new3(@bitCast(w), @bitCast(h), @bitCast(hData));
    }

    /// New4 constructs a new QSpacerItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` hData: qsizepolicy_enums.Policy `
    ///
    /// ` vData: qsizepolicy_enums.Policy `
    ///
    pub fn New4(w: i32, h: i32, hData: i32, vData: i32) QtC.QSpacerItem {
        return qtc.QSpacerItem_new4(@bitCast(w), @bitCast(h), @bitCast(hData), @bitCast(vData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn ChangeSize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QSpacerItem_ChangeSize(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QSpacerItem_SizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QSpacerItem_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QSpacerItem_SuperSizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QSpacerItem_MinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QSpacerItem_OnMinimumSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumSize` instead
    ///
    pub const QBaseMinimumSize = SuperMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SuperMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QSpacerItem_SuperMinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QSpacerItem_MaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QSpacerItem_OnMaximumSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaximumSize` instead
    ///
    pub const QBaseMaximumSize = SuperMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SuperMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QSpacerItem_SuperMaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QSpacerItem_ExpandingDirections(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSpacerItem_OnExpandingDirections(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandingDirections` instead
    ///
    pub const QBaseExpandingDirections = SuperExpandingDirections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QSpacerItem_SuperExpandingDirections(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QSpacerItem_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSpacerItem_OnIsEmpty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SuperIsEmpty(self: ?*anyopaque) bool {
        return qtc.QSpacerItem_SuperIsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QSpacerItem_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` callback: *const fn (self: QtC.QSpacerItem, geometry: QtC.QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSpacerItem_OnSetGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn SuperSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QSpacerItem_SuperSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QSpacerItem_Geometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QRect `
    ///
    pub fn OnGeometry(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QRect) void {
        qtc.QSpacerItem_OnGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGeometry` instead
    ///
    pub const QBaseGeometry = SuperGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SuperGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QSpacerItem_SuperGeometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QSpacerItem_SpacerItem(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSpacerItem `
    ///
    pub fn OnSpacerItem(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QSpacerItem_OnSpacerItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSpacerItem` instead
    ///
    pub const QBaseSpacerItem = SuperSpacerItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SuperSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QSpacerItem_SuperSpacerItem(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QSpacerItem_SizePolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` hData: qsizepolicy_enums.Policy `
    ///
    pub fn ChangeSize3(self: ?*anyopaque, w: i32, h: i32, hData: i32) void {
        qtc.QSpacerItem_ChangeSize3(@ptrCast(self), @bitCast(w), @bitCast(h), @bitCast(hData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` hData: qsizepolicy_enums.Policy `
    ///
    /// ` vData: qsizepolicy_enums.Policy `
    ///
    pub fn ChangeSize4(self: ?*anyopaque, w: i32, h: i32, hData: i32, vData: i32) void {
        qtc.QSpacerItem_ChangeSize4(@ptrCast(self), @bitCast(w), @bitCast(h), @bitCast(hData), @bitCast(vData));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` a: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: ?*anyopaque, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self), @bitCast(a));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QSpacerItem_HasHeightForWidth(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SuperHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QSpacerItem_SuperHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSpacerItem_OnHasHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QSpacerItem_HeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QSpacerItem_SuperHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem`
    ///
    /// ` callback: *const fn (self: QtC.QSpacerItem, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QSpacerItem_OnHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QSpacerItem_MinimumHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMinimumHeightForWidth` instead
    ///
    pub const QBaseMinimumHeightForWidth = SuperMinimumHeightForWidth;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QSpacerItem_SuperMinimumHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem`
    ///
    /// ` callback: *const fn (self: QtC.QSpacerItem, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QSpacerItem_OnMinimumHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QSpacerItem_Invalidate(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SuperInvalidate(self: ?*anyopaque) void {
        qtc.QSpacerItem_SuperInvalidate(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSpacerItem_OnInvalidate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QSpacerItem_Widget(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SuperWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QSpacerItem_SuperWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWidget `
    ///
    pub fn OnWidget(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWidget) void {
        qtc.QSpacerItem_OnWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QSpacerItem_Layout(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperLayout` instead
    ///
    pub const QBaseLayout = SuperLayout;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn SuperLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QSpacerItem_SuperLayout(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QLayout `
    ///
    pub fn OnLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QLayout) void {
        qtc.QSpacerItem_OnLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: ?*anyopaque) i32 {
        return qtc.QSpacerItem_ControlTypes(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperControlTypes` instead
    ///
    pub const QBaseControlTypes = SuperControlTypes;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: ?*anyopaque) i32 {
        return qtc.QSpacerItem_SuperControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSpacerItem`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSpacerItem_OnControlTypes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#dtor.QSpacerItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSpacerItem `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QSpacerItem_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html)
pub const qwidgetitem = struct {
    /// New constructs a new QWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn New(w: ?*anyopaque) QtC.QWidgetItem {
        return qtc.QWidgetItem_new(@ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItem_SizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QWidgetItem_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItem_SuperSizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItem_MinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QWidgetItem_OnMinimumSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumSize` instead
    ///
    pub const QBaseMinimumSize = SuperMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn SuperMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItem_SuperMinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItem_MaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QWidgetItem_OnMaximumSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaximumSize` instead
    ///
    pub const QBaseMaximumSize = SuperMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn SuperMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItem_SuperMaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QWidgetItem_ExpandingDirections(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QWidgetItem_OnExpandingDirections(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandingDirections` instead
    ///
    pub const QBaseExpandingDirections = SuperExpandingDirections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QWidgetItem_SuperExpandingDirections(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QWidgetItem_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QWidgetItem_OnIsEmpty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn SuperIsEmpty(self: ?*anyopaque) bool {
        return qtc.QWidgetItem_SuperIsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidgetItem_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` callback: *const fn (self: QtC.QWidgetItem, geometry: QtC.QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidgetItem_OnSetGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn SuperSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidgetItem_SuperSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidgetItem_Geometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QRect `
    ///
    pub fn OnGeometry(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QRect) void {
        qtc.QWidgetItem_OnGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGeometry` instead
    ///
    pub const QBaseGeometry = SuperGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn SuperGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidgetItem_SuperGeometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetItem_Widget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWidget `
    ///
    pub fn OnWidget(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWidget) void {
        qtc.QWidgetItem_OnWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn SuperWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetItem_SuperWidget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QWidgetItem_HasHeightForWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QWidgetItem_OnHasHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn SuperHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QWidgetItem_SuperHasHeightForWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItem_HeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` callback: *const fn (self: QtC.QWidgetItem, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidgetItem_OnHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItem_SuperHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItem_MinimumHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` callback: *const fn (self: QtC.QWidgetItem, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidgetItem_OnMinimumHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumHeightForWidth` instead
    ///
    pub const QBaseMinimumHeightForWidth = SuperMinimumHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItem_SuperMinimumHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: ?*anyopaque) i32 {
        return qtc.QWidgetItem_ControlTypes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QWidgetItem_OnControlTypes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperControlTypes` instead
    ///
    pub const QBaseControlTypes = SuperControlTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: ?*anyopaque) i32 {
        return qtc.QWidgetItem_SuperControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    /// ` a: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: ?*anyopaque, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self), @bitCast(a));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QWidgetItem_Invalidate(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn SuperInvalidate(self: ?*anyopaque) void {
        qtc.QWidgetItem_SuperInvalidate(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QWidgetItem_OnInvalidate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidgetItem_Layout(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperLayout` instead
    ///
    pub const QBaseLayout = SuperLayout;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn SuperLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidgetItem_SuperLayout(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QLayout `
    ///
    pub fn OnLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QLayout) void {
        qtc.QWidgetItem_OnLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QWidgetItem_SpacerItem(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSpacerItem` instead
    ///
    pub const QBaseSpacerItem = SuperSpacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn SuperSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QWidgetItem_SuperSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItem`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSpacerItem `
    ///
    pub fn OnSpacerItem(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QWidgetItem_OnSpacerItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#dtor.QWidgetItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWidgetItem `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QWidgetItem_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html)
pub const qwidgetitemv2 = struct {
    /// New constructs a new QWidgetItemV2 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn New(widget: ?*anyopaque) QtC.QWidgetItemV2 {
        return qtc.QWidgetItemV2_new(@ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItemV2_SizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QWidgetItemV2_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItemV2_SuperSizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItemV2_MinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QWidgetItemV2_OnMinimumSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumSize` instead
    ///
    pub const QBaseMinimumSize = SuperMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn SuperMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItemV2_SuperMinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItemV2_MaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QWidgetItemV2_OnMaximumSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaximumSize` instead
    ///
    pub const QBaseMaximumSize = SuperMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn SuperMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidgetItemV2_SuperMaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ` width: i32 `
    ///
    pub fn HeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QWidgetItemV2_HeightForWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ` callback: *const fn (self: QtC.QWidgetItemV2, width: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ` width: i32 `
    ///
    pub fn SuperHeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QWidgetItemV2_SuperHeightForWidth(@ptrCast(self), @bitCast(width));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ` a: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: ?*anyopaque, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self), @bitCast(a));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QWidgetItemV2_ExpandingDirections(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperExpandingDirections` instead
    ///
    pub const QBaseExpandingDirections = SuperExpandingDirections;

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QWidgetItemV2_SuperExpandingDirections(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnExpandingDirections(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QWidgetItemV2_IsEmpty(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn SuperIsEmpty(self: ?*anyopaque) bool {
        return qtc.QWidgetItemV2_SuperIsEmpty(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QWidgetItemV2_OnIsEmpty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidgetItemV2_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn SuperSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidgetItemV2_SuperSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2`
    ///
    /// ` callback: *const fn (self: QtC.QWidgetItemV2, geometry: QtC.QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidgetItemV2_OnSetGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidgetItemV2_Geometry(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperGeometry` instead
    ///
    pub const QBaseGeometry = SuperGeometry;

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn SuperGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidgetItemV2_SuperGeometry(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QRect `
    ///
    pub fn OnGeometry(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QRect) void {
        qtc.QWidgetItemV2_OnGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetItemV2_Widget(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn SuperWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetItemV2_SuperWidget(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWidget `
    ///
    pub fn OnWidget(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWidget) void {
        qtc.QWidgetItemV2_OnWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QWidgetItemV2_HasHeightForWidth(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn SuperHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QWidgetItemV2_SuperHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QWidgetItemV2_OnHasHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItemV2_MinimumHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMinimumHeightForWidth` instead
    ///
    pub const QBaseMinimumHeightForWidth = SuperMinimumHeightForWidth;

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QWidgetItemV2_SuperMinimumHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2`
    ///
    /// ` callback: *const fn (self: QtC.QWidgetItemV2, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnMinimumHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: ?*anyopaque) i32 {
        return qtc.QWidgetItemV2_ControlTypes(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperControlTypes` instead
    ///
    pub const QBaseControlTypes = SuperControlTypes;

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: ?*anyopaque) i32 {
        return qtc.QWidgetItemV2_SuperControlTypes(@ptrCast(self));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnControlTypes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QWidgetItemV2_Invalidate(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn SuperInvalidate(self: ?*anyopaque) void {
        qtc.QWidgetItemV2_SuperInvalidate(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QWidgetItemV2_OnInvalidate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidgetItemV2_Layout(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperLayout` instead
    ///
    pub const QBaseLayout = SuperLayout;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn SuperLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidgetItemV2_SuperLayout(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QLayout `
    ///
    pub fn OnLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QLayout) void {
        qtc.QWidgetItemV2_OnLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QWidgetItemV2_SpacerItem(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSpacerItem` instead
    ///
    pub const QBaseSpacerItem = SuperSpacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn SuperSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QWidgetItemV2_SuperSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSpacerItem `
    ///
    pub fn OnSpacerItem(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QWidgetItemV2_OnSpacerItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#dtor.QWidgetItemV2)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWidgetItemV2 `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QWidgetItemV2_Delete(@ptrCast(self));
    }
};
