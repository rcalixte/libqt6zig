const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QEvent = @import("libqt6").QEvent;
const QGraphicsItem = @import("libqt6").QGraphicsItem;
const QGraphicsLayoutItem = @import("libqt6").QGraphicsLayoutItem;
const QRectF = @import("libqt6").QRectF;
const QSizeF = @import("libqt6").QSizeF;
const QSizePolicy = @import("libqt6").QSizePolicy;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html)
pub const QGraphicsLinearLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsLinearLayout,

    pub const _is_QGraphicsLinearLayout = {};
    pub const _is_QGraphicsLayout = {};
    pub const _is_QGraphicsLayoutItem = {};

    /// New constructs a new QGraphicsLinearLayout object.
    ///
    pub fn New() QGraphicsLinearLayout {
        return .{ .ptr = qtc.QGraphicsLinearLayout_new() };
    }

    /// New2 constructs a new QGraphicsLinearLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn New2(orientation: i32) QGraphicsLinearLayout {
        return .{ .ptr = qtc.QGraphicsLinearLayout_new2(@bitCast(orientation)) };
    }

    /// New3 constructs a new QGraphicsLinearLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn New3(parent: anytype) QGraphicsLinearLayout {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsLinearLayout_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QGraphicsLinearLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn New4(orientation: i32, parent: anytype) QGraphicsLinearLayout {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsLinearLayout_new4(@bitCast(orientation), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: QGraphicsLinearLayout, orientation: i32) void {
        qtc.QGraphicsLinearLayout_SetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: QGraphicsLinearLayout) i32 {
        return qtc.QGraphicsLinearLayout_Orientation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    pub fn AddItem(self: QGraphicsLinearLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn AddStretch(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_AddStretch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    pub fn InsertItem(self: QGraphicsLinearLayout, index: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_InsertItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn InsertStretch(self: QGraphicsLinearLayout, index: i32) void {
        qtc.QGraphicsLinearLayout_InsertStretch(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    pub fn RemoveItem(self: QGraphicsLinearLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn RemoveAt(self: QGraphicsLinearLayout, index: i32) void {
        qtc.QGraphicsLinearLayout_RemoveAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` callback: *const fn (self: QGraphicsLinearLayout, index: i32) callconv(.c) void `
    ///
    pub fn OnRemoveAt(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, i32) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnRemoveAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperRemoveAt(self: QGraphicsLinearLayout, index: i32) void {
        qtc.QGraphicsLinearLayout_SuperRemoveAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetSpacing(self: QGraphicsLinearLayout, spacing: f64) void {
        qtc.QGraphicsLinearLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn Spacing(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLinearLayout_Spacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setItemSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetItemSpacing(self: QGraphicsLinearLayout, index: i32, spacing: f64) void {
        qtc.QGraphicsLinearLayout_SetItemSpacing(@ptrCast(self.ptr), @bitCast(index), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemSpacing(self: QGraphicsLinearLayout, index: i32) f64 {
        return qtc.QGraphicsLinearLayout_ItemSpacing(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetStretchFactor(self: QGraphicsLinearLayout, item: anytype, stretch: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_SetStretchFactor(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#stretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    pub fn StretchFactor(self: QGraphicsLinearLayout, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        return qtc.QGraphicsLinearLayout_StretchFactor(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QGraphicsLinearLayout, item: anytype, alignment: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QGraphicsLinearLayout, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        return qtc.QGraphicsLinearLayout_Alignment(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetGeometry(self: QGraphicsLinearLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsLinearLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` callback: *const fn (self: QGraphicsLinearLayout, rect: QRectF) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, QRectF) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SuperSetGeometry(self: QGraphicsLinearLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsLinearLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn Count(self: QGraphicsLinearLayout) i32 {
        return qtc.QGraphicsLinearLayout_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: QGraphicsLinearLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsLinearLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn SuperCount(self: QGraphicsLinearLayout) i32 {
        return qtc.QGraphicsLinearLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemAt(self: QGraphicsLinearLayout, index: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLinearLayout_ItemAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` callback: *const fn (self: QGraphicsLinearLayout, index: i32) callconv(.c) QGraphicsLayoutItem `
    ///
    pub fn OnItemAt(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, i32) callconv(.c) QGraphicsLayoutItem) void {
        qtc.QGraphicsLinearLayout_OnItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperItemAt(self: QGraphicsLinearLayout, index: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLinearLayout_SuperItemAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn Invalidate(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: QGraphicsLinearLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn SuperInvalidate(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn SizeHint(self: QGraphicsLinearLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLinearLayout_SizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` callback: *const fn (self: QGraphicsLinearLayout, which: qnamespace_enums.SizeHint, constraint: QSizeF) callconv(.c) QSizeF `
    ///
    pub fn OnSizeHint(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, i32, QSizeF) callconv(.c) QSizeF) void {
        qtc.QGraphicsLinearLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn SuperSizeHint(self: QGraphicsLinearLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLinearLayout_SuperSizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn Dump(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_Dump(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn AddStretch1(self: QGraphicsLinearLayout, stretch: i32) void {
        qtc.QGraphicsLinearLayout_AddStretch1(@ptrCast(self.ptr), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` stretch: i32 `
    ///
    pub fn InsertStretch2(self: QGraphicsLinearLayout, index: i32, stretch: i32) void {
        qtc.QGraphicsLinearLayout_InsertStretch2(@ptrCast(self.ptr), @bitCast(index), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` indent: i32 `
    ///
    pub fn Dump1(self: QGraphicsLinearLayout, indent: i32) void {
        qtc.QGraphicsLinearLayout_Dump1(@ptrCast(self.ptr), @bitCast(indent));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn SetContentsMargins(self: QGraphicsLinearLayout, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn Activate(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLayout_Activate(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn IsActivated(self: QGraphicsLinearLayout) bool {
        return qtc.QGraphicsLayout_IsActivated(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` policy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QGraphicsLinearLayout, policy: anytype) void {
        comptime _ = @TypeOf(policy)._is_QSizePolicy;
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(policy.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QGraphicsLinearLayout, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn SizePolicy(self: QGraphicsLinearLayout) QSizePolicy {
        return .{ .ptr = qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetMinimumSize(self: QGraphicsLinearLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMinimumSize2(self: QGraphicsLinearLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn MinimumSize(self: QGraphicsLinearLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMinimumWidth(self: QGraphicsLinearLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn MinimumWidth(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMinimumHeight(self: QGraphicsLinearLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn MinimumHeight(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetPreferredSize(self: QGraphicsLinearLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetPreferredSize2(self: QGraphicsLinearLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn PreferredSize(self: QGraphicsLinearLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn SetPreferredWidth(self: QGraphicsLinearLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn PreferredWidth(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn SetPreferredHeight(self: QGraphicsLinearLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn PreferredHeight(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetMaximumSize(self: QGraphicsLinearLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMaximumSize2(self: QGraphicsLinearLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn MaximumSize(self: QGraphicsLinearLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMaximumWidth(self: QGraphicsLinearLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn MaximumWidth(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMaximumHeight(self: QGraphicsLinearLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn MaximumHeight(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn Geometry(self: QGraphicsLinearLayout) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn ContentsRect(self: QGraphicsLinearLayout) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    pub fn EffectiveSizeHint(self: QGraphicsLinearLayout, which: i32) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn ParentLayoutItem(self: QGraphicsLinearLayout) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn SetParentLayoutItem(self: QGraphicsLinearLayout, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn IsLayout(self: QGraphicsLinearLayout) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn GraphicsItem(self: QGraphicsLinearLayout) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn OwnedByLayout(self: QGraphicsLinearLayout) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` controlType: qsizepolicy_enums.ControlType `
    ///
    pub fn SetSizePolicy3(self: QGraphicsLinearLayout, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn EffectiveSizeHint2(self: QGraphicsLinearLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn GetContentsMargins(self: QGraphicsLinearLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLinearLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn SuperGetContentsMargins(self: QGraphicsLinearLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLinearLayout_SuperGetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsLinearLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void `
    ///
    pub fn OnGetContentsMargins(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnGetContentsMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn UpdateGeometry(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_UpdateGeometry(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn SuperUpdateGeometry(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_SuperUpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometry(self: QGraphicsLinearLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnUpdateGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` e: QEvent `
    ///
    pub fn WidgetEvent(self: QGraphicsLinearLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QGraphicsLinearLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperWidgetEvent(self: QGraphicsLinearLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QGraphicsLinearLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsLinearLayout, e: QEvent) callconv(.c) void `
    ///
    pub fn OnWidgetEvent(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, QEvent) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn IsEmpty(self: QGraphicsLinearLayout) bool {
        return qtc.QGraphicsLinearLayout_IsEmpty(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn SuperIsEmpty(self: QGraphicsLinearLayout) bool {
        return qtc.QGraphicsLinearLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: QGraphicsLinearLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsLinearLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` layoutItem: QGraphicsLayoutItem `
    ///
    pub fn AddChildLayoutItem(self: QGraphicsLinearLayout, layoutItem: anytype) void {
        comptime _ = @TypeOf(layoutItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_AddChildLayoutItem(@ptrCast(self.ptr), @ptrCast(layoutItem.ptr));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` layoutItem: QGraphicsLayoutItem `
    ///
    pub fn SuperAddChildLayoutItem(self: QGraphicsLinearLayout, layoutItem: anytype) void {
        comptime _ = @TypeOf(layoutItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_SuperAddChildLayoutItem(@ptrCast(self.ptr), @ptrCast(layoutItem.ptr));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsLinearLayout, layoutItem: QGraphicsLayoutItem) callconv(.c) void `
    ///
    pub fn OnAddChildLayoutItem(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, QGraphicsLayoutItem) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnAddChildLayoutItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SetGraphicsItem(self: QGraphicsLinearLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsLinearLayout_SetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SuperSetGraphicsItem(self: QGraphicsLinearLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsLinearLayout_SuperSetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsLinearLayout, item: QGraphicsItem) callconv(.c) void `
    ///
    pub fn OnSetGraphicsItem(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, QGraphicsItem) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetGraphicsItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SetOwnedByLayout(self: QGraphicsLinearLayout, ownedByLayout: bool) void {
        qtc.QGraphicsLinearLayout_SetOwnedByLayout(@ptrCast(self.ptr), ownedByLayout);
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
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SuperSetOwnedByLayout(self: QGraphicsLinearLayout, ownedByLayout: bool) void {
        qtc.QGraphicsLinearLayout_SuperSetOwnedByLayout(@ptrCast(self.ptr), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsLinearLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsLinearLayout, ownedByLayout: bool) callconv(.c) void `
    ///
    pub fn OnSetOwnedByLayout(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, bool) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetOwnedByLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn Delete(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_Delete(@ptrCast(self.ptr));
    }
};
