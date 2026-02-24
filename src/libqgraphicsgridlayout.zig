const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html)
pub const qgraphicsgridlayout = struct {
    /// New constructs a new QGraphicsGridLayout object.
    ///
    pub fn New() QtC.QGraphicsGridLayout {
        return qtc.QGraphicsGridLayout_new();
    }

    /// New2 constructs a new QGraphicsGridLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QGraphicsLayoutItem `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsGridLayout {
        return qtc.QGraphicsGridLayout_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` rowSpan: i32 `
    ///
    /// ` columnSpan: i32 `
    ///
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        qtc.QGraphicsGridLayout_AddItem(@ptrCast(self), @ptrCast(item), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn AddItem2(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32) void {
        qtc.QGraphicsGridLayout_AddItem2(@ptrCast(self), @ptrCast(item), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setHorizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetHorizontalSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetHorizontalSpacing(@ptrCast(self), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#horizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn HorizontalSpacing(self: ?*anyopaque) f64 {
        return qtc.QGraphicsGridLayout_HorizontalSpacing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setVerticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetVerticalSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetVerticalSpacing(@ptrCast(self), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#verticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn VerticalSpacing(self: ?*anyopaque) f64 {
        return qtc.QGraphicsGridLayout_VerticalSpacing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetSpacing(@ptrCast(self), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetRowSpacing(self: ?*anyopaque, row: i32, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetRowSpacing(@ptrCast(self), @bitCast(row), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RowSpacing(self: ?*anyopaque, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowSpacing(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetColumnSpacing(self: ?*anyopaque, column: i32, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetColumnSpacing(@ptrCast(self), @bitCast(column), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnSpacing(self: ?*anyopaque, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnSpacing(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetRowStretchFactor(self: ?*anyopaque, row: i32, stretch: i32) void {
        qtc.QGraphicsGridLayout_SetRowStretchFactor(@ptrCast(self), @bitCast(row), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RowStretchFactor(self: ?*anyopaque, row: i32) i32 {
        return qtc.QGraphicsGridLayout_RowStretchFactor(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetColumnStretchFactor(self: ?*anyopaque, column: i32, stretch: i32) void {
        qtc.QGraphicsGridLayout_SetColumnStretchFactor(@ptrCast(self), @bitCast(column), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnStretchFactor(self: ?*anyopaque, column: i32) i32 {
        return qtc.QGraphicsGridLayout_ColumnStretchFactor(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` height: f64 `
    ///
    pub fn SetRowMinimumHeight(self: ?*anyopaque, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowMinimumHeight(@ptrCast(self), @bitCast(row), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RowMinimumHeight(self: ?*anyopaque, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowMinimumHeight(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` height: f64 `
    ///
    pub fn SetRowPreferredHeight(self: ?*anyopaque, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowPreferredHeight(@ptrCast(self), @bitCast(row), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RowPreferredHeight(self: ?*anyopaque, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowPreferredHeight(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` height: f64 `
    ///
    pub fn SetRowMaximumHeight(self: ?*anyopaque, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowMaximumHeight(@ptrCast(self), @bitCast(row), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RowMaximumHeight(self: ?*anyopaque, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowMaximumHeight(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` height: f64 `
    ///
    pub fn SetRowFixedHeight(self: ?*anyopaque, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowFixedHeight(@ptrCast(self), @bitCast(row), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` width: f64 `
    ///
    pub fn SetColumnMinimumWidth(self: ?*anyopaque, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnMinimumWidth(@ptrCast(self), @bitCast(column), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnMinimumWidth(self: ?*anyopaque, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnMinimumWidth(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` width: f64 `
    ///
    pub fn SetColumnPreferredWidth(self: ?*anyopaque, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnPreferredWidth(@ptrCast(self), @bitCast(column), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnPreferredWidth(self: ?*anyopaque, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnPreferredWidth(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` width: f64 `
    ///
    pub fn SetColumnMaximumWidth(self: ?*anyopaque, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnMaximumWidth(@ptrCast(self), @bitCast(column), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnMaximumWidth(self: ?*anyopaque, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnMaximumWidth(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` width: f64 `
    ///
    pub fn SetColumnFixedWidth(self: ?*anyopaque, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnFixedWidth(@ptrCast(self), @bitCast(column), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetRowAlignment(self: ?*anyopaque, row: i32, alignment: i32) void {
        qtc.QGraphicsGridLayout_SetRowAlignment(@ptrCast(self), @bitCast(row), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn RowAlignment(self: ?*anyopaque, row: i32) i32 {
        return qtc.QGraphicsGridLayout_RowAlignment(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetColumnAlignment(self: ?*anyopaque, column: i32, alignment: i32) void {
        qtc.QGraphicsGridLayout_SetColumnAlignment(@ptrCast(self), @bitCast(column), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ColumnAlignment(self: ?*anyopaque, column: i32) i32 {
        return qtc.QGraphicsGridLayout_ColumnAlignment(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: ?*anyopaque, item: ?*anyopaque, alignment: i32) void {
        qtc.QGraphicsGridLayout_SetAlignment(@ptrCast(self), @ptrCast(item), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QGraphicsGridLayout_Alignment(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn RowCount(self: ?*anyopaque) i32 {
        return qtc.QGraphicsGridLayout_RowCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return qtc.QGraphicsGridLayout_ColumnCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemAt(self: ?*anyopaque, row: i32, column: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsGridLayout_ItemAt(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QGraphicsGridLayout_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsGridLayout_OnCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn SuperCount(self: ?*anyopaque) i32 {
        return qtc.QGraphicsGridLayout_SuperCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemAt2(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsGridLayout_ItemAt2(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsGridLayout, index: i32) callconv(.c) QtC.QGraphicsLayoutItem `
    ///
    pub fn OnItemAt2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QGraphicsLayoutItem) void {
        qtc.QGraphicsGridLayout_OnItemAt2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperItemAt2(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsGridLayout_SuperItemAt2(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn RemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsGridLayout_RemoveAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsGridLayout, index: i32) callconv(.c) void `
    ///
    pub fn OnRemoveAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnRemoveAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperRemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsGridLayout_SuperRemoveAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    pub fn RemoveItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_RemoveItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_Invalidate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnInvalidate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn SuperInvalidate(self: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_SuperInvalidate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsGridLayout, rect: QtC.QRectF) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SuperSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_SuperSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QtC.QSizeF `
    ///
    pub fn SizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsGridLayout_SizeHint(@ptrCast(self), @bitCast(which), @ptrCast(constraint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsGridLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF) callconv(.c) QtC.QSizeF `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QGraphicsGridLayout_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QtC.QSizeF `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsGridLayout_SuperSizeHint(@ptrCast(self), @bitCast(which), @ptrCast(constraint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
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
    pub fn AddItem6(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32, alignment: i32) void {
        qtc.QGraphicsGridLayout_AddItem6(@ptrCast(self), @ptrCast(item), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` item: QtC.QGraphicsLayoutItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddItem4(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, alignment: i32) void {
        qtc.QGraphicsGridLayout_AddItem4(@ptrCast(self), @ptrCast(item), @bitCast(row), @bitCast(column), @bitCast(alignment));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
    /// ` self: QtC.QGraphicsGridLayout `
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
        qtc.QGraphicsGridLayout_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
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
    /// ` self: QtC.QGraphicsGridLayout `
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
        qtc.QGraphicsGridLayout_SuperGetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsGridLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void `
    ///
    pub fn OnGetContentsMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnGetContentsMargins(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_UpdateGeometry(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn SuperUpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_SuperUpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometry(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnUpdateGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn WidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_WidgetEvent(@ptrCast(self), @ptrCast(e));
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn SuperWidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_SuperWidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsGridLayout, e: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnWidgetEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnWidgetEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsGridLayout_IsEmpty(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn SuperIsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsGridLayout_SuperIsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsGridLayout_OnIsEmpty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` layoutItem: QtC.QGraphicsLayoutItem `
    ///
    pub fn AddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_AddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` layoutItem: QtC.QGraphicsLayoutItem `
    ///
    pub fn SuperAddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_SuperAddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsGridLayout, layoutItem: QtC.QGraphicsLayoutItem) callconv(.c) void `
    ///
    pub fn OnAddChildLayoutItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnAddChildLayoutItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_SetGraphicsItem(@ptrCast(self), @ptrCast(item));
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SuperSetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_SuperSetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsGridLayout, item: QtC.QGraphicsItem) callconv(.c) void `
    ///
    pub fn OnSetGraphicsItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetGraphicsItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsGridLayout_SetOwnedByLayout(@ptrCast(self), ownedByLayout);
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    /// ` ownedByLayout: bool `
    ///
    pub fn SuperSetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsGridLayout_SuperSetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsGridLayout, ownedByLayout: bool) callconv(.c) void `
    ///
    pub fn OnSetOwnedByLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetOwnedByLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsGridLayout `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_Delete(@ptrCast(self));
    }
};
