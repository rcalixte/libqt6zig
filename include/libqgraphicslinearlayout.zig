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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsLinearLayout object in C++ memory
    ///
    pub fn new() QGraphicsLinearLayout {
        return .{ .ptr = qtc.QGraphicsLinearLayout_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsLinearLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn new2(_orientation: i32) QGraphicsLinearLayout {
        return .{ .ptr = qtc.QGraphicsLinearLayout_new2(@bitCast(_orientation)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGraphicsLinearLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn new3(parent: anytype) QGraphicsLinearLayout {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsLinearLayout_new3(@ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QGraphicsLinearLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn new4(_orientation: i32, parent: anytype) QGraphicsLinearLayout {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsLinearLayout_new4(@bitCast(_orientation), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `setOrientation` instead
    ///
    pub const SetOrientation = setOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn setOrientation(self: QGraphicsLinearLayout, _orientation: i32) void {
        qtc.QGraphicsLinearLayout_SetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

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
    pub fn orientation(self: QGraphicsLinearLayout) i32 {
        return qtc.QGraphicsLinearLayout_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    pub fn addItem(self: QGraphicsLinearLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `addStretch` instead
    ///
    pub const AddStretch = addStretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn addStretch(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_AddStretch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertItem` instead
    ///
    pub const InsertItem = insertItem;

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
    pub fn insertItem(self: QGraphicsLinearLayout, index: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_InsertItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `insertStretch` instead
    ///
    pub const InsertStretch = insertStretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn insertStretch(self: QGraphicsLinearLayout, index: i32) void {
        qtc.QGraphicsLinearLayout_InsertStretch(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    pub fn removeItem(self: QGraphicsLinearLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `removeAt` instead
    ///
    pub const RemoveAt = removeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn removeAt(self: QGraphicsLinearLayout, index: i32) void {
        qtc.QGraphicsLinearLayout_RemoveAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onRemoveAt` instead
    ///
    pub const OnRemoveAt = onRemoveAt;

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
    pub fn onRemoveAt(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, i32) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnRemoveAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveAt` instead
    ///
    pub const SuperRemoveAt = superRemoveAt;

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
    pub fn superRemoveAt(self: QGraphicsLinearLayout, index: i32) void {
        qtc.QGraphicsLinearLayout_SuperRemoveAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setSpacing` instead
    ///
    pub const SetSpacing = setSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` _spacing: f64 `
    ///
    pub fn setSpacing(self: QGraphicsLinearLayout, _spacing: f64) void {
        qtc.QGraphicsLinearLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `spacing` instead
    ///
    pub const Spacing = spacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn spacing(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLinearLayout_Spacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setItemSpacing` instead
    ///
    pub const SetItemSpacing = setItemSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setItemSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _spacing: f64 `
    ///
    pub fn setItemSpacing(self: QGraphicsLinearLayout, index: i32, _spacing: f64) void {
        qtc.QGraphicsLinearLayout_SetItemSpacing(@ptrCast(self.ptr), @bitCast(index), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `itemSpacing` instead
    ///
    pub const ItemSpacing = itemSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn itemSpacing(self: QGraphicsLinearLayout, index: i32) f64 {
        return qtc.QGraphicsLinearLayout_ItemSpacing(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setStretchFactor` instead
    ///
    pub const SetStretchFactor = setStretchFactor;

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
    pub fn setStretchFactor(self: QGraphicsLinearLayout, item: anytype, stretch: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_SetStretchFactor(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(stretch));
    }

    /// ### DEPRECATED: Use `stretchFactor` instead
    ///
    pub const StretchFactor = stretchFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#stretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    pub fn stretchFactor(self: QGraphicsLinearLayout, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        return qtc.QGraphicsLinearLayout_StretchFactor(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: QGraphicsLinearLayout, item: anytype, _alignment: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

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
    pub fn alignment(self: QGraphicsLinearLayout, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        return qtc.QGraphicsLinearLayout_Alignment(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` rect: QRectF `
    ///
    pub fn setGeometry(self: QGraphicsLinearLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsLinearLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

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
    pub fn onSetGeometry(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, QRectF) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

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
    pub fn superSetGeometry(self: QGraphicsLinearLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsLinearLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn count(self: QGraphicsLinearLayout) i32 {
        return qtc.QGraphicsLinearLayout_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

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
    pub fn onCount(self: QGraphicsLinearLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsLinearLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCount` instead
    ///
    pub const SuperCount = superCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn superCount(self: QGraphicsLinearLayout) i32 {
        return qtc.QGraphicsLinearLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn itemAt(self: QGraphicsLinearLayout, index: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLinearLayout_ItemAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onItemAt` instead
    ///
    pub const OnItemAt = onItemAt;

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
    pub fn onItemAt(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, i32) callconv(.c) QGraphicsLayoutItem) void {
        qtc.QGraphicsLinearLayout_OnItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemAt` instead
    ///
    pub const SuperItemAt = superItemAt;

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
    pub fn superItemAt(self: QGraphicsLinearLayout, index: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLinearLayout_SuperItemAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn invalidate(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidate` instead
    ///
    pub const OnInvalidate = onInvalidate;

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
    pub fn onInvalidate(self: QGraphicsLinearLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInvalidate` instead
    ///
    pub const SuperInvalidate = superInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn superInvalidate(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

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
    pub fn sizeHint(self: QGraphicsLinearLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLinearLayout_SizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, i32, QSizeF) callconv(.c) QSizeF) void {
        qtc.QGraphicsLinearLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

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
    pub fn superSizeHint(self: QGraphicsLinearLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLinearLayout_SuperSizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `dump` instead
    ///
    pub const Dump = dump;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn dump(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_Dump(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addStretch1` instead
    ///
    pub const AddStretch1 = addStretch1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn addStretch1(self: QGraphicsLinearLayout, stretch: i32) void {
        qtc.QGraphicsLinearLayout_AddStretch1(@ptrCast(self.ptr), @bitCast(stretch));
    }

    /// ### DEPRECATED: Use `insertStretch2` instead
    ///
    pub const InsertStretch2 = insertStretch2;

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
    pub fn insertStretch2(self: QGraphicsLinearLayout, index: i32, stretch: i32) void {
        qtc.QGraphicsLinearLayout_InsertStretch2(@ptrCast(self.ptr), @bitCast(index), @bitCast(stretch));
    }

    /// ### DEPRECATED: Use `dump1` instead
    ///
    pub const Dump1 = dump1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    /// ` indent: i32 `
    ///
    pub fn dump1(self: QGraphicsLinearLayout, indent: i32) void {
        qtc.QGraphicsLinearLayout_Dump1(@ptrCast(self.ptr), @bitCast(indent));
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

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
    pub fn setContentsMargins(self: QGraphicsLinearLayout, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `activate` instead
    ///
    pub const Activate = activate;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn activate(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLayout_Activate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isActivated` instead
    ///
    pub const IsActivated = isActivated;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn isActivated(self: QGraphicsLinearLayout) bool {
        return qtc.QGraphicsLayout_IsActivated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInstantInvalidatePropagation` instead
    ///
    pub const SetInstantInvalidatePropagation = setInstantInvalidatePropagation;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
    ///
    /// ## Parameter(s):
    ///
    /// ` enable: bool `
    ///
    pub fn setInstantInvalidatePropagation(enable: bool) void {
        qtc.QGraphicsLayout_SetInstantInvalidatePropagation(enable);
    }

    /// ### DEPRECATED: Use `instantInvalidatePropagation` instead
    ///
    pub const InstantInvalidatePropagation = instantInvalidatePropagation;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
    ///
    pub fn instantInvalidatePropagation() bool {
        return qtc.QGraphicsLayout_InstantInvalidatePropagation();
    }

    /// ### DEPRECATED: Use `setSizePolicy` instead
    ///
    pub const SetSizePolicy = setSizePolicy;

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
    pub fn setSizePolicy(self: QGraphicsLinearLayout, policy: anytype) void {
        comptime _ = @TypeOf(policy)._is_QSizePolicy;
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(policy.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy2` instead
    ///
    pub const SetSizePolicy2 = setSizePolicy2;

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
    pub fn setSizePolicy2(self: QGraphicsLinearLayout, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// ### DEPRECATED: Use `sizePolicy` instead
    ///
    pub const SizePolicy = sizePolicy;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn sizePolicy(self: QGraphicsLinearLayout) QSizePolicy {
        return .{ .ptr = qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

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
    pub fn setMinimumSize(self: QGraphicsLinearLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize2` instead
    ///
    pub const SetMinimumSize2 = setMinimumSize2;

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
    pub fn setMinimumSize2(self: QGraphicsLinearLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn minimumSize(self: QGraphicsLinearLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

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
    pub fn setMinimumWidth(self: QGraphicsLinearLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn minimumWidth(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

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
    pub fn setMinimumHeight(self: QGraphicsLinearLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn minimumHeight(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredSize` instead
    ///
    pub const SetPreferredSize = setPreferredSize;

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
    pub fn setPreferredSize(self: QGraphicsLinearLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredSize2` instead
    ///
    pub const SetPreferredSize2 = setPreferredSize2;

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
    pub fn setPreferredSize2(self: QGraphicsLinearLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `preferredSize` instead
    ///
    pub const PreferredSize = preferredSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn preferredSize(self: QGraphicsLinearLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPreferredWidth` instead
    ///
    pub const SetPreferredWidth = setPreferredWidth;

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
    pub fn setPreferredWidth(self: QGraphicsLinearLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `preferredWidth` instead
    ///
    pub const PreferredWidth = preferredWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn preferredWidth(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredHeight` instead
    ///
    pub const SetPreferredHeight = setPreferredHeight;

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
    pub fn setPreferredHeight(self: QGraphicsLinearLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `preferredHeight` instead
    ///
    pub const PreferredHeight = preferredHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn preferredHeight(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

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
    pub fn setMaximumSize(self: QGraphicsLinearLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize2` instead
    ///
    pub const SetMaximumSize2 = setMaximumSize2;

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
    pub fn setMaximumSize2(self: QGraphicsLinearLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn maximumSize(self: QGraphicsLinearLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

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
    pub fn setMaximumWidth(self: QGraphicsLinearLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn maximumWidth(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

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
    pub fn setMaximumHeight(self: QGraphicsLinearLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn maximumHeight(self: QGraphicsLinearLayout) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn geometry(self: QGraphicsLinearLayout) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn contentsRect(self: QGraphicsLinearLayout) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `effectiveSizeHint` instead
    ///
    pub const EffectiveSizeHint = effectiveSizeHint;

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
    pub fn effectiveSizeHint(self: QGraphicsLinearLayout, which: i32) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// ### DEPRECATED: Use `parentLayoutItem` instead
    ///
    pub const ParentLayoutItem = parentLayoutItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn parentLayoutItem(self: QGraphicsLinearLayout) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParentLayoutItem` instead
    ///
    pub const SetParentLayoutItem = setParentLayoutItem;

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
    pub fn setParentLayoutItem(self: QGraphicsLinearLayout, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `isLayout` instead
    ///
    pub const IsLayout = isLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn isLayout(self: QGraphicsLinearLayout) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `graphicsItem` instead
    ///
    pub const GraphicsItem = graphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn graphicsItem(self: QGraphicsLinearLayout) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownedByLayout` instead
    ///
    pub const OwnedByLayout = ownedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn ownedByLayout(self: QGraphicsLinearLayout) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy3` instead
    ///
    pub const SetSizePolicy3 = setSizePolicy3;

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
    pub fn setSizePolicy3(self: QGraphicsLinearLayout, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

    /// ### DEPRECATED: Use `effectiveSizeHint2` instead
    ///
    pub const EffectiveSizeHint2 = effectiveSizeHint2;

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
    pub fn effectiveSizeHint2(self: QGraphicsLinearLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `getContentsMargins` instead
    ///
    pub const GetContentsMargins = getContentsMargins;

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
    pub fn getContentsMargins(self: QGraphicsLinearLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLinearLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `superGetContentsMargins` instead
    ///
    pub const SuperGetContentsMargins = superGetContentsMargins;

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
    pub fn superGetContentsMargins(self: QGraphicsLinearLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsLinearLayout_SuperGetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `onGetContentsMargins` instead
    ///
    pub const OnGetContentsMargins = onGetContentsMargins;

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
    pub fn onGetContentsMargins(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnGetContentsMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateGeometry` instead
    ///
    pub const UpdateGeometry = updateGeometry;

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
    pub fn updateGeometry(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateGeometry` instead
    ///
    pub const SuperUpdateGeometry = superUpdateGeometry;

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
    pub fn superUpdateGeometry(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_SuperUpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateGeometry` instead
    ///
    pub const OnUpdateGeometry = onUpdateGeometry;

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
    pub fn onUpdateGeometry(self: QGraphicsLinearLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnUpdateGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widgetEvent` instead
    ///
    pub const WidgetEvent = widgetEvent;

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
    pub fn widgetEvent(self: QGraphicsLinearLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QGraphicsLinearLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superWidgetEvent` instead
    ///
    pub const SuperWidgetEvent = superWidgetEvent;

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
    pub fn superWidgetEvent(self: QGraphicsLinearLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QGraphicsLinearLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onWidgetEvent` instead
    ///
    pub const OnWidgetEvent = onWidgetEvent;

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
    pub fn onWidgetEvent(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, QEvent) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

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
    pub fn isEmpty(self: QGraphicsLinearLayout) bool {
        return qtc.QGraphicsLinearLayout_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

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
    pub fn superIsEmpty(self: QGraphicsLinearLayout) bool {
        return qtc.QGraphicsLinearLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

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
    pub fn onIsEmpty(self: QGraphicsLinearLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsLinearLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addChildLayoutItem` instead
    ///
    pub const AddChildLayoutItem = addChildLayoutItem;

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
    pub fn addChildLayoutItem(self: QGraphicsLinearLayout, layoutItem: anytype) void {
        comptime _ = @TypeOf(layoutItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_AddChildLayoutItem(@ptrCast(self.ptr), @ptrCast(layoutItem.ptr));
    }

    /// ### DEPRECATED: Use `superAddChildLayoutItem` instead
    ///
    pub const SuperAddChildLayoutItem = superAddChildLayoutItem;

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
    pub fn superAddChildLayoutItem(self: QGraphicsLinearLayout, layoutItem: anytype) void {
        comptime _ = @TypeOf(layoutItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLinearLayout_SuperAddChildLayoutItem(@ptrCast(self.ptr), @ptrCast(layoutItem.ptr));
    }

    /// ### DEPRECATED: Use `onAddChildLayoutItem` instead
    ///
    pub const OnAddChildLayoutItem = onAddChildLayoutItem;

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
    pub fn onAddChildLayoutItem(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, QGraphicsLayoutItem) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnAddChildLayoutItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setGraphicsItem` instead
    ///
    pub const SetGraphicsItem = setGraphicsItem;

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
    pub fn setGraphicsItem(self: QGraphicsLinearLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsLinearLayout_SetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `superSetGraphicsItem` instead
    ///
    pub const SuperSetGraphicsItem = superSetGraphicsItem;

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
    pub fn superSetGraphicsItem(self: QGraphicsLinearLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsLinearLayout_SuperSetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onSetGraphicsItem` instead
    ///
    pub const OnSetGraphicsItem = onSetGraphicsItem;

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
    pub fn onSetGraphicsItem(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, QGraphicsItem) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetGraphicsItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOwnedByLayout` instead
    ///
    pub const SetOwnedByLayout = setOwnedByLayout;

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
    /// ` _ownedByLayout: bool `
    ///
    pub fn setOwnedByLayout(self: QGraphicsLinearLayout, _ownedByLayout: bool) void {
        qtc.QGraphicsLinearLayout_SetOwnedByLayout(@ptrCast(self.ptr), _ownedByLayout);
    }

    /// ### DEPRECATED: Use `superSetOwnedByLayout` instead
    ///
    pub const SuperSetOwnedByLayout = superSetOwnedByLayout;

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
    /// ` _ownedByLayout: bool `
    ///
    pub fn superSetOwnedByLayout(self: QGraphicsLinearLayout, _ownedByLayout: bool) void {
        qtc.QGraphicsLinearLayout_SuperSetOwnedByLayout(@ptrCast(self.ptr), _ownedByLayout);
    }

    /// ### DEPRECATED: Use `onSetOwnedByLayout` instead
    ///
    pub const OnSetOwnedByLayout = onSetOwnedByLayout;

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
    pub fn onSetOwnedByLayout(self: QGraphicsLinearLayout, callback: *const fn (QGraphicsLinearLayout, bool) callconv(.c) void) void {
        qtc.QGraphicsLinearLayout_OnSetOwnedByLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dtor.QGraphicsLinearLayout)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsLinearLayout `
    ///
    pub fn delete(self: QGraphicsLinearLayout) void {
        qtc.QGraphicsLinearLayout_Delete(@ptrCast(self.ptr));
    }
};
