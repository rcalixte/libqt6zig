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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLayoutItem object in C++ memory
    ///
    pub fn new() QLayoutItem {
        return .{ .ptr = qtc.QLayoutItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLayoutItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn new2(param1: anytype) QLayoutItem {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return .{ .ptr = qtc.QLayoutItem_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QLayoutItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn new3(_alignment: i32) QLayoutItem {
        return .{ .ptr = qtc.QLayoutItem_new3(@bitCast(_alignment)) };
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn sizeHint(self: QLayoutItem) QSize {
        return .{ .ptr = qtc.QLayoutItem_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QLayoutItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QLayoutItem_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn superSizeHint(self: QLayoutItem) QSize {
        return .{ .ptr = qtc.QLayoutItem_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn minimumSize(self: QLayoutItem) QSize {
        return .{ .ptr = qtc.QLayoutItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSize` instead
    ///
    pub const OnMinimumSize = onMinimumSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSize(self: QLayoutItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QLayoutItem_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumSize` instead
    ///
    pub const SuperMinimumSize = superMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn superMinimumSize(self: QLayoutItem) QSize {
        return .{ .ptr = qtc.QLayoutItem_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn maximumSize(self: QLayoutItem) QSize {
        return .{ .ptr = qtc.QLayoutItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaximumSize` instead
    ///
    pub const OnMaximumSize = onMaximumSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaximumSize(self: QLayoutItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QLayoutItem_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMaximumSize` instead
    ///
    pub const SuperMaximumSize = superMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn superMaximumSize(self: QLayoutItem) QSize {
        return .{ .ptr = qtc.QLayoutItem_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `expandingDirections` instead
    ///
    pub const ExpandingDirections = expandingDirections;

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
    pub fn expandingDirections(self: QLayoutItem) i32 {
        return qtc.QLayoutItem_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExpandingDirections` instead
    ///
    pub const OnExpandingDirections = onExpandingDirections;

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
    pub fn onExpandingDirections(self: QLayoutItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QLayoutItem_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandingDirections` instead
    ///
    pub const SuperExpandingDirections = superExpandingDirections;

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
    pub fn superExpandingDirections(self: QLayoutItem) i32 {
        return qtc.QLayoutItem_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry(self: QLayoutItem, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QLayoutItem_SetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

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
    pub fn onSetGeometry(self: QLayoutItem, callback: *const fn (QLayoutItem, QRect) callconv(.c) void) void {
        qtc.QLayoutItem_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn superSetGeometry(self: QLayoutItem, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QLayoutItem_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn geometry(self: QLayoutItem) QRect {
        return .{ .ptr = qtc.QLayoutItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onGeometry` instead
    ///
    pub const OnGeometry = onGeometry;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGeometry(self: QLayoutItem, callback: *const fn () callconv(.c) QRect) void {
        qtc.QLayoutItem_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGeometry` instead
    ///
    pub const SuperGeometry = superGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn superGeometry(self: QLayoutItem) QRect {
        return .{ .ptr = qtc.QLayoutItem_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn isEmpty(self: QLayoutItem) bool {
        return qtc.QLayoutItem_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

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
    pub fn onIsEmpty(self: QLayoutItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QLayoutItem_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn superIsEmpty(self: QLayoutItem) bool {
        return qtc.QLayoutItem_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn hasHeightForWidth(self: QLayoutItem) bool {
        return qtc.QLayoutItem_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasHeightForWidth` instead
    ///
    pub const OnHasHeightForWidth = onHasHeightForWidth;

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
    pub fn onHasHeightForWidth(self: QLayoutItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QLayoutItem_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasHeightForWidth` instead
    ///
    pub const SuperHasHeightForWidth = superHasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn superHasHeightForWidth(self: QLayoutItem) bool {
        return qtc.QLayoutItem_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QLayoutItem, param1: i32) i32 {
        return qtc.QLayoutItem_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onHeightForWidth` instead
    ///
    pub const OnHeightForWidth = onHeightForWidth;

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
    pub fn onHeightForWidth(self: QLayoutItem, callback: *const fn (QLayoutItem, i32) callconv(.c) i32) void {
        qtc.QLayoutItem_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHeightForWidth` instead
    ///
    pub const SuperHeightForWidth = superHeightForWidth;

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
    pub fn superHeightForWidth(self: QLayoutItem, param1: i32) i32 {
        return qtc.QLayoutItem_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `minimumHeightForWidth` instead
    ///
    pub const MinimumHeightForWidth = minimumHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn minimumHeightForWidth(self: QLayoutItem, param1: i32) i32 {
        return qtc.QLayoutItem_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMinimumHeightForWidth` instead
    ///
    pub const OnMinimumHeightForWidth = onMinimumHeightForWidth;

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
    pub fn onMinimumHeightForWidth(self: QLayoutItem, callback: *const fn (QLayoutItem, i32) callconv(.c) i32) void {
        qtc.QLayoutItem_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumHeightForWidth` instead
    ///
    pub const SuperMinimumHeightForWidth = superMinimumHeightForWidth;

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
    pub fn superMinimumHeightForWidth(self: QLayoutItem, param1: i32) i32 {
        return qtc.QLayoutItem_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn invalidate(self: QLayoutItem) void {
        qtc.QLayoutItem_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidate` instead
    ///
    pub const OnInvalidate = onInvalidate;

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
    pub fn onInvalidate(self: QLayoutItem, callback: *const fn () callconv(.c) void) void {
        qtc.QLayoutItem_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInvalidate` instead
    ///
    pub const SuperInvalidate = superInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn superInvalidate(self: QLayoutItem) void {
        qtc.QLayoutItem_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn widget(self: QLayoutItem) QWidget {
        return .{ .ptr = qtc.QLayoutItem_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

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
    pub fn onWidget(self: QLayoutItem, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QLayoutItem_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWidget` instead
    ///
    pub const SuperWidget = superWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn superWidget(self: QLayoutItem) QWidget {
        return .{ .ptr = qtc.QLayoutItem_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn layout(self: QLayoutItem) QLayout {
        return .{ .ptr = qtc.QLayoutItem_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onLayout` instead
    ///
    pub const OnLayout = onLayout;

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
    pub fn onLayout(self: QLayoutItem, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QLayoutItem_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLayout` instead
    ///
    pub const SuperLayout = superLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn superLayout(self: QLayoutItem) QLayout {
        return .{ .ptr = qtc.QLayoutItem_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `spacerItem` instead
    ///
    pub const SpacerItem = spacerItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn spacerItem(self: QLayoutItem) QSpacerItem {
        return .{ .ptr = qtc.QLayoutItem_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpacerItem` instead
    ///
    pub const OnSpacerItem = onSpacerItem;

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
    pub fn onSpacerItem(self: QLayoutItem, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QLayoutItem_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSpacerItem` instead
    ///
    pub const SuperSpacerItem = superSpacerItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn superSpacerItem(self: QLayoutItem) QSpacerItem {
        return .{ .ptr = qtc.QLayoutItem_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

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
    pub fn alignment(self: QLayoutItem) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` a: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: QLayoutItem, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self.ptr), @bitCast(a));
    }

    /// ### DEPRECATED: Use `controlTypes` instead
    ///
    pub const ControlTypes = controlTypes;

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
    pub fn controlTypes(self: QLayoutItem) i32 {
        return qtc.QLayoutItem_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onControlTypes` instead
    ///
    pub const OnControlTypes = onControlTypes;

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
    pub fn onControlTypes(self: QLayoutItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QLayoutItem_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superControlTypes` instead
    ///
    pub const SuperControlTypes = superControlTypes;

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
    pub fn superControlTypes(self: QLayoutItem) i32 {
        return qtc.QLayoutItem_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLayoutItem `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn operatorAssign(self: QLayoutItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayoutItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onOperatorAssign` instead
    ///
    pub const OnOperatorAssign = onOperatorAssign;

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
    pub fn onOperatorAssign(self: QLayoutItem, callback: *const fn (QLayoutItem, QLayoutItem) callconv(.c) void) void {
        qtc.QLayoutItem_OnOperatorAssign(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOperatorAssign` instead
    ///
    pub const SuperOperatorAssign = superOperatorAssign;

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
    pub fn superOperatorAssign(self: QLayoutItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayoutItem_SuperOperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#dtor.QLayoutItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLayoutItem `
    ///
    pub fn delete(self: QLayoutItem) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSpacerItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn new(w: i32, h: i32) QSpacerItem {
        return .{ .ptr = qtc.QSpacerItem_new(@bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSpacerItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSpacerItem `
    ///
    pub fn new2(param1: anytype) QSpacerItem {
        comptime _ = @TypeOf(param1)._is_QSpacerItem;
        return .{ .ptr = qtc.QSpacerItem_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSpacerItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` hData: qsizepolicy_enums.Policy `
    ///
    pub fn new3(w: i32, h: i32, hData: i32) QSpacerItem {
        return .{ .ptr = qtc.QSpacerItem_new3(@bitCast(w), @bitCast(h), @bitCast(hData)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSpacerItem object in C++ memory
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
    pub fn new4(w: i32, h: i32, hData: i32, vData: i32) QSpacerItem {
        return .{ .ptr = qtc.QSpacerItem_new4(@bitCast(w), @bitCast(h), @bitCast(hData), @bitCast(vData)) };
    }

    /// ### DEPRECATED: Use `changeSize` instead
    ///
    pub const ChangeSize = changeSize;

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
    pub fn changeSize(self: QSpacerItem, w: i32, h: i32) void {
        qtc.QSpacerItem_ChangeSize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn sizeHint(self: QSpacerItem) QSize {
        return .{ .ptr = qtc.QSpacerItem_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QSpacerItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QSpacerItem_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn superSizeHint(self: QSpacerItem) QSize {
        return .{ .ptr = qtc.QSpacerItem_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn minimumSize(self: QSpacerItem) QSize {
        return .{ .ptr = qtc.QSpacerItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSize` instead
    ///
    pub const OnMinimumSize = onMinimumSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSize(self: QSpacerItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QSpacerItem_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumSize` instead
    ///
    pub const SuperMinimumSize = superMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn superMinimumSize(self: QSpacerItem) QSize {
        return .{ .ptr = qtc.QSpacerItem_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn maximumSize(self: QSpacerItem) QSize {
        return .{ .ptr = qtc.QSpacerItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaximumSize` instead
    ///
    pub const OnMaximumSize = onMaximumSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaximumSize(self: QSpacerItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QSpacerItem_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMaximumSize` instead
    ///
    pub const SuperMaximumSize = superMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn superMaximumSize(self: QSpacerItem) QSize {
        return .{ .ptr = qtc.QSpacerItem_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `expandingDirections` instead
    ///
    pub const ExpandingDirections = expandingDirections;

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
    pub fn expandingDirections(self: QSpacerItem) i32 {
        return qtc.QSpacerItem_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExpandingDirections` instead
    ///
    pub const OnExpandingDirections = onExpandingDirections;

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
    pub fn onExpandingDirections(self: QSpacerItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QSpacerItem_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandingDirections` instead
    ///
    pub const SuperExpandingDirections = superExpandingDirections;

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
    pub fn superExpandingDirections(self: QSpacerItem) i32 {
        return qtc.QSpacerItem_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn isEmpty(self: QSpacerItem) bool {
        return qtc.QSpacerItem_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

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
    pub fn onIsEmpty(self: QSpacerItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QSpacerItem_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn superIsEmpty(self: QSpacerItem) bool {
        return qtc.QSpacerItem_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry(self: QSpacerItem, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QSpacerItem_SetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

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
    pub fn onSetGeometry(self: QSpacerItem, callback: *const fn (QSpacerItem, QRect) callconv(.c) void) void {
        qtc.QSpacerItem_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn superSetGeometry(self: QSpacerItem, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QSpacerItem_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn geometry(self: QSpacerItem) QRect {
        return .{ .ptr = qtc.QSpacerItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onGeometry` instead
    ///
    pub const OnGeometry = onGeometry;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGeometry(self: QSpacerItem, callback: *const fn () callconv(.c) QRect) void {
        qtc.QSpacerItem_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGeometry` instead
    ///
    pub const SuperGeometry = superGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn superGeometry(self: QSpacerItem) QRect {
        return .{ .ptr = qtc.QSpacerItem_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `spacerItem` instead
    ///
    pub const SpacerItem = spacerItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn spacerItem(self: QSpacerItem) QSpacerItem {
        return .{ .ptr = qtc.QSpacerItem_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpacerItem` instead
    ///
    pub const OnSpacerItem = onSpacerItem;

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
    pub fn onSpacerItem(self: QSpacerItem, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QSpacerItem_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSpacerItem` instead
    ///
    pub const SuperSpacerItem = superSpacerItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn superSpacerItem(self: QSpacerItem) QSpacerItem {
        return .{ .ptr = qtc.QSpacerItem_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sizePolicy` instead
    ///
    pub const SizePolicy = sizePolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn sizePolicy(self: QSpacerItem) QSizePolicy {
        return .{ .ptr = qtc.QSpacerItem_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `changeSize3` instead
    ///
    pub const ChangeSize3 = changeSize3;

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
    pub fn changeSize3(self: QSpacerItem, w: i32, h: i32, hData: i32) void {
        qtc.QSpacerItem_ChangeSize3(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(hData));
    }

    /// ### DEPRECATED: Use `changeSize4` instead
    ///
    pub const ChangeSize4 = changeSize4;

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
    pub fn changeSize4(self: QSpacerItem, w: i32, h: i32, hData: i32, vData: i32) void {
        qtc.QSpacerItem_ChangeSize4(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(hData), @bitCast(vData));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

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
    pub fn alignment(self: QSpacerItem) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

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
    pub fn setAlignment(self: QSpacerItem, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self.ptr), @bitCast(a));
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

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
    pub fn hasHeightForWidth(self: QSpacerItem) bool {
        return qtc.QSpacerItem_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHasHeightForWidth` instead
    ///
    pub const SuperHasHeightForWidth = superHasHeightForWidth;

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
    pub fn superHasHeightForWidth(self: QSpacerItem) bool {
        return qtc.QSpacerItem_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasHeightForWidth` instead
    ///
    pub const OnHasHeightForWidth = onHasHeightForWidth;

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
    pub fn onHasHeightForWidth(self: QSpacerItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QSpacerItem_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

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
    pub fn heightForWidth(self: QSpacerItem, param1: i32) i32 {
        return qtc.QSpacerItem_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superHeightForWidth` instead
    ///
    pub const SuperHeightForWidth = superHeightForWidth;

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
    pub fn superHeightForWidth(self: QSpacerItem, param1: i32) i32 {
        return qtc.QSpacerItem_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onHeightForWidth` instead
    ///
    pub const OnHeightForWidth = onHeightForWidth;

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
    pub fn onHeightForWidth(self: QSpacerItem, callback: *const fn (QSpacerItem, i32) callconv(.c) i32) void {
        qtc.QSpacerItem_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumHeightForWidth` instead
    ///
    pub const MinimumHeightForWidth = minimumHeightForWidth;

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
    pub fn minimumHeightForWidth(self: QSpacerItem, param1: i32) i32 {
        return qtc.QSpacerItem_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superMinimumHeightForWidth` instead
    ///
    pub const SuperMinimumHeightForWidth = superMinimumHeightForWidth;

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
    pub fn superMinimumHeightForWidth(self: QSpacerItem, param1: i32) i32 {
        return qtc.QSpacerItem_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMinimumHeightForWidth` instead
    ///
    pub const OnMinimumHeightForWidth = onMinimumHeightForWidth;

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
    pub fn onMinimumHeightForWidth(self: QSpacerItem, callback: *const fn (QSpacerItem, i32) callconv(.c) i32) void {
        qtc.QSpacerItem_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

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
    pub fn invalidate(self: QSpacerItem) void {
        qtc.QSpacerItem_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superInvalidate` instead
    ///
    pub const SuperInvalidate = superInvalidate;

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
    pub fn superInvalidate(self: QSpacerItem) void {
        qtc.QSpacerItem_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidate` instead
    ///
    pub const OnInvalidate = onInvalidate;

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
    pub fn onInvalidate(self: QSpacerItem, callback: *const fn () callconv(.c) void) void {
        qtc.QSpacerItem_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

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
    pub fn widget(self: QSpacerItem) QWidget {
        return .{ .ptr = qtc.QSpacerItem_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superWidget` instead
    ///
    pub const SuperWidget = superWidget;

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
    pub fn superWidget(self: QSpacerItem) QWidget {
        return .{ .ptr = qtc.QSpacerItem_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

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
    pub fn onWidget(self: QSpacerItem, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QSpacerItem_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

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
    pub fn layout(self: QSpacerItem) QLayout {
        return .{ .ptr = qtc.QSpacerItem_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superLayout` instead
    ///
    pub const SuperLayout = superLayout;

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
    pub fn superLayout(self: QSpacerItem) QLayout {
        return .{ .ptr = qtc.QSpacerItem_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onLayout` instead
    ///
    pub const OnLayout = onLayout;

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
    pub fn onLayout(self: QSpacerItem, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QSpacerItem_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `controlTypes` instead
    ///
    pub const ControlTypes = controlTypes;

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
    pub fn controlTypes(self: QSpacerItem) i32 {
        return qtc.QSpacerItem_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superControlTypes` instead
    ///
    pub const SuperControlTypes = superControlTypes;

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
    pub fn superControlTypes(self: QSpacerItem) i32 {
        return qtc.QSpacerItem_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onControlTypes` instead
    ///
    pub const OnControlTypes = onControlTypes;

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
    pub fn onControlTypes(self: QSpacerItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QSpacerItem_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#dtor.QSpacerItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSpacerItem `
    ///
    pub fn delete(self: QSpacerItem) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QWidget `
    ///
    pub fn new(w: anytype) QWidgetItem {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QWidgetItem_new(@ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn sizeHint(self: QWidgetItem) QSize {
        return .{ .ptr = qtc.QWidgetItem_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QWidgetItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QWidgetItem_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn superSizeHint(self: QWidgetItem) QSize {
        return .{ .ptr = qtc.QWidgetItem_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn minimumSize(self: QWidgetItem) QSize {
        return .{ .ptr = qtc.QWidgetItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSize` instead
    ///
    pub const OnMinimumSize = onMinimumSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSize(self: QWidgetItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QWidgetItem_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumSize` instead
    ///
    pub const SuperMinimumSize = superMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn superMinimumSize(self: QWidgetItem) QSize {
        return .{ .ptr = qtc.QWidgetItem_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn maximumSize(self: QWidgetItem) QSize {
        return .{ .ptr = qtc.QWidgetItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaximumSize` instead
    ///
    pub const OnMaximumSize = onMaximumSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaximumSize(self: QWidgetItem, callback: *const fn () callconv(.c) QSize) void {
        qtc.QWidgetItem_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMaximumSize` instead
    ///
    pub const SuperMaximumSize = superMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn superMaximumSize(self: QWidgetItem) QSize {
        return .{ .ptr = qtc.QWidgetItem_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `expandingDirections` instead
    ///
    pub const ExpandingDirections = expandingDirections;

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
    pub fn expandingDirections(self: QWidgetItem) i32 {
        return qtc.QWidgetItem_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExpandingDirections` instead
    ///
    pub const OnExpandingDirections = onExpandingDirections;

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
    pub fn onExpandingDirections(self: QWidgetItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QWidgetItem_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandingDirections` instead
    ///
    pub const SuperExpandingDirections = superExpandingDirections;

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
    pub fn superExpandingDirections(self: QWidgetItem) i32 {
        return qtc.QWidgetItem_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn isEmpty(self: QWidgetItem) bool {
        return qtc.QWidgetItem_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

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
    pub fn onIsEmpty(self: QWidgetItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QWidgetItem_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn superIsEmpty(self: QWidgetItem) bool {
        return qtc.QWidgetItem_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry(self: QWidgetItem, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QWidgetItem_SetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

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
    pub fn onSetGeometry(self: QWidgetItem, callback: *const fn (QWidgetItem, QRect) callconv(.c) void) void {
        qtc.QWidgetItem_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn superSetGeometry(self: QWidgetItem, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QWidgetItem_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn geometry(self: QWidgetItem) QRect {
        return .{ .ptr = qtc.QWidgetItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onGeometry` instead
    ///
    pub const OnGeometry = onGeometry;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGeometry(self: QWidgetItem, callback: *const fn () callconv(.c) QRect) void {
        qtc.QWidgetItem_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGeometry` instead
    ///
    pub const SuperGeometry = superGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn superGeometry(self: QWidgetItem) QRect {
        return .{ .ptr = qtc.QWidgetItem_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn widget(self: QWidgetItem) QWidget {
        return .{ .ptr = qtc.QWidgetItem_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

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
    pub fn onWidget(self: QWidgetItem, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QWidgetItem_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWidget` instead
    ///
    pub const SuperWidget = superWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn superWidget(self: QWidgetItem) QWidget {
        return .{ .ptr = qtc.QWidgetItem_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn hasHeightForWidth(self: QWidgetItem) bool {
        return qtc.QWidgetItem_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasHeightForWidth` instead
    ///
    pub const OnHasHeightForWidth = onHasHeightForWidth;

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
    pub fn onHasHeightForWidth(self: QWidgetItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QWidgetItem_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasHeightForWidth` instead
    ///
    pub const SuperHasHeightForWidth = superHasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn superHasHeightForWidth(self: QWidgetItem) bool {
        return qtc.QWidgetItem_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QWidgetItem, param1: i32) i32 {
        return qtc.QWidgetItem_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onHeightForWidth` instead
    ///
    pub const OnHeightForWidth = onHeightForWidth;

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
    pub fn onHeightForWidth(self: QWidgetItem, callback: *const fn (QWidgetItem, i32) callconv(.c) i32) void {
        qtc.QWidgetItem_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHeightForWidth` instead
    ///
    pub const SuperHeightForWidth = superHeightForWidth;

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
    pub fn superHeightForWidth(self: QWidgetItem, param1: i32) i32 {
        return qtc.QWidgetItem_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `minimumHeightForWidth` instead
    ///
    pub const MinimumHeightForWidth = minimumHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItem `
    ///
    /// ` param1: i32 `
    ///
    pub fn minimumHeightForWidth(self: QWidgetItem, param1: i32) i32 {
        return qtc.QWidgetItem_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMinimumHeightForWidth` instead
    ///
    pub const OnMinimumHeightForWidth = onMinimumHeightForWidth;

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
    pub fn onMinimumHeightForWidth(self: QWidgetItem, callback: *const fn (QWidgetItem, i32) callconv(.c) i32) void {
        qtc.QWidgetItem_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumHeightForWidth` instead
    ///
    pub const SuperMinimumHeightForWidth = superMinimumHeightForWidth;

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
    pub fn superMinimumHeightForWidth(self: QWidgetItem, param1: i32) i32 {
        return qtc.QWidgetItem_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `controlTypes` instead
    ///
    pub const ControlTypes = controlTypes;

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
    pub fn controlTypes(self: QWidgetItem) i32 {
        return qtc.QWidgetItem_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onControlTypes` instead
    ///
    pub const OnControlTypes = onControlTypes;

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
    pub fn onControlTypes(self: QWidgetItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QWidgetItem_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superControlTypes` instead
    ///
    pub const SuperControlTypes = superControlTypes;

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
    pub fn superControlTypes(self: QWidgetItem) i32 {
        return qtc.QWidgetItem_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

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
    pub fn alignment(self: QWidgetItem) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

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
    pub fn setAlignment(self: QWidgetItem, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self.ptr), @bitCast(a));
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

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
    pub fn invalidate(self: QWidgetItem) void {
        qtc.QWidgetItem_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superInvalidate` instead
    ///
    pub const SuperInvalidate = superInvalidate;

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
    pub fn superInvalidate(self: QWidgetItem) void {
        qtc.QWidgetItem_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidate` instead
    ///
    pub const OnInvalidate = onInvalidate;

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
    pub fn onInvalidate(self: QWidgetItem, callback: *const fn () callconv(.c) void) void {
        qtc.QWidgetItem_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

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
    pub fn layout(self: QWidgetItem) QLayout {
        return .{ .ptr = qtc.QWidgetItem_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superLayout` instead
    ///
    pub const SuperLayout = superLayout;

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
    pub fn superLayout(self: QWidgetItem) QLayout {
        return .{ .ptr = qtc.QWidgetItem_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onLayout` instead
    ///
    pub const OnLayout = onLayout;

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
    pub fn onLayout(self: QWidgetItem, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QWidgetItem_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `spacerItem` instead
    ///
    pub const SpacerItem = spacerItem;

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
    pub fn spacerItem(self: QWidgetItem) QSpacerItem {
        return .{ .ptr = qtc.QWidgetItem_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSpacerItem` instead
    ///
    pub const SuperSpacerItem = superSpacerItem;

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
    pub fn superSpacerItem(self: QWidgetItem) QSpacerItem {
        return .{ .ptr = qtc.QWidgetItem_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpacerItem` instead
    ///
    pub const OnSpacerItem = onSpacerItem;

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
    pub fn onSpacerItem(self: QWidgetItem, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QWidgetItem_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#dtor.QWidgetItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWidgetItem `
    ///
    pub fn delete(self: QWidgetItem) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWidgetItemV2 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _widget: QWidget `
    ///
    pub fn new(_widget: anytype) QWidgetItemV2 {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        return .{ .ptr = qtc.QWidgetItemV2_new(@ptrCast(_widget.ptr)) };
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn sizeHint(self: QWidgetItemV2) QSize {
        return .{ .ptr = qtc.QWidgetItemV2_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QWidgetItemV2, callback: *const fn () callconv(.c) QSize) void {
        qtc.QWidgetItemV2_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn superSizeHint(self: QWidgetItemV2) QSize {
        return .{ .ptr = qtc.QWidgetItemV2_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn minimumSize(self: QWidgetItemV2) QSize {
        return .{ .ptr = qtc.QWidgetItemV2_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSize` instead
    ///
    pub const OnMinimumSize = onMinimumSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSize(self: QWidgetItemV2, callback: *const fn () callconv(.c) QSize) void {
        qtc.QWidgetItemV2_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumSize` instead
    ///
    pub const SuperMinimumSize = superMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn superMinimumSize(self: QWidgetItemV2) QSize {
        return .{ .ptr = qtc.QWidgetItemV2_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn maximumSize(self: QWidgetItemV2) QSize {
        return .{ .ptr = qtc.QWidgetItemV2_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaximumSize` instead
    ///
    pub const OnMaximumSize = onMaximumSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaximumSize(self: QWidgetItemV2, callback: *const fn () callconv(.c) QSize) void {
        qtc.QWidgetItemV2_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMaximumSize` instead
    ///
    pub const SuperMaximumSize = superMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn superMaximumSize(self: QWidgetItemV2) QSize {
        return .{ .ptr = qtc.QWidgetItemV2_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWidgetItemV2 `
    ///
    /// ` width: i32 `
    ///
    pub fn heightForWidth(self: QWidgetItemV2, width: i32) i32 {
        return qtc.QWidgetItemV2_HeightForWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `onHeightForWidth` instead
    ///
    pub const OnHeightForWidth = onHeightForWidth;

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
    pub fn onHeightForWidth(self: QWidgetItemV2, callback: *const fn (QWidgetItemV2, i32) callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHeightForWidth` instead
    ///
    pub const SuperHeightForWidth = superHeightForWidth;

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
    pub fn superHeightForWidth(self: QWidgetItemV2, width: i32) i32 {
        return qtc.QWidgetItemV2_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

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
    pub fn alignment(self: QWidgetItemV2) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

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
    pub fn setAlignment(self: QWidgetItemV2, a: i32) void {
        qtc.QLayoutItem_SetAlignment(@ptrCast(self.ptr), @bitCast(a));
    }

    /// ### DEPRECATED: Use `expandingDirections` instead
    ///
    pub const ExpandingDirections = expandingDirections;

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
    pub fn expandingDirections(self: QWidgetItemV2) i32 {
        return qtc.QWidgetItemV2_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superExpandingDirections` instead
    ///
    pub const SuperExpandingDirections = superExpandingDirections;

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
    pub fn superExpandingDirections(self: QWidgetItemV2) i32 {
        return qtc.QWidgetItemV2_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExpandingDirections` instead
    ///
    pub const OnExpandingDirections = onExpandingDirections;

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
    pub fn onExpandingDirections(self: QWidgetItemV2, callback: *const fn () callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

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
    pub fn isEmpty(self: QWidgetItemV2) bool {
        return qtc.QWidgetItemV2_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

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
    pub fn superIsEmpty(self: QWidgetItemV2) bool {
        return qtc.QWidgetItemV2_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

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
    pub fn onIsEmpty(self: QWidgetItemV2, callback: *const fn () callconv(.c) bool) void {
        qtc.QWidgetItemV2_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

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
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry(self: QWidgetItemV2, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QWidgetItemV2_SetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

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
    /// ` _geometry: QRect `
    ///
    pub fn superSetGeometry(self: QWidgetItemV2, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QWidgetItemV2_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

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
    pub fn onSetGeometry(self: QWidgetItemV2, callback: *const fn (QWidgetItemV2, QRect) callconv(.c) void) void {
        qtc.QWidgetItemV2_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

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
    pub fn geometry(self: QWidgetItemV2) QRect {
        return .{ .ptr = qtc.QWidgetItemV2_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superGeometry` instead
    ///
    pub const SuperGeometry = superGeometry;

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
    pub fn superGeometry(self: QWidgetItemV2) QRect {
        return .{ .ptr = qtc.QWidgetItemV2_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onGeometry` instead
    ///
    pub const OnGeometry = onGeometry;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGeometry(self: QWidgetItemV2, callback: *const fn () callconv(.c) QRect) void {
        qtc.QWidgetItemV2_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

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
    pub fn widget(self: QWidgetItemV2) QWidget {
        return .{ .ptr = qtc.QWidgetItemV2_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superWidget` instead
    ///
    pub const SuperWidget = superWidget;

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
    pub fn superWidget(self: QWidgetItemV2) QWidget {
        return .{ .ptr = qtc.QWidgetItemV2_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

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
    pub fn onWidget(self: QWidgetItemV2, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QWidgetItemV2_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

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
    pub fn hasHeightForWidth(self: QWidgetItemV2) bool {
        return qtc.QWidgetItemV2_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHasHeightForWidth` instead
    ///
    pub const SuperHasHeightForWidth = superHasHeightForWidth;

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
    pub fn superHasHeightForWidth(self: QWidgetItemV2) bool {
        return qtc.QWidgetItemV2_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasHeightForWidth` instead
    ///
    pub const OnHasHeightForWidth = onHasHeightForWidth;

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
    pub fn onHasHeightForWidth(self: QWidgetItemV2, callback: *const fn () callconv(.c) bool) void {
        qtc.QWidgetItemV2_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumHeightForWidth` instead
    ///
    pub const MinimumHeightForWidth = minimumHeightForWidth;

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
    pub fn minimumHeightForWidth(self: QWidgetItemV2, param1: i32) i32 {
        return qtc.QWidgetItemV2_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superMinimumHeightForWidth` instead
    ///
    pub const SuperMinimumHeightForWidth = superMinimumHeightForWidth;

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
    pub fn superMinimumHeightForWidth(self: QWidgetItemV2, param1: i32) i32 {
        return qtc.QWidgetItemV2_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMinimumHeightForWidth` instead
    ///
    pub const OnMinimumHeightForWidth = onMinimumHeightForWidth;

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
    pub fn onMinimumHeightForWidth(self: QWidgetItemV2, callback: *const fn (QWidgetItemV2, i32) callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `controlTypes` instead
    ///
    pub const ControlTypes = controlTypes;

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
    pub fn controlTypes(self: QWidgetItemV2) i32 {
        return qtc.QWidgetItemV2_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superControlTypes` instead
    ///
    pub const SuperControlTypes = superControlTypes;

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
    pub fn superControlTypes(self: QWidgetItemV2) i32 {
        return qtc.QWidgetItemV2_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onControlTypes` instead
    ///
    pub const OnControlTypes = onControlTypes;

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
    pub fn onControlTypes(self: QWidgetItemV2, callback: *const fn () callconv(.c) i32) void {
        qtc.QWidgetItemV2_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

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
    pub fn invalidate(self: QWidgetItemV2) void {
        qtc.QWidgetItemV2_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superInvalidate` instead
    ///
    pub const SuperInvalidate = superInvalidate;

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
    pub fn superInvalidate(self: QWidgetItemV2) void {
        qtc.QWidgetItemV2_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidate` instead
    ///
    pub const OnInvalidate = onInvalidate;

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
    pub fn onInvalidate(self: QWidgetItemV2, callback: *const fn () callconv(.c) void) void {
        qtc.QWidgetItemV2_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

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
    pub fn layout(self: QWidgetItemV2) QLayout {
        return .{ .ptr = qtc.QWidgetItemV2_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superLayout` instead
    ///
    pub const SuperLayout = superLayout;

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
    pub fn superLayout(self: QWidgetItemV2) QLayout {
        return .{ .ptr = qtc.QWidgetItemV2_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onLayout` instead
    ///
    pub const OnLayout = onLayout;

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
    pub fn onLayout(self: QWidgetItemV2, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QWidgetItemV2_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `spacerItem` instead
    ///
    pub const SpacerItem = spacerItem;

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
    pub fn spacerItem(self: QWidgetItemV2) QSpacerItem {
        return .{ .ptr = qtc.QWidgetItemV2_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSpacerItem` instead
    ///
    pub const SuperSpacerItem = superSpacerItem;

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
    pub fn superSpacerItem(self: QWidgetItemV2) QSpacerItem {
        return .{ .ptr = qtc.QWidgetItemV2_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpacerItem` instead
    ///
    pub const OnSpacerItem = onSpacerItem;

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
    pub fn onSpacerItem(self: QWidgetItemV2, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QWidgetItemV2_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#dtor.QWidgetItemV2)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWidgetItemV2 `
    ///
    pub fn delete(self: QWidgetItemV2) void {
        qtc.QWidgetItemV2_Delete(@ptrCast(self.ptr));
    }
};
