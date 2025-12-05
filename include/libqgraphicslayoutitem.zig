const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html)
pub const qgraphicslayoutitem = struct {
    /// New constructs a new QGraphicsLayoutItem object.
    ///
    pub fn New() QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayoutItem_new();
    }

    /// New2 constructs a new QGraphicsLayoutItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QGraphicsLayoutItem `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayoutItem_new2(@ptrCast(parent));
    }

    /// New3 constructs a new QGraphicsLayoutItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QGraphicsLayoutItem `
    ///
    /// ` isLayout: bool `
    ///
    pub fn New3(parent: ?*anyopaque, isLayout: bool) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayoutItem_new3(@ptrCast(parent), isLayout);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` policy: QtC.QSizePolicy `
    ///
    pub fn SetSizePolicy(self: ?*anyopaque, policy: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self), @ptrCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: ?*anyopaque, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMinimumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMinimumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self), @floatCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn MinimumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMinimumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self), @floatCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn MinimumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn SetPreferredSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetPreferredSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn PreferredSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` width: f64 `
    ///
    pub fn SetPreferredWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self), @floatCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn PreferredWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` height: f64 `
    ///
    pub fn SetPreferredHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self), @floatCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn PreferredHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMaximumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMaximumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self), @floatCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn MaximumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMaximumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self), @floatCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn MaximumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLayoutItem, rect: QtC.QRectF) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLayoutItem_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn GetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLayoutItem_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLayoutItem, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void `
    ///
    pub fn OnGetContentsMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsLayoutItem_OnGetContentsMargins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn QBaseGetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLayoutItem_QBaseGetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    pub fn EffectiveSizeHint(self: ?*anyopaque, which: i32) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self), @intCast(which));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_UpdateGeometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometry(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsLayoutItem_OnUpdateGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn QBaseUpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_QBaseUpdateGeometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsLayoutItem_OnIsEmpty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_QBaseIsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn ParentLayoutItem(self: ?*anyopaque) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` parent: QtC.QGraphicsLayoutItem `
    ///
    pub fn SetParentLayoutItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn IsLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn GraphicsItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn OwnedByLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLayoutItem, item: QtC.QGraphicsItem) callconv(.c) void `
    ///
    pub fn OnSetGraphicsItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLayoutItem_OnSetGraphicsItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn QBaseSetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_QBaseSetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsLayoutItem_SetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLayoutItem, ownedByLayout: bool) callconv(.c) void `
    ///
    pub fn OnSetOwnedByLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsLayoutItem_OnSetOwnedByLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn QBaseSetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsLayoutItem_QBaseSetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QtC.QSizeF `
    ///
    pub fn SizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLayoutItem, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF) callconv(.c) QtC.QSizeF `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QGraphicsLayoutItem_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QtC.QSizeF `
    ///
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` controlType: qsizepolicy_enums.ControlType `
    ///
    pub fn SetSizePolicy3(self: ?*anyopaque, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy), @intCast(controlType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QtC.QSizeF `
    ///
    pub fn EffectiveSizeHint2(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#dtor.QGraphicsLayoutItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGraphicsLayoutItem `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_Delete(@ptrCast(self));
    }
};
