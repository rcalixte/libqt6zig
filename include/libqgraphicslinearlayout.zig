const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;

/// https://doc.qt.io/qt-6/qgraphicslinearlayout.html
pub const qgraphicslinearlayout = struct {
    /// New constructs a new QGraphicsLinearLayout object.
    ///
    ///
    pub fn New() QtC.QGraphicsLinearLayout {
        return qtc.QGraphicsLinearLayout_new();
    }

    /// New2 constructs a new QGraphicsLinearLayout object.
    ///
    /// ``` orientation: qnamespace_enums.Orientation ```
    pub fn New2(orientation: i32) QtC.QGraphicsLinearLayout {
        return qtc.QGraphicsLinearLayout_new2(@intCast(orientation));
    }

    /// New3 constructs a new QGraphicsLinearLayout object.
    ///
    /// ``` parent: QtC.QGraphicsLayoutItem ```
    pub fn New3(parent: ?*anyopaque) QtC.QGraphicsLinearLayout {
        return qtc.QGraphicsLinearLayout_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QGraphicsLinearLayout object.
    ///
    /// ``` orientation: qnamespace_enums.Orientation, parent: QtC.QGraphicsLayoutItem ```
    pub fn New4(orientation: i32, parent: ?*anyopaque) QtC.QGraphicsLinearLayout {
        return qtc.QGraphicsLinearLayout_new4(@intCast(orientation), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setOrientation)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, orientation: qnamespace_enums.Orientation ```
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QGraphicsLinearLayout_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#orientation)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    ///
    /// Returns: ``` qnamespace_enums.Orientation ```
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QGraphicsLinearLayout_Orientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addItem)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, item: QtC.QGraphicsLayoutItem ```
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_AddItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn AddStretch(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_AddStretch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertItem)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, index: i32, item: QtC.QGraphicsLayoutItem ```
    pub fn InsertItem(self: ?*anyopaque, index: i32, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_InsertItem(@ptrCast(self), @intCast(index), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, index: i32 ```
    pub fn InsertStretch(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLinearLayout_InsertStretch(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeItem)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, item: QtC.QGraphicsLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_RemoveItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, index: i32 ```
    pub fn RemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLinearLayout_RemoveAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn (self: QtC.QGraphicsLinearLayout, index: i32) callconv(.c) void ```
    pub fn OnRemoveAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnRemoveAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, index: i32 ```
    pub fn QBaseRemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLinearLayout_QBaseRemoveAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setSpacing)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, spacing: f64 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsLinearLayout_SetSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#spacing)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn Spacing(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLinearLayout_Spacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setItemSpacing)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, index: i32, spacing: f64 ```
    pub fn SetItemSpacing(self: ?*anyopaque, index: i32, spacing: f64) void {
        qtc.QGraphicsLinearLayout_SetItemSpacing(@ptrCast(self), @intCast(index), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemSpacing)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, index: i32 ```
    pub fn ItemSpacing(self: ?*anyopaque, index: i32) f64 {
        return qtc.QGraphicsLinearLayout_ItemSpacing(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setStretchFactor)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, item: QtC.QGraphicsLayoutItem, stretch: i32 ```
    pub fn SetStretchFactor(self: ?*anyopaque, item: ?*anyopaque, stretch: i32) void {
        qtc.QGraphicsLinearLayout_SetStretchFactor(@ptrCast(self), @ptrCast(item), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#stretchFactor)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, item: QtC.QGraphicsLayoutItem ```
    pub fn StretchFactor(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QGraphicsLinearLayout_StretchFactor(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, item: QtC.QGraphicsLayoutItem, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment(self: ?*anyopaque, item: ?*anyopaque, alignment: i64) void {
        qtc.QGraphicsLinearLayout_SetAlignment(@ptrCast(self), @ptrCast(item), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#alignment)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, item: QtC.QGraphicsLayoutItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn Alignment(self: ?*anyopaque, item: ?*anyopaque) i64 {
        return qtc.QGraphicsLinearLayout_Alignment(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, rect: QtC.QRectF ```
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn (self: QtC.QGraphicsLinearLayout, rect: QtC.QRectF) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, rect: QtC.QRectF ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QGraphicsLinearLayout_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGraphicsLinearLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QGraphicsLinearLayout_QBaseCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, index: i32 ```
    pub fn ItemAt(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLinearLayout_ItemAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn (self: QtC.QGraphicsLinearLayout, index: i32) callconv(.c) QtC.QGraphicsLayoutItem ```
    pub fn OnItemAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QGraphicsLayoutItem) void {
        qtc.QGraphicsLinearLayout_OnItemAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, index: i32 ```
    pub fn QBaseItemAt(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLinearLayout_QBaseItemAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_Invalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn SizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLinearLayout_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn (self: QtC.QGraphicsLinearLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF) callconv(.c) QtC.QSizeF ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QGraphicsLinearLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLinearLayout_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn Dump(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_Dump(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, stretch: i32 ```
    pub fn AddStretch1(self: ?*anyopaque, stretch: i32) void {
        qtc.QGraphicsLinearLayout_AddStretch1(@ptrCast(self), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, index: i32, stretch: i32 ```
    pub fn InsertStretch2(self: ?*anyopaque, index: i32, stretch: i32) void {
        qtc.QGraphicsLinearLayout_InsertStretch2(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, indent: i32 ```
    pub fn Dump1(self: ?*anyopaque, indent: i32) void {
        qtc.QGraphicsLinearLayout_Dump1(@ptrCast(self), @intCast(indent));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsLayout_SetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn Activate(self: ?*anyopaque) void {
        qtc.QGraphicsLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn IsActivated(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayout_IsActivated(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
    ///
    /// ``` enable: bool ```
    pub fn SetInstantInvalidatePropagation(enable: bool) void {
        qtc.QGraphicsLayout_SetInstantInvalidatePropagation(enable);
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
    ///
    ///
    pub fn InstantInvalidatePropagation() bool {
        return qtc.QGraphicsLayout_InstantInvalidatePropagation();
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, policy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, policy: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self), @ptrCast(policy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, size: QtC.QSizeF ```
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, w: f64, h: f64 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, width: f64 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn MinimumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, height: f64 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn MinimumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, size: QtC.QSizeF ```
    pub fn SetPreferredSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, w: f64, h: f64 ```
    pub fn SetPreferredSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn PreferredSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, width: f64 ```
    pub fn SetPreferredWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn PreferredWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, height: f64 ```
    pub fn SetPreferredHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn PreferredHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, size: QtC.QSizeF ```
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, w: f64, h: f64 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, width: f64 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn MaximumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, height: f64 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn MaximumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, which: qnamespace_enums.SizeHint ```
    pub fn EffectiveSizeHint(self: ?*anyopaque, which: i32) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self), @intCast(which));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn ParentLayoutItem(self: ?*anyopaque) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, parent: QtC.QGraphicsLayoutItem ```
    pub fn SetParentLayoutItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn IsLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn GraphicsItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn OwnedByLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy, controlType: qsizepolicy_enums.ControlType ```
    pub fn SetSizePolicy3(self: ?*anyopaque, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy), @intCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn EffectiveSizeHint2(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLinearLayout_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn QBaseGetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLinearLayout_QBaseGetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn (self: QtC.QGraphicsLinearLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void ```
    pub fn OnGetContentsMargins(self: ?*anyopaque, slot: fn (?*anyopaque, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnGetContentsMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn QBaseUpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_QBaseUpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn () callconv(.c) void ```
    pub fn OnUpdateGeometry(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnUpdateGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, e: QtC.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_WidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, e: QtC.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn (self: QtC.QGraphicsLinearLayout, e: QtC.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsLinearLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsLinearLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QGraphicsLinearLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, layoutItem: QtC.QGraphicsLayoutItem ```
    pub fn AddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_AddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, layoutItem: QtC.QGraphicsLayoutItem ```
    pub fn QBaseAddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_QBaseAddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn (self: QtC.QGraphicsLinearLayout, layoutItem: QtC.QGraphicsLayoutItem) callconv(.c) void ```
    pub fn OnAddChildLayoutItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnAddChildLayoutItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, item: QtC.QGraphicsItem ```
    pub fn SetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_SetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, item: QtC.QGraphicsItem ```
    pub fn QBaseSetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_QBaseSetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn (self: QtC.QGraphicsLinearLayout, item: QtC.QGraphicsItem) callconv(.c) void ```
    pub fn OnSetGraphicsItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetGraphicsItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, ownedByLayout: bool ```
    pub fn SetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsLinearLayout_SetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, ownedByLayout: bool ```
    pub fn QBaseSetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsLinearLayout_QBaseSetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsLinearLayout, slot: fn (self: QtC.QGraphicsLinearLayout, ownedByLayout: bool) callconv(.c) void ```
    pub fn OnSetOwnedByLayout(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetOwnedByLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dtor.QGraphicsLinearLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsLinearLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_Delete(@ptrCast(self));
    }
};
