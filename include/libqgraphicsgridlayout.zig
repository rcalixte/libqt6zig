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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsGridLayout object in C++ memory
    ///
    pub fn new() QGraphicsGridLayout {
        return .{ .ptr = qtc.QGraphicsGridLayout_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsGridLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn new2(parent: anytype) QGraphicsGridLayout {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsGridLayout_new2(@ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

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
    pub fn addItem(self: QGraphicsGridLayout, item: anytype, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan));
    }

    /// ### DEPRECATED: Use `addItem2` instead
    ///
    pub const AddItem2 = addItem2;

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
    pub fn addItem2(self: QGraphicsGridLayout, item: anytype, row: i32, column: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_AddItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setHorizontalSpacing` instead
    ///
    pub const SetHorizontalSpacing = setHorizontalSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setHorizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn setHorizontalSpacing(self: QGraphicsGridLayout, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetHorizontalSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `horizontalSpacing` instead
    ///
    pub const HorizontalSpacing = horizontalSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#horizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn horizontalSpacing(self: QGraphicsGridLayout) f64 {
        return qtc.QGraphicsGridLayout_HorizontalSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalSpacing` instead
    ///
    pub const SetVerticalSpacing = setVerticalSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setVerticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn setVerticalSpacing(self: QGraphicsGridLayout, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetVerticalSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `verticalSpacing` instead
    ///
    pub const VerticalSpacing = verticalSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#verticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn verticalSpacing(self: QGraphicsGridLayout) f64 {
        return qtc.QGraphicsGridLayout_VerticalSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpacing` instead
    ///
    pub const SetSpacing = setSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn setSpacing(self: QGraphicsGridLayout, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `setRowSpacing` instead
    ///
    pub const SetRowSpacing = setRowSpacing;

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
    pub fn setRowSpacing(self: QGraphicsGridLayout, row: i32, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetRowSpacing(@ptrCast(self.ptr), @bitCast(row), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `rowSpacing` instead
    ///
    pub const RowSpacing = rowSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn rowSpacing(self: QGraphicsGridLayout, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowSpacing(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `setColumnSpacing` instead
    ///
    pub const SetColumnSpacing = setColumnSpacing;

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
    pub fn setColumnSpacing(self: QGraphicsGridLayout, column: i32, spacing: f64) void {
        qtc.QGraphicsGridLayout_SetColumnSpacing(@ptrCast(self.ptr), @bitCast(column), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `columnSpacing` instead
    ///
    pub const ColumnSpacing = columnSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn columnSpacing(self: QGraphicsGridLayout, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnSpacing(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setRowStretchFactor` instead
    ///
    pub const SetRowStretchFactor = setRowStretchFactor;

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
    pub fn setRowStretchFactor(self: QGraphicsGridLayout, row: i32, stretch: i32) void {
        qtc.QGraphicsGridLayout_SetRowStretchFactor(@ptrCast(self.ptr), @bitCast(row), @bitCast(stretch));
    }

    /// ### DEPRECATED: Use `rowStretchFactor` instead
    ///
    pub const RowStretchFactor = rowStretchFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn rowStretchFactor(self: QGraphicsGridLayout, row: i32) i32 {
        return qtc.QGraphicsGridLayout_RowStretchFactor(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `setColumnStretchFactor` instead
    ///
    pub const SetColumnStretchFactor = setColumnStretchFactor;

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
    pub fn setColumnStretchFactor(self: QGraphicsGridLayout, column: i32, stretch: i32) void {
        qtc.QGraphicsGridLayout_SetColumnStretchFactor(@ptrCast(self.ptr), @bitCast(column), @bitCast(stretch));
    }

    /// ### DEPRECATED: Use `columnStretchFactor` instead
    ///
    pub const ColumnStretchFactor = columnStretchFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn columnStretchFactor(self: QGraphicsGridLayout, column: i32) i32 {
        return qtc.QGraphicsGridLayout_ColumnStretchFactor(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setRowMinimumHeight` instead
    ///
    pub const SetRowMinimumHeight = setRowMinimumHeight;

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
    pub fn setRowMinimumHeight(self: QGraphicsGridLayout, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowMinimumHeight(@ptrCast(self.ptr), @bitCast(row), @bitCast(height));
    }

    /// ### DEPRECATED: Use `rowMinimumHeight` instead
    ///
    pub const RowMinimumHeight = rowMinimumHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn rowMinimumHeight(self: QGraphicsGridLayout, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowMinimumHeight(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `setRowPreferredHeight` instead
    ///
    pub const SetRowPreferredHeight = setRowPreferredHeight;

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
    pub fn setRowPreferredHeight(self: QGraphicsGridLayout, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowPreferredHeight(@ptrCast(self.ptr), @bitCast(row), @bitCast(height));
    }

    /// ### DEPRECATED: Use `rowPreferredHeight` instead
    ///
    pub const RowPreferredHeight = rowPreferredHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn rowPreferredHeight(self: QGraphicsGridLayout, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowPreferredHeight(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `setRowMaximumHeight` instead
    ///
    pub const SetRowMaximumHeight = setRowMaximumHeight;

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
    pub fn setRowMaximumHeight(self: QGraphicsGridLayout, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowMaximumHeight(@ptrCast(self.ptr), @bitCast(row), @bitCast(height));
    }

    /// ### DEPRECATED: Use `rowMaximumHeight` instead
    ///
    pub const RowMaximumHeight = rowMaximumHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn rowMaximumHeight(self: QGraphicsGridLayout, row: i32) f64 {
        return qtc.QGraphicsGridLayout_RowMaximumHeight(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `setRowFixedHeight` instead
    ///
    pub const SetRowFixedHeight = setRowFixedHeight;

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
    pub fn setRowFixedHeight(self: QGraphicsGridLayout, row: i32, height: f64) void {
        qtc.QGraphicsGridLayout_SetRowFixedHeight(@ptrCast(self.ptr), @bitCast(row), @bitCast(height));
    }

    /// ### DEPRECATED: Use `setColumnMinimumWidth` instead
    ///
    pub const SetColumnMinimumWidth = setColumnMinimumWidth;

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
    pub fn setColumnMinimumWidth(self: QGraphicsGridLayout, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnMinimumWidth(@ptrCast(self.ptr), @bitCast(column), @bitCast(width));
    }

    /// ### DEPRECATED: Use `columnMinimumWidth` instead
    ///
    pub const ColumnMinimumWidth = columnMinimumWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn columnMinimumWidth(self: QGraphicsGridLayout, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnMinimumWidth(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setColumnPreferredWidth` instead
    ///
    pub const SetColumnPreferredWidth = setColumnPreferredWidth;

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
    pub fn setColumnPreferredWidth(self: QGraphicsGridLayout, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnPreferredWidth(@ptrCast(self.ptr), @bitCast(column), @bitCast(width));
    }

    /// ### DEPRECATED: Use `columnPreferredWidth` instead
    ///
    pub const ColumnPreferredWidth = columnPreferredWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn columnPreferredWidth(self: QGraphicsGridLayout, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnPreferredWidth(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setColumnMaximumWidth` instead
    ///
    pub const SetColumnMaximumWidth = setColumnMaximumWidth;

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
    pub fn setColumnMaximumWidth(self: QGraphicsGridLayout, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnMaximumWidth(@ptrCast(self.ptr), @bitCast(column), @bitCast(width));
    }

    /// ### DEPRECATED: Use `columnMaximumWidth` instead
    ///
    pub const ColumnMaximumWidth = columnMaximumWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn columnMaximumWidth(self: QGraphicsGridLayout, column: i32) f64 {
        return qtc.QGraphicsGridLayout_ColumnMaximumWidth(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setColumnFixedWidth` instead
    ///
    pub const SetColumnFixedWidth = setColumnFixedWidth;

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
    pub fn setColumnFixedWidth(self: QGraphicsGridLayout, column: i32, width: f64) void {
        qtc.QGraphicsGridLayout_SetColumnFixedWidth(@ptrCast(self.ptr), @bitCast(column), @bitCast(width));
    }

    /// ### DEPRECATED: Use `setRowAlignment` instead
    ///
    pub const SetRowAlignment = setRowAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setRowAlignment(self: QGraphicsGridLayout, row: i32, _alignment: i32) void {
        qtc.QGraphicsGridLayout_SetRowAlignment(@ptrCast(self.ptr), @bitCast(row), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `rowAlignment` instead
    ///
    pub const RowAlignment = rowAlignment;

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
    pub fn rowAlignment(self: QGraphicsGridLayout, row: i32) i32 {
        return qtc.QGraphicsGridLayout_RowAlignment(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `setColumnAlignment` instead
    ///
    pub const SetColumnAlignment = setColumnAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setColumnAlignment(self: QGraphicsGridLayout, column: i32, _alignment: i32) void {
        qtc.QGraphicsGridLayout_SetColumnAlignment(@ptrCast(self.ptr), @bitCast(column), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `columnAlignment` instead
    ///
    pub const ColumnAlignment = columnAlignment;

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
    pub fn columnAlignment(self: QGraphicsGridLayout, column: i32) i32 {
        return qtc.QGraphicsGridLayout_ColumnAlignment(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: QGraphicsGridLayout, item: anytype, _alignment: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

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
    pub fn alignment(self: QGraphicsGridLayout, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        return qtc.QGraphicsGridLayout_Alignment(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn rowCount(self: QGraphicsGridLayout) i32 {
        return qtc.QGraphicsGridLayout_RowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn columnCount(self: QGraphicsGridLayout) i32 {
        return qtc.QGraphicsGridLayout_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

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
    pub fn itemAt(self: QGraphicsGridLayout, row: i32, column: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsGridLayout_ItemAt(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn count(self: QGraphicsGridLayout) i32 {
        return qtc.QGraphicsGridLayout_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

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
    pub fn onCount(self: QGraphicsGridLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsGridLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCount` instead
    ///
    pub const SuperCount = superCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn superCount(self: QGraphicsGridLayout) i32 {
        return qtc.QGraphicsGridLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemAt2` instead
    ///
    pub const ItemAt2 = itemAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn itemAt2(self: QGraphicsGridLayout, index: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsGridLayout_ItemAt2(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onItemAt2` instead
    ///
    pub const OnItemAt2 = onItemAt2;

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
    pub fn onItemAt2(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, i32) callconv(.c) QGraphicsLayoutItem) void {
        qtc.QGraphicsGridLayout_OnItemAt2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemAt2` instead
    ///
    pub const SuperItemAt2 = superItemAt2;

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
    pub fn superItemAt2(self: QGraphicsGridLayout, index: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsGridLayout_SuperItemAt2(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `removeAt` instead
    ///
    pub const RemoveAt = removeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn removeAt(self: QGraphicsGridLayout, index: i32) void {
        qtc.QGraphicsGridLayout_RemoveAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onRemoveAt` instead
    ///
    pub const OnRemoveAt = onRemoveAt;

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
    pub fn onRemoveAt(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, i32) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnRemoveAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveAt` instead
    ///
    pub const SuperRemoveAt = superRemoveAt;

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
    pub fn superRemoveAt(self: QGraphicsGridLayout, index: i32) void {
        qtc.QGraphicsGridLayout_SuperRemoveAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsLayoutItem `
    ///
    pub fn removeItem(self: QGraphicsGridLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn invalidate(self: QGraphicsGridLayout) void {
        qtc.QGraphicsGridLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidate` instead
    ///
    pub const OnInvalidate = onInvalidate;

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
    pub fn onInvalidate(self: QGraphicsGridLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInvalidate` instead
    ///
    pub const SuperInvalidate = superInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn superInvalidate(self: QGraphicsGridLayout) void {
        qtc.QGraphicsGridLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` rect: QRectF `
    ///
    pub fn setGeometry(self: QGraphicsGridLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsGridLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

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
    pub fn onSetGeometry(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, QRectF) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

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
    pub fn superSetGeometry(self: QGraphicsGridLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsGridLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

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
    pub fn sizeHint(self: QGraphicsGridLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsGridLayout_SizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, i32, QSizeF) callconv(.c) QSizeF) void {
        qtc.QGraphicsGridLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

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
    pub fn superSizeHint(self: QGraphicsGridLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsGridLayout_SuperSizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `addItem6` instead
    ///
    pub const AddItem6 = addItem6;

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
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn addItem6(self: QGraphicsGridLayout, item: anytype, row: i32, column: i32, rowSpan: i32, columnSpan: i32, _alignment: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_AddItem6(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `addItem4` instead
    ///
    pub const AddItem4 = addItem4;

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
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn addItem4(self: QGraphicsGridLayout, item: anytype, row: i32, column: i32, _alignment: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_AddItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(row), @bitCast(column), @bitCast(_alignment));
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
    pub fn setContentsMargins(self: QGraphicsGridLayout, left: f64, top: f64, right: f64, bottom: f64) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn activate(self: QGraphicsGridLayout) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn isActivated(self: QGraphicsGridLayout) bool {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` policy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QGraphicsGridLayout, policy: anytype) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QGraphicsGridLayout, hPolicy: i32, vPolicy: i32) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn sizePolicy(self: QGraphicsGridLayout) QSizePolicy {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` size: QSizeF `
    ///
    pub fn setMinimumSize(self: QGraphicsGridLayout, size: anytype) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setMinimumSize2(self: QGraphicsGridLayout, w: f64, h: f64) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn minimumSize(self: QGraphicsGridLayout) QSizeF {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn setMinimumWidth(self: QGraphicsGridLayout, width: f64) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn minimumWidth(self: QGraphicsGridLayout) f64 {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn setMinimumHeight(self: QGraphicsGridLayout, height: f64) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn minimumHeight(self: QGraphicsGridLayout) f64 {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` size: QSizeF `
    ///
    pub fn setPreferredSize(self: QGraphicsGridLayout, size: anytype) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setPreferredSize2(self: QGraphicsGridLayout, w: f64, h: f64) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn preferredSize(self: QGraphicsGridLayout) QSizeF {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn setPreferredWidth(self: QGraphicsGridLayout, width: f64) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn preferredWidth(self: QGraphicsGridLayout) f64 {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn setPreferredHeight(self: QGraphicsGridLayout, height: f64) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn preferredHeight(self: QGraphicsGridLayout) f64 {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` size: QSizeF `
    ///
    pub fn setMaximumSize(self: QGraphicsGridLayout, size: anytype) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setMaximumSize2(self: QGraphicsGridLayout, w: f64, h: f64) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn maximumSize(self: QGraphicsGridLayout) QSizeF {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn setMaximumWidth(self: QGraphicsGridLayout, width: f64) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn maximumWidth(self: QGraphicsGridLayout) f64 {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn setMaximumHeight(self: QGraphicsGridLayout, height: f64) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn maximumHeight(self: QGraphicsGridLayout) f64 {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn geometry(self: QGraphicsGridLayout) QRectF {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn contentsRect(self: QGraphicsGridLayout) QRectF {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    pub fn effectiveSizeHint(self: QGraphicsGridLayout, which: i32) QSizeF {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn parentLayoutItem(self: QGraphicsGridLayout) QGraphicsLayoutItem {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn setParentLayoutItem(self: QGraphicsGridLayout, parent: anytype) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn isLayout(self: QGraphicsGridLayout) bool {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn graphicsItem(self: QGraphicsGridLayout) QGraphicsItem {
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn ownedByLayout(self: QGraphicsGridLayout) bool {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` controlType: qsizepolicy_enums.ControlType `
    ///
    pub fn setSizePolicy3(self: QGraphicsGridLayout, hPolicy: i32, vPolicy: i32, controlType: i32) void {
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn effectiveSizeHint2(self: QGraphicsGridLayout, which: i32, constraint: anytype) QSizeF {
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
    pub fn getContentsMargins(self: QGraphicsGridLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsGridLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
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
    pub fn superGetContentsMargins(self: QGraphicsGridLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsGridLayout_SuperGetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
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
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void `
    ///
    pub fn onGetContentsMargins(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnGetContentsMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn updateGeometry(self: QGraphicsGridLayout) void {
        qtc.QGraphicsGridLayout_UpdateGeometry(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn superUpdateGeometry(self: QGraphicsGridLayout) void {
        qtc.QGraphicsGridLayout_SuperUpdateGeometry(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateGeometry(self: QGraphicsGridLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnUpdateGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` e: QEvent `
    ///
    pub fn widgetEvent(self: QGraphicsGridLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QGraphicsGridLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` e: QEvent `
    ///
    pub fn superWidgetEvent(self: QGraphicsGridLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QGraphicsGridLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, e: QEvent) callconv(.c) void `
    ///
    pub fn onWidgetEvent(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, QEvent) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn isEmpty(self: QGraphicsGridLayout) bool {
        return qtc.QGraphicsGridLayout_IsEmpty(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn superIsEmpty(self: QGraphicsGridLayout) bool {
        return qtc.QGraphicsGridLayout_SuperIsEmpty(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsEmpty(self: QGraphicsGridLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsGridLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` layoutItem: QGraphicsLayoutItem `
    ///
    pub fn addChildLayoutItem(self: QGraphicsGridLayout, layoutItem: anytype) void {
        comptime _ = @TypeOf(layoutItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_AddChildLayoutItem(@ptrCast(self.ptr), @ptrCast(layoutItem.ptr));
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` layoutItem: QGraphicsLayoutItem `
    ///
    pub fn superAddChildLayoutItem(self: QGraphicsGridLayout, layoutItem: anytype) void {
        comptime _ = @TypeOf(layoutItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsGridLayout_SuperAddChildLayoutItem(@ptrCast(self.ptr), @ptrCast(layoutItem.ptr));
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
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, layoutItem: QGraphicsLayoutItem) callconv(.c) void `
    ///
    pub fn onAddChildLayoutItem(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, QGraphicsLayoutItem) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnAddChildLayoutItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn setGraphicsItem(self: QGraphicsGridLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsGridLayout_SetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn superSetGraphicsItem(self: QGraphicsGridLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsGridLayout_SuperSetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
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
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, item: QGraphicsItem) callconv(.c) void `
    ///
    pub fn onSetGraphicsItem(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, QGraphicsItem) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetGraphicsItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` _ownedByLayout: bool `
    ///
    pub fn setOwnedByLayout(self: QGraphicsGridLayout, _ownedByLayout: bool) void {
        qtc.QGraphicsGridLayout_SetOwnedByLayout(@ptrCast(self.ptr), _ownedByLayout);
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
    /// ` self: QGraphicsGridLayout `
    ///
    /// ` _ownedByLayout: bool `
    ///
    pub fn superSetOwnedByLayout(self: QGraphicsGridLayout, _ownedByLayout: bool) void {
        qtc.QGraphicsGridLayout_SuperSetOwnedByLayout(@ptrCast(self.ptr), _ownedByLayout);
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
    /// ` self: QGraphicsGridLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsGridLayout, ownedByLayout: bool) callconv(.c) void `
    ///
    pub fn onSetOwnedByLayout(self: QGraphicsGridLayout, callback: *const fn (QGraphicsGridLayout, bool) callconv(.c) void) void {
        qtc.QGraphicsGridLayout_OnSetOwnedByLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#dtor.QGraphicsGridLayout)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsGridLayout `
    ///
    pub fn delete(self: QGraphicsGridLayout) void {
        qtc.QGraphicsGridLayout_Delete(@ptrCast(self.ptr));
    }
};
