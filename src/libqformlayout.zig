const C = @import("qt6c");
const qformlayout_enums = enums;
const qlayout_enums = @import("libqlayout.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qformlayout.html
pub const qformlayout = struct {
    /// New constructs a new QFormLayout object.
    ///
    /// ``` parent: ?*C.QWidget ```
    pub fn New(parent: ?*anyopaque) ?*C.QFormLayout {
        return C.QFormLayout_new(@ptrCast(parent));
    }

    /// New2 constructs a new QFormLayout object.
    ///
    ///
    pub fn New2() ?*C.QFormLayout {
        return C.QFormLayout_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QFormLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QFormLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QFormLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QFormLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QFormLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QFormLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QFormLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QFormLayout_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setFieldGrowthPolicy)
    ///
    /// ``` self: ?*C.QFormLayout, policy: qformlayout_enums.FieldGrowthPolicy ```
    pub fn SetFieldGrowthPolicy(self: ?*anyopaque, policy: i64) void {
        C.QFormLayout_SetFieldGrowthPolicy(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#fieldGrowthPolicy)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn FieldGrowthPolicy(self: ?*anyopaque) i64 {
        return C.QFormLayout_FieldGrowthPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowWrapPolicy)
    ///
    /// ``` self: ?*C.QFormLayout, policy: qformlayout_enums.RowWrapPolicy ```
    pub fn SetRowWrapPolicy(self: ?*anyopaque, policy: i64) void {
        C.QFormLayout_SetRowWrapPolicy(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#rowWrapPolicy)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn RowWrapPolicy(self: ?*anyopaque) i64 {
        return C.QFormLayout_RowWrapPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setLabelAlignment)
    ///
    /// ``` self: ?*C.QFormLayout, alignment: i32 ```
    pub fn SetLabelAlignment(self: ?*anyopaque, alignment: i64) void {
        C.QFormLayout_SetLabelAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#labelAlignment)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn LabelAlignment(self: ?*anyopaque) i64 {
        return C.QFormLayout_LabelAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setFormAlignment)
    ///
    /// ``` self: ?*C.QFormLayout, alignment: i32 ```
    pub fn SetFormAlignment(self: ?*anyopaque, alignment: i64) void {
        C.QFormLayout_SetFormAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#formAlignment)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn FormAlignment(self: ?*anyopaque) i64 {
        return C.QFormLayout_FormAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setHorizontalSpacing)
    ///
    /// ``` self: ?*C.QFormLayout, spacing: i32 ```
    pub fn SetHorizontalSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QFormLayout_SetHorizontalSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#horizontalSpacing)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn HorizontalSpacing(self: ?*anyopaque) i32 {
        return C.QFormLayout_HorizontalSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setVerticalSpacing)
    ///
    /// ``` self: ?*C.QFormLayout, spacing: i32 ```
    pub fn SetVerticalSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QFormLayout_SetVerticalSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#verticalSpacing)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn VerticalSpacing(self: ?*anyopaque) i32 {
        return C.QFormLayout_VerticalSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#spacing)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return C.QFormLayout_Spacing(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSpacing(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QFormLayout_OnSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseSpacing(self: ?*anyopaque) i32 {
        return C.QFormLayout_QBaseSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
    ///
    /// ``` self: ?*C.QFormLayout, spacing: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QFormLayout_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, i32) callconv(.c) void ```
    pub fn OnSetSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QFormLayout_OnSetSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout, spacing: i32 ```
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QFormLayout_QBaseSetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ``` self: ?*C.QFormLayout, label: ?*C.QWidget, field: ?*C.QWidget ```
    pub fn AddRow(self: ?*anyopaque, label: ?*anyopaque, field: ?*anyopaque) void {
        C.QFormLayout_AddRow(@ptrCast(self), @ptrCast(label), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ``` self: ?*C.QFormLayout, label: ?*C.QWidget, field: ?*C.QLayout ```
    pub fn AddRow2(self: ?*anyopaque, label: ?*anyopaque, field: ?*anyopaque) void {
        C.QFormLayout_AddRow2(@ptrCast(self), @ptrCast(label), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ``` self: ?*C.QFormLayout, labelText: []const u8, field: ?*C.QWidget ```
    pub fn AddRow3(self: ?*anyopaque, labelText: []const u8, field: ?*anyopaque) void {
        const labelText_str = C.struct_libqt_string{
            .len = labelText.len,
            .data = @constCast(labelText.ptr),
        };
        C.QFormLayout_AddRow3(@ptrCast(self), labelText_str, @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ``` self: ?*C.QFormLayout, labelText: []const u8, field: ?*C.QLayout ```
    pub fn AddRow4(self: ?*anyopaque, labelText: []const u8, field: ?*anyopaque) void {
        const labelText_str = C.struct_libqt_string{
            .len = labelText.len,
            .data = @constCast(labelText.ptr),
        };
        C.QFormLayout_AddRow4(@ptrCast(self), labelText_str, @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ``` self: ?*C.QFormLayout, widget: ?*C.QWidget ```
    pub fn AddRowWithWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QFormLayout_AddRowWithWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ``` self: ?*C.QFormLayout, layout: ?*C.QLayout ```
    pub fn AddRowWithLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        C.QFormLayout_AddRowWithLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32, label: ?*C.QWidget, field: ?*C.QWidget ```
    pub fn InsertRow(self: ?*anyopaque, row: i32, label: ?*anyopaque, field: ?*anyopaque) void {
        C.QFormLayout_InsertRow(@ptrCast(self), @intCast(row), @ptrCast(label), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32, label: ?*C.QWidget, field: ?*C.QLayout ```
    pub fn InsertRow2(self: ?*anyopaque, row: i32, label: ?*anyopaque, field: ?*anyopaque) void {
        C.QFormLayout_InsertRow2(@ptrCast(self), @intCast(row), @ptrCast(label), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32, labelText: []const u8, field: ?*C.QWidget ```
    pub fn InsertRow3(self: ?*anyopaque, row: i32, labelText: []const u8, field: ?*anyopaque) void {
        const labelText_str = C.struct_libqt_string{
            .len = labelText.len,
            .data = @constCast(labelText.ptr),
        };
        C.QFormLayout_InsertRow3(@ptrCast(self), @intCast(row), labelText_str, @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32, labelText: []const u8, field: ?*C.QLayout ```
    pub fn InsertRow4(self: ?*anyopaque, row: i32, labelText: []const u8, field: ?*anyopaque) void {
        const labelText_str = C.struct_libqt_string{
            .len = labelText.len,
            .data = @constCast(labelText.ptr),
        };
        C.QFormLayout_InsertRow4(@ptrCast(self), @intCast(row), labelText_str, @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32, widget: ?*C.QWidget ```
    pub fn InsertRow5(self: ?*anyopaque, row: i32, widget: ?*anyopaque) void {
        C.QFormLayout_InsertRow5(@ptrCast(self), @intCast(row), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32, layout: ?*C.QLayout ```
    pub fn InsertRow6(self: ?*anyopaque, row: i32, layout: ?*anyopaque) void {
        C.QFormLayout_InsertRow6(@ptrCast(self), @intCast(row), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32 ```
    pub fn RemoveRow(self: ?*anyopaque, row: i32) void {
        C.QFormLayout_RemoveRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
    ///
    /// ``` self: ?*C.QFormLayout, widget: ?*C.QWidget ```
    pub fn RemoveRowWithWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QFormLayout_RemoveRowWithWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
    ///
    /// ``` self: ?*C.QFormLayout, layout: ?*C.QLayout ```
    pub fn RemoveRowWithLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        C.QFormLayout_RemoveRowWithLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32 ```
    pub fn TakeRow(self: ?*anyopaque, row: i32) ?*C.QFormLayout__TakeRowResult {
        return C.QFormLayout_TakeRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
    ///
    /// ``` self: ?*C.QFormLayout, widget: ?*C.QWidget ```
    pub fn TakeRowWithWidget(self: ?*anyopaque, widget: ?*anyopaque) ?*C.QFormLayout__TakeRowResult {
        return C.QFormLayout_TakeRowWithWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
    ///
    /// ``` self: ?*C.QFormLayout, layout: ?*C.QLayout ```
    pub fn TakeRowWithLayout(self: ?*anyopaque, layout: ?*anyopaque) ?*C.QFormLayout__TakeRowResult {
        return C.QFormLayout_TakeRowWithLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setItem)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32, role: qformlayout_enums.ItemRole, item: ?*C.QLayoutItem ```
    pub fn SetItem(self: ?*anyopaque, row: i32, role: i64, item: ?*anyopaque) void {
        C.QFormLayout_SetItem(@ptrCast(self), @intCast(row), @intCast(role), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setWidget)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32, role: qformlayout_enums.ItemRole, widget: ?*C.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, row: i32, role: i64, widget: ?*anyopaque) void {
        C.QFormLayout_SetWidget(@ptrCast(self), @intCast(row), @intCast(role), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setLayout)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32, role: qformlayout_enums.ItemRole, layout: ?*C.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, row: i32, role: i64, layout: ?*anyopaque) void {
        C.QFormLayout_SetLayout(@ptrCast(self), @intCast(row), @intCast(role), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32, on: bool ```
    pub fn SetRowVisible(self: ?*anyopaque, row: i32, on: bool) void {
        C.QFormLayout_SetRowVisible(@ptrCast(self), @intCast(row), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
    ///
    /// ``` self: ?*C.QFormLayout, widget: ?*C.QWidget, on: bool ```
    pub fn SetRowVisible2(self: ?*anyopaque, widget: ?*anyopaque, on: bool) void {
        C.QFormLayout_SetRowVisible2(@ptrCast(self), @ptrCast(widget), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
    ///
    /// ``` self: ?*C.QFormLayout, layout: ?*C.QLayout, on: bool ```
    pub fn SetRowVisible3(self: ?*anyopaque, layout: ?*anyopaque, on: bool) void {
        C.QFormLayout_SetRowVisible3(@ptrCast(self), @ptrCast(layout), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32 ```
    pub fn IsRowVisible(self: ?*anyopaque, row: i32) bool {
        return C.QFormLayout_IsRowVisible(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
    ///
    /// ``` self: ?*C.QFormLayout, widget: ?*C.QWidget ```
    pub fn IsRowVisibleWithWidget(self: ?*anyopaque, widget: ?*anyopaque) bool {
        return C.QFormLayout_IsRowVisibleWithWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
    ///
    /// ``` self: ?*C.QFormLayout, layout: ?*C.QLayout ```
    pub fn IsRowVisibleWithLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return C.QFormLayout_IsRowVisibleWithLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
    ///
    /// ``` self: ?*C.QFormLayout, row: i32, role: qformlayout_enums.ItemRole ```
    pub fn ItemAt(self: ?*anyopaque, row: i32, role: i64) ?*C.QLayoutItem {
        return C.QFormLayout_ItemAt(@ptrCast(self), @intCast(row), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
    ///
    /// ``` self: ?*C.QFormLayout, field: ?*C.QWidget ```
    pub fn LabelForField(self: ?*anyopaque, field: ?*anyopaque) ?*C.QWidget {
        return C.QFormLayout_LabelForField(@ptrCast(self), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
    ///
    /// ``` self: ?*C.QFormLayout, field: ?*C.QLayout ```
    pub fn LabelForFieldWithField(self: ?*anyopaque, field: ?*anyopaque) ?*C.QWidget {
        return C.QFormLayout_LabelForFieldWithField(@ptrCast(self), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addItem)
    ///
    /// ``` self: ?*C.QFormLayout, item: ?*C.QLayoutItem ```
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QFormLayout_AddItem(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QLayoutItem) callconv(.c) void ```
    pub fn OnAddItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QFormLayout_OnAddItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout, item: ?*C.QLayoutItem ```
    pub fn QBaseAddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QFormLayout_QBaseAddItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
    ///
    /// ``` self: ?*C.QFormLayout, index: i32 ```
    pub fn ItemAtWithIndex(self: ?*anyopaque, index: i32) ?*C.QLayoutItem {
        return C.QFormLayout_ItemAtWithIndex(@ptrCast(self), @intCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnItemAtWithIndex(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QLayoutItem) void {
        C.QFormLayout_OnItemAtWithIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout, index: i32 ```
    pub fn QBaseItemAtWithIndex(self: ?*anyopaque, index: i32) ?*C.QLayoutItem {
        return C.QFormLayout_QBaseItemAtWithIndex(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
    ///
    /// ``` self: ?*C.QFormLayout, index: i32 ```
    pub fn TakeAt(self: ?*anyopaque, index: i32) ?*C.QLayoutItem {
        return C.QFormLayout_TakeAt(@ptrCast(self), @intCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnTakeAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QLayoutItem) void {
        C.QFormLayout_OnTakeAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout, index: i32 ```
    pub fn QBaseTakeAt(self: ?*anyopaque, index: i32) ?*C.QLayoutItem {
        return C.QFormLayout_QBaseTakeAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
    ///
    /// ``` self: ?*C.QFormLayout, rect: ?*C.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QFormLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QFormLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout, rect: ?*C.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QFormLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QFormLayout_MinimumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QFormLayout_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QFormLayout_QBaseMinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn SizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QFormLayout_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QFormLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QFormLayout_QBaseSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        C.QFormLayout_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QFormLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        C.QFormLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return C.QFormLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QFormLayout_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return C.QFormLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
    ///
    /// ``` self: ?*C.QFormLayout, width: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return C.QFormLayout_HeightForWidth(@ptrCast(self), @intCast(width));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QFormLayout_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout, width: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return C.QFormLayout_QBaseHeightForWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return C.QFormLayout_ExpandingDirections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QFormLayout_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return C.QFormLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#count)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return C.QFormLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QFormLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return C.QFormLayout_QBaseCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#rowCount)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return C.QFormLayout_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QFormLayout_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QFormLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QFormLayout, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QLayout_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QFormLayout, margins: ?*C.QMargins ```
    pub fn SetContentsMarginsWithMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        C.QLayout_SetContentsMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        C.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ``` self: ?*C.QFormLayout, left: ?*i32, top: ?*i32, right: ?*i32, bottom: ?*i32 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QLayout_GetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn ContentsMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn ContentsRect(self: ?*anyopaque) ?*C.QRect {
        return C.QLayout_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: ?*C.QFormLayout, w: ?*C.QWidget, alignment: i32 ```
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i64) bool {
        return C.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: ?*C.QFormLayout, l: ?*C.QLayout, alignment: i32 ```
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i64) bool {
        return C.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ``` self: ?*C.QFormLayout, sizeConstraint: qlayout_enums.SizeConstraint ```
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i64) void {
        C.QLayout_SetSizeConstraint(@ptrCast(self), @intCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn SizeConstraint(self: ?*anyopaque) i64 {
        return C.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ``` self: ?*C.QFormLayout, w: ?*C.QWidget ```
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn MenuBar(self: ?*anyopaque) ?*C.QWidget {
        return C.QLayout_MenuBar(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn ParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QLayout_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn Activate(self: ?*anyopaque) bool {
        return C.QLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn Update(self: ?*anyopaque) void {
        C.QLayout_Update(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QFormLayout, w: ?*C.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QLayout_AddWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ``` self: ?*C.QFormLayout, w: ?*C.QWidget ```
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ``` self: ?*C.QFormLayout, param1: ?*C.QLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ``` self: ?*C.QFormLayout, param1: ?*C.QLayoutItem ```
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
    /// ``` self: ?*C.QFormLayout, param1: ?*C.QLayoutItem ```
    pub fn QBaseIndexOfWithQLayoutItem(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QLayout_QBaseIndexOfWithQLayoutItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ``` self: ?*C.QFormLayout, w: i32 ```
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return C.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ``` self: ?*C.QFormLayout, w: i32 ```
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return C.QLayout_TotalHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn TotalMinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn TotalMaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn TotalSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ``` self: ?*C.QFormLayout, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ``` self: ?*C.QFormLayout ```
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
    /// ``` self: ?*C.QFormLayout, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QFormLayout, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QFormLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QFormLayout, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QFormLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QFormLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QFormLayout, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QFormLayout, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QFormLayout, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QFormLayout, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QFormLayout, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QFormLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QFormLayout, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QFormLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QFormLayout, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QFormLayout ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QFormLayout ```
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
    /// ``` self: ?*C.QFormLayout ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QFormLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QFormLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QFormLayout, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QFormLayout, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QFormLayout ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return C.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRect {
        return C.QFormLayout_Geometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QFormLayout_QBaseGeometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) ?*C.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QRect) void {
        C.QFormLayout_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QFormLayout_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QFormLayout_QBaseMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QFormLayout_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, param1: ?*C.QWidget ```
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QFormLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, param1: ?*C.QWidget ```
    pub fn QBaseIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QFormLayout_QBaseIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QWidget) callconv(.c) i32 ```
    pub fn OnIndexOf(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QFormLayout_OnIndexOf(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return C.QFormLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return C.QFormLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QFormLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return C.QFormLayout_ControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return C.QFormLayout_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QFormLayout_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, from: ?*C.QWidget, to: ?*C.QWidget, options: i32 ```
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) ?*C.QLayoutItem {
        return C.QFormLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, from: ?*C.QWidget, to: ?*C.QWidget, options: i32 ```
    pub fn QBaseReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) ?*C.QLayoutItem {
        return C.QFormLayout_QBaseReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QWidget, ?*C.QWidget, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnReplaceWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) ?*C.QLayoutItem) void {
        C.QFormLayout_OnReplaceWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn Layout(self: ?*anyopaque) ?*C.QLayout {
        return C.QFormLayout_Layout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseLayout(self: ?*anyopaque) ?*C.QLayout {
        return C.QFormLayout_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) ?*C.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QLayout) void {
        C.QFormLayout_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, e: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QFormLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, e: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QFormLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QFormLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QFormLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QFormLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QFormLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QFormLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QFormLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QFormLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QFormLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QFormLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QFormLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QFormLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QFormLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QFormLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QFormLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QFormLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QFormLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QFormLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QFormLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QFormLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QFormLayout_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QFormLayout_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QFormLayout_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn Widget(self: ?*anyopaque) ?*C.QWidget {
        return C.QFormLayout_Widget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QFormLayout_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) ?*C.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QWidget) void {
        C.QFormLayout_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn SpacerItem(self: ?*anyopaque) ?*C.QSpacerItem {
        return C.QFormLayout_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) ?*C.QSpacerItem {
        return C.QFormLayout_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) ?*C.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSpacerItem) void {
        C.QFormLayout_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, param1: ?*C.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QFormLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, param1: ?*C.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QFormLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QFormLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, l: ?*C.QLayout ```
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        C.QFormLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, l: ?*C.QLayout ```
    pub fn QBaseAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        C.QFormLayout_QBaseAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QLayout) callconv(.c) void ```
    pub fn OnAddChildLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QFormLayout_OnAddChildLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, w: ?*C.QWidget ```
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QFormLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, w: ?*C.QWidget ```
    pub fn QBaseAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QFormLayout_QBaseAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QWidget) callconv(.c) void ```
    pub fn OnAddChildWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QFormLayout_OnAddChildWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, layout: ?*C.QLayout ```
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return C.QFormLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, layout: ?*C.QLayout ```
    pub fn QBaseAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return C.QFormLayout_QBaseAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QLayout) callconv(.c) bool ```
    pub fn OnAdoptLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QFormLayout_OnAdoptLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, param1: ?*C.QRect ```
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QRect {
        return C.QFormLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, param1: ?*C.QRect ```
    pub fn QBaseAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QRect {
        return C.QFormLayout_QBaseAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QRect) callconv(.c) ?*C.QRect ```
    pub fn OnAlignmentRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QFormLayout_OnAlignmentRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QFormLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QFormLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QFormLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QFormLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QFormLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QFormLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QFormLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QFormLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QFormLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QFormLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QFormLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QFormLayout, slot: fn (?*C.QFormLayout, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QFormLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QFormLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QFormLayout_Delete(@ptrCast(self));
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
