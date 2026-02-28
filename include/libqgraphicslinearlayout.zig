const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html)
pub const qgraphicslinearlayout = struct {
    /// New constructs a new QGraphicsLinearLayout object.
    ///
    pub fn New() QtC.QGraphicsLinearLayout {
        return qtc.QGraphicsLinearLayout_new();
    }

    /// New2 constructs a new QGraphicsLinearLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn New2(orientation: i32) QtC.QGraphicsLinearLayout {
        return qtc.QGraphicsLinearLayout_new2(@bitCast(orientation));
    }

    /// New3 constructs a new QGraphicsLinearLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QGraphicsLayoutItem `
    ///
    pub fn New3(parent: ?*anyopaque) QtC.QGraphicsLinearLayout {
        return qtc.QGraphicsLinearLayout_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QGraphicsLinearLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` parent: QtC.QGraphicsLayoutItem `
    ///
    pub fn New4(orientation: i32, parent: ?*anyopaque) QtC.QGraphicsLinearLayout {
        return qtc.QGraphicsLinearLayout_new4(@bitCast(orientation), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QGraphicsLinearLayout_SetOrientation(@ptrCast(self), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QGraphicsLinearLayout_Orientation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_AddItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn AddStretch(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_AddStretch(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    pub fn InsertItem(self: ?*anyopaque, index: i32, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_InsertItem(@ptrCast(self), @bitCast(index), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn InsertStretch(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLinearLayout_InsertStretch(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    pub fn RemoveItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_RemoveItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn RemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLinearLayout_RemoveAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLinearLayout, index: i32) callconv(.c) void `
    ///
    pub fn OnRemoveAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnRemoveAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveAt` instead
    ///
    pub const QBaseRemoveAt = SuperRemoveAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperRemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsLinearLayout_SuperRemoveAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsLinearLayout_SetSpacing(@ptrCast(self), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn Spacing(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLinearLayout_Spacing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setItemSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetItemSpacing(self: ?*anyopaque, index: i32, spacing: f64) void {
        qtc.QGraphicsLinearLayout_SetItemSpacing(@ptrCast(self), @bitCast(index), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemSpacing(self: ?*anyopaque, index: i32) f64 {
        return qtc.QGraphicsLinearLayout_ItemSpacing(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetStretchFactor(self: ?*anyopaque, item: ?*anyopaque, stretch: i32) void {
        qtc.QGraphicsLinearLayout_SetStretchFactor(@ptrCast(self), @ptrCast(item), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#stretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    pub fn StretchFactor(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QGraphicsLinearLayout_StretchFactor(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: ?*anyopaque, item: ?*anyopaque, alignment: i32) void {
        qtc.QGraphicsLinearLayout_SetAlignment(@ptrCast(self), @ptrCast(item), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QGraphicsLinearLayout_Alignment(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLinearLayout, rect: QtC.QRectF) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SuperSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_SuperSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QGraphicsLinearLayout_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsLinearLayout_OnCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn SuperCount(self: ?*anyopaque) i32 {
        return qtc.QGraphicsLinearLayout_SuperCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemAt(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLinearLayout_ItemAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLinearLayout, index: i32) callconv(.c) QtC.QGraphicsLayoutItem `
    ///
    pub fn OnItemAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QGraphicsLayoutItem) void {
        qtc.QGraphicsLinearLayout_OnItemAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemAt` instead
    ///
    pub const QBaseItemAt = SuperItemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperItemAt(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLinearLayout_SuperItemAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_Invalidate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnInvalidate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn SuperInvalidate(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_SuperInvalidate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QtC.QSizeF `
    ///
    pub fn SizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLinearLayout_SizeHint(@ptrCast(self), @bitCast(which), @ptrCast(constraint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLinearLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF) callconv(.c) QtC.QSizeF `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QGraphicsLinearLayout_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QtC.QSizeF `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLinearLayout_SuperSizeHint(@ptrCast(self), @bitCast(which), @ptrCast(constraint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn Dump(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_Dump(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn AddStretch1(self: ?*anyopaque, stretch: i32) void {
        qtc.QGraphicsLinearLayout_AddStretch1(@ptrCast(self), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` stretch: i32 `
    ///
    pub fn InsertStretch2(self: ?*anyopaque, index: i32, stretch: i32) void {
        qtc.QGraphicsLinearLayout_InsertStretch2(@ptrCast(self), @bitCast(index), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` indent: i32 `
    ///
    pub fn Dump1(self: ?*anyopaque, indent: i32) void {
        qtc.QGraphicsLinearLayout_Dump1(@ptrCast(self), @bitCast(indent));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn SetContentsMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsLayout_SetContentsMargins(@ptrCast(self), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn Activate(self: ?*anyopaque) void {
        qtc.QGraphicsLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn IsActivated(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayout_IsActivated(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
    ///
    /// ## Parameter(s):
    ///
    /// ` enable: bool `
    ///
    pub fn SetInstantInvalidatePropagation(enable: bool) void {
        qtc.QGraphicsLayout_SetInstantInvalidatePropagation(enable);
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
    ///
    pub fn InstantInvalidatePropagation() bool {
        return qtc.QGraphicsLayout_InstantInvalidatePropagation();
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` policy: QtC.QSizePolicy `
    ///
    pub fn SetSizePolicy(self: ?*anyopaque, policy: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self), @ptrCast(policy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: ?*anyopaque, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMinimumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMinimumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn MinimumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMinimumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn MinimumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn SetPreferredSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetPreferredSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn PreferredSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn SetPreferredWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn PreferredWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn SetPreferredHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn PreferredHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMaximumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMaximumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn MaximumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMaximumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn MaximumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    pub fn EffectiveSizeHint(self: ?*anyopaque, which: i32) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self), @bitCast(which));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn ParentLayoutItem(self: ?*anyopaque) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` parent: QtC.QGraphicsLayoutItem `
    ///
    pub fn SetParentLayoutItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn IsLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn GraphicsItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn OwnedByLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` controlType: qsizepolicy_enums.ControlType `
    ///
    pub fn SetSizePolicy3(self: ?*anyopaque, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QtC.QSizeF `
    ///
    pub fn EffectiveSizeHint2(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self), @bitCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
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
        qtc.QGraphicsLinearLayout_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `SuperGetContentsMargins` instead
    ///
    pub const QBaseGetContentsMargins = SuperGetContentsMargins;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn SuperGetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLinearLayout_SuperGetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLinearLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void `
    ///
    pub fn OnGetContentsMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnGetContentsMargins(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_UpdateGeometry(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperUpdateGeometry` instead
    ///
    pub const QBaseUpdateGeometry = SuperUpdateGeometry;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn SuperUpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_SuperUpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometry(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnUpdateGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn WidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_WidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperWidgetEvent` instead
    ///
    pub const QBaseWidgetEvent = SuperWidgetEvent;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn SuperWidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_SuperWidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLinearLayout, e: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnWidgetEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnWidgetEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsLinearLayout_IsEmpty(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn SuperIsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsLinearLayout_SuperIsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsLinearLayout_OnIsEmpty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` layoutItem: QtC.QGraphicsLayoutItem `
    ///
    pub fn AddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_AddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// ### DEPRECATED: Use `SuperAddChildLayoutItem` instead
    ///
    pub const QBaseAddChildLayoutItem = SuperAddChildLayoutItem;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` layoutItem: QtC.QGraphicsLayoutItem `
    ///
    pub fn SuperAddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_SuperAddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLinearLayout, layoutItem: QtC.QGraphicsLayoutItem) callconv(.c) void `
    ///
    pub fn OnAddChildLayoutItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnAddChildLayoutItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_SetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### DEPRECATED: Use `SuperSetGraphicsItem` instead
    ///
    pub const QBaseSetGraphicsItem = SuperSetGraphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SuperSetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_SuperSetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLinearLayout, item: QtC.QGraphicsItem) callconv(.c) void `
    ///
    pub fn OnSetGraphicsItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetGraphicsItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsLinearLayout_SetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// ### DEPRECATED: Use `SuperSetOwnedByLayout` instead
    ///
    pub const QBaseSetOwnedByLayout = SuperSetOwnedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SuperSetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsLinearLayout_SuperSetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsLinearLayout, ownedByLayout: bool) callconv(.c) void `
    ///
    pub fn OnSetOwnedByLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetOwnedByLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dtor.QGraphicsLinearLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGraphicsLinearLayout `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QGraphicsLinearLayout_Delete(@ptrCast(self));
    }
};
