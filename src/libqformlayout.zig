const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qformlayout_enums = enums;
const qlayout_enums = @import("libqlayout.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qformlayout.html
pub const qformlayout = struct {
    /// New constructs a new QFormLayout object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.QFormLayout {
        return qtc.QFormLayout_new(@ptrCast(parent));
    }

    /// New2 constructs a new QFormLayout object.
    ///
    ///
    pub fn New2() QtC.QFormLayout {
        return qtc.QFormLayout_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QFormLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QFormLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFormLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QFormLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QFormLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QFormLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QFormLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QFormLayout_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qformlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setFieldGrowthPolicy)
    ///
    /// ``` self: QtC.QFormLayout, policy: qformlayout_enums.FieldGrowthPolicy ```
    pub fn SetFieldGrowthPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QFormLayout_SetFieldGrowthPolicy(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#fieldGrowthPolicy)
    ///
    /// ``` self: QtC.QFormLayout ```
    ///
    /// Returns: ``` qformlayout_enums.FieldGrowthPolicy ```
    pub fn FieldGrowthPolicy(self: ?*anyopaque) i32 {
        return qtc.QFormLayout_FieldGrowthPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowWrapPolicy)
    ///
    /// ``` self: QtC.QFormLayout, policy: qformlayout_enums.RowWrapPolicy ```
    pub fn SetRowWrapPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QFormLayout_SetRowWrapPolicy(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#rowWrapPolicy)
    ///
    /// ``` self: QtC.QFormLayout ```
    ///
    /// Returns: ``` qformlayout_enums.RowWrapPolicy ```
    pub fn RowWrapPolicy(self: ?*anyopaque) i32 {
        return qtc.QFormLayout_RowWrapPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setLabelAlignment)
    ///
    /// ``` self: QtC.QFormLayout, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetLabelAlignment(self: ?*anyopaque, alignment: i64) void {
        qtc.QFormLayout_SetLabelAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#labelAlignment)
    ///
    /// ``` self: QtC.QFormLayout ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn LabelAlignment(self: ?*anyopaque) i64 {
        return qtc.QFormLayout_LabelAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setFormAlignment)
    ///
    /// ``` self: QtC.QFormLayout, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetFormAlignment(self: ?*anyopaque, alignment: i64) void {
        qtc.QFormLayout_SetFormAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#formAlignment)
    ///
    /// ``` self: QtC.QFormLayout ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn FormAlignment(self: ?*anyopaque) i64 {
        return qtc.QFormLayout_FormAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setHorizontalSpacing)
    ///
    /// ``` self: QtC.QFormLayout, spacing: i32 ```
    pub fn SetHorizontalSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QFormLayout_SetHorizontalSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#horizontalSpacing)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn HorizontalSpacing(self: ?*anyopaque) i32 {
        return qtc.QFormLayout_HorizontalSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setVerticalSpacing)
    ///
    /// ``` self: QtC.QFormLayout, spacing: i32 ```
    pub fn SetVerticalSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QFormLayout_SetVerticalSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#verticalSpacing)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn VerticalSpacing(self: ?*anyopaque) i32 {
        return qtc.QFormLayout_VerticalSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#spacing)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return qtc.QFormLayout_Spacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#spacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSpacing(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#spacing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseSpacing(self: ?*anyopaque) i32 {
        return qtc.QFormLayout_QBaseSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
    ///
    /// ``` self: QtC.QFormLayout, spacing: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QFormLayout_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, spacing: i32) callconv(.c) void ```
    pub fn OnSetSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFormLayout_OnSetSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout, spacing: i32 ```
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QFormLayout_QBaseSetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ``` self: QtC.QFormLayout, label: QtC.QWidget, field: QtC.QWidget ```
    pub fn AddRow(self: ?*anyopaque, label: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QFormLayout_AddRow(@ptrCast(self), @ptrCast(label), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ``` self: QtC.QFormLayout, label: QtC.QWidget, field: QtC.QLayout ```
    pub fn AddRow2(self: ?*anyopaque, label: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QFormLayout_AddRow2(@ptrCast(self), @ptrCast(label), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ``` self: QtC.QFormLayout, labelText: []const u8, field: QtC.QWidget ```
    pub fn AddRow3(self: ?*anyopaque, labelText: []const u8, field: ?*anyopaque) void {
        const labelText_str = qtc.libqt_string{
            .len = labelText.len,
            .data = labelText.ptr,
        };
        qtc.QFormLayout_AddRow3(@ptrCast(self), labelText_str, @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ``` self: QtC.QFormLayout, labelText: []const u8, field: QtC.QLayout ```
    pub fn AddRow4(self: ?*anyopaque, labelText: []const u8, field: ?*anyopaque) void {
        const labelText_str = qtc.libqt_string{
            .len = labelText.len,
            .data = labelText.ptr,
        };
        qtc.QFormLayout_AddRow4(@ptrCast(self), labelText_str, @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ``` self: QtC.QFormLayout, widget: QtC.QWidget ```
    pub fn AddRow5(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QFormLayout_AddRow5(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ``` self: QtC.QFormLayout, layout: QtC.QLayout ```
    pub fn AddRow6(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QFormLayout_AddRow6(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ``` self: QtC.QFormLayout, row: i32, label: QtC.QWidget, field: QtC.QWidget ```
    pub fn InsertRow(self: ?*anyopaque, row: i32, label: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QFormLayout_InsertRow(@ptrCast(self), @intCast(row), @ptrCast(label), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ``` self: QtC.QFormLayout, row: i32, label: QtC.QWidget, field: QtC.QLayout ```
    pub fn InsertRow2(self: ?*anyopaque, row: i32, label: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QFormLayout_InsertRow2(@ptrCast(self), @intCast(row), @ptrCast(label), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ``` self: QtC.QFormLayout, row: i32, labelText: []const u8, field: QtC.QWidget ```
    pub fn InsertRow3(self: ?*anyopaque, row: i32, labelText: []const u8, field: ?*anyopaque) void {
        const labelText_str = qtc.libqt_string{
            .len = labelText.len,
            .data = labelText.ptr,
        };
        qtc.QFormLayout_InsertRow3(@ptrCast(self), @intCast(row), labelText_str, @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ``` self: QtC.QFormLayout, row: i32, labelText: []const u8, field: QtC.QLayout ```
    pub fn InsertRow4(self: ?*anyopaque, row: i32, labelText: []const u8, field: ?*anyopaque) void {
        const labelText_str = qtc.libqt_string{
            .len = labelText.len,
            .data = labelText.ptr,
        };
        qtc.QFormLayout_InsertRow4(@ptrCast(self), @intCast(row), labelText_str, @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ``` self: QtC.QFormLayout, row: i32, widget: QtC.QWidget ```
    pub fn InsertRow5(self: ?*anyopaque, row: i32, widget: ?*anyopaque) void {
        qtc.QFormLayout_InsertRow5(@ptrCast(self), @intCast(row), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ``` self: QtC.QFormLayout, row: i32, layout: QtC.QLayout ```
    pub fn InsertRow6(self: ?*anyopaque, row: i32, layout: ?*anyopaque) void {
        qtc.QFormLayout_InsertRow6(@ptrCast(self), @intCast(row), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
    ///
    /// ``` self: QtC.QFormLayout, row: i32 ```
    pub fn RemoveRow(self: ?*anyopaque, row: i32) void {
        qtc.QFormLayout_RemoveRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
    ///
    /// ``` self: QtC.QFormLayout, widget: QtC.QWidget ```
    pub fn RemoveRow2(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QFormLayout_RemoveRow2(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
    ///
    /// ``` self: QtC.QFormLayout, layout: QtC.QLayout ```
    pub fn RemoveRow3(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QFormLayout_RemoveRow3(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
    ///
    /// ``` self: QtC.QFormLayout, row: i32 ```
    pub fn TakeRow(self: ?*anyopaque, row: i32) QtC.QFormLayout__TakeRowResult {
        return qtc.QFormLayout_TakeRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
    ///
    /// ``` self: QtC.QFormLayout, widget: QtC.QWidget ```
    pub fn TakeRow2(self: ?*anyopaque, widget: ?*anyopaque) QtC.QFormLayout__TakeRowResult {
        return qtc.QFormLayout_TakeRow2(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
    ///
    /// ``` self: QtC.QFormLayout, layout: QtC.QLayout ```
    pub fn TakeRow3(self: ?*anyopaque, layout: ?*anyopaque) QtC.QFormLayout__TakeRowResult {
        return qtc.QFormLayout_TakeRow3(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setItem)
    ///
    /// ``` self: QtC.QFormLayout, row: i32, role: qformlayout_enums.ItemRole, item: QtC.QLayoutItem ```
    pub fn SetItem(self: ?*anyopaque, row: i32, role: i32, item: ?*anyopaque) void {
        qtc.QFormLayout_SetItem(@ptrCast(self), @intCast(row), @intCast(role), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setWidget)
    ///
    /// ``` self: QtC.QFormLayout, row: i32, role: qformlayout_enums.ItemRole, widget: QtC.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, row: i32, role: i32, widget: ?*anyopaque) void {
        qtc.QFormLayout_SetWidget(@ptrCast(self), @intCast(row), @intCast(role), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setLayout)
    ///
    /// ``` self: QtC.QFormLayout, row: i32, role: qformlayout_enums.ItemRole, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, row: i32, role: i32, layout: ?*anyopaque) void {
        qtc.QFormLayout_SetLayout(@ptrCast(self), @intCast(row), @intCast(role), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
    ///
    /// ``` self: QtC.QFormLayout, row: i32, on: bool ```
    pub fn SetRowVisible(self: ?*anyopaque, row: i32, on: bool) void {
        qtc.QFormLayout_SetRowVisible(@ptrCast(self), @intCast(row), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
    ///
    /// ``` self: QtC.QFormLayout, widget: QtC.QWidget, on: bool ```
    pub fn SetRowVisible2(self: ?*anyopaque, widget: ?*anyopaque, on: bool) void {
        qtc.QFormLayout_SetRowVisible2(@ptrCast(self), @ptrCast(widget), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
    ///
    /// ``` self: QtC.QFormLayout, layout: QtC.QLayout, on: bool ```
    pub fn SetRowVisible3(self: ?*anyopaque, layout: ?*anyopaque, on: bool) void {
        qtc.QFormLayout_SetRowVisible3(@ptrCast(self), @ptrCast(layout), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
    ///
    /// ``` self: QtC.QFormLayout, row: i32 ```
    pub fn IsRowVisible(self: ?*anyopaque, row: i32) bool {
        return qtc.QFormLayout_IsRowVisible(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
    ///
    /// ``` self: QtC.QFormLayout, widget: QtC.QWidget ```
    pub fn IsRowVisible2(self: ?*anyopaque, widget: ?*anyopaque) bool {
        return qtc.QFormLayout_IsRowVisible2(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
    ///
    /// ``` self: QtC.QFormLayout, layout: QtC.QLayout ```
    pub fn IsRowVisible3(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QFormLayout_IsRowVisible3(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
    ///
    /// ``` self: QtC.QFormLayout, row: i32, role: qformlayout_enums.ItemRole ```
    pub fn ItemAt(self: ?*anyopaque, row: i32, role: i32) QtC.QLayoutItem {
        return qtc.QFormLayout_ItemAt(@ptrCast(self), @intCast(row), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
    ///
    /// ``` self: QtC.QFormLayout, field: QtC.QWidget ```
    pub fn LabelForField(self: ?*anyopaque, field: ?*anyopaque) QtC.QWidget {
        return qtc.QFormLayout_LabelForField(@ptrCast(self), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
    ///
    /// ``` self: QtC.QFormLayout, field: QtC.QLayout ```
    pub fn LabelForField2(self: ?*anyopaque, field: ?*anyopaque) QtC.QWidget {
        return qtc.QFormLayout_LabelForField2(@ptrCast(self), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addItem)
    ///
    /// ``` self: QtC.QFormLayout, item: QtC.QLayoutItem ```
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QFormLayout_AddItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, item: QtC.QLayoutItem) callconv(.c) void ```
    pub fn OnAddItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnAddItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addItem)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout, item: QtC.QLayoutItem ```
    pub fn QBaseAddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QFormLayout_QBaseAddItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
    ///
    /// ``` self: QtC.QFormLayout, index: i32 ```
    pub fn ItemAt2(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QFormLayout_ItemAt2(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, index: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnItemAt2(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QFormLayout_OnItemAt2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout, index: i32 ```
    pub fn QBaseItemAt2(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QFormLayout_QBaseItemAt2(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
    ///
    /// ``` self: QtC.QFormLayout, index: i32 ```
    pub fn TakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QFormLayout_TakeAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, index: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnTakeAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QFormLayout_OnTakeAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout, index: i32 ```
    pub fn QBaseTakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QFormLayout_QBaseTakeAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
    ///
    /// ``` self: QtC.QFormLayout, rect: QtC.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QFormLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, rect: QtC.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout, rect: QtC.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QFormLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QFormLayout_MinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QFormLayout_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QFormLayout_QBaseMinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QFormLayout_SizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QFormLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QFormLayout_QBaseSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QFormLayout_Invalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QFormLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QFormLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QFormLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QFormLayout_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QFormLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
    ///
    /// ``` self: QtC.QFormLayout, width: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QFormLayout_HeightForWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, width: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QFormLayout_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout, width: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QFormLayout_QBaseHeightForWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
    ///
    /// ``` self: QtC.QFormLayout ```
    ///
    /// Returns: ``` flag of qnamespace_enums.Orientation ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QFormLayout_ExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QFormLayout_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout ```
    ///
    /// Returns: ``` flag of qnamespace_enums.Orientation ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QFormLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#count)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QFormLayout_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QFormLayout_QBaseCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#rowCount)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return qtc.QFormLayout_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QFormLayout_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qformlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QFormLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qformlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QFormLayout, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QFormLayout, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QLayout_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ``` self: QtC.QFormLayout, left: *i32, top: *i32, right: *i32, bottom: *i32 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QFormLayout, w: QtC.QWidget, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i64) bool {
        return qtc.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QFormLayout, l: QtC.QLayout, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i64) bool {
        return qtc.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ``` self: QtC.QFormLayout, sizeConstraint: qlayout_enums.SizeConstraint ```
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self), @intCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ``` self: QtC.QFormLayout ```
    ///
    /// Returns: ``` qlayout_enums.SizeConstraint ```
    pub fn SizeConstraint(self: ?*anyopaque) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ``` self: QtC.QFormLayout, w: QtC.QWidget ```
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn MenuBar(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_MenuBar(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn Activate(self: ?*anyopaque) bool {
        return qtc.QLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QLayout_Update(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addWidget)
    ///
    /// ``` self: QtC.QFormLayout, w: QtC.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_AddWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ``` self: QtC.QFormLayout, w: QtC.QWidget ```
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ``` self: QtC.QFormLayout, param1: QtC.QLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ``` self: QtC.QFormLayout, param1: QtC.QLayoutItem ```
    pub fn IndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_IndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, param1: QtC.QLayoutItem) callconv(.c) i32 ```
    pub fn OnIndexOf2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFormLayout, param1: QtC.QLayoutItem ```
    pub fn QBaseIndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseIndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ``` self: QtC.QFormLayout, w: i32 ```
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ``` self: QtC.QFormLayout, w: i32 ```
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn TotalMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn TotalMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn TotalSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ``` self: QtC.QFormLayout, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ``` self: QtC.QFormLayout ```
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
    /// ``` self: QtC.QFormLayout, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qformlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QFormLayout, name: []const u8 ```
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
    /// ``` self: QtC.QFormLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QFormLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QFormLayout, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QFormLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QFormLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QFormLayout, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QFormLayout, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qformlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QFormLayout, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QFormLayout, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QFormLayout, obj: QtC.QObject ```
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
    /// ``` self: QtC.QFormLayout, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QFormLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QFormLayout, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QFormLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QFormLayout, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qformlayout.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qformlayout.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QFormLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QFormLayout, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QFormLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QFormLayout, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QFormLayout, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: QtC.QFormLayout ```
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
    /// ``` self: QtC.QFormLayout ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QFormLayout_Geometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QFormLayout_QBaseGeometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QFormLayout_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QFormLayout_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QFormLayout_QBaseMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QFormLayout_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, param1: QtC.QWidget ```
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QFormLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, param1: QtC.QWidget ```
    pub fn QBaseIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QFormLayout_QBaseIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, param1: QtC.QWidget) callconv(.c) i32 ```
    pub fn OnIndexOf(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QFormLayout_OnIndexOf(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QFormLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QFormLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QFormLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    ///
    /// Returns: ``` flag of qsizepolicy_enums.ControlType ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return qtc.QFormLayout_ControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    ///
    /// Returns: ``` flag of qsizepolicy_enums.ControlType ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return qtc.QFormLayout_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QFormLayout_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, from: QtC.QWidget, to: QtC.QWidget, options: flag of qnamespace_enums.FindChildOption ```
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) QtC.QLayoutItem {
        return qtc.QFormLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, from: QtC.QWidget, to: QtC.QWidget, options: flag of qnamespace_enums.FindChildOption ```
    pub fn QBaseReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) QtC.QLayoutItem {
        return qtc.QFormLayout_QBaseReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, from: QtC.QWidget, to: QtC.QWidget, options: flag of qnamespace_enums.FindChildOption) callconv(.c) QtC.QLayoutItem ```
    pub fn OnReplaceWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) QtC.QLayoutItem) void {
        qtc.QFormLayout_OnReplaceWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QFormLayout_Layout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QFormLayout_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) QtC.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QLayout) void {
        qtc.QFormLayout_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, e: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QFormLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, e: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QFormLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, e: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFormLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFormLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFormLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFormLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFormLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFormLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFormLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFormLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFormLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFormLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QFormLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QFormLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QFormLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QFormLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QFormLayout_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QFormLayout_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, param1: i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QFormLayout_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QFormLayout_Widget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QFormLayout_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) QtC.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWidget) void {
        qtc.QFormLayout_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QFormLayout_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QFormLayout_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) QtC.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QFormLayout_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, param1: QtC.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFormLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, param1: QtC.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFormLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, param1: QtC.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, l: QtC.QLayout ```
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QFormLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, l: QtC.QLayout ```
    pub fn QBaseAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QFormLayout_QBaseAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, l: QtC.QLayout) callconv(.c) void ```
    pub fn OnAddChildLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnAddChildLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, w: QtC.QWidget ```
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QFormLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, w: QtC.QWidget ```
    pub fn QBaseAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QFormLayout_QBaseAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, w: QtC.QWidget) callconv(.c) void ```
    pub fn OnAddChildWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormLayout_OnAddChildWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, layout: QtC.QLayout ```
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QFormLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, layout: QtC.QLayout ```
    pub fn QBaseAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QFormLayout_QBaseAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, layout: QtC.QLayout) callconv(.c) bool ```
    pub fn OnAdoptLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFormLayout_OnAdoptLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, param1: QtC.QRect ```
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QFormLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, param1: QtC.QRect ```
    pub fn QBaseAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QFormLayout_QBaseAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, param1: QtC.QRect) callconv(.c) QtC.QRect ```
    pub fn OnAlignmentRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QFormLayout_OnAlignmentRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QFormLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QFormLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QFormLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QFormLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QFormLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QFormLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QFormLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QFormLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QFormLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QFormLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFormLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QFormLayout, slot: fn (self: QtC.QFormLayout, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#dtor.QFormLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFormLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFormLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qformlayout-takerowresult.html
pub const qformlayout__takerowresult = struct {
    /// New constructs a new QFormLayout::TakeRowResult object.
    ///
    ///
    pub fn New() QtC.QFormLayout__TakeRowResult {
        return qtc.QFormLayout__TakeRowResult_new();
    }

    /// New2 constructs a new QFormLayout::TakeRowResult object.
    ///
    /// ``` param1: QtC.QFormLayout__TakeRowResult ```
    pub fn New2(param1: ?*anyopaque) QtC.QFormLayout__TakeRowResult {
        return qtc.QFormLayout__TakeRowResult_new2(@ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFormLayout__TakeRowResult ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFormLayout__TakeRowResult_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qformlayout.html#types
pub const enums = struct {
    pub const FieldGrowthPolicy = enum {
        pub const FieldsStayAtSizeHint: i32 = 0;
        pub const ExpandingFieldsGrow: i32 = 1;
        pub const AllNonFixedFieldsGrow: i32 = 2;
    };

    pub const RowWrapPolicy = enum {
        pub const DontWrapRows: i32 = 0;
        pub const WrapLongRows: i32 = 1;
        pub const WrapAllRows: i32 = 2;
    };

    pub const ItemRole = enum {
        pub const LabelRole: i32 = 0;
        pub const FieldRole: i32 = 1;
        pub const SpanningRole: i32 = 2;
    };
};
