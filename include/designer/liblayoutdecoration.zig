const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const layoutdecoration_enums = enums;
const std = @import("std");
const struct_i32_i32 = extern struct { first: i32, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html)
pub const qdesignerlayoutdecorationextension = struct {
    /// New constructs a new QDesignerLayoutDecorationExtension object.
    ///
    pub fn New() QtC.QDesignerLayoutDecorationExtension {
        return qtc.QDesignerLayoutDecorationExtension_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#widgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` layout: QtC.QLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Widgets(self: ?*anyopaque, layout: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.QDesignerLayoutDecorationExtension_Widgets(@ptrCast(self), @ptrCast(layout));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("qdesignerlayoutdecorationextension.Widgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#widgets)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerLayoutDecorationExtension, layout: QtC.QLayout) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.QWidget `
    ///
    pub fn OnWidgets(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) qtc.libqt_list) void {
        qtc.QDesignerLayoutDecorationExtension_OnWidgets(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` layout: QtC.QLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperWidgets(self: ?*anyopaque, layout: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.QDesignerLayoutDecorationExtension_SuperWidgets(@ptrCast(self), @ptrCast(layout));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("qdesignerlayoutdecorationextension.Widgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#itemInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemInfo(self: ?*anyopaque, index: i32) QtC.QRect {
        return qtc.QDesignerLayoutDecorationExtension_ItemInfo(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#itemInfo)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerLayoutDecorationExtension, index: i32) callconv(.c) QtC.QRect `
    ///
    pub fn OnItemInfo(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QRect) void {
        qtc.QDesignerLayoutDecorationExtension_OnItemInfo(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperItemInfo(self: ?*anyopaque, index: i32) QtC.QRect {
        return qtc.QDesignerLayoutDecorationExtension_SuperItemInfo(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn IndexOf(self: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_IndexOf(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerLayoutDecorationExtension, widget: QtC.QWidget) callconv(.c) i32 `
    ///
    pub fn OnIndexOf(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnIndexOf(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperIndexOf(self: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_SuperIndexOf(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` item: QtC.QLayoutItem `
    ///
    pub fn IndexOf2(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_IndexOf2(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerLayoutDecorationExtension, item: QtC.QLayoutItem) callconv(.c) i32 `
    ///
    pub fn OnIndexOf2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnIndexOf2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` item: QtC.QLayoutItem `
    ///
    pub fn SuperIndexOf2(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_SuperIndexOf2(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentInsertMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ## Returns:
    ///
    /// ` layoutdecoration_enums.InsertMode `
    ///
    pub fn CurrentInsertMode(self: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_CurrentInsertMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentInsertMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCurrentInsertMode(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnCurrentInsertMode(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ## Returns:
    ///
    /// ` layoutdecoration_enums.InsertMode `
    ///
    pub fn SuperCurrentInsertMode(self: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_SuperCurrentInsertMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    pub fn CurrentIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_CurrentIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCurrentIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnCurrentIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    pub fn SuperCurrentIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_SuperCurrentIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    pub fn CurrentCell(self: ?*anyopaque) struct_i32_i32 {
        const _pair = qtc.QDesignerLayoutDecorationExtension_CurrentCell(@ptrCast(self));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn () callconv(.c) struct_i32_i32 `
    ///
    pub fn OnCurrentCell(self: ?*anyopaque, callback: *const fn () callconv(.c) struct_i32_i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnCurrentCell(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    pub fn SuperCurrentCell(self: ?*anyopaque) struct_i32_i32 {
        const _pair = qtc.QDesignerLayoutDecorationExtension_SuperCurrentCell(@ptrCast(self));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` cell: struct_i32_i32 `
    ///
    pub fn InsertWidget(self: ?*anyopaque, widget: ?*anyopaque, cell: struct_i32_i32) void {
        qtc.QDesignerLayoutDecorationExtension_InsertWidget(@ptrCast(self), @ptrCast(widget), @bitCast(cell));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerLayoutDecorationExtension, widget: QtC.QWidget, cell: struct_i32_i32) callconv(.c) void `
    ///
    pub fn OnInsertWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, struct_i32_i32) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnInsertWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` cell: struct_i32_i32 `
    ///
    pub fn SuperInsertWidget(self: ?*anyopaque, widget: ?*anyopaque, cell: struct_i32_i32) void {
        qtc.QDesignerLayoutDecorationExtension_SuperInsertWidget(@ptrCast(self), @ptrCast(widget), @bitCast(cell));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#removeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn RemoveWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QDesignerLayoutDecorationExtension_RemoveWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#removeWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerLayoutDecorationExtension, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnRemoveWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnRemoveWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperRemoveWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QDesignerLayoutDecorationExtension_SuperRemoveWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` row: i32 `
    ///
    pub fn InsertRow(self: ?*anyopaque, row: i32) void {
        qtc.QDesignerLayoutDecorationExtension_InsertRow(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertRow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerLayoutDecorationExtension, row: i32) callconv(.c) void `
    ///
    pub fn OnInsertRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnInsertRow(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` row: i32 `
    ///
    pub fn SuperInsertRow(self: ?*anyopaque, row: i32) void {
        qtc.QDesignerLayoutDecorationExtension_SuperInsertRow(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` column: i32 `
    ///
    pub fn InsertColumn(self: ?*anyopaque, column: i32) void {
        qtc.QDesignerLayoutDecorationExtension_InsertColumn(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertColumn)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerLayoutDecorationExtension, column: i32) callconv(.c) void `
    ///
    pub fn OnInsertColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnInsertColumn(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperInsertColumn(self: ?*anyopaque, column: i32) void {
        qtc.QDesignerLayoutDecorationExtension_SuperInsertColumn(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    pub fn Simplify(self: ?*anyopaque) void {
        qtc.QDesignerLayoutDecorationExtension_Simplify(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSimplify(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnSimplify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    pub fn SuperSimplify(self: ?*anyopaque) void {
        qtc.QDesignerLayoutDecorationExtension_SuperSimplify(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn FindItemAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_FindItemAt(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerLayoutDecorationExtension, pos: QtC.QPoint) callconv(.c) i32 `
    ///
    pub fn OnFindItemAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnFindItemAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn SuperFindItemAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_SuperFindItemAt(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn FindItemAt2(self: ?*anyopaque, row: i32, column: i32) i32 {
        return qtc.QDesignerLayoutDecorationExtension_FindItemAt2(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerLayoutDecorationExtension, row: i32, column: i32) callconv(.c) i32 `
    ///
    pub fn OnFindItemAt2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) i32) void {
        qtc.QDesignerLayoutDecorationExtension_OnFindItemAt2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperFindItemAt2(self: ?*anyopaque, row: i32, column: i32) i32 {
        return qtc.QDesignerLayoutDecorationExtension_SuperFindItemAt2(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#adjustIndicator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` pos: QtC.QPoint `
    ///
    /// ` index: i32 `
    ///
    pub fn AdjustIndicator(self: ?*anyopaque, pos: ?*anyopaque, index: i32) void {
        qtc.QDesignerLayoutDecorationExtension_AdjustIndicator(@ptrCast(self), @ptrCast(pos), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#adjustIndicator)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerLayoutDecorationExtension, pos: QtC.QPoint, index: i32) callconv(.c) void `
    ///
    pub fn OnAdjustIndicator(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDesignerLayoutDecorationExtension_OnAdjustIndicator(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    /// ` pos: QtC.QPoint `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperAdjustIndicator(self: ?*anyopaque, pos: ?*anyopaque, index: i32) void {
        qtc.QDesignerLayoutDecorationExtension_SuperAdjustIndicator(@ptrCast(self), @ptrCast(pos), @bitCast(index));
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
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDesignerLayoutDecorationExtension_Delete(@ptrCast(self));
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
