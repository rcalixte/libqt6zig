const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QLayout = @import("libqt6").QLayout;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QWidget = @import("libqt6").QWidget;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html)
pub const QLayoutItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLayoutItem,

    pub const _is_QLayoutItem = {};

    /// New constructs a new QLayoutItem object.
    ///
    pub fn New() QLayoutItem {
        return .{ .ptr = qtc.QLayoutItem_new() };
    }

    /// New2 constructs a new QLayoutItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn New2(param1: anytype) QLayoutItem {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return .{ .ptr = qtc.QLayoutItem_new2(@ptrCast(param1.ptr)) };
    }

    /// New3 constructs a new QLayoutItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn New3(alignment: i32) QLayoutItem {
        return .{ .ptr = qtc.QLayoutItem_new3(@bitCast(alignment)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn SizeHint(self: QLayoutItem) QSize {
        return .{ .ptr = qtc.QLayoutItem_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QLayoutItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QLayoutItem_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    pub fn SuperSizeHint(self: QLayoutItem) QSize {
        return .{ .ptr = qtc.QLayoutItem_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn MinimumSize(self: QLayoutItem) QSize {
        return .{ .ptr = qtc.QLayoutItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSize(self: QLayoutItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QLayoutItem_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    pub fn SuperMinimumSize(self: QLayoutItem) QSize {
        return .{ .ptr = qtc.QLayoutItem_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn MaximumSize(self: QLayoutItem) QSize {
        return .{ .ptr = qtc.QLayoutItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMaximumSize(self: QLayoutItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QLayoutItem_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    pub fn SuperMaximumSize(self: QLayoutItem) QSize {
        return .{ .ptr = qtc.QLayoutItem_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: QLayoutItem) i32 {
        return qtc.QLayoutItem_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: QLayoutItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QLayoutItem_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: QLayoutItem) i32 {
        return qtc.QLayoutItem_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry(self: QLayoutItem, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QLayoutItem_SetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn (self: QLayoutItem, geometry: QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: QLayoutItem, callback: *const fn (QLayoutItem, QRect) callconv(.c) void) void {
        qtc.QLayoutItem_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SuperSetGeometry(self: QLayoutItem, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QLayoutItem_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn Geometry(self: QLayoutItem) QRect {
        return .{ .ptr = qtc.QLayoutItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    pub fn OnGeometry(self: QLayoutItem, callback: *const fn () callconv(.c) QRect) void {
        qtc.QLayoutItem_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    pub fn SuperGeometry(self: QLayoutItem) QRect {
        return .{ .ptr = qtc.QLayoutItem_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn IsEmpty(self: QLayoutItem) bool {
        return qtc.QLayoutItem_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: QLayoutItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QLayoutItem_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    pub fn SuperIsEmpty(self: QLayoutItem) bool {
        return qtc.QLayoutItem_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn HasHeightForWidth(self: QLayoutItem) bool {
        return qtc.QLayoutItem_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QLayoutItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QLayoutItem_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    pub fn SuperHasHeightForWidth(self: QLayoutItem) bool {
        return qtc.QLayoutItem_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QLayoutItem, param1: i32) i32 {
        return qtc.QLayoutItem_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn (self: QLayoutItem, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QLayoutItem, callback: *const fn (QLayoutItem, i32) callconv(.c) i32) void {
        qtc.QLayoutItem_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QLayoutItem, param1: i32) i32 {
        return qtc.QLayoutItem_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: QLayoutItem, param1: i32) i32 {
        return qtc.QLayoutItem_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn (self: QLayoutItem, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: QLayoutItem, callback: *const fn (QLayoutItem, i32) callconv(.c) i32) void {
        qtc.QLayoutItem_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: QLayoutItem, param1: i32) i32 {
        return qtc.QLayoutItem_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn Invalidate(self: QLayoutItem) void {
        qtc.QLayoutItem_Invalidate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: QLayoutItem, callback: *const fn () callconv(.c) void) void {
        qtc.QLayoutItem_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    pub fn SuperInvalidate(self: QLayoutItem) void {
        qtc.QLayoutItem_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn Widget(self: QLayoutItem) QWidget {
        return .{ .ptr = qtc.QLayoutItem_Widget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnWidget(self: QLayoutItem, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QLayoutItem_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    pub fn SuperWidget(self: QLayoutItem) QWidget {
        return .{ .ptr = qtc.QLayoutItem_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn Layout(self: QLayoutItem) QLayout {
        return .{ .ptr = qtc.QLayoutItem_Layout(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QLayout `
    ///
    pub fn OnLayout(self: QLayoutItem, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QLayoutItem_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    pub fn SuperLayout(self: QLayoutItem) QLayout {
        return .{ .ptr = qtc.QLayoutItem_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn SpacerItem(self: QLayoutItem) QSpacerItem {
        return .{ .ptr = qtc.QLayoutItem_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSpacerItem `
    ///
    pub fn OnSpacerItem(self: QLayoutItem, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QLayoutItem_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    pub fn SuperSpacerItem(self: QLayoutItem) QSpacerItem {
        return .{ .ptr = qtc.QLayoutItem_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QLayoutItem) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` a: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QLayoutItem, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self.ptr), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: QLayoutItem) i32 {
        return qtc.QLayoutItem_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: QLayoutItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QLayoutItem_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: QLayoutItem) i32 {
        return qtc.QLayoutItem_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn OperatorAssign(self: QLayoutItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayoutItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` callback: *const fn (self: QLayoutItem, param1: QLayoutItem) callconv(.c) void `
    ///
    pub fn OnOperatorAssign(self: QLayoutItem, callback: *const fn (QLayoutItem, QLayoutItem) callconv(.c) void) void {
        qtc.QLayoutItem_OnOperatorAssign(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLayoutItem `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn SuperOperatorAssign(self: QLayoutItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayoutItem_SuperOperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QLayoutItem `
    ///
    pub fn Delete(self: QLayoutItem) void {
        qtc.QLayoutItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html)
pub const QSpacerItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSpacerItem,

    pub const _is_QSpacerItem = {};
    pub const _is_QLayoutItem = {};

    /// New constructs a new QSpacerItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn New(w: i32, h: i32) QSpacerItem {
        return .{ .ptr = qtc.QSpacerItem_new(@bitCast(w), @bitCast(h)) };
    }

    /// New2 constructs a new QSpacerItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSpacerItem `
    ///
    pub fn New2(param1: anytype) QSpacerItem {
        comptime _ = @TypeOf(param1)._is_QSpacerItem;
        return .{ .ptr = qtc.QSpacerItem_new2(@ptrCast(param1.ptr)) };
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
    pub fn New3(w: i32, h: i32, hData: i32) QSpacerItem {
        return .{ .ptr = qtc.QSpacerItem_new3(@bitCast(w), @bitCast(h), @bitCast(hData)) };
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
    pub fn New4(w: i32, h: i32, hData: i32, vData: i32) QSpacerItem {
        return .{ .ptr = qtc.QSpacerItem_new4(@bitCast(w), @bitCast(h), @bitCast(hData), @bitCast(vData)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn ChangeSize(self: QSpacerItem, w: i32, h: i32) void {
        qtc.QSpacerItem_ChangeSize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn SizeHint(self: QSpacerItem) QSize {
        return .{ .ptr = qtc.QSpacerItem_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QSpacerItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QSpacerItem_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpacerItem `
    ///
    pub fn SuperSizeHint(self: QSpacerItem) QSize {
        return .{ .ptr = qtc.QSpacerItem_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn MinimumSize(self: QSpacerItem) QSize {
        return .{ .ptr = qtc.QSpacerItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSize(self: QSpacerItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QSpacerItem_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpacerItem `
    ///
    pub fn SuperMinimumSize(self: QSpacerItem) QSize {
        return .{ .ptr = qtc.QSpacerItem_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn MaximumSize(self: QSpacerItem) QSize {
        return .{ .ptr = qtc.QSpacerItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMaximumSize(self: QSpacerItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QSpacerItem_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpacerItem `
    ///
    pub fn SuperMaximumSize(self: QSpacerItem) QSize {
        return .{ .ptr = qtc.QSpacerItem_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: QSpacerItem) i32 {
        return qtc.QSpacerItem_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: QSpacerItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QSpacerItem_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpacerItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: QSpacerItem) i32 {
        return qtc.QSpacerItem_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn IsEmpty(self: QSpacerItem) bool {
        return qtc.QSpacerItem_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: QSpacerItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QSpacerItem_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpacerItem `
    ///
    pub fn SuperIsEmpty(self: QSpacerItem) bool {
        return qtc.QSpacerItem_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry(self: QSpacerItem, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QSpacerItem_SetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` callback: *const fn (self: QSpacerItem, geometry: QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: QSpacerItem, callback: *const fn (QSpacerItem, QRect) callconv(.c) void) void {
        qtc.QSpacerItem_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpacerItem `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SuperSetGeometry(self: QSpacerItem, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QSpacerItem_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn Geometry(self: QSpacerItem) QRect {
        return .{ .ptr = qtc.QSpacerItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    pub fn OnGeometry(self: QSpacerItem, callback: *const fn () callconv(.c) QRect) void {
        qtc.QSpacerItem_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpacerItem `
    ///
    pub fn SuperGeometry(self: QSpacerItem) QRect {
        return .{ .ptr = qtc.QSpacerItem_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn SpacerItem(self: QSpacerItem) QSpacerItem {
        return .{ .ptr = qtc.QSpacerItem_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSpacerItem `
    ///
    pub fn OnSpacerItem(self: QSpacerItem, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QSpacerItem_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpacerItem `
    ///
    pub fn SuperSpacerItem(self: QSpacerItem) QSpacerItem {
        return .{ .ptr = qtc.QSpacerItem_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn SizePolicy(self: QSpacerItem) QSizePolicy {
        return .{ .ptr = qtc.QSpacerItem_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` hData: qsizepolicy_enums.Policy `
    ///
    pub fn ChangeSize3(self: QSpacerItem, w: i32, h: i32, hData: i32) void {
        qtc.QSpacerItem_ChangeSize3(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(hData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` hData: qsizepolicy_enums.Policy `
    ///
    /// ` vData: qsizepolicy_enums.Policy `
    ///
    pub fn ChangeSize4(self: QSpacerItem, w: i32, h: i32, hData: i32, vData: i32) void {
        qtc.QSpacerItem_ChangeSize4(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(hData), @bitCast(vData));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QSpacerItem) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` a: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QSpacerItem, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self.ptr), @bitCast(a));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn HasHeightForWidth(self: QSpacerItem) bool {
        return qtc.QSpacerItem_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QSpacerItem `
    ///
    pub fn SuperHasHeightForWidth(self: QSpacerItem) bool {
        return qtc.QSpacerItem_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QSpacerItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QSpacerItem_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QSpacerItem, param1: i32) i32 {
        return qtc.QSpacerItem_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QSpacerItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QSpacerItem, param1: i32) i32 {
        return qtc.QSpacerItem_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem`
    ///
    /// ` callback: *const fn (self: QSpacerItem, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QSpacerItem, callback: *const fn (QSpacerItem, i32) callconv(.c) i32) void {
        qtc.QSpacerItem_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: QSpacerItem, param1: i32) i32 {
        return qtc.QSpacerItem_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QSpacerItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: QSpacerItem, param1: i32) i32 {
        return qtc.QSpacerItem_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem`
    ///
    /// ` callback: *const fn (self: QSpacerItem, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: QSpacerItem, callback: *const fn (QSpacerItem, i32) callconv(.c) i32) void {
        qtc.QSpacerItem_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn Invalidate(self: QSpacerItem) void {
        qtc.QSpacerItem_Invalidate(@ptrCast(self.ptr));
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
    /// ` self: QSpacerItem `
    ///
    pub fn SuperInvalidate(self: QSpacerItem) void {
        qtc.QSpacerItem_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: QSpacerItem, callback: *const fn () callconv(.c) void) void {
        qtc.QSpacerItem_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn Widget(self: QSpacerItem) QWidget {
        return .{ .ptr = qtc.QSpacerItem_Widget(@ptrCast(self.ptr)) };
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
    /// ` self: QSpacerItem `
    ///
    pub fn SuperWidget(self: QSpacerItem) QWidget {
        return .{ .ptr = qtc.QSpacerItem_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem`
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnWidget(self: QSpacerItem, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QSpacerItem_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn Layout(self: QSpacerItem) QLayout {
        return .{ .ptr = qtc.QSpacerItem_Layout(@ptrCast(self.ptr)) };
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
    /// ` self: QSpacerItem `
    ///
    pub fn SuperLayout(self: QSpacerItem) QLayout {
        return .{ .ptr = qtc.QSpacerItem_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem`
    ///
    /// ` callback: *const fn () callconv(.c) QLayout `
    ///
    pub fn OnLayout(self: QSpacerItem, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QSpacerItem_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: QSpacerItem) i32 {
        return qtc.QSpacerItem_ControlTypes(@ptrCast(self.ptr));
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
    /// ` self: QSpacerItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: QSpacerItem) i32 {
        return qtc.QSpacerItem_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpacerItem`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: QSpacerItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QSpacerItem_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpacerItem `
    ///
    pub fn Delete(self: QSpacerItem) void {
        qtc.QSpacerItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html)
pub const QWidgetItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWidgetItem,

    pub const _is_QWidgetItem = {};
    pub const _is_QLayoutItem = {};

    /// New constructs a new QWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QWidget `
    ///
    pub fn New(w: anytype) QWidgetItem {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QWidgetItem_new(@ptrCast(w.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn SizeHint(self: QWidgetItem) QSize {
        return .{ .ptr = qtc.QWidgetItem_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QWidgetItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QWidgetItem_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    pub fn SuperSizeHint(self: QWidgetItem) QSize {
        return .{ .ptr = qtc.QWidgetItem_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn MinimumSize(self: QWidgetItem) QSize {
        return .{ .ptr = qtc.QWidgetItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSize(self: QWidgetItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QWidgetItem_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    pub fn SuperMinimumSize(self: QWidgetItem) QSize {
        return .{ .ptr = qtc.QWidgetItem_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn MaximumSize(self: QWidgetItem) QSize {
        return .{ .ptr = qtc.QWidgetItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMaximumSize(self: QWidgetItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QWidgetItem_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    pub fn SuperMaximumSize(self: QWidgetItem) QSize {
        return .{ .ptr = qtc.QWidgetItem_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: QWidgetItem) i32 {
        return qtc.QWidgetItem_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: QWidgetItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QWidgetItem_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: QWidgetItem) i32 {
        return qtc.QWidgetItem_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn IsEmpty(self: QWidgetItem) bool {
        return qtc.QWidgetItem_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: QWidgetItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QWidgetItem_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    pub fn SuperIsEmpty(self: QWidgetItem) bool {
        return qtc.QWidgetItem_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry(self: QWidgetItem, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidgetItem_SetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` callback: *const fn (self: QWidgetItem, geometry: QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: QWidgetItem, callback: *const fn (QWidgetItem, QRect) callconv(.c) void) void {
        qtc.QWidgetItem_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SuperSetGeometry(self: QWidgetItem, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidgetItem_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn Geometry(self: QWidgetItem) QRect {
        return .{ .ptr = qtc.QWidgetItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    pub fn OnGeometry(self: QWidgetItem, callback: *const fn () callconv(.c) QRect) void {
        qtc.QWidgetItem_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    pub fn SuperGeometry(self: QWidgetItem) QRect {
        return .{ .ptr = qtc.QWidgetItem_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn Widget(self: QWidgetItem) QWidget {
        return .{ .ptr = qtc.QWidgetItem_Widget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnWidget(self: QWidgetItem, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QWidgetItem_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    pub fn SuperWidget(self: QWidgetItem) QWidget {
        return .{ .ptr = qtc.QWidgetItem_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn HasHeightForWidth(self: QWidgetItem) bool {
        return qtc.QWidgetItem_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QWidgetItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QWidgetItem_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    pub fn SuperHasHeightForWidth(self: QWidgetItem) bool {
        return qtc.QWidgetItem_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QWidgetItem, param1: i32) i32 {
        return qtc.QWidgetItem_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` callback: *const fn (self: QWidgetItem, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QWidgetItem, callback: *const fn (QWidgetItem, i32) callconv(.c) i32) void {
        qtc.QWidgetItem_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QWidgetItem, param1: i32) i32 {
        return qtc.QWidgetItem_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: QWidgetItem, param1: i32) i32 {
        return qtc.QWidgetItem_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` callback: *const fn (self: QWidgetItem, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: QWidgetItem, callback: *const fn (QWidgetItem, i32) callconv(.c) i32) void {
        qtc.QWidgetItem_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: QWidgetItem, param1: i32) i32 {
        return qtc.QWidgetItem_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: QWidgetItem) i32 {
        return qtc.QWidgetItem_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: QWidgetItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QWidgetItem_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: QWidgetItem) i32 {
        return qtc.QWidgetItem_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QWidgetItem) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` a: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QWidgetItem, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self.ptr), @bitCast(a));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn Invalidate(self: QWidgetItem) void {
        qtc.QWidgetItem_Invalidate(@ptrCast(self.ptr));
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
    /// ` self: QWidgetItem `
    ///
    pub fn SuperInvalidate(self: QWidgetItem) void {
        qtc.QWidgetItem_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: QWidgetItem, callback: *const fn () callconv(.c) void) void {
        qtc.QWidgetItem_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn Layout(self: QWidgetItem) QLayout {
        return .{ .ptr = qtc.QWidgetItem_Layout(@ptrCast(self.ptr)) };
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
    /// ` self: QWidgetItem `
    ///
    pub fn SuperLayout(self: QWidgetItem) QLayout {
        return .{ .ptr = qtc.QWidgetItem_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem`
    ///
    /// ` callback: *const fn () callconv(.c) QLayout `
    ///
    pub fn OnLayout(self: QWidgetItem, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QWidgetItem_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn SpacerItem(self: QWidgetItem) QSpacerItem {
        return .{ .ptr = qtc.QWidgetItem_SpacerItem(@ptrCast(self.ptr)) };
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
    /// ` self: QWidgetItem `
    ///
    pub fn SuperSpacerItem(self: QWidgetItem) QSpacerItem {
        return .{ .ptr = qtc.QWidgetItem_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItem`
    ///
    /// ` callback: *const fn () callconv(.c) QSpacerItem `
    ///
    pub fn OnSpacerItem(self: QWidgetItem, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QWidgetItem_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItem `
    ///
    pub fn Delete(self: QWidgetItem) void {
        qtc.QWidgetItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html)
pub const QWidgetItemV2 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWidgetItemV2,

    pub const _is_QWidgetItemV2 = {};
    pub const _is_QWidgetItem = {};
    pub const _is_QLayoutItem = {};

    /// New constructs a new QWidgetItemV2 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QWidget `
    ///
    pub fn New(widget: anytype) QWidgetItemV2 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QWidgetItemV2_new(@ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn SizeHint(self: QWidgetItemV2) QSize {
        return .{ .ptr = qtc.QWidgetItemV2_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2 `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QWidgetItemV2, callback: *const fn () callconv(.c) QSize) void {
        qtc.QWidgetItemV2_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItemV2 `
    ///
    pub fn SuperSizeHint(self: QWidgetItemV2) QSize {
        return .{ .ptr = qtc.QWidgetItemV2_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn MinimumSize(self: QWidgetItemV2) QSize {
        return .{ .ptr = qtc.QWidgetItemV2_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2 `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSize(self: QWidgetItemV2, callback: *const fn () callconv(.c) QSize) void {
        qtc.QWidgetItemV2_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItemV2 `
    ///
    pub fn SuperMinimumSize(self: QWidgetItemV2) QSize {
        return .{ .ptr = qtc.QWidgetItemV2_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn MaximumSize(self: QWidgetItemV2) QSize {
        return .{ .ptr = qtc.QWidgetItemV2_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2 `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMaximumSize(self: QWidgetItemV2, callback: *const fn () callconv(.c) QSize) void {
        qtc.QWidgetItemV2_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItemV2 `
    ///
    pub fn SuperMaximumSize(self: QWidgetItemV2) QSize {
        return .{ .ptr = qtc.QWidgetItemV2_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    /// ` width: i32 `
    ///
    pub fn HeightForWidth(self: QWidgetItemV2, width: i32) i32 {
        return qtc.QWidgetItemV2_HeightForWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2 `
    ///
    /// ` callback: *const fn (self: QWidgetItemV2, width: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QWidgetItemV2, callback: *const fn (QWidgetItemV2, i32) callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItemV2 `
    ///
    /// ` width: i32 `
    ///
    pub fn SuperHeightForWidth(self: QWidgetItemV2, width: i32) i32 {
        return qtc.QWidgetItemV2_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QWidgetItemV2) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    /// ` a: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QWidgetItemV2, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self.ptr), @bitCast(a));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: QWidgetItemV2) i32 {
        return qtc.QWidgetItemV2_ExpandingDirections(@ptrCast(self.ptr));
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
    /// ` self: QWidgetItemV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: QWidgetItemV2) i32 {
        return qtc.QWidgetItemV2_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: QWidgetItemV2, callback: *const fn () callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn IsEmpty(self: QWidgetItemV2) bool {
        return qtc.QWidgetItemV2_IsEmpty(@ptrCast(self.ptr));
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
    /// ` self: QWidgetItemV2 `
    ///
    pub fn SuperIsEmpty(self: QWidgetItemV2) bool {
        return qtc.QWidgetItemV2_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: QWidgetItemV2, callback: *const fn () callconv(.c) bool) void {
        qtc.QWidgetItemV2_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry(self: QWidgetItemV2, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidgetItemV2_SetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
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
    /// ` self: QWidgetItemV2 `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SuperSetGeometry(self: QWidgetItemV2, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidgetItemV2_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2`
    ///
    /// ` callback: *const fn (self: QWidgetItemV2, geometry: QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: QWidgetItemV2, callback: *const fn (QWidgetItemV2, QRect) callconv(.c) void) void {
        qtc.QWidgetItemV2_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn Geometry(self: QWidgetItemV2) QRect {
        return .{ .ptr = qtc.QWidgetItemV2_Geometry(@ptrCast(self.ptr)) };
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
    /// ` self: QWidgetItemV2 `
    ///
    pub fn SuperGeometry(self: QWidgetItemV2) QRect {
        return .{ .ptr = qtc.QWidgetItemV2_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    pub fn OnGeometry(self: QWidgetItemV2, callback: *const fn () callconv(.c) QRect) void {
        qtc.QWidgetItemV2_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn Widget(self: QWidgetItemV2) QWidget {
        return .{ .ptr = qtc.QWidgetItemV2_Widget(@ptrCast(self.ptr)) };
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
    /// ` self: QWidgetItemV2 `
    ///
    pub fn SuperWidget(self: QWidgetItemV2) QWidget {
        return .{ .ptr = qtc.QWidgetItemV2_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnWidget(self: QWidgetItemV2, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QWidgetItemV2_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn HasHeightForWidth(self: QWidgetItemV2) bool {
        return qtc.QWidgetItemV2_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QWidgetItemV2 `
    ///
    pub fn SuperHasHeightForWidth(self: QWidgetItemV2) bool {
        return qtc.QWidgetItemV2_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QWidgetItemV2, callback: *const fn () callconv(.c) bool) void {
        qtc.QWidgetItemV2_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: QWidgetItemV2, param1: i32) i32 {
        return qtc.QWidgetItemV2_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QWidgetItemV2 `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: QWidgetItemV2, param1: i32) i32 {
        return qtc.QWidgetItemV2_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2`
    ///
    /// ` callback: *const fn (self: QWidgetItemV2, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: QWidgetItemV2, callback: *const fn (QWidgetItemV2, i32) callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: QWidgetItemV2) i32 {
        return qtc.QWidgetItemV2_ControlTypes(@ptrCast(self.ptr));
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
    /// ` self: QWidgetItemV2 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: QWidgetItemV2) i32 {
        return qtc.QWidgetItemV2_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// Inherited from QWidgetItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: QWidgetItemV2, callback: *const fn () callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn Invalidate(self: QWidgetItemV2) void {
        qtc.QWidgetItemV2_Invalidate(@ptrCast(self.ptr));
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
    /// ` self: QWidgetItemV2 `
    ///
    pub fn SuperInvalidate(self: QWidgetItemV2) void {
        qtc.QWidgetItemV2_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: QWidgetItemV2, callback: *const fn () callconv(.c) void) void {
        qtc.QWidgetItemV2_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn Layout(self: QWidgetItemV2) QLayout {
        return .{ .ptr = qtc.QWidgetItemV2_Layout(@ptrCast(self.ptr)) };
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
    /// ` self: QWidgetItemV2 `
    ///
    pub fn SuperLayout(self: QWidgetItemV2) QLayout {
        return .{ .ptr = qtc.QWidgetItemV2_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) QLayout `
    ///
    pub fn OnLayout(self: QWidgetItemV2, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QWidgetItemV2_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn SpacerItem(self: QWidgetItemV2) QSpacerItem {
        return .{ .ptr = qtc.QWidgetItemV2_SpacerItem(@ptrCast(self.ptr)) };
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
    /// ` self: QWidgetItemV2 `
    ///
    pub fn SuperSpacerItem(self: QWidgetItemV2) QSpacerItem {
        return .{ .ptr = qtc.QWidgetItemV2_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWidgetItemV2`
    ///
    /// ` callback: *const fn () callconv(.c) QSpacerItem `
    ///
    pub fn OnSpacerItem(self: QWidgetItemV2, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QWidgetItemV2_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWidgetItemV2 `
    ///
    pub fn Delete(self: QWidgetItemV2) void {
        qtc.QWidgetItemV2_Delete(@ptrCast(self.ptr));
    }
};
