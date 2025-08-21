const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlayout_enums = @import("libqlayout.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qgridlayout.html
pub const qgridlayout = struct {
    /// New constructs a new QGridLayout object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.QGridLayout {
        return qtc.QGridLayout_new(@ptrCast(parent));
    }

    /// New2 constructs a new QGridLayout object.
    ///
    ///
    pub fn New2() QtC.QGridLayout {
        return qtc.QGridLayout_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGridLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QGridLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGridLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QGridLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGridLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGridLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGridLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QGridLayout_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgridlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QGridLayout_SizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QGridLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QGridLayout_QBaseSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QGridLayout_MinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QGridLayout_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QGridLayout_QBaseMinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QGridLayout_MaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QGridLayout_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QGridLayout_QBaseMaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setHorizontalSpacing)
    ///
    /// ``` self: QtC.QGridLayout, spacing: i32 ```
    pub fn SetHorizontalSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QGridLayout_SetHorizontalSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#horizontalSpacing)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn HorizontalSpacing(self: ?*anyopaque) i32 {
        return qtc.QGridLayout_HorizontalSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setVerticalSpacing)
    ///
    /// ``` self: QtC.QGridLayout, spacing: i32 ```
    pub fn SetVerticalSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QGridLayout_SetVerticalSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#verticalSpacing)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn VerticalSpacing(self: ?*anyopaque) i32 {
        return qtc.QGridLayout_VerticalSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
    ///
    /// ``` self: QtC.QGridLayout, spacing: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QGridLayout_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, spacing: i32) callconv(.c) void ```
    pub fn OnSetSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGridLayout_OnSetSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout, spacing: i32 ```
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QGridLayout_QBaseSetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return qtc.QGridLayout_Spacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSpacing(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGridLayout_OnSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseSpacing(self: ?*anyopaque) i32 {
        return qtc.QGridLayout_QBaseSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setRowStretch)
    ///
    /// ``` self: QtC.QGridLayout, row: i32, stretch: i32 ```
    pub fn SetRowStretch(self: ?*anyopaque, row: i32, stretch: i32) void {
        qtc.QGridLayout_SetRowStretch(@ptrCast(self), @intCast(row), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setColumnStretch)
    ///
    /// ``` self: QtC.QGridLayout, column: i32, stretch: i32 ```
    pub fn SetColumnStretch(self: ?*anyopaque, column: i32, stretch: i32) void {
        qtc.QGridLayout_SetColumnStretch(@ptrCast(self), @intCast(column), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#rowStretch)
    ///
    /// ``` self: QtC.QGridLayout, row: i32 ```
    pub fn RowStretch(self: ?*anyopaque, row: i32) i32 {
        return qtc.QGridLayout_RowStretch(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#columnStretch)
    ///
    /// ``` self: QtC.QGridLayout, column: i32 ```
    pub fn ColumnStretch(self: ?*anyopaque, column: i32) i32 {
        return qtc.QGridLayout_ColumnStretch(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setRowMinimumHeight)
    ///
    /// ``` self: QtC.QGridLayout, row: i32, minSize: i32 ```
    pub fn SetRowMinimumHeight(self: ?*anyopaque, row: i32, minSize: i32) void {
        qtc.QGridLayout_SetRowMinimumHeight(@ptrCast(self), @intCast(row), @intCast(minSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setColumnMinimumWidth)
    ///
    /// ``` self: QtC.QGridLayout, column: i32, minSize: i32 ```
    pub fn SetColumnMinimumWidth(self: ?*anyopaque, column: i32, minSize: i32) void {
        qtc.QGridLayout_SetColumnMinimumWidth(@ptrCast(self), @intCast(column), @intCast(minSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#rowMinimumHeight)
    ///
    /// ``` self: QtC.QGridLayout, row: i32 ```
    pub fn RowMinimumHeight(self: ?*anyopaque, row: i32) i32 {
        return qtc.QGridLayout_RowMinimumHeight(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#columnMinimumWidth)
    ///
    /// ``` self: QtC.QGridLayout, column: i32 ```
    pub fn ColumnMinimumWidth(self: ?*anyopaque, column: i32) i32 {
        return qtc.QGridLayout_ColumnMinimumWidth(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#columnCount)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return qtc.QGridLayout_ColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#rowCount)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return qtc.QGridLayout_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#cellRect)
    ///
    /// ``` self: QtC.QGridLayout, row: i32, column: i32 ```
    pub fn CellRect(self: ?*anyopaque, row: i32, column: i32) QtC.QRect {
        return qtc.QGridLayout_CellRect(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QGridLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QGridLayout_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QGridLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
    ///
    /// ``` self: QtC.QGridLayout, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QGridLayout_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QGridLayout_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QGridLayout_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
    ///
    /// ``` self: QtC.QGridLayout, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QGridLayout_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, param1: i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QGridLayout_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QGridLayout_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
    ///
    /// ``` self: QtC.QGridLayout ```
    ///
    /// Returns: ``` flag of qnamespace_enums.Orientation ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QGridLayout_ExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QGridLayout_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout ```
    ///
    /// Returns: ``` flag of qnamespace_enums.Orientation ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QGridLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QGridLayout_Invalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGridLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QGridLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ``` self: QtC.QGridLayout, w: QtC.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QGridLayout_AddWidget(@ptrCast(self), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QWidget, row: i32, column: i32 ```
    pub fn AddWidget2(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32) void {
        qtc.QGridLayout_AddWidget2(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QWidget, row: i32, column: i32, rowSpan: i32, columnSpan: i32 ```
    pub fn AddWidget3(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        qtc.QGridLayout_AddWidget3(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QLayout, row: i32, column: i32 ```
    pub fn AddLayout(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32) void {
        qtc.QGridLayout_AddLayout(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QLayout, row: i32, column: i32, rowSpan: i32, columnSpan: i32 ```
    pub fn AddLayout2(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        qtc.QGridLayout_AddLayout2(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setOriginCorner)
    ///
    /// ``` self: QtC.QGridLayout, originCorner: qnamespace_enums.Corner ```
    pub fn SetOriginCorner(self: ?*anyopaque, originCorner: i32) void {
        qtc.QGridLayout_SetOriginCorner(@ptrCast(self), @intCast(originCorner));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#originCorner)
    ///
    /// ``` self: QtC.QGridLayout ```
    ///
    /// Returns: ``` qnamespace_enums.Corner ```
    pub fn OriginCorner(self: ?*anyopaque) i32 {
        return qtc.QGridLayout_OriginCorner(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
    ///
    /// ``` self: QtC.QGridLayout, index: i32 ```
    pub fn ItemAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QGridLayout_ItemAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, index: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnItemAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QGridLayout_OnItemAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout, index: i32 ```
    pub fn QBaseItemAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QGridLayout_QBaseItemAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#itemAtPosition)
    ///
    /// ``` self: QtC.QGridLayout, row: i32, column: i32 ```
    pub fn ItemAtPosition(self: ?*anyopaque, row: i32, column: i32) QtC.QLayoutItem {
        return qtc.QGridLayout_ItemAtPosition(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
    ///
    /// ``` self: QtC.QGridLayout, index: i32 ```
    pub fn TakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QGridLayout_TakeAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, index: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnTakeAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QGridLayout_OnTakeAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout, index: i32 ```
    pub fn QBaseTakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QGridLayout_QBaseTakeAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#count)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QGridLayout_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGridLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QGridLayout_QBaseCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
    ///
    /// ``` self: QtC.QGridLayout, geometry: QtC.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QGridLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, geometry: QtC.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout, geometry: QtC.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QGridLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ``` self: QtC.QGridLayout, item: QtC.QLayoutItem, row: i32, column: i32 ```
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32) void {
        qtc.QGridLayout_AddItem(@ptrCast(self), @ptrCast(item), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setDefaultPositioning)
    ///
    /// ``` self: QtC.QGridLayout, n: i32, orient: qnamespace_enums.Orientation ```
    pub fn SetDefaultPositioning(self: ?*anyopaque, n: i32, orient: i32) void {
        qtc.QGridLayout_SetDefaultPositioning(@ptrCast(self), @intCast(n), @intCast(orient));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#getItemPosition)
    ///
    /// ``` self: QtC.QGridLayout, idx: i32, row: *i32, column: *i32, rowSpan: *i32, columnSpan: *i32 ```
    pub fn GetItemPosition(self: ?*anyopaque, idx: i32, row: *i32, column: *i32, rowSpan: *i32, columnSpan: *i32) void {
        qtc.QGridLayout_GetItemPosition(@ptrCast(self), @intCast(idx), @ptrCast(row), @ptrCast(column), @ptrCast(rowSpan), @ptrCast(columnSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QLayoutItem ```
    pub fn AddItem2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGridLayout_AddItem2(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, param1: QtC.QLayoutItem) callconv(.c) void ```
    pub fn OnAddItem2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnAddItem2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QLayoutItem ```
    pub fn QBaseAddItem2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGridLayout_QBaseAddItem2(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGridLayout_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgridlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGridLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgridlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QWidget, row: i32, column: i32, param4: flag of qnamespace_enums.AlignmentFlag ```
    pub fn AddWidget4(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, param4: i64) void {
        qtc.QGridLayout_AddWidget4(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column), @intCast(param4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QWidget, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: flag of qnamespace_enums.AlignmentFlag ```
    pub fn AddWidget6(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i64) void {
        qtc.QGridLayout_AddWidget6(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan), @intCast(param6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QLayout, row: i32, column: i32, param4: flag of qnamespace_enums.AlignmentFlag ```
    pub fn AddLayout4(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, param4: i64) void {
        qtc.QGridLayout_AddLayout4(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column), @intCast(param4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QLayout, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: flag of qnamespace_enums.AlignmentFlag ```
    pub fn AddLayout6(self: ?*anyopaque, param1: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i64) void {
        qtc.QGridLayout_AddLayout6(@ptrCast(self), @ptrCast(param1), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan), @intCast(param6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ``` self: QtC.QGridLayout, item: QtC.QLayoutItem, row: i32, column: i32, rowSpan: i32 ```
    pub fn AddItem4(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32) void {
        qtc.QGridLayout_AddItem4(@ptrCast(self), @ptrCast(item), @intCast(row), @intCast(column), @intCast(rowSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ``` self: QtC.QGridLayout, item: QtC.QLayoutItem, row: i32, column: i32, rowSpan: i32, columnSpan: i32 ```
    pub fn AddItem5(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        qtc.QGridLayout_AddItem5(@ptrCast(self), @ptrCast(item), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ``` self: QtC.QGridLayout, item: QtC.QLayoutItem, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: flag of qnamespace_enums.AlignmentFlag ```
    pub fn AddItem6(self: ?*anyopaque, item: ?*anyopaque, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i64) void {
        qtc.QGridLayout_AddItem6(@ptrCast(self), @ptrCast(item), @intCast(row), @intCast(column), @intCast(rowSpan), @intCast(columnSpan), @intCast(param6));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QGridLayout, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QGridLayout, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QLayout_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ``` self: QtC.QGridLayout, left: *i32, top: *i32, right: *i32, bottom: *i32 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QGridLayout, w: QtC.QWidget, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i64) bool {
        return qtc.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QGridLayout, l: QtC.QLayout, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i64) bool {
        return qtc.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ``` self: QtC.QGridLayout, sizeConstraint: qlayout_enums.SizeConstraint ```
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self), @intCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ``` self: QtC.QGridLayout ```
    ///
    /// Returns: ``` qlayout_enums.SizeConstraint ```
    pub fn SizeConstraint(self: ?*anyopaque) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ``` self: QtC.QGridLayout, w: QtC.QWidget ```
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn MenuBar(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_MenuBar(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn Activate(self: ?*anyopaque) bool {
        return qtc.QLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QLayout_Update(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ``` self: QtC.QGridLayout, w: QtC.QWidget ```
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QLayoutItem ```
    pub fn IndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_IndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, param1: QtC.QLayoutItem) callconv(.c) i32 ```
    pub fn OnIndexOf2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QLayoutItem ```
    pub fn QBaseIndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseIndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ``` self: QtC.QGridLayout, w: i32 ```
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ``` self: QtC.QGridLayout, w: i32 ```
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn TotalMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn TotalMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn TotalSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ``` self: QtC.QGridLayout, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ``` w: QtC.QWidget, s: QtC.QSize ```
    pub fn ClosestAcceptableSize(w: ?*anyopaque, s: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_ClosestAcceptableSize(@ptrCast(w), @ptrCast(s));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QGridLayout, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgridlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QGridLayout, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QGridLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGridLayout, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGridLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGridLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGridLayout, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QGridLayout, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qgridlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QGridLayout, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QGridLayout, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QGridLayout, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QGridLayout, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QGridLayout, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QGridLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QGridLayout, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgridlayout.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgridlayout.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QGridLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGridLayout, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGridLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QGridLayout, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: QtC.QGridLayout ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QGridLayout_Geometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QGridLayout_QBaseGeometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QGridLayout_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QWidget ```
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QGridLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QWidget ```
    pub fn QBaseIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QGridLayout_QBaseIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, param1: QtC.QWidget) callconv(.c) i32 ```
    pub fn OnIndexOf(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGridLayout_OnIndexOf(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGridLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QGridLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QGridLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    ///
    /// Returns: ``` flag of qsizepolicy_enums.ControlType ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return qtc.QGridLayout_ControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    ///
    /// Returns: ``` flag of qsizepolicy_enums.ControlType ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return qtc.QGridLayout_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QGridLayout_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, from: QtC.QWidget, to: QtC.QWidget, options: flag of qnamespace_enums.FindChildOption ```
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) QtC.QLayoutItem {
        return qtc.QGridLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, from: QtC.QWidget, to: QtC.QWidget, options: flag of qnamespace_enums.FindChildOption ```
    pub fn QBaseReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) QtC.QLayoutItem {
        return qtc.QGridLayout_QBaseReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, from: QtC.QWidget, to: QtC.QWidget, options: flag of qnamespace_enums.FindChildOption) callconv(.c) QtC.QLayoutItem ```
    pub fn OnReplaceWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) QtC.QLayoutItem) void {
        qtc.QGridLayout_OnReplaceWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QGridLayout_Layout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QGridLayout_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) QtC.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QLayout) void {
        qtc.QGridLayout_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, e: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGridLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, e: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QGridLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, e: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGridLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGridLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGridLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGridLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGridLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGridLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGridLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGridLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGridLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGridLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGridLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGridLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGridLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGridLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGridLayout_Widget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGridLayout_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) QtC.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWidget) void {
        qtc.QGridLayout_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QGridLayout_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QGridLayout_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) QtC.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QGridLayout_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGridLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGridLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, param1: QtC.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, l: QtC.QLayout ```
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QGridLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, l: QtC.QLayout ```
    pub fn QBaseAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QGridLayout_QBaseAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, l: QtC.QLayout) callconv(.c) void ```
    pub fn OnAddChildLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnAddChildLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, w: QtC.QWidget ```
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QGridLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, w: QtC.QWidget ```
    pub fn QBaseAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QGridLayout_QBaseAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, w: QtC.QWidget) callconv(.c) void ```
    pub fn OnAddChildWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGridLayout_OnAddChildWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, layout: QtC.QLayout ```
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QGridLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, layout: QtC.QLayout ```
    pub fn QBaseAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QGridLayout_QBaseAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, layout: QtC.QLayout) callconv(.c) bool ```
    pub fn OnAdoptLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGridLayout_OnAdoptLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QRect ```
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QGridLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, param1: QtC.QRect ```
    pub fn QBaseAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QGridLayout_QBaseAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, param1: QtC.QRect) callconv(.c) QtC.QRect ```
    pub fn OnAlignmentRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QGridLayout_OnAlignmentRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGridLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGridLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QGridLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGridLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGridLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGridLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGridLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGridLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGridLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGridLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGridLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGridLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QGridLayout, slot: fn (self: QtC.QGridLayout, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#dtor.QGridLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGridLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGridLayout_Delete(@ptrCast(self));
    }
};
