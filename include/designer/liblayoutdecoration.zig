const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QLayout = @import("libqt6").QLayout;
const QLayoutItem = @import("libqt6").QLayoutItem;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QWidget = @import("libqt6").QWidget;
const layoutdecoration_enums = enums;
const std = @import("std");
const Struct_i32_i32 = extern struct { first: i32, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html)
pub const QDesignerLayoutDecorationExtension = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerLayoutDecorationExtension,

    pub const _is_QDesignerLayoutDecorationExtension = {};

    /// New constructs a new QDesignerLayoutDecorationExtension object.
    ///
    pub fn New() QDesignerLayoutDecorationExtension {
        return .{ .ptr = qtc.QDesignerLayoutDecorationExtension_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#widgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` layout: QLayout `
    ///
    pub fn Widgets(self: QDesignerLayoutDecorationExtension, allocator: std.mem.Allocator, layout: anytype) []QWidget {
        comptime _ = @TypeOf(layout)._is_QLayout;
        const _arr: qtc.libqt_list = qtc.QDesignerLayoutDecorationExtension_Widgets(@ptrCast(self.ptr), @ptrCast(layout.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qdesignerlayoutdecorationextension.Widgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn OnWidgets(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QLayout) callconv(.c) qtc.libqt_list) void {
        qtc.QDesignerLayoutDecorationExtension_OnWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWidgets` instead
    ///
    pub const QBaseWidgets = SuperWidgets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#widgets)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SuperWidgets(self: QDesignerLayoutDecorationExtension, allocator: std.mem.Allocator, layout: anytype) []QWidget {
        comptime _ = @TypeOf(layout)._is_QLayout;
        const _arr: qtc.libqt_list = qtc.QDesignerLayoutDecorationExtension_SuperWidgets(@ptrCast(self.ptr), @ptrCast(layout.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qdesignerlayoutdecorationextension.Widgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#itemInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemInfo(self: QDesignerLayoutDecorationExtension, index: i32) QRect {
        return .{ .ptr = qtc.QDesignerLayoutDecorationExtension_ItemInfo(@ptrCast(self.ptr), @bitCast(index)) };
    }

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
    pub fn OnItemInfo(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, i32) callconv(.c) QRect) void {
        qtc.QDesignerLayoutDecorationExtension_OnItemInfo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemInfo` instead
    ///
    pub const QBaseItemInfo = SuperItemInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#itemInfo)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperItemInfo(self: QDesignerLayoutDecorationExtension, index: i32) QRect {
        return .{ .ptr = qtc.QDesignerLayoutDecorationExtension_SuperItemInfo(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QWidget `
    ///
    pub fn IndexOf(self: QDesignerLayoutDecorationExtension, widget: anytype) i32 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QDesignerLayoutDecorationExtension_IndexOf(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

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
    pub fn OnIndexOf(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QWidget) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexOf` instead
    ///
    pub const QBaseIndexOf = SuperIndexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperIndexOf(self: QDesignerLayoutDecorationExtension, widget: anytype) i32 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QDesignerLayoutDecorationExtension_SuperIndexOf(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` item: QLayoutItem `
    ///
    pub fn IndexOf2(self: QDesignerLayoutDecorationExtension, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        return qtc.QDesignerLayoutDecorationExtension_IndexOf2(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

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
    pub fn OnIndexOf2(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QLayoutItem) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnIndexOf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexOf2` instead
    ///
    pub const QBaseIndexOf2 = SuperIndexOf2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` item: QLayoutItem `
    ///
    pub fn SuperIndexOf2(self: QDesignerLayoutDecorationExtension, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        return qtc.QDesignerLayoutDecorationExtension_SuperIndexOf2(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentInsertMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ## Returns:
    ///
    /// ` layoutdecoration_enums.InsertMode `
    ///
    pub fn CurrentInsertMode(self: QDesignerLayoutDecorationExtension) i32 {
        return qtc.QDesignerLayoutDecorationExtension_CurrentInsertMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentInsertMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCurrentInsertMode(self: QDesignerLayoutDecorationExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnCurrentInsertMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentInsertMode` instead
    ///
    pub const QBaseCurrentInsertMode = SuperCurrentInsertMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentInsertMode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ## Returns:
    ///
    /// ` layoutdecoration_enums.InsertMode `
    ///
    pub fn SuperCurrentInsertMode(self: QDesignerLayoutDecorationExtension) i32 {
        return qtc.QDesignerLayoutDecorationExtension_SuperCurrentInsertMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    pub fn CurrentIndex(self: QDesignerLayoutDecorationExtension) i32 {
        return qtc.QDesignerLayoutDecorationExtension_CurrentIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCurrentIndex(self: QDesignerLayoutDecorationExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentIndex` instead
    ///
    pub const QBaseCurrentIndex = SuperCurrentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    pub fn SuperCurrentIndex(self: QDesignerLayoutDecorationExtension) i32 {
        return qtc.QDesignerLayoutDecorationExtension_SuperCurrentIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    pub fn CurrentCell(self: QDesignerLayoutDecorationExtension) Struct_i32_i32 {
        const _pair = qtc.QDesignerLayoutDecorationExtension_CurrentCell(@ptrCast(self.ptr));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn () callconv(.c) Struct_i32_i32 `
    ///
    pub fn OnCurrentCell(self: QDesignerLayoutDecorationExtension, callback: *const fn () callconv(.c) Struct_i32_i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnCurrentCell(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentCell` instead
    ///
    pub const QBaseCurrentCell = SuperCurrentCell;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    pub fn SuperCurrentCell(self: QDesignerLayoutDecorationExtension) Struct_i32_i32 {
        const _pair = qtc.QDesignerLayoutDecorationExtension_SuperCurrentCell(@ptrCast(self.ptr));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QWidget `
    ///
    /// ` cell: Struct_i32_i32 `
    ///
    pub fn InsertWidget(self: QDesignerLayoutDecorationExtension, widget: anytype, cell: Struct_i32_i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerLayoutDecorationExtension_InsertWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(cell));
    }

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
    pub fn OnInsertWidget(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QWidget, Struct_i32_i32) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnInsertWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsertWidget` instead
    ///
    pub const QBaseInsertWidget = SuperInsertWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QWidget `
    ///
    /// ` cell: Struct_i32_i32 `
    ///
    pub fn SuperInsertWidget(self: QDesignerLayoutDecorationExtension, widget: anytype, cell: Struct_i32_i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerLayoutDecorationExtension_SuperInsertWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(cell));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#removeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QWidget `
    ///
    pub fn RemoveWidget(self: QDesignerLayoutDecorationExtension, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerLayoutDecorationExtension_RemoveWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

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
    pub fn OnRemoveWidget(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QWidget) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnRemoveWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveWidget` instead
    ///
    pub const QBaseRemoveWidget = SuperRemoveWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#removeWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperRemoveWidget(self: QDesignerLayoutDecorationExtension, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerLayoutDecorationExtension_SuperRemoveWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` row: i32 `
    ///
    pub fn InsertRow(self: QDesignerLayoutDecorationExtension, row: i32) void {
        qtc.QDesignerLayoutDecorationExtension_InsertRow(@ptrCast(self.ptr), @bitCast(row));
    }

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
    pub fn OnInsertRow(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, i32) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnInsertRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsertRow` instead
    ///
    pub const QBaseInsertRow = SuperInsertRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertRow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` row: i32 `
    ///
    pub fn SuperInsertRow(self: QDesignerLayoutDecorationExtension, row: i32) void {
        qtc.QDesignerLayoutDecorationExtension_SuperInsertRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` column: i32 `
    ///
    pub fn InsertColumn(self: QDesignerLayoutDecorationExtension, column: i32) void {
        qtc.QDesignerLayoutDecorationExtension_InsertColumn(@ptrCast(self.ptr), @bitCast(column));
    }

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
    pub fn OnInsertColumn(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, i32) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnInsertColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsertColumn` instead
    ///
    pub const QBaseInsertColumn = SuperInsertColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertColumn)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperInsertColumn(self: QDesignerLayoutDecorationExtension, column: i32) void {
        qtc.QDesignerLayoutDecorationExtension_SuperInsertColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    pub fn Simplify(self: QDesignerLayoutDecorationExtension) void {
        qtc.QDesignerLayoutDecorationExtension_Simplify(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSimplify(self: QDesignerLayoutDecorationExtension, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnSimplify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSimplify` instead
    ///
    pub const QBaseSimplify = SuperSimplify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    pub fn SuperSimplify(self: QDesignerLayoutDecorationExtension) void {
        qtc.QDesignerLayoutDecorationExtension_SuperSimplify(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` pos: QPoint `
    ///
    pub fn FindItemAt(self: QDesignerLayoutDecorationExtension, pos: anytype) i32 {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.QDesignerLayoutDecorationExtension_FindItemAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

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
    pub fn OnFindItemAt(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QPoint) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnFindItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFindItemAt` instead
    ///
    pub const QBaseFindItemAt = SuperFindItemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SuperFindItemAt(self: QDesignerLayoutDecorationExtension, pos: anytype) i32 {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.QDesignerLayoutDecorationExtension_SuperFindItemAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn FindItemAt2(self: QDesignerLayoutDecorationExtension, row: i32, column: i32) i32 {
        return qtc.QDesignerLayoutDecorationExtension_FindItemAt2(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

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
    pub fn OnFindItemAt2(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, i32, i32) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnFindItemAt2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFindItemAt2` instead
    ///
    pub const QBaseFindItemAt2 = SuperFindItemAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperFindItemAt2(self: QDesignerLayoutDecorationExtension, row: i32, column: i32) i32 {
        return qtc.QDesignerLayoutDecorationExtension_SuperFindItemAt2(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#adjustIndicator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` pos: QPoint `
    ///
    /// ` index: i32 `
    ///
    pub fn AdjustIndicator(self: QDesignerLayoutDecorationExtension, pos: anytype, index: i32) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QDesignerLayoutDecorationExtension_AdjustIndicator(@ptrCast(self.ptr), @ptrCast(pos.ptr), @bitCast(index));
    }

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
    pub fn OnAdjustIndicator(self: QDesignerLayoutDecorationExtension, callback: *const fn (QDesignerLayoutDecorationExtension, QPoint, i32) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnAdjustIndicator(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAdjustIndicator` instead
    ///
    pub const QBaseAdjustIndicator = SuperAdjustIndicator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#adjustIndicator)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    /// ` pos: QPoint `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperAdjustIndicator(self: QDesignerLayoutDecorationExtension, pos: anytype, index: i32) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QDesignerLayoutDecorationExtension_SuperAdjustIndicator(@ptrCast(self.ptr), @ptrCast(pos.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#dtor.QDesignerLayoutDecorationExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerLayoutDecorationExtension `
    ///
    pub fn Delete(self: QDesignerLayoutDecorationExtension) void {
        qtc.QDesignerLayoutDecorationExtension_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/layoutdecoration.html#public-types)
pub const enums = struct {
    pub const InsertMode = enum(i32) {
        pub const InsertWidgetMode: i32 = 0;
        pub const InsertRowMode: i32 = 1;
        pub const InsertColumnMode: i32 = 2;
    };
};
