const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGraphicsItem = @import("libqt6").QGraphicsItem;
const QRectF = @import("libqt6").QRectF;
const QSizeF = @import("libqt6").QSizeF;
const QSizePolicy = @import("libqt6").QSizePolicy;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html)
pub const QGraphicsLayoutItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsLayoutItem,

    pub const _is_QGraphicsLayoutItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsLayoutItem object in C++ memory
    ///
    pub fn new() QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsLayoutItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn new2(parent: anytype) QGraphicsLayoutItem {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsLayoutItem_new2(@ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGraphicsLayoutItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    /// ` _isLayout: bool `
    ///
    pub fn new3(parent: anytype, _isLayout: bool) QGraphicsLayoutItem {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsLayoutItem_new3(@ptrCast(parent.ptr), _isLayout) };
    }

    /// ### DEPRECATED: Use `setSizePolicy` instead
    ///
    pub const SetSizePolicy = setSizePolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` policy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QGraphicsLayoutItem, policy: anytype) void {
        comptime _ = @TypeOf(policy)._is_QSizePolicy;
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(policy.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy2` instead
    ///
    pub const SetSizePolicy2 = setSizePolicy2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QGraphicsLayoutItem, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// ### DEPRECATED: Use `sizePolicy` instead
    ///
    pub const SizePolicy = sizePolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn sizePolicy(self: QGraphicsLayoutItem) QSizePolicy {
        return .{ .ptr = qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` size: QSizeF `
    ///
    pub fn setMinimumSize(self: QGraphicsLayoutItem, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize2` instead
    ///
    pub const SetMinimumSize2 = setMinimumSize2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setMinimumSize2(self: QGraphicsLayoutItem, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn minimumSize(self: QGraphicsLayoutItem) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` width: f64 `
    ///
    pub fn setMinimumWidth(self: QGraphicsLayoutItem, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn minimumWidth(self: QGraphicsLayoutItem) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` height: f64 `
    ///
    pub fn setMinimumHeight(self: QGraphicsLayoutItem, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn minimumHeight(self: QGraphicsLayoutItem) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredSize` instead
    ///
    pub const SetPreferredSize = setPreferredSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` size: QSizeF `
    ///
    pub fn setPreferredSize(self: QGraphicsLayoutItem, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredSize2` instead
    ///
    pub const SetPreferredSize2 = setPreferredSize2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setPreferredSize2(self: QGraphicsLayoutItem, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `preferredSize` instead
    ///
    pub const PreferredSize = preferredSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn preferredSize(self: QGraphicsLayoutItem) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPreferredWidth` instead
    ///
    pub const SetPreferredWidth = setPreferredWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` width: f64 `
    ///
    pub fn setPreferredWidth(self: QGraphicsLayoutItem, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `preferredWidth` instead
    ///
    pub const PreferredWidth = preferredWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn preferredWidth(self: QGraphicsLayoutItem) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredHeight` instead
    ///
    pub const SetPreferredHeight = setPreferredHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` height: f64 `
    ///
    pub fn setPreferredHeight(self: QGraphicsLayoutItem, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `preferredHeight` instead
    ///
    pub const PreferredHeight = preferredHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn preferredHeight(self: QGraphicsLayoutItem) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` size: QSizeF `
    ///
    pub fn setMaximumSize(self: QGraphicsLayoutItem, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize2` instead
    ///
    pub const SetMaximumSize2 = setMaximumSize2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setMaximumSize2(self: QGraphicsLayoutItem, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn maximumSize(self: QGraphicsLayoutItem) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` width: f64 `
    ///
    pub fn setMaximumWidth(self: QGraphicsLayoutItem, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn maximumWidth(self: QGraphicsLayoutItem) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` height: f64 `
    ///
    pub fn setMaximumHeight(self: QGraphicsLayoutItem, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn maximumHeight(self: QGraphicsLayoutItem) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn setGeometry(self: QGraphicsLayoutItem, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsLayoutItem_SetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn (self: QGraphicsLayoutItem, rect: QRectF) callconv(.c) void `
    ///
    pub fn onSetGeometry(self: QGraphicsLayoutItem, callback: *const fn (QGraphicsLayoutItem, QRectF) callconv(.c) void) void {
        qtc.QGraphicsLayoutItem_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn superSetGeometry(self: QGraphicsLayoutItem, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsLayoutItem_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn geometry(self: QGraphicsLayoutItem) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `getContentsMargins` instead
    ///
    pub const GetContentsMargins = getContentsMargins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn getContentsMargins(self: QGraphicsLayoutItem, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLayoutItem_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `onGetContentsMargins` instead
    ///
    pub const OnGetContentsMargins = onGetContentsMargins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn (self: QGraphicsLayoutItem, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void `
    ///
    pub fn onGetContentsMargins(self: QGraphicsLayoutItem, callback: *const fn (QGraphicsLayoutItem, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsLayoutItem_OnGetContentsMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetContentsMargins` instead
    ///
    pub const SuperGetContentsMargins = superGetContentsMargins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn superGetContentsMargins(self: QGraphicsLayoutItem, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLayoutItem_SuperGetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn contentsRect(self: QGraphicsLayoutItem) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `effectiveSizeHint` instead
    ///
    pub const EffectiveSizeHint = effectiveSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    pub fn effectiveSizeHint(self: QGraphicsLayoutItem, which: i32) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// ### DEPRECATED: Use `updateGeometry` instead
    ///
    pub const UpdateGeometry = updateGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn updateGeometry(self: QGraphicsLayoutItem) void {
        qtc.QGraphicsLayoutItem_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateGeometry` instead
    ///
    pub const OnUpdateGeometry = onUpdateGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateGeometry(self: QGraphicsLayoutItem, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsLayoutItem_OnUpdateGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateGeometry` instead
    ///
    pub const SuperUpdateGeometry = superUpdateGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn superUpdateGeometry(self: QGraphicsLayoutItem) void {
        qtc.QGraphicsLayoutItem_SuperUpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn isEmpty(self: QGraphicsLayoutItem) bool {
        return qtc.QGraphicsLayoutItem_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsEmpty(self: QGraphicsLayoutItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsLayoutItem_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn superIsEmpty(self: QGraphicsLayoutItem) bool {
        return qtc.QGraphicsLayoutItem_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parentLayoutItem` instead
    ///
    pub const ParentLayoutItem = parentLayoutItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn parentLayoutItem(self: QGraphicsLayoutItem) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParentLayoutItem` instead
    ///
    pub const SetParentLayoutItem = setParentLayoutItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn setParentLayoutItem(self: QGraphicsLayoutItem, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `isLayout` instead
    ///
    pub const IsLayout = isLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn isLayout(self: QGraphicsLayoutItem) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `graphicsItem` instead
    ///
    pub const GraphicsItem = graphicsItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn graphicsItem(self: QGraphicsLayoutItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownedByLayout` instead
    ///
    pub const OwnedByLayout = ownedByLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn ownedByLayout(self: QGraphicsLayoutItem) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGraphicsItem` instead
    ///
    pub const SetGraphicsItem = setGraphicsItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn setGraphicsItem(self: QGraphicsLayoutItem, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsLayoutItem_SetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onSetGraphicsItem` instead
    ///
    pub const OnSetGraphicsItem = onSetGraphicsItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn (self: QGraphicsLayoutItem, item: QGraphicsItem) callconv(.c) void `
    ///
    pub fn onSetGraphicsItem(self: QGraphicsLayoutItem, callback: *const fn (QGraphicsLayoutItem, QGraphicsItem) callconv(.c) void) void {
        qtc.QGraphicsLayoutItem_OnSetGraphicsItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetGraphicsItem` instead
    ///
    pub const SuperSetGraphicsItem = superSetGraphicsItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn superSetGraphicsItem(self: QGraphicsLayoutItem, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsLayoutItem_SuperSetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setOwnedByLayout` instead
    ///
    pub const SetOwnedByLayout = setOwnedByLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` _ownedByLayout: bool `
    ///
    pub fn setOwnedByLayout(self: QGraphicsLayoutItem, _ownedByLayout: bool) void {
        qtc.QGraphicsLayoutItem_SetOwnedByLayout(@ptrCast(self.ptr), _ownedByLayout);
    }

    /// ### DEPRECATED: Use `onSetOwnedByLayout` instead
    ///
    pub const OnSetOwnedByLayout = onSetOwnedByLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn (self: QGraphicsLayoutItem, ownedByLayout: bool) callconv(.c) void `
    ///
    pub fn onSetOwnedByLayout(self: QGraphicsLayoutItem, callback: *const fn (QGraphicsLayoutItem, bool) callconv(.c) void) void {
        qtc.QGraphicsLayoutItem_OnSetOwnedByLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetOwnedByLayout` instead
    ///
    pub const SuperSetOwnedByLayout = superSetOwnedByLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` _ownedByLayout: bool `
    ///
    pub fn superSetOwnedByLayout(self: QGraphicsLayoutItem, _ownedByLayout: bool) void {
        qtc.QGraphicsLayoutItem_SuperSetOwnedByLayout(@ptrCast(self.ptr), _ownedByLayout);
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn sizeHint(self: QGraphicsLayoutItem, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLayoutItem_SizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn (self: QGraphicsLayoutItem, which: qnamespace_enums.SizeHint, constraint: QSizeF) callconv(.c) QSizeF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QGraphicsLayoutItem, callback: *const fn (QGraphicsLayoutItem, i32, QSizeF) callconv(.c) QSizeF) void {
        qtc.QGraphicsLayoutItem_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn superSizeHint(self: QGraphicsLayoutItem, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLayoutItem_SuperSizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `setSizePolicy3` instead
    ///
    pub const SetSizePolicy3 = setSizePolicy3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` controlType: qsizepolicy_enums.ControlType `
    ///
    pub fn setSizePolicy3(self: QGraphicsLayoutItem, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

    /// ### DEPRECATED: Use `effectiveSizeHint2` instead
    ///
    pub const EffectiveSizeHint2 = effectiveSizeHint2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn effectiveSizeHint2(self: QGraphicsLayoutItem, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#dtor.QGraphicsLayoutItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsLayoutItem `
    ///
    pub fn delete(self: QGraphicsLayoutItem) void {
        qtc.QGraphicsLayoutItem_Delete(@ptrCast(self.ptr));
    }
};
