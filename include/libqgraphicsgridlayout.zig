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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html)
pub const QGraphicsGridLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsGridLayout,

    pub const _is_QGraphicsGridLayout = {};
    pub const _is_QGraphicsLayout = {};
    pub const _is_QGraphicsLayoutItem = {};

    /// New constructs a new QGraphicsGridLayout object.
    ///
    pub fn New() QGraphicsGridLayout {
        return .{ .ptr = qtc.QGraphicsGridLayout_new() };
    }

    /// New2 constructs a new QGraphicsGridLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn New2(parent: anytype) QGraphicsGridLayout {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsGridLayout_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` rowSpan: i32 `
    ///
    /// ` columnSpan: i32 `
    ///
    pub fn AddItem(self: QGraphicsGridLayout, item: anytype, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn AddItem2(self: QGraphicsGridLayout, item: anytype, row: i32, column: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_AddItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setHorizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetHorizontalSpacing(self: QGraphicsGridLayout, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetHorizontalSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#horizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn HorizontalSpacing(self: QGraphicsGridLayout) f64 {
        return qtc.QGraphicsGridLayout_HorizontalSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setVerticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetVerticalSpacing(self: QGraphicsGridLayout, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetVerticalSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#verticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn VerticalSpacing(self: QGraphicsGridLayout) f64 {
        return qtc.QGraphicsGridLayout_VerticalSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetSpacing(self: QGraphicsGridLayout, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetRowSpacing(self: QGraphicsGridLayout, row: i32, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetRowSpacing(@ptrCast(self.ptr), @bitCast(row), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RowSpacing(self: QGraphicsGridLayout, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowSpacing(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetColumnSpacing(self: QGraphicsGridLayout, column: i32, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetColumnSpacing(@ptrCast(self.ptr), @bitCast(column), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnSpacing(self: QGraphicsGridLayout, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnSpacing(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetRowStretchFactor(self: QGraphicsGridLayout, row: i32, stretch: i32) void {
        qtc.QGraphicsGridLayout_SetRowStretchFactor(@ptrCast(self.ptr), @bitCast(row), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RowStretchFactor(self: QGraphicsGridLayout, row: i32) i32 {
        return qtc.QGraphicsGridLayout_RowStretchFactor(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetColumnStretchFactor(self: QGraphicsGridLayout, column: i32, stretch: i32) void {
        qtc.QGraphicsGridLayout_SetColumnStretchFactor(@ptrCast(self.ptr), @bitCast(column), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnStretchFactor(self: QGraphicsGridLayout, column: i32) i32 {
        return qtc.QGraphicsGridLayout_ColumnStretchFactor(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` height: f64 `
    ///
    pub fn SetRowMinimumHeight(self: QGraphicsGridLayout, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowMinimumHeight(@ptrCast(self.ptr), @bitCast(row), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RowMinimumHeight(self: QGraphicsGridLayout, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowMinimumHeight(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` height: f64 `
    ///
    pub fn SetRowPreferredHeight(self: QGraphicsGridLayout, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowPreferredHeight(@ptrCast(self.ptr), @bitCast(row), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RowPreferredHeight(self: QGraphicsGridLayout, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowPreferredHeight(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` height: f64 `
    ///
    pub fn SetRowMaximumHeight(self: QGraphicsGridLayout, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowMaximumHeight(@ptrCast(self.ptr), @bitCast(row), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RowMaximumHeight(self: QGraphicsGridLayout, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowMaximumHeight(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` height: f64 `
    ///
    pub fn SetRowFixedHeight(self: QGraphicsGridLayout, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowFixedHeight(@ptrCast(self.ptr), @bitCast(row), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` width: f64 `
    ///
    pub fn SetColumnMinimumWidth(self: QGraphicsGridLayout, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnMinimumWidth(@ptrCast(self.ptr), @bitCast(column), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnMinimumWidth(self: QGraphicsGridLayout, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnMinimumWidth(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` width: f64 `
    ///
    pub fn SetColumnPreferredWidth(self: QGraphicsGridLayout, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnPreferredWidth(@ptrCast(self.ptr), @bitCast(column), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnPreferredWidth(self: QGraphicsGridLayout, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnPreferredWidth(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` width: f64 `
    ///
    pub fn SetColumnMaximumWidth(self: QGraphicsGridLayout, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnMaximumWidth(@ptrCast(self.ptr), @bitCast(column), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnMaximumWidth(self: QGraphicsGridLayout, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnMaximumWidth(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` width: f64 `
    ///
    pub fn SetColumnFixedWidth(self: QGraphicsGridLayout, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnFixedWidth(@ptrCast(self.ptr), @bitCast(column), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetRowAlignment(self: QGraphicsGridLayout, row: i32, alignment: i32) void {
        qtc.QGraphicsGridLayout_SetRowAlignment(@ptrCast(self.ptr), @bitCast(row), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn RowAlignment(self: QGraphicsGridLayout, row: i32) i32 {
        return qtc.QGraphicsGridLayout_RowAlignment(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetColumnAlignment(self: QGraphicsGridLayout, column: i32, alignment: i32) void {
        qtc.QGraphicsGridLayout_SetColumnAlignment(@ptrCast(self.ptr), @bitCast(column), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ColumnAlignment(self: QGraphicsGridLayout, column: i32) i32 {
        return qtc.QGraphicsGridLayout_ColumnAlignment(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QGraphicsGridLayout, item: anytype, alignment: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QGraphicsGridLayout, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        return qtc.QGraphicsGridLayout_Alignment(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn RowCount(self: QGraphicsGridLayout) i32 {
        return qtc.QGraphicsGridLayout_RowCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn ColumnCount(self: QGraphicsGridLayout) i32 {
        return qtc.QGraphicsGridLayout_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemAt(self: QGraphicsGridLayout, row: i32, column: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsGridLayout_ItemAt(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn Count(self: QGraphicsGridLayout) i32 {
        return qtc.QGraphicsGridLayout_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: QGraphicsGridLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsGridLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn SuperCount(self: QGraphicsGridLayout) i32 {
        return qtc.QGraphicsGridLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemAt2(self: QGraphicsGridLayout, index: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsGridLayout_ItemAt2(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, index: i32) callconv(.c) QGraphicsLayoutItem `
    ///
    pub fn OnItemAt2(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, i32) callconv(.c) QGraphicsLayoutItem) void {
        qtc.QGraphicsGridLayout_OnItemAt2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemAt2` instead
    ///
    pub const QBaseItemAt2 = SuperItemAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperItemAt2(self: QGraphicsGridLayout, index: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsGridLayout_SuperItemAt2(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn RemoveAt(self: QGraphicsGridLayout, index: i32) void {
        qtc.QGraphicsGridLayout_RemoveAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, index: i32) callconv(.c) void `
    ///
    pub fn OnRemoveAt(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, i32) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnRemoveAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveAt` instead
    ///
    pub const QBaseRemoveAt = SuperRemoveAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperRemoveAt(self: QGraphicsGridLayout, index: i32) void {
        qtc.QGraphicsGridLayout_SuperRemoveAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    pub fn RemoveItem(self: QGraphicsGridLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn Invalidate(self: QGraphicsGridLayout) void {
        qtc.QGraphicsGridLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: QGraphicsGridLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn SuperInvalidate(self: QGraphicsGridLayout) void {
        qtc.QGraphicsGridLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetGeometry(self: QGraphicsGridLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsGridLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, rect: QRectF) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, QRectF) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SuperSetGeometry(self: QGraphicsGridLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsGridLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn SizeHint(self: QGraphicsGridLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsGridLayout_SizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, which: qnamespace_enums.SizeHint, constraint: QSizeF) callconv(.c) QSizeF `
    ///
    pub fn OnSizeHint(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, i32, QSizeF) callconv(.c) QSizeF) void {
        qtc.QGraphicsGridLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn SuperSizeHint(self: QGraphicsGridLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsGridLayout_SuperSizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` rowSpan: i32 `
    ///
    /// ` columnSpan: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddItem6(self: QGraphicsGridLayout, item: anytype, row: i32, column: i32, rowSpan: i32, columnSpan: i32, alignment: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_AddItem6(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddItem4(self: QGraphicsGridLayout, item: anytype, row: i32, column: i32, alignment: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_AddItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(row), @bitCast(column), @bitCast(alignment));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn SetContentsMargins(self: QGraphicsGridLayout, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn Activate(self: QGraphicsGridLayout) void {
        qtc.QGraphicsLayout_Activate(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn IsActivated(self: QGraphicsGridLayout) bool {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` policy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QGraphicsGridLayout, policy: anytype) void {
        comptime _ = @TypeOf(policy)._is_QSizePolicy;
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(policy.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QGraphicsGridLayout, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn SizePolicy(self: QGraphicsGridLayout) QSizePolicy {
        return .{ .ptr = qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetMinimumSize(self: QGraphicsGridLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMinimumSize2(self: QGraphicsGridLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn MinimumSize(self: QGraphicsGridLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMinimumWidth(self: QGraphicsGridLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn MinimumWidth(self: QGraphicsGridLayout) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMinimumHeight(self: QGraphicsGridLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn MinimumHeight(self: QGraphicsGridLayout) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetPreferredSize(self: QGraphicsGridLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetPreferredSize2(self: QGraphicsGridLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn PreferredSize(self: QGraphicsGridLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn SetPreferredWidth(self: QGraphicsGridLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn PreferredWidth(self: QGraphicsGridLayout) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn SetPreferredHeight(self: QGraphicsGridLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn PreferredHeight(self: QGraphicsGridLayout) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetMaximumSize(self: QGraphicsGridLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetMaximumSize2(self: QGraphicsGridLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn MaximumSize(self: QGraphicsGridLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn SetMaximumWidth(self: QGraphicsGridLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn MaximumWidth(self: QGraphicsGridLayout) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn SetMaximumHeight(self: QGraphicsGridLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn MaximumHeight(self: QGraphicsGridLayout) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn Geometry(self: QGraphicsGridLayout) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn ContentsRect(self: QGraphicsGridLayout) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    pub fn EffectiveSizeHint(self: QGraphicsGridLayout, which: i32) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn ParentLayoutItem(self: QGraphicsGridLayout) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn SetParentLayoutItem(self: QGraphicsGridLayout, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn IsLayout(self: QGraphicsGridLayout) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn GraphicsItem(self: QGraphicsGridLayout) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn OwnedByLayout(self: QGraphicsGridLayout) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` controlType: qsizepolicy_enums.ControlType `
    ///
    pub fn SetSizePolicy3(self: QGraphicsGridLayout, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn EffectiveSizeHint2(self: QGraphicsGridLayout, which: i32, constraint: anytype) QSizeF {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn GetContentsMargins(self: QGraphicsGridLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsGridLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn SuperGetContentsMargins(self: QGraphicsGridLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsGridLayout_SuperGetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void `
    ///
    pub fn OnGetContentsMargins(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnGetContentsMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn UpdateGeometry(self: QGraphicsGridLayout) void {
        qtc.QGraphicsGridLayout_UpdateGeometry(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn SuperUpdateGeometry(self: QGraphicsGridLayout) void {
        qtc.QGraphicsGridLayout_SuperUpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometry(self: QGraphicsGridLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnUpdateGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` e: QEvent `
    ///
    pub fn WidgetEvent(self: QGraphicsGridLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QGraphicsGridLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperWidgetEvent(self: QGraphicsGridLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QGraphicsGridLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, e: QEvent) callconv(.c) void `
    ///
    pub fn OnWidgetEvent(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, QEvent) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn IsEmpty(self: QGraphicsGridLayout) bool {
        return qtc.QGraphicsGridLayout_IsEmpty(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn SuperIsEmpty(self: QGraphicsGridLayout) bool {
        return qtc.QGraphicsGridLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: QGraphicsGridLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsGridLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` layoutItem: QGraphicsLayoutItem `
    ///
    pub fn AddChildLayoutItem(self: QGraphicsGridLayout, layoutItem: anytype) void {
        comptime _ = @TypeOf(layoutItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_AddChildLayoutItem(@ptrCast(self.ptr), @ptrCast(layoutItem.ptr));
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` layoutItem: QGraphicsLayoutItem `
    ///
    pub fn SuperAddChildLayoutItem(self: QGraphicsGridLayout, layoutItem: anytype) void {
        comptime _ = @TypeOf(layoutItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_SuperAddChildLayoutItem(@ptrCast(self.ptr), @ptrCast(layoutItem.ptr));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, layoutItem: QGraphicsLayoutItem) callconv(.c) void `
    ///
    pub fn OnAddChildLayoutItem(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, QGraphicsLayoutItem) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnAddChildLayoutItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SetGraphicsItem(self: QGraphicsGridLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsGridLayout_SetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SuperSetGraphicsItem(self: QGraphicsGridLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsGridLayout_SuperSetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, item: QGraphicsItem) callconv(.c) void `
    ///
    pub fn OnSetGraphicsItem(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, QGraphicsItem) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetGraphicsItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SetOwnedByLayout(self: QGraphicsGridLayout, ownedByLayout: bool) void {
        qtc.QGraphicsGridLayout_SetOwnedByLayout(@ptrCast(self.ptr), ownedByLayout);
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SuperSetOwnedByLayout(self: QGraphicsGridLayout, ownedByLayout: bool) void {
        qtc.QGraphicsGridLayout_SuperSetOwnedByLayout(@ptrCast(self.ptr), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, ownedByLayout: bool) callconv(.c) void `
    ///
    pub fn OnSetOwnedByLayout(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, bool) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetOwnedByLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#dtor.QGraphicsGridLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn Delete(self: QGraphicsGridLayout) void {
        qtc.QGraphicsGridLayout_Delete(@ptrCast(self.ptr));
    }
};
