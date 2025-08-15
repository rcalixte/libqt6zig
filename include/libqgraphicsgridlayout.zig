const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;

/// https://doc.qt.io/qt-6/qgraphicsgridlayout.html
pub const qgraphicsgridlayout = struct {
    /// New constructs a new QGraphicsGridLayout object.
    ///
    ///
    pub fn New() QtC.QGraphicsGridLayout {
        return qtc.QGraphicsGridLayout_new();
    }

    /// New2 constructs a new QGraphicsGridLayout object.
    ///
    /// ``` parent: QtC.QGraphicsLayoutItem ```
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsGridLayout {
        return qtc.QGraphicsGridLayout_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, item: QtC.QGraphicsLayoutItem, row: i32, column: i32, rowSpan: i32, columnSpan: i32 ```
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        qtc.QGraphicsGridLayout_AddItem(@ptrCast(self), @ptrCast(item), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, item: QtC.QGraphicsLayoutItem, row: i32, column: i32 ```
    pub fn AddItem2(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32) void {
        qtc.QGraphicsGridLayout_AddItem2(@ptrCast(self), @ptrCast(item), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setHorizontalSpacing)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, spacing: f64 ```
    pub fn SetHorizontalSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetHorizontalSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#horizontalSpacing)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn HorizontalSpacing(self: ?*anyopaque) f64 {
        return qtc.QGraphicsGridLayout_HorizontalSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setVerticalSpacing)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, spacing: f64 ```
    pub fn SetVerticalSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetVerticalSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#verticalSpacing)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn VerticalSpacing(self: ?*anyopaque) f64 {
        return qtc.QGraphicsGridLayout_VerticalSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setSpacing)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, spacing: f64 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowSpacing)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32, spacing: f64 ```
    pub fn SetRowSpacing(self: ?*anyopaque, row: i32, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetRowSpacing(@ptrCast(self), @intCast(row), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowSpacing)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32 ```
    pub fn RowSpacing(self: ?*anyopaque, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowSpacing(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnSpacing)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32, spacing: f64 ```
    pub fn SetColumnSpacing(self: ?*anyopaque, column: i32, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetColumnSpacing(@ptrCast(self), @intCast(column), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnSpacing)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32 ```
    pub fn ColumnSpacing(self: ?*anyopaque, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnSpacing(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowStretchFactor)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32, stretch: i32 ```
    pub fn SetRowStretchFactor(self: ?*anyopaque, row: i32, stretch: i32) void {
        qtc.QGraphicsGridLayout_SetRowStretchFactor(@ptrCast(self), @intCast(row), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowStretchFactor)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32 ```
    pub fn RowStretchFactor(self: ?*anyopaque, row: i32) i32 {
        return qtc.QGraphicsGridLayout_RowStretchFactor(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnStretchFactor)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32, stretch: i32 ```
    pub fn SetColumnStretchFactor(self: ?*anyopaque, column: i32, stretch: i32) void {
        qtc.QGraphicsGridLayout_SetColumnStretchFactor(@ptrCast(self), @intCast(column), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnStretchFactor)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32 ```
    pub fn ColumnStretchFactor(self: ?*anyopaque, column: i32) i32 {
        return qtc.QGraphicsGridLayout_ColumnStretchFactor(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowMinimumHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32, height: f64 ```
    pub fn SetRowMinimumHeight(self: ?*anyopaque, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowMinimumHeight(@ptrCast(self), @intCast(row), @floatCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowMinimumHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32 ```
    pub fn RowMinimumHeight(self: ?*anyopaque, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowMinimumHeight(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowPreferredHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32, height: f64 ```
    pub fn SetRowPreferredHeight(self: ?*anyopaque, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowPreferredHeight(@ptrCast(self), @intCast(row), @floatCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowPreferredHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32 ```
    pub fn RowPreferredHeight(self: ?*anyopaque, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowPreferredHeight(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowMaximumHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32, height: f64 ```
    pub fn SetRowMaximumHeight(self: ?*anyopaque, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowMaximumHeight(@ptrCast(self), @intCast(row), @floatCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowMaximumHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32 ```
    pub fn RowMaximumHeight(self: ?*anyopaque, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowMaximumHeight(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowFixedHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32, height: f64 ```
    pub fn SetRowFixedHeight(self: ?*anyopaque, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowFixedHeight(@ptrCast(self), @intCast(row), @floatCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnMinimumWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32, width: f64 ```
    pub fn SetColumnMinimumWidth(self: ?*anyopaque, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnMinimumWidth(@ptrCast(self), @intCast(column), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnMinimumWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32 ```
    pub fn ColumnMinimumWidth(self: ?*anyopaque, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnMinimumWidth(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnPreferredWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32, width: f64 ```
    pub fn SetColumnPreferredWidth(self: ?*anyopaque, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnPreferredWidth(@ptrCast(self), @intCast(column), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnPreferredWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32 ```
    pub fn ColumnPreferredWidth(self: ?*anyopaque, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnPreferredWidth(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnMaximumWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32, width: f64 ```
    pub fn SetColumnMaximumWidth(self: ?*anyopaque, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnMaximumWidth(@ptrCast(self), @intCast(column), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnMaximumWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32 ```
    pub fn ColumnMaximumWidth(self: ?*anyopaque, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnMaximumWidth(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnFixedWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32, width: f64 ```
    pub fn SetColumnFixedWidth(self: ?*anyopaque, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnFixedWidth(@ptrCast(self), @intCast(column), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowAlignment)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetRowAlignment(self: ?*anyopaque, row: i32, alignment: i64) void {
        qtc.QGraphicsGridLayout_SetRowAlignment(@ptrCast(self), @intCast(row), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowAlignment)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32 ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn RowAlignment(self: ?*anyopaque, row: i32) i64 {
        return qtc.QGraphicsGridLayout_RowAlignment(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnAlignment)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetColumnAlignment(self: ?*anyopaque, column: i32, alignment: i64) void {
        qtc.QGraphicsGridLayout_SetColumnAlignment(@ptrCast(self), @intCast(column), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnAlignment)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, column: i32 ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn ColumnAlignment(self: ?*anyopaque, column: i32) i64 {
        return qtc.QGraphicsGridLayout_ColumnAlignment(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, item: QtC.QGraphicsLayoutItem, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment(self: ?*anyopaque, item: ?*anyopaque, alignment: i64) void {
        qtc.QGraphicsGridLayout_SetAlignment(@ptrCast(self), @ptrCast(item), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#alignment)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, item: QtC.QGraphicsLayoutItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn Alignment(self: ?*anyopaque, item: ?*anyopaque) i64 {
        return qtc.QGraphicsGridLayout_Alignment(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowCount)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return qtc.QGraphicsGridLayout_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnCount)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return qtc.QGraphicsGridLayout_ColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, row: i32, column: i32 ```
    pub fn ItemAt(self: ?*anyopaque, row: i32, column: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsGridLayout_ItemAt(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QGraphicsGridLayout_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGraphicsGridLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QGraphicsGridLayout_QBaseCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, index: i32 ```
    pub fn ItemAt2(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsGridLayout_ItemAt2(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn (self: QtC.QGraphicsGridLayout, index: i32) callconv(.c) QtC.QGraphicsLayoutItem ```
    pub fn OnItemAt2(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QGraphicsLayoutItem) void {
        qtc.QGraphicsGridLayout_OnItemAt2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsGridLayout, index: i32 ```
    pub fn QBaseItemAt2(self: ?*anyopaque, index: i32) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsGridLayout_QBaseItemAt2(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, index: i32 ```
    pub fn RemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsGridLayout_RemoveAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn (self: QtC.QGraphicsGridLayout, index: i32) callconv(.c) void ```
    pub fn OnRemoveAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnRemoveAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsGridLayout, index: i32 ```
    pub fn QBaseRemoveAt(self: ?*anyopaque, index: i32) void {
        qtc.QGraphicsGridLayout_QBaseRemoveAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeItem)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, item: QtC.QGraphicsLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_RemoveItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_Invalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, rect: QtC.QRectF ```
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn (self: QtC.QGraphicsGridLayout, rect: QtC.QRectF) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsGridLayout, rect: QtC.QRectF ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn SizeHint(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsGridLayout_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn (self: QtC.QGraphicsGridLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF) callconv(.c) QtC.QSizeF ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QGraphicsGridLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsGridLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsGridLayout_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, item: QtC.QGraphicsLayoutItem, row: i32, column: i32, rowSpan: i32, columnSpan: i32, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn AddItem6(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32, alignment: i64) void {
        qtc.QGraphicsGridLayout_AddItem6(@ptrCast(self), @ptrCast(item), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, item: QtC.QGraphicsLayoutItem, row: i32, column: i32, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn AddItem4(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, alignment: i64) void {
        qtc.QGraphicsGridLayout_AddItem4(@ptrCast(self), @ptrCast(item), @intCast(row), @intCast(column), @intCast(alignment));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsLayout_SetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn Activate(self: ?*anyopaque) void {
        qtc.QGraphicsLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
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
    /// ``` self: QtC.QGraphicsGridLayout, policy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, policy: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self), @ptrCast(policy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, hPolicy: i64, vPolicy: i64) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, size: QtC.QSizeF ```
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, w: f64, h: f64 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, width: f64 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn MinimumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, height: f64 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn MinimumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, size: QtC.QSizeF ```
    pub fn SetPreferredSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, w: f64, h: f64 ```
    pub fn SetPreferredSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn PreferredSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, width: f64 ```
    pub fn SetPreferredWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn PreferredWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, height: f64 ```
    pub fn SetPreferredHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn PreferredHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, size: QtC.QSizeF ```
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, w: f64, h: f64 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, width: f64 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn MaximumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, height: f64 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn MaximumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, which: qnamespace_enums.SizeHint ```
    pub fn EffectiveSizeHint(self: ?*anyopaque, which: i64) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self), @intCast(which));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn ParentLayoutItem(self: ?*anyopaque) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, parent: QtC.QGraphicsLayoutItem ```
    pub fn SetParentLayoutItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn IsLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn GraphicsItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn OwnedByLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy, controlType: qsizepolicy_enums.ControlType ```
    pub fn SetSizePolicy3(self: ?*anyopaque, hPolicy: i64, vPolicy: i64, controlType: i64) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy), @intCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: QtC.QGraphicsGridLayout, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn EffectiveSizeHint2(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsGridLayout_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn QBaseGetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsGridLayout_QBaseGetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn (self: QtC.QGraphicsGridLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void ```
    pub fn OnGetContentsMargins(self: ?*anyopaque, slot: fn (?*anyopaque, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnGetContentsMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn QBaseUpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_QBaseUpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn () callconv(.c) void ```
    pub fn OnUpdateGeometry(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnUpdateGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, e: QtC.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_WidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, e: QtC.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn (self: QtC.QGraphicsGridLayout, e: QtC.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsGridLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsGridLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QGraphicsGridLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, layoutItem: QtC.QGraphicsLayoutItem ```
    pub fn AddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_AddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, layoutItem: QtC.QGraphicsLayoutItem ```
    pub fn QBaseAddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_QBaseAddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn (self: QtC.QGraphicsGridLayout, layoutItem: QtC.QGraphicsLayoutItem) callconv(.c) void ```
    pub fn OnAddChildLayoutItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnAddChildLayoutItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, item: QtC.QGraphicsItem ```
    pub fn SetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_SetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, item: QtC.QGraphicsItem ```
    pub fn QBaseSetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_QBaseSetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn (self: QtC.QGraphicsGridLayout, item: QtC.QGraphicsItem) callconv(.c) void ```
    pub fn OnSetGraphicsItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetGraphicsItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, ownedByLayout: bool ```
    pub fn SetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsGridLayout_SetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, ownedByLayout: bool ```
    pub fn QBaseSetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsGridLayout_QBaseSetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsGridLayout, slot: fn (self: QtC.QGraphicsGridLayout, ownedByLayout: bool) callconv(.c) void ```
    pub fn OnSetOwnedByLayout(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetOwnedByLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#dtor.QGraphicsGridLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsGridLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsGridLayout_Delete(@ptrCast(self));
    }
};
