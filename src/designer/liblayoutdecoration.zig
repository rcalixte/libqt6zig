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
    /// ` callback: *const fn (self: QtC.QDesignerLayoutDecorationExtension, layout: QtC.QLayout) callconv(.c) [*:null]QtC.QWidget `
    ///
    pub fn OnWidgets(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:null]QtC.QWidget) void {
        qtc.QDesignerLayoutDecorationExtension_OnWidgets(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseWidgets(self: ?*anyopaque, layout: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.QDesignerLayoutDecorationExtension_QBaseWidgets(@ptrCast(self), @ptrCast(layout));
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
        return qtc.QDesignerLayoutDecorationExtension_ItemInfo(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerLayoutDecorationExtension_OnItemInfo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseItemInfo(self: ?*anyopaque, index: i32) QtC.QRect {
        return qtc.QDesignerLayoutDecorationExtension_QBaseItemInfo(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerLayoutDecorationExtension_OnIndexOf(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseIndexOf(self: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_QBaseIndexOf(@ptrCast(self), @ptrCast(widget));
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
        qtc.QDesignerLayoutDecorationExtension_OnIndexOf2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseIndexOf2(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_QBaseIndexOf2(@ptrCast(self), @ptrCast(item));
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
        qtc.QDesignerLayoutDecorationExtension_OnCurrentInsertMode(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseCurrentInsertMode(self: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_QBaseCurrentInsertMode(@ptrCast(self));
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
        qtc.QDesignerLayoutDecorationExtension_OnCurrentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    pub fn QBaseCurrentIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_QBaseCurrentIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    pub fn CurrentCell(self: ?*anyopaque) struct_i32_i32 {
        const _pair: qtc.libqt_pair = qtc.QDesignerLayoutDecorationExtension_CurrentCell(@ptrCast(self));
        return struct_i32_i32{
            .first = @as(*i32, @ptrCast(@alignCast(_pair.first))).*,
            .second = @as(*i32, @ptrCast(@alignCast(_pair.second))).*,
        };
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
        qtc.QDesignerLayoutDecorationExtension_OnCurrentCell(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    pub fn QBaseCurrentCell(self: ?*anyopaque) struct_i32_i32 {
        const _pair: qtc.libqt_pair = qtc.QDesignerLayoutDecorationExtension_QBaseCurrentCell(@ptrCast(self));
        return struct_i32_i32{
            .first = @as(*i32, @ptrCast(@alignCast(_pair.first))).*,
            .second = @as(*i32, @ptrCast(@alignCast(_pair.second))).*,
        };
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
        var cell_first = cell.first;
        var cell_second = cell.second;
        const cell_pair = qtc.libqt_pair{
            .first = @ptrCast(&cell_first),
            .second = @ptrCast(&cell_second),
        };
        qtc.QDesignerLayoutDecorationExtension_InsertWidget(@ptrCast(self), @ptrCast(widget), cell_pair);
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
        qtc.QDesignerLayoutDecorationExtension_OnInsertWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseInsertWidget(self: ?*anyopaque, widget: ?*anyopaque, cell: struct_i32_i32) void {
        var cell_first = cell.first;
        var cell_second = cell.second;
        const cell_pair = qtc.libqt_pair{
            .first = @ptrCast(&cell_first),
            .second = @ptrCast(&cell_second),
        };
        qtc.QDesignerLayoutDecorationExtension_QBaseInsertWidget(@ptrCast(self), @ptrCast(widget), cell_pair);
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
        qtc.QDesignerLayoutDecorationExtension_OnRemoveWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseRemoveWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QDesignerLayoutDecorationExtension_QBaseRemoveWidget(@ptrCast(self), @ptrCast(widget));
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
        qtc.QDesignerLayoutDecorationExtension_InsertRow(@ptrCast(self), @intCast(row));
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
        qtc.QDesignerLayoutDecorationExtension_OnInsertRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseInsertRow(self: ?*anyopaque, row: i32) void {
        qtc.QDesignerLayoutDecorationExtension_QBaseInsertRow(@ptrCast(self), @intCast(row));
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
        qtc.QDesignerLayoutDecorationExtension_InsertColumn(@ptrCast(self), @intCast(column));
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
        qtc.QDesignerLayoutDecorationExtension_OnInsertColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseInsertColumn(self: ?*anyopaque, column: i32) void {
        qtc.QDesignerLayoutDecorationExtension_QBaseInsertColumn(@ptrCast(self), @intCast(column));
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
        qtc.QDesignerLayoutDecorationExtension_OnSimplify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    pub fn QBaseSimplify(self: ?*anyopaque) void {
        qtc.QDesignerLayoutDecorationExtension_QBaseSimplify(@ptrCast(self));
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
        qtc.QDesignerLayoutDecorationExtension_OnFindItemAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseFindItemAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QDesignerLayoutDecorationExtension_QBaseFindItemAt(@ptrCast(self), @ptrCast(pos));
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
        return qtc.QDesignerLayoutDecorationExtension_FindItemAt2(@ptrCast(self), @intCast(row), @intCast(column));
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
        qtc.QDesignerLayoutDecorationExtension_OnFindItemAt2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseFindItemAt2(self: ?*anyopaque, row: i32, column: i32) i32 {
        return qtc.QDesignerLayoutDecorationExtension_QBaseFindItemAt2(@ptrCast(self), @intCast(row), @intCast(column));
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
        qtc.QDesignerLayoutDecorationExtension_AdjustIndicator(@ptrCast(self), @ptrCast(pos), @intCast(index));
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
        qtc.QDesignerLayoutDecorationExtension_OnAdjustIndicator(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseAdjustIndicator(self: ?*anyopaque, pos: ?*anyopaque, index: i32) void {
        qtc.QDesignerLayoutDecorationExtension_QBaseAdjustIndicator(@ptrCast(self), @ptrCast(pos), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#dtor.QDesignerLayoutDecorationExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerLayoutDecorationExtension `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerLayoutDecorationExtension_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/layoutdecoration.html#public-types)
pub const enums = struct {
    pub const InsertMode = enum {
        pub const InsertWidgetMode: i32 = 0;
        pub const InsertRowMode: i32 = 1;
        pub const InsertColumnMode: i32 = 2;
    };
};
