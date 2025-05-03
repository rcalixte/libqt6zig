const C = @import("qt6c");
const qlayout_enums = @import("libqlayout.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qgridlayout.html
pub const qgridlayout = struct {
    /// New constructs a new QGridLayout object.
    ///
    /// ``` parent: ?*C.QWidget ```
    pub fn New(parent: ?*anyopaque) ?*C.QGridLayout {
        return C.QGridLayout_new(@ptrCast(parent));
    }

    /// New2 constructs a new QGridLayout object.
    ///
    ///
    pub fn New2() ?*C.QGridLayout {
        return C.QGridLayout_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QGridLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QGridLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QGridLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QGridLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QGridLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QGridLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QGridLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QGridLayout_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn SizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QGridLayout_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QGridLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QGridLayout_QBaseSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QGridLayout_MinimumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QGridLayout_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QGridLayout_QBaseMinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QGridLayout_MaximumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QGridLayout_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QGridLayout_QBaseMaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setHorizontalSpacing)
    ///
    /// ``` self: ?*C.QGridLayout, spacing: i32 ```
    pub fn SetHorizontalSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QGridLayout_SetHorizontalSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#horizontalSpacing)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn HorizontalSpacing(self: ?*anyopaque) i32 {
        return C.QGridLayout_HorizontalSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setVerticalSpacing)
    ///
    /// ``` self: ?*C.QGridLayout, spacing: i32 ```
    pub fn SetVerticalSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QGridLayout_SetVerticalSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#verticalSpacing)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn VerticalSpacing(self: ?*anyopaque) i32 {
        return C.QGridLayout_VerticalSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
    ///
    /// ``` self: ?*C.QGridLayout, spacing: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QGridLayout_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, i32) callconv(.c) void ```
    pub fn OnSetSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QGridLayout_OnSetSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout, spacing: i32 ```
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QGridLayout_QBaseSetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return C.QGridLayout_Spacing(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSpacing(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QGridLayout_OnSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseSpacing(self: ?*anyopaque) i32 {
        return C.QGridLayout_QBaseSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setRowStretch)
    ///
    /// ``` self: ?*C.QGridLayout, row: i32, stretch: i32 ```
    pub fn SetRowStretch(self: ?*anyopaque, row: i32, stretch: i32) void {
        C.QGridLayout_SetRowStretch(@ptrCast(self), @intCast(row), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setColumnStretch)
    ///
    /// ``` self: ?*C.QGridLayout, column: i32, stretch: i32 ```
    pub fn SetColumnStretch(self: ?*anyopaque, column: i32, stretch: i32) void {
        C.QGridLayout_SetColumnStretch(@ptrCast(self), @intCast(column), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#rowStretch)
    ///
    /// ``` self: ?*C.QGridLayout, row: i32 ```
    pub fn RowStretch(self: ?*anyopaque, row: i32) i32 {
        return C.QGridLayout_RowStretch(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#columnStretch)
    ///
    /// ``` self: ?*C.QGridLayout, column: i32 ```
    pub fn ColumnStretch(self: ?*anyopaque, column: i32) i32 {
        return C.QGridLayout_ColumnStretch(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setRowMinimumHeight)
    ///
    /// ``` self: ?*C.QGridLayout, row: i32, minSize: i32 ```
    pub fn SetRowMinimumHeight(self: ?*anyopaque, row: i32, minSize: i32) void {
        C.QGridLayout_SetRowMinimumHeight(@ptrCast(self), @intCast(row), @intCast(minSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setColumnMinimumWidth)
    ///
    /// ``` self: ?*C.QGridLayout, column: i32, minSize: i32 ```
    pub fn SetColumnMinimumWidth(self: ?*anyopaque, column: i32, minSize: i32) void {
        C.QGridLayout_SetColumnMinimumWidth(@ptrCast(self), @intCast(column), @intCast(minSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#rowMinimumHeight)
    ///
    /// ``` self: ?*C.QGridLayout, row: i32 ```
    pub fn RowMinimumHeight(self: ?*anyopaque, row: i32) i32 {
        return C.QGridLayout_RowMinimumHeight(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#columnMinimumWidth)
    ///
    /// ``` self: ?*C.QGridLayout, column: i32 ```
    pub fn ColumnMinimumWidth(self: ?*anyopaque, column: i32) i32 {
        return C.QGridLayout_ColumnMinimumWidth(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#columnCount)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return C.QGridLayout_ColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#rowCount)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return C.QGridLayout_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#cellRect)
    ///
    /// ``` self: ?*C.QGridLayout, row: i32, column: i32 ```
    pub fn CellRect(self: ?*anyopaque, row: i32, column: i32) ?*C.QRect {
        return C.QGridLayout_CellRect(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return C.QGridLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QGridLayout_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return C.QGridLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
    ///
    /// ``` self: ?*C.QGridLayout, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QGridLayout_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QGridLayout_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QGridLayout_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
    ///
    /// ``` self: ?*C.QGridLayout, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QGridLayout_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QGridLayout_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QGridLayout_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return C.QGridLayout_ExpandingDirections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QGridLayout_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return C.QGridLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        C.QGridLayout_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QGridLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        C.QGridLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QGridLayout, w: ?*C.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QGridLayout_AddWidget(@ptrCast(self), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QWidget, row: i32, column: i32 ```
    pub fn AddWidget2(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32) void {
        C.QGridLayout_AddWidget2(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QWidget, row: i32, column: i32, rowSpan: i32, columnSpan: i32 ```
    pub fn AddWidget3(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        C.QGridLayout_AddWidget3(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QLayout, row: i32, column: i32 ```
    pub fn AddLayout(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32) void {
        C.QGridLayout_AddLayout(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QLayout, row: i32, column: i32, rowSpan: i32, columnSpan: i32 ```
    pub fn AddLayout2(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        C.QGridLayout_AddLayout2(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setOriginCorner)
    ///
    /// ``` self: ?*C.QGridLayout, originCorner: qnamespace_enums.Corner ```
    pub fn SetOriginCorner(self: ?*anyopaque, originCorner: i64) void {
        C.QGridLayout_SetOriginCorner(@ptrCast(self), @intCast(originCorner));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#originCorner)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn OriginCorner(self: ?*anyopaque) i64 {
        return C.QGridLayout_OriginCorner(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
    ///
    /// ``` self: ?*C.QGridLayout, index: i32 ```
    pub fn ItemAt(self: ?*anyopaque, index: i32) ?*C.QLayoutItem {
        return C.QGridLayout_ItemAt(@ptrCast(self), @intCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnItemAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QLayoutItem) void {
        C.QGridLayout_OnItemAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout, index: i32 ```
    pub fn QBaseItemAt(self: ?*anyopaque, index: i32) ?*C.QLayoutItem {
        return C.QGridLayout_QBaseItemAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#itemAtPosition)
    ///
    /// ``` self: ?*C.QGridLayout, row: i32, column: i32 ```
    pub fn ItemAtPosition(self: ?*anyopaque, row: i32, column: i32) ?*C.QLayoutItem {
        return C.QGridLayout_ItemAtPosition(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
    ///
    /// ``` self: ?*C.QGridLayout, index: i32 ```
    pub fn TakeAt(self: ?*anyopaque, index: i32) ?*C.QLayoutItem {
        return C.QGridLayout_TakeAt(@ptrCast(self), @intCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnTakeAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QLayoutItem) void {
        C.QGridLayout_OnTakeAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout, index: i32 ```
    pub fn QBaseTakeAt(self: ?*anyopaque, index: i32) ?*C.QLayoutItem {
        return C.QGridLayout_QBaseTakeAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#count)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return C.QGridLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QGridLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return C.QGridLayout_QBaseCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
    ///
    /// ``` self: ?*C.QGridLayout, geometry: ?*C.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QGridLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGridLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout, geometry: ?*C.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QGridLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ``` self: ?*C.QGridLayout, item: ?*C.QLayoutItem, row: i32, column: i32 ```
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32) void {
        C.QGridLayout_AddItem(@ptrCast(self), @ptrCast(item), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setDefaultPositioning)
    ///
    /// ``` self: ?*C.QGridLayout, n: i32, orient: qnamespace_enums.Orientation ```
    pub fn SetDefaultPositioning(self: ?*anyopaque, n: i32, orient: i64) void {
        C.QGridLayout_SetDefaultPositioning(@ptrCast(self), @intCast(n), @intCast(orient));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#getItemPosition)
    ///
    /// ``` self: ?*C.QGridLayout, idx: i32, row: ?*i32, column: ?*i32, rowSpan: ?*i32, columnSpan: ?*i32 ```
    pub fn GetItemPosition(self: ?*anyopaque, idx: i32, row: ?*anyopaque, column: ?*anyopaque, rowSpan: ?*anyopaque, columnSpan: ?*anyopaque) void {
        C.QGridLayout_GetItemPosition(@ptrCast(self), @intCast(idx), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QLayoutItem ```
    pub fn AddItemWithQLayoutItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QGridLayout_AddItemWithQLayoutItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QLayoutItem) callconv(.c) void ```
    pub fn OnAddItemWithQLayoutItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGridLayout_OnAddItemWithQLayoutItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QLayoutItem ```
    pub fn QBaseAddItemWithQLayoutItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QGridLayout_QBaseAddItemWithQLayoutItem(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QGridLayout_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QGridLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QWidget, row: i32, column: i32, param4: i32 ```
    pub fn AddWidget4(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, param4: i64) void {
        C.QGridLayout_AddWidget4(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column), @intCast(param4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QWidget, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i32 ```
    pub fn AddWidget6(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i64) void {
        C.QGridLayout_AddWidget6(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan), @intCast(param6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QLayout, row: i32, column: i32, param4: i32 ```
    pub fn AddLayout4(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, param4: i64) void {
        C.QGridLayout_AddLayout4(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column), @intCast(param4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QLayout, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i32 ```
    pub fn AddLayout6(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i64) void {
        C.QGridLayout_AddLayout6(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan), @intCast(param6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ``` self: ?*C.QGridLayout, item: ?*C.QLayoutItem, row: i32, column: i32, rowSpan: i32 ```
    pub fn AddItem4(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32) void {
        C.QGridLayout_AddItem4(@ptrCast(self), @ptrCast(item), @intCast(row), @intCast(column), @intCast(rowSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ``` self: ?*C.QGridLayout, item: ?*C.QLayoutItem, row: i32, column: i32, rowSpan: i32, columnSpan: i32 ```
    pub fn AddItem5(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        C.QGridLayout_AddItem5(@ptrCast(self), @ptrCast(item), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ``` self: ?*C.QGridLayout, item: ?*C.QLayoutItem, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i32 ```
    pub fn AddItem6(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i64) void {
        C.QGridLayout_AddItem6(@ptrCast(self), @ptrCast(item), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan), @intCast(param6));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QGridLayout, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QLayout_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QGridLayout, margins: ?*C.QMargins ```
    pub fn SetContentsMarginsWithMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        C.QLayout_SetContentsMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        C.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ``` self: ?*C.QGridLayout, left: ?*i32, top: ?*i32, right: ?*i32, bottom: ?*i32 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QLayout_GetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn ContentsMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn ContentsRect(self: ?*anyopaque) ?*C.QRect {
        return C.QLayout_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: ?*C.QGridLayout, w: ?*C.QWidget, alignment: i32 ```
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i64) bool {
        return C.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: ?*C.QGridLayout, l: ?*C.QLayout, alignment: i32 ```
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i64) bool {
        return C.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ``` self: ?*C.QGridLayout, sizeConstraint: qlayout_enums.SizeConstraint ```
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i64) void {
        C.QLayout_SetSizeConstraint(@ptrCast(self), @intCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn SizeConstraint(self: ?*anyopaque) i64 {
        return C.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ``` self: ?*C.QGridLayout, w: ?*C.QWidget ```
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn MenuBar(self: ?*anyopaque) ?*C.QWidget {
        return C.QLayout_MenuBar(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn ParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QLayout_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Activate(self: ?*anyopaque) bool {
        return C.QLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Update(self: ?*anyopaque) void {
        C.QLayout_Update(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ``` self: ?*C.QGridLayout, w: ?*C.QWidget ```
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QLayoutItem ```
    pub fn IndexOfWithQLayoutItem(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QLayout_IndexOfWithQLayoutItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QLayout, slot: fn (?*C.QLayout, ?*C.QLayoutItem) callconv(.c) i32 ```
    pub fn OnIndexOfWithQLayoutItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QLayout_OnIndexOfWithQLayoutItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QLayoutItem ```
    pub fn QBaseIndexOfWithQLayoutItem(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QLayout_QBaseIndexOfWithQLayoutItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ``` self: ?*C.QGridLayout, w: i32 ```
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return C.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ``` self: ?*C.QGridLayout, w: i32 ```
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return C.QLayout_TotalHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn TotalMinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn TotalMaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn TotalSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ``` self: ?*C.QGridLayout, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return C.QLayout_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ``` w: ?*C.QWidget, s: ?*C.QSize ```
    pub fn ClosestAcceptableSize(w: ?*anyopaque, s: ?*anyopaque) ?*C.QSize {
        return C.QLayout_ClosestAcceptableSize(@ptrCast(w), @ptrCast(s));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QGridLayout, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QGridLayout, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QGridLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QGridLayout, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QGridLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QGridLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QGridLayout, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QGridLayout, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QGridLayout, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QGridLayout, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QGridLayout, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QGridLayout, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QGridLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QGridLayout, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QGridLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QGridLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QGridLayout, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return C.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRect {
        return C.QGridLayout_Geometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QGridLayout_QBaseGeometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) ?*C.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QRect) void {
        C.QGridLayout_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QWidget ```
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QGridLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QWidget ```
    pub fn QBaseIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QGridLayout_QBaseIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QWidget) callconv(.c) i32 ```
    pub fn OnIndexOf(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QGridLayout_OnIndexOf(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return C.QGridLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return C.QGridLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QGridLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return C.QGridLayout_ControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return C.QGridLayout_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QGridLayout_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, from: ?*C.QWidget, to: ?*C.QWidget, options: i32 ```
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) ?*C.QLayoutItem {
        return C.QGridLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, from: ?*C.QWidget, to: ?*C.QWidget, options: i32 ```
    pub fn QBaseReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) ?*C.QLayoutItem {
        return C.QGridLayout_QBaseReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QWidget, ?*C.QWidget, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnReplaceWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) ?*C.QLayoutItem) void {
        C.QGridLayout_OnReplaceWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Layout(self: ?*anyopaque) ?*C.QLayout {
        return C.QGridLayout_Layout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseLayout(self: ?*anyopaque) ?*C.QLayout {
        return C.QGridLayout_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) ?*C.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QLayout) void {
        C.QGridLayout_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, e: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QGridLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, e: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QGridLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGridLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGridLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGridLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGridLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGridLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGridLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGridLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGridLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGridLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGridLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGridLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGridLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGridLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGridLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGridLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGridLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGridLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGridLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGridLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Widget(self: ?*anyopaque) ?*C.QWidget {
        return C.QGridLayout_Widget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QGridLayout_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) ?*C.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QWidget) void {
        C.QGridLayout_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn SpacerItem(self: ?*anyopaque) ?*C.QSpacerItem {
        return C.QGridLayout_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) ?*C.QSpacerItem {
        return C.QGridLayout_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) ?*C.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSpacerItem) void {
        C.QGridLayout_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QGridLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QGridLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGridLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, l: ?*C.QLayout ```
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        C.QGridLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, l: ?*C.QLayout ```
    pub fn QBaseAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        C.QGridLayout_QBaseAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QLayout) callconv(.c) void ```
    pub fn OnAddChildLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGridLayout_OnAddChildLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, w: ?*C.QWidget ```
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QGridLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, w: ?*C.QWidget ```
    pub fn QBaseAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QGridLayout_QBaseAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QWidget) callconv(.c) void ```
    pub fn OnAddChildWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGridLayout_OnAddChildWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, layout: ?*C.QLayout ```
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return C.QGridLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, layout: ?*C.QLayout ```
    pub fn QBaseAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return C.QGridLayout_QBaseAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QLayout) callconv(.c) bool ```
    pub fn OnAdoptLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGridLayout_OnAdoptLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QRect ```
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QRect {
        return C.QGridLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, param1: ?*C.QRect ```
    pub fn QBaseAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QRect {
        return C.QGridLayout_QBaseAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QRect) callconv(.c) ?*C.QRect ```
    pub fn OnAlignmentRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QGridLayout_OnAlignmentRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QGridLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QGridLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QGridLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QGridLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QGridLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QGridLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QGridLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QGridLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QGridLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QGridLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QGridLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGridLayout, slot: fn (?*C.QGridLayout, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGridLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QGridLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QGridLayout_Delete(@ptrCast(self));
    }
};
