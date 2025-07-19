const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;

/// https://doc.qt.io/qt-6/qgraphicslayout.html
pub const qgraphicslayout = struct {
    /// New constructs a new QGraphicsLayout object.
    ///
    ///
    pub fn New() QtC.QGraphicsLayout {
        return qtc.QGraphicsLayout_new();
    }

    /// New2 constructs a new QGraphicsLayout object.
    ///
    /// ``` parent: QtC.QGraphicsLayoutItem ```
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsLayout {
        return qtc.QGraphicsLayout_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QGraphicsLayout, left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsLayout_SetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// ``` self: QtC.QGraphicsLayout, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLayout_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn (self: QtC.QGraphicsLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void ```
    pub fn OnGetContentsMargins(self: ?*anyopaque, slot: fn (?*anyopaque, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnGetContentsMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLayout, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn QBaseGetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLayout_QBaseGetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn Activate(self: ?*anyopaque) void {
        qtc.QGraphicsLayout_Activate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn IsActivated(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayout_IsActivated(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#invalidate)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QGraphicsLayout_Invalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QGraphicsLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsLayout_UpdateGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn () callconv(.c) void ```
    pub fn OnUpdateGeometry(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsLayout_OnUpdateGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn QBaseUpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsLayout_QBaseUpdateGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// ``` self: QtC.QGraphicsLayout, e: QtC.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGraphicsLayout_WidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn (self: QtC.QGraphicsLayout, e: QtC.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLayout, e: QtC.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGraphicsLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#count)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QGraphicsLayout_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGraphicsLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QGraphicsLayout_QBaseCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#itemAt)
    ///
    /// ``` self: QtC.QGraphicsLayout, i: i32 ```
    pub fn ItemAt(self: ?*anyopaque, i: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayout_ItemAt(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn (self: QtC.QGraphicsLayout, i: i32) callconv(.c) QtC.QGraphicsLayoutItem ```
    pub fn OnItemAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QGraphicsLayoutItem) void {
        qtc.QGraphicsLayout_OnItemAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLayout, i: i32 ```
    pub fn QBaseItemAt(self: ?*anyopaque, i: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayout_QBaseItemAt(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#removeAt)
    ///
    /// ``` self: QtC.QGraphicsLayout, index: i32 ```
    pub fn RemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLayout_RemoveAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#removeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn (self: QtC.QGraphicsLayout, index: i32) callconv(.c) void ```
    pub fn OnRemoveAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnRemoveAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#removeAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLayout, index: i32 ```
    pub fn QBaseRemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLayout_QBaseRemoveAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
    ///
    /// ``` enable: bool ```
    pub fn SetInstantInvalidatePropagation(enable: bool) void {
        qtc.QGraphicsLayout_SetInstantInvalidatePropagation(enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
    ///
    ///
    pub fn InstantInvalidatePropagation() bool {
        return qtc.QGraphicsLayout_InstantInvalidatePropagation();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// ``` self: QtC.QGraphicsLayout, layoutItem: QtC.QGraphicsLayoutItem ```
    pub fn AddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        qtc.QGraphicsLayout_AddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn (self: QtC.QGraphicsLayout, layoutItem: QtC.QGraphicsLayoutItem) callconv(.c) void ```
    pub fn OnAddChildLayoutItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnAddChildLayoutItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLayout, layoutItem: QtC.QGraphicsLayoutItem ```
    pub fn QBaseAddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        qtc.QGraphicsLayout_QBaseAddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QGraphicsLayout, policy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, policy: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self), @ptrCast(policy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QGraphicsLayout, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, hPolicy: i64, vPolicy: i64) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: QtC.QGraphicsLayout, size: QtC.QSizeF ```
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: QtC.QGraphicsLayout, w: f64, h: f64 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QGraphicsLayout, width: f64 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn MinimumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QGraphicsLayout, height: f64 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn MinimumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: QtC.QGraphicsLayout, size: QtC.QSizeF ```
    pub fn SetPreferredSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: QtC.QGraphicsLayout, w: f64, h: f64 ```
    pub fn SetPreferredSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn PreferredSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ``` self: QtC.QGraphicsLayout, width: f64 ```
    pub fn SetPreferredWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn PreferredWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ``` self: QtC.QGraphicsLayout, height: f64 ```
    pub fn SetPreferredHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn PreferredHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: QtC.QGraphicsLayout, size: QtC.QSizeF ```
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: QtC.QGraphicsLayout, w: f64, h: f64 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QGraphicsLayout, width: f64 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn MaximumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QGraphicsLayout, height: f64 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn MaximumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: QtC.QGraphicsLayout, which: qnamespace_enums.SizeHint ```
    pub fn EffectiveSizeHint(self: ?*anyopaque, which: i64) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self), @intCast(which));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn ParentLayoutItem(self: ?*anyopaque) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ``` self: QtC.QGraphicsLayout, parent: QtC.QGraphicsLayoutItem ```
    pub fn SetParentLayoutItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn IsLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn GraphicsItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn OwnedByLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QGraphicsLayout, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy, controlType: qsizepolicy_enums.ControlType ```
    pub fn SetSizePolicy3(self: ?*anyopaque, hPolicy: i64, vPolicy: i64, controlType: i64) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy), @intCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: QtC.QGraphicsLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn EffectiveSizeHint2(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, rect: QtC.QRectF ```
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, rect: QtC.QRectF ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn (self: QtC.QGraphicsLayout, rect: QtC.QRectF) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QGraphicsLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn SizeHint(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayout_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayout_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn (self: QtC.QGraphicsLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF) callconv(.c) QtC.QSizeF ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QGraphicsLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, item: QtC.QGraphicsItem ```
    pub fn SetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLayout_SetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, item: QtC.QGraphicsItem ```
    pub fn QBaseSetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLayout_QBaseSetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn (self: QtC.QGraphicsLayout, item: QtC.QGraphicsItem) callconv(.c) void ```
    pub fn OnSetGraphicsItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnSetGraphicsItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, ownedByLayout: bool ```
    pub fn SetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsLayout_SetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, ownedByLayout: bool ```
    pub fn QBaseSetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsLayout_QBaseSetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLayout, slot: fn (self: QtC.QGraphicsLayout, ownedByLayout: bool) callconv(.c) void ```
    pub fn OnSetOwnedByLayout(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsLayout_OnSetOwnedByLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#dtor.QGraphicsLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsLayout_Delete(@ptrCast(self));
    }
};
