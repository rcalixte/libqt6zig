const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QLayout = @import("libqt6").QLayout;
const QLayoutItem = @import("libqt6").QLayoutItem;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QWidget = @import("libqt6").QWidget;
const layoutdecoration_enums = enums;
const std = @import("std");
const Struct_i32_i32 = @import("libqt6").types.Struct_i32_i32; // extern struct { first: i32, second: i32 }

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html)
pub const QDesignerLayoutDecorationExtension = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerLayoutDecorationExtension,

    pub const _is_QDesignerLayoutDecorationExtension = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerLayoutDecorationExtension object in C++ memory
    ///
    pub fn new() QDesignerLayoutDecorationExtension {
        return .{ .ptr = qtc.QDesignerLayoutDecorationExtension_new() };
    }

    /// ### DEPRECATED: Use `widgets` instead
    ///
    pub const Widgets = widgets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#widgets)
    ///
    /// This method must be implemented with `onWidgets` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` layout: QLayout `
    ///
    pub fn widgets(self: QDesignerLayoutDecorationExtension, allocator: std.mem.Allocator, layout: anytype) []QWidget {
        comptime _ = @TypeOf(layout)._is_QLayout;
        const _arr: qtc.libqt_list = qtc.QDesignerLayoutDecorationExtension_Widgets(@ptrCast(self.ptr), @ptrCast(layout.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("QDesignerLayoutDecorationExtension.widgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onWidgets` instead
    ///
    pub const OnWidgets = onWidgets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#widgets)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension, layout: QLayout) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QWidget `
    ///
    pub fn onWidgets(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QLayout) callconv(.c) qtc.libqt_list) void {
        qtc.QDesignerLayoutDecorationExtension_OnWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemInfo` instead
    ///
    pub const ItemInfo = itemInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#itemInfo)
    ///
    /// This method must be implemented with `onItemInfo` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn itemInfo(self: QDesignerLayoutDecorationExtension, index: i32) QRect {
        return .{ .ptr = qtc.QDesignerLayoutDecorationExtension_ItemInfo(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onItemInfo` instead
    ///
    pub const OnItemInfo = onItemInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#itemInfo)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension, index: i32) callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onItemInfo(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, i32) callconv(.c) QRect) void {
        qtc.QDesignerLayoutDecorationExtension_OnItemInfo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexOf` instead
    ///
    pub const IndexOf = indexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
    ///
    /// This method must be implemented with `onIndexOf` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QWidget `
    ///
    pub fn indexOf(self: QDesignerLayoutDecorationExtension, widget: anytype) i32 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QDesignerLayoutDecorationExtension_IndexOf(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOf` instead
    ///
    pub const OnIndexOf = onIndexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension, widget: QWidget) callconv(.c) i32 `
    ///
    pub fn onIndexOf(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QWidget) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexOf2` instead
    ///
    pub const IndexOf2 = indexOf2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
    ///
    /// This method must be implemented with `onIndexOf2` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` item: QLayoutItem `
    ///
    pub fn indexOf2(self: QDesignerLayoutDecorationExtension, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQLayoutItem")) item.asQLayoutItem() else item;
        return qtc.QDesignerLayoutDecorationExtension_IndexOf2(@ptrCast(self.ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOf2` instead
    ///
    pub const OnIndexOf2 = onIndexOf2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension, item: QLayoutItem) callconv(.c) i32 `
    ///
    pub fn onIndexOf2(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QLayoutItem) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnIndexOf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentInsertMode` instead
    ///
    pub const CurrentInsertMode = currentInsertMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentInsertMode)
    ///
    /// This method must be implemented with `onCurrentInsertMode` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ## Returns:
    ///
    /// ` layoutdecoration_enums.InsertMode `
    ///
    pub fn currentInsertMode(self: QDesignerLayoutDecorationExtension) i32 {
        return qtc.QDesignerLayoutDecorationExtension_CurrentInsertMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentInsertMode` instead
    ///
    pub const OnCurrentInsertMode = onCurrentInsertMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentInsertMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension) callconv(.c) i32 `
    ///
    pub fn onCurrentInsertMode(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnCurrentInsertMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentIndex` instead
    ///
    pub const CurrentIndex = currentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
    ///
    /// This method must be implemented with `onCurrentIndex` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    pub fn currentIndex(self: QDesignerLayoutDecorationExtension) i32 {
        return qtc.QDesignerLayoutDecorationExtension_CurrentIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentIndex` instead
    ///
    pub const OnCurrentIndex = onCurrentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension) callconv(.c) i32 `
    ///
    pub fn onCurrentIndex(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentCell` instead
    ///
    pub const CurrentCell = currentCell;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
    ///
    /// This method must be implemented with `onCurrentCell` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    pub fn currentCell(self: QDesignerLayoutDecorationExtension) Struct_i32_i32 {
        const _pair = qtc.QDesignerLayoutDecorationExtension_CurrentCell(@ptrCast(self.ptr));
        return .{
            .first = @bitCast(_pair.first),
            .second = @bitCast(_pair.second),
        };
    }

    /// ### DEPRECATED: Use `onCurrentCell` instead
    ///
    pub const OnCurrentCell = onCurrentCell;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension) callconv(.c) Struct_i32_i32 `
    ///
    pub fn onCurrentCell(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension) callconv(.c) Struct_i32_i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnCurrentCell(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertWidget` instead
    ///
    pub const InsertWidget = insertWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertWidget)
    ///
    /// This method must be implemented with `onInsertWidget` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QWidget `
    ///
    /// ` cell: Struct_i32_i32 `
    ///
    pub fn insertWidget(self: QDesignerLayoutDecorationExtension, widget: anytype, cell: Struct_i32_i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerLayoutDecorationExtension_InsertWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), .{
            .first = @bitCast(cell.first),
            .second = @bitCast(cell.second),
        });
    }

    /// ### DEPRECATED: Use `onInsertWidget` instead
    ///
    pub const OnInsertWidget = onInsertWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension, widget: QWidget, cell: Struct_i32_i32) callconv(.c) void `
    ///
    pub fn onInsertWidget(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QWidget, Struct_i32_i32) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnInsertWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeWidget` instead
    ///
    pub const RemoveWidget = removeWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#removeWidget)
    ///
    /// This method must be implemented with `onRemoveWidget` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QWidget `
    ///
    pub fn removeWidget(self: QDesignerLayoutDecorationExtension, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerLayoutDecorationExtension_RemoveWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveWidget` instead
    ///
    pub const OnRemoveWidget = onRemoveWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#removeWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension, widget: QWidget) callconv(.c) void `
    ///
    pub fn onRemoveWidget(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QWidget) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnRemoveWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertRow` instead
    ///
    pub const InsertRow = insertRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertRow)
    ///
    /// This method must be implemented with `onInsertRow` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` row: i32 `
    ///
    pub fn insertRow(self: QDesignerLayoutDecorationExtension, row: i32) void {
        qtc.QDesignerLayoutDecorationExtension_InsertRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `onInsertRow` instead
    ///
    pub const OnInsertRow = onInsertRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertRow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension, row: i32) callconv(.c) void `
    ///
    pub fn onInsertRow(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, i32) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnInsertRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertColumn` instead
    ///
    pub const InsertColumn = insertColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertColumn)
    ///
    /// This method must be implemented with `onInsertColumn` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` column: i32 `
    ///
    pub fn insertColumn(self: QDesignerLayoutDecorationExtension, column: i32) void {
        qtc.QDesignerLayoutDecorationExtension_InsertColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onInsertColumn` instead
    ///
    pub const OnInsertColumn = onInsertColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertColumn)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension, column: i32) callconv(.c) void `
    ///
    pub fn onInsertColumn(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, i32) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnInsertColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `simplify` instead
    ///
    pub const Simplify = simplify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
    ///
    /// This method must be implemented with `onSimplify` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    pub fn simplify(self: QDesignerLayoutDecorationExtension) void {
        qtc.QDesignerLayoutDecorationExtension_Simplify(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSimplify` instead
    ///
    pub const OnSimplify = onSimplify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension) callconv(.c) void `
    ///
    pub fn onSimplify(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnSimplify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `findItemAt` instead
    ///
    pub const FindItemAt = findItemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
    ///
    /// This method must be implemented with `onFindItemAt` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` pos: QPoint `
    ///
    pub fn findItemAt(self: QDesignerLayoutDecorationExtension, pos: anytype) i32 {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.QDesignerLayoutDecorationExtension_FindItemAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `onFindItemAt` instead
    ///
    pub const OnFindItemAt = onFindItemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension, pos: QPoint) callconv(.c) i32 `
    ///
    pub fn onFindItemAt(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QPoint) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnFindItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `findItemAt2` instead
    ///
    pub const FindItemAt2 = findItemAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
    ///
    /// This method must be implemented with `onFindItemAt2` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn findItemAt2(self: QDesignerLayoutDecorationExtension, row: i32, column: i32) i32 {
        return qtc.QDesignerLayoutDecorationExtension_FindItemAt2(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onFindItemAt2` instead
    ///
    pub const OnFindItemAt2 = onFindItemAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension, row: i32, column: i32) callconv(.c) i32 `
    ///
    pub fn onFindItemAt2(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, i32, i32) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnFindItemAt2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `adjustIndicator` instead
    ///
    pub const AdjustIndicator = adjustIndicator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#adjustIndicator)
    ///
    /// This method must be implemented with `onAdjustIndicator` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` pos: QPoint `
    ///
    /// ` index: i32 `
    ///
    pub fn adjustIndicator(self: QDesignerLayoutDecorationExtension, pos: anytype, index: i32) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QDesignerLayoutDecorationExtension_AdjustIndicator(@ptrCast(self.ptr), @ptrCast(pos.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onAdjustIndicator` instead
    ///
    pub const OnAdjustIndicator = onAdjustIndicator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#adjustIndicator)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QDesignerLayoutDecorationExtension, pos: QPoint, index: i32) callconv(.c) void `
    ///
    pub fn onAdjustIndicator(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QPoint, i32) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnAdjustIndicator(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#dtor.QDesignerLayoutDecorationExtension)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    pub fn delete(self: QDesignerLayoutDecorationExtension) void {
        qtc.QDesignerLayoutDecorationExtension_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/layoutdecoration.html#public-types)
pub const enums = struct {
    pub const InsertMode = enum {
        pub const InsertWidgetMode: i32 = 0;
        pub const InsertRowMode: i32 = 1;
        pub const InsertColumnMode: i32 = 2;
    };
};
