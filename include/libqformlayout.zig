const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QLayout = @import("libqt6").QLayout;
const QLayoutItem = @import("libqt6").QLayoutItem;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QSpacerItem = @import("libqt6").QSpacerItem;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qformlayout_enums = enums;
const qlayout_enums = @import("libqlayout.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html)
pub const QFormLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFormLayout,

    pub const _is_QFormLayout = {};
    pub const _is_QLayout = {};
    pub const _is_QObject = {};
    pub const _is_QLayoutItem = {};

    /// New constructs a new QFormLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QFormLayout {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QFormLayout_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QFormLayout object.
    ///
    pub fn New2() QFormLayout {
        return .{ .ptr = qtc.QFormLayout_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn MetaObject(self: QFormLayout) QMetaObject {
        return .{ .ptr = qtc.QFormLayout_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QFormLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QFormLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperMetaObject(self: QFormLayout) QMetaObject {
        return .{ .ptr = qtc.QFormLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QFormLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFormLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QFormLayout, callback: *const fn (QFormLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QFormLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QFormLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFormLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QFormLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QFormLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QFormLayout, callback: *const fn (QFormLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QFormLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QFormLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QFormLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qformlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setFieldGrowthPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` policy: qformlayout_enums.FieldGrowthPolicy `
    ///
    pub fn SetFieldGrowthPolicy(self: QFormLayout, policy: i32) void {
        qtc.QFormLayout_SetFieldGrowthPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#fieldGrowthPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ## Returns:
    ///
    /// ` qformlayout_enums.FieldGrowthPolicy `
    ///
    pub fn FieldGrowthPolicy(self: QFormLayout) i32 {
        return qtc.QFormLayout_FieldGrowthPolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setRowWrapPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` policy: qformlayout_enums.RowWrapPolicy `
    ///
    pub fn SetRowWrapPolicy(self: QFormLayout, policy: i32) void {
        qtc.QFormLayout_SetRowWrapPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#rowWrapPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ## Returns:
    ///
    /// ` qformlayout_enums.RowWrapPolicy `
    ///
    pub fn RowWrapPolicy(self: QFormLayout) i32 {
        return qtc.QFormLayout_RowWrapPolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setLabelAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetLabelAlignment(self: QFormLayout, alignment: i32) void {
        qtc.QFormLayout_SetLabelAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#labelAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn LabelAlignment(self: QFormLayout) i32 {
        return qtc.QFormLayout_LabelAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setFormAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetFormAlignment(self: QFormLayout, alignment: i32) void {
        qtc.QFormLayout_SetFormAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#formAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn FormAlignment(self: QFormLayout) i32 {
        return qtc.QFormLayout_FormAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setHorizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetHorizontalSpacing(self: QFormLayout, spacing: i32) void {
        qtc.QFormLayout_SetHorizontalSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#horizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn HorizontalSpacing(self: QFormLayout) i32 {
        return qtc.QFormLayout_HorizontalSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setVerticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetVerticalSpacing(self: QFormLayout, spacing: i32) void {
        qtc.QFormLayout_SetVerticalSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#verticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn VerticalSpacing(self: QFormLayout) i32 {
        return qtc.QFormLayout_VerticalSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Spacing(self: QFormLayout) i32 {
        return qtc.QFormLayout_Spacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#spacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSpacing(self: QFormLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSpacing` instead
    ///
    pub const QBaseSpacing = SuperSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#spacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperSpacing(self: QFormLayout) i32 {
        return qtc.QFormLayout_SuperSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetSpacing(self: QFormLayout, spacing: i32) void {
        qtc.QFormLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, spacing: i32) callconv(.c) void `
    ///
    pub fn OnSetSpacing(self: QFormLayout, callback: *const fn (QFormLayout, i32) callconv(.c) void) void {
        qtc.QFormLayout_OnSetSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSpacing` instead
    ///
    pub const QBaseSetSpacing = SuperSetSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SuperSetSpacing(self: QFormLayout, spacing: i32) void {
        qtc.QFormLayout_SuperSetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` label: QWidget `
    ///
    /// ` field: QWidget `
    ///
    pub fn AddRow(self: QFormLayout, label: anytype, field: anytype) void {
        comptime _ = @TypeOf(label)._is_QWidget;
        comptime _ = @TypeOf(field)._is_QWidget;
        qtc.QFormLayout_AddRow(@ptrCast(self.ptr), @ptrCast(label.ptr), @ptrCast(field.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` label: QWidget `
    ///
    /// ` field: QLayout `
    ///
    pub fn AddRow2(self: QFormLayout, label: anytype, field: anytype) void {
        comptime _ = @TypeOf(label)._is_QWidget;
        comptime _ = @TypeOf(field)._is_QLayout;
        qtc.QFormLayout_AddRow2(@ptrCast(self.ptr), @ptrCast(label.ptr), @ptrCast(field.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` labelText: []const u8 `
    ///
    /// ` field: QWidget `
    ///
    pub fn AddRow3(self: QFormLayout, labelText: []const u8, field: anytype) void {
        const labelText_str = qtc.libqt_string{
            .len = labelText.len,
            .data = labelText.ptr,
        };
        comptime _ = @TypeOf(field)._is_QWidget;
        qtc.QFormLayout_AddRow3(@ptrCast(self.ptr), labelText_str, @ptrCast(field.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` labelText: []const u8 `
    ///
    /// ` field: QLayout `
    ///
    pub fn AddRow4(self: QFormLayout, labelText: []const u8, field: anytype) void {
        const labelText_str = qtc.libqt_string{
            .len = labelText.len,
            .data = labelText.ptr,
        };
        comptime _ = @TypeOf(field)._is_QLayout;
        qtc.QFormLayout_AddRow4(@ptrCast(self.ptr), labelText_str, @ptrCast(field.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` widget: QWidget `
    ///
    pub fn AddRow5(self: QFormLayout, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QFormLayout_AddRow5(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn AddRow6(self: QFormLayout, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QFormLayout_AddRow6(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` label: QWidget `
    ///
    /// ` field: QWidget `
    ///
    pub fn InsertRow(self: QFormLayout, row: i32, label: anytype, field: anytype) void {
        comptime _ = @TypeOf(label)._is_QWidget;
        comptime _ = @TypeOf(field)._is_QWidget;
        qtc.QFormLayout_InsertRow(@ptrCast(self.ptr), @bitCast(row), @ptrCast(label.ptr), @ptrCast(field.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` label: QWidget `
    ///
    /// ` field: QLayout `
    ///
    pub fn InsertRow2(self: QFormLayout, row: i32, label: anytype, field: anytype) void {
        comptime _ = @TypeOf(label)._is_QWidget;
        comptime _ = @TypeOf(field)._is_QLayout;
        qtc.QFormLayout_InsertRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(label.ptr), @ptrCast(field.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` labelText: []const u8 `
    ///
    /// ` field: QWidget `
    ///
    pub fn InsertRow3(self: QFormLayout, row: i32, labelText: []const u8, field: anytype) void {
        const labelText_str = qtc.libqt_string{
            .len = labelText.len,
            .data = labelText.ptr,
        };
        comptime _ = @TypeOf(field)._is_QWidget;
        qtc.QFormLayout_InsertRow3(@ptrCast(self.ptr), @bitCast(row), labelText_str, @ptrCast(field.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` labelText: []const u8 `
    ///
    /// ` field: QLayout `
    ///
    pub fn InsertRow4(self: QFormLayout, row: i32, labelText: []const u8, field: anytype) void {
        const labelText_str = qtc.libqt_string{
            .len = labelText.len,
            .data = labelText.ptr,
        };
        comptime _ = @TypeOf(field)._is_QLayout;
        qtc.QFormLayout_InsertRow4(@ptrCast(self.ptr), @bitCast(row), labelText_str, @ptrCast(field.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` widget: QWidget `
    ///
    pub fn InsertRow5(self: QFormLayout, row: i32, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QFormLayout_InsertRow5(@ptrCast(self.ptr), @bitCast(row), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` layout: QLayout `
    ///
    pub fn InsertRow6(self: QFormLayout, row: i32, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QFormLayout_InsertRow6(@ptrCast(self.ptr), @bitCast(row), @ptrCast(layout.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RemoveRow(self: QFormLayout, row: i32) void {
        qtc.QFormLayout_RemoveRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` widget: QWidget `
    ///
    pub fn RemoveRow2(self: QFormLayout, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QFormLayout_RemoveRow2(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn RemoveRow3(self: QFormLayout, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QFormLayout_RemoveRow3(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn TakeRow(self: QFormLayout, row: i32) QFormLayout__TakeRowResult {
        return .{ .ptr = qtc.QFormLayout_TakeRow(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` widget: QWidget `
    ///
    pub fn TakeRow2(self: QFormLayout, widget: anytype) QFormLayout__TakeRowResult {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QFormLayout_TakeRow2(@ptrCast(self.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn TakeRow3(self: QFormLayout, layout: anytype) QFormLayout__TakeRowResult {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return .{ .ptr = qtc.QFormLayout_TakeRow3(@ptrCast(self.ptr), @ptrCast(layout.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` role: qformlayout_enums.ItemRole `
    ///
    /// ` item: QLayoutItem `
    ///
    pub fn SetItem(self: QFormLayout, row: i32, role: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        qtc.QFormLayout_SetItem(@ptrCast(self.ptr), @bitCast(row), @bitCast(role), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` role: qformlayout_enums.ItemRole `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: QFormLayout, row: i32, role: i32, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QFormLayout_SetWidget(@ptrCast(self.ptr), @bitCast(row), @bitCast(role), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` role: qformlayout_enums.ItemRole `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QFormLayout, row: i32, role: i32, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QFormLayout_SetLayout(@ptrCast(self.ptr), @bitCast(row), @bitCast(role), @ptrCast(layout.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` on: bool `
    ///
    pub fn SetRowVisible(self: QFormLayout, row: i32, on: bool) void {
        qtc.QFormLayout_SetRowVisible(@ptrCast(self.ptr), @bitCast(row), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` widget: QWidget `
    ///
    /// ` on: bool `
    ///
    pub fn SetRowVisible2(self: QFormLayout, widget: anytype, on: bool) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QFormLayout_SetRowVisible2(@ptrCast(self.ptr), @ptrCast(widget.ptr), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` layout: QLayout `
    ///
    /// ` on: bool `
    ///
    pub fn SetRowVisible3(self: QFormLayout, layout: anytype, on: bool) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QFormLayout_SetRowVisible3(@ptrCast(self.ptr), @ptrCast(layout.ptr), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn IsRowVisible(self: QFormLayout, row: i32) bool {
        return qtc.QFormLayout_IsRowVisible(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` widget: QWidget `
    ///
    pub fn IsRowVisible2(self: QFormLayout, widget: anytype) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QFormLayout_IsRowVisible2(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn IsRowVisible3(self: QFormLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QFormLayout_IsRowVisible3(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` role: qformlayout_enums.ItemRole `
    ///
    pub fn ItemAt(self: QFormLayout, row: i32, role: i32) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout_ItemAt(@ptrCast(self.ptr), @bitCast(row), @bitCast(role)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#getItemPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` rowPtr: *i32 `
    ///
    /// ` rolePtr: *qformlayout_enums.ItemRole `
    ///
    pub fn GetItemPosition(self: QFormLayout, index: i32, rowPtr: *i32, rolePtr: *i32) void {
        qtc.QFormLayout_GetItemPosition(@ptrCast(self.ptr), @bitCast(index), @ptrCast(rowPtr), @ptrCast(rolePtr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#getWidgetPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` widget: QWidget `
    ///
    /// ` rowPtr: *i32 `
    ///
    /// ` rolePtr: *qformlayout_enums.ItemRole `
    ///
    pub fn GetWidgetPosition(self: QFormLayout, widget: anytype, rowPtr: *i32, rolePtr: *i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QFormLayout_GetWidgetPosition(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(rowPtr), @ptrCast(rolePtr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#getLayoutPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` layout: QLayout `
    ///
    /// ` rowPtr: *i32 `
    ///
    /// ` rolePtr: *qformlayout_enums.ItemRole `
    ///
    pub fn GetLayoutPosition(self: QFormLayout, layout: anytype, rowPtr: *i32, rolePtr: *i32) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QFormLayout_GetLayoutPosition(@ptrCast(self.ptr), @ptrCast(layout.ptr), @ptrCast(rowPtr), @ptrCast(rolePtr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` field: QWidget `
    ///
    pub fn LabelForField(self: QFormLayout, field: anytype) QWidget {
        comptime _ = @TypeOf(field)._is_QWidget;
        return .{ .ptr = qtc.QFormLayout_LabelForField(@ptrCast(self.ptr), @ptrCast(field.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` field: QLayout `
    ///
    pub fn LabelForField2(self: QFormLayout, field: anytype) QWidget {
        comptime _ = @TypeOf(field)._is_QLayout;
        return .{ .ptr = qtc.QFormLayout_LabelForField2(@ptrCast(self.ptr), @ptrCast(field.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` item: QLayoutItem `
    ///
    pub fn AddItem(self: QFormLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        qtc.QFormLayout_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, item: QLayoutItem) callconv(.c) void `
    ///
    pub fn OnAddItem(self: QFormLayout, callback: *const fn (QFormLayout, QLayoutItem) callconv(.c) void) void {
        qtc.QFormLayout_OnAddItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddItem` instead
    ///
    pub const QBaseAddItem = SuperAddItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` item: QLayoutItem `
    ///
    pub fn SuperAddItem(self: QFormLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        qtc.QFormLayout_SuperAddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemAt2(self: QFormLayout, index: i32) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout_ItemAt2(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, index: i32) callconv(.c) QLayoutItem `
    ///
    pub fn OnItemAt2(self: QFormLayout, callback: *const fn (QFormLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QFormLayout_OnItemAt2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemAt2` instead
    ///
    pub const QBaseItemAt2 = SuperItemAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperItemAt2(self: QFormLayout, index: i32) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout_SuperItemAt2(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn TakeAt(self: QFormLayout, index: i32) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout_TakeAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, index: i32) callconv(.c) QLayoutItem `
    ///
    pub fn OnTakeAt(self: QFormLayout, callback: *const fn (QFormLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QFormLayout_OnTakeAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTakeAt` instead
    ///
    pub const QBaseTakeAt = SuperTakeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperTakeAt(self: QFormLayout, index: i32) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout_SuperTakeAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetGeometry(self: QFormLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QFormLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, rect: QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: QFormLayout, callback: *const fn (QFormLayout, QRect) callconv(.c) void) void {
        qtc.QFormLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` rect: QRect `
    ///
    pub fn SuperSetGeometry(self: QFormLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QFormLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn MinimumSize(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QFormLayout_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSize(self: QFormLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QFormLayout_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumSize` instead
    ///
    pub const QBaseMinimumSize = SuperMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperMinimumSize(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QFormLayout_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SizeHint(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QFormLayout_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QFormLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QFormLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperSizeHint(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QFormLayout_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Invalidate(self: QFormLayout) void {
        qtc.QFormLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: QFormLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QFormLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperInvalidate(self: QFormLayout) void {
        qtc.QFormLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn HasHeightForWidth(self: QFormLayout) bool {
        return qtc.QFormLayout_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QFormLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QFormLayout_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperHasHeightForWidth(self: QFormLayout) bool {
        return qtc.QFormLayout_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` width: i32 `
    ///
    pub fn HeightForWidth(self: QFormLayout, width: i32) i32 {
        return qtc.QFormLayout_HeightForWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, width: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QFormLayout, callback: *const fn (QFormLayout, i32) callconv(.c) i32) void {
        qtc.QFormLayout_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` width: i32 `
    ///
    pub fn SuperHeightForWidth(self: QFormLayout, width: i32) i32 {
        return qtc.QFormLayout_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: QFormLayout) i32 {
        return qtc.QFormLayout_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: QFormLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandingDirections` instead
    ///
    pub const QBaseExpandingDirections = SuperExpandingDirections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: QFormLayout) i32 {
        return qtc.QFormLayout_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Count(self: QFormLayout) i32 {
        return qtc.QFormLayout_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: QFormLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperCount(self: QFormLayout) i32 {
        return qtc.QFormLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn RowCount(self: QFormLayout) i32 {
        return qtc.QFormLayout_RowCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qformlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qformlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QFormLayout, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QFormLayout, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLayout_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn UnsetContentsMargins(self: QFormLayout) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` left: *i32 `
    ///
    /// ` top: *i32 `
    ///
    /// ` right: *i32 `
    ///
    /// ` bottom: *i32 `
    ///
    pub fn GetContentsMargins(self: QFormLayout, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn ContentsMargins(self: QFormLayout) QMargins {
        return .{ .ptr = qtc.QLayout_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn ContentsRect(self: QFormLayout) QRect {
        return .{ .ptr = qtc.QLayout_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` w: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QFormLayout, w: anytype, alignment: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` l: QLayout `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment2(self: QFormLayout, l: anytype, alignment: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QLayout_SetAlignment2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` sizeConstraint: qlayout_enums.SizeConstraint `
    ///
    pub fn SetSizeConstraint(self: QFormLayout, sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self.ptr), @bitCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ## Returns:
    ///
    /// ` qlayout_enums.SizeConstraint `
    ///
    pub fn SizeConstraint(self: QFormLayout) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn SetMenuBar(self: QFormLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_SetMenuBar(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn MenuBar(self: QFormLayout) QWidget {
        return .{ .ptr = qtc.QLayout_MenuBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn ParentWidget(self: QFormLayout) QWidget {
        return .{ .ptr = qtc.QLayout_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Activate(self: QFormLayout) bool {
        return qtc.QLayout_Activate(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Update(self: QFormLayout) void {
        qtc.QLayout_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn AddWidget(self: QFormLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_AddWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn RemoveWidget(self: QFormLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_RemoveWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn RemoveItem(self: QFormLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn IndexOf2(self: QFormLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_IndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, param1: QLayoutItem) callconv(.c) i32 `
    ///
    pub fn OnIndexOf2(self: QFormLayout, callback: *const fn (QFormLayout, QLayoutItem) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexOf2` instead
    ///
    pub const QBaseIndexOf2 = SuperIndexOf2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn SuperIndexOf2(self: QFormLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_SuperIndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn TotalMinimumHeightForWidth(self: QFormLayout, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn TotalHeightForWidth(self: QFormLayout, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn TotalMinimumSize(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn TotalMaximumSize(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn TotalSizeHint(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QFormLayout, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn IsEnabled(self: QFormLayout) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QWidget `
    ///
    /// ` s: QSize `
    ///
    pub fn ClosestAcceptableSize(w: anytype, s: anytype) QSize {
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QLayout_ClosestAcceptableSize(@ptrCast(w.ptr), @ptrCast(s.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QFormLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qformlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QFormLayout, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn IsWidgetType(self: QFormLayout) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn IsWindowType(self: QFormLayout) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn IsQuickItemType(self: QFormLayout) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SignalsBlocked(self: QFormLayout) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QFormLayout, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Thread(self: QFormLayout) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QFormLayout, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QFormLayout, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QFormLayout, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QFormLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QFormLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QFormLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qformlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QFormLayout, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QFormLayout, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QFormLayout, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QFormLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Disconnect3(self: QFormLayout) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QFormLayout, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn DumpObjectTree(self: QFormLayout) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn DumpObjectInfo(self: QFormLayout) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QFormLayout, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QFormLayout, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QFormLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn BindingStorage(self: QFormLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn BindingStorage2(self: QFormLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Destroyed(self: QFormLayout) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QFormLayout, callback: *const fn (QFormLayout) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Parent(self: QFormLayout) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QFormLayout, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn DeleteLater(self: QFormLayout) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QFormLayout, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QFormLayout, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QFormLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QFormLayout, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QFormLayout, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QFormLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QFormLayout, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QFormLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QFormLayout, callback: *const fn (QFormLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QFormLayout) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Geometry(self: QFormLayout) QRect {
        return .{ .ptr = qtc.QFormLayout_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperGeometry` instead
    ///
    pub const QBaseGeometry = SuperGeometry;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperGeometry(self: QFormLayout) QRect {
        return .{ .ptr = qtc.QFormLayout_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    pub fn OnGeometry(self: QFormLayout, callback: *const fn () callconv(.c) QRect) void {
        qtc.QFormLayout_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn MaximumSize(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QFormLayout_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMaximumSize` instead
    ///
    pub const QBaseMaximumSize = SuperMaximumSize;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperMaximumSize(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QFormLayout_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMaximumSize(self: QFormLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QFormLayout_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IndexOf(self: QFormLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QFormLayout_IndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperIndexOf` instead
    ///
    pub const QBaseIndexOf = SuperIndexOf;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn SuperIndexOf(self: QFormLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QFormLayout_SuperIndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, param1: QWidget) callconv(.c) i32 `
    ///
    pub fn OnIndexOf(self: QFormLayout, callback: *const fn (QFormLayout, QWidget) callconv(.c) i32) void {
        qtc.QFormLayout_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn IsEmpty(self: QFormLayout) bool {
        return qtc.QFormLayout_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperIsEmpty(self: QFormLayout) bool {
        return qtc.QFormLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: QFormLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QFormLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: QFormLayout) i32 {
        return qtc.QFormLayout_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperControlTypes` instead
    ///
    pub const QBaseControlTypes = SuperControlTypes;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: QFormLayout) i32 {
        return qtc.QFormLayout_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: QFormLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` from: QWidget `
    ///
    /// ` to: QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn ReplaceWidget(self: QFormLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QFormLayout_ReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `SuperReplaceWidget` instead
    ///
    pub const QBaseReplaceWidget = SuperReplaceWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` from: QWidget `
    ///
    /// ` to: QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn SuperReplaceWidget(self: QFormLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QFormLayout_SuperReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, from: QWidget, to: QWidget, options: flag of qnamespace_enums.FindChildOption) callconv(.c) QLayoutItem `
    ///
    pub fn OnReplaceWidget(self: QFormLayout, callback: *const fn (QFormLayout, QWidget, QWidget, i32) callconv(.c) QLayoutItem) void {
        qtc.QFormLayout_OnReplaceWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Layout(self: QFormLayout) QLayout {
        return .{ .ptr = qtc.QFormLayout_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperLayout` instead
    ///
    pub const QBaseLayout = SuperLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperLayout(self: QFormLayout) QLayout {
        return .{ .ptr = qtc.QFormLayout_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QLayout `
    ///
    pub fn OnLayout(self: QFormLayout, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QFormLayout_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` e: QChildEvent `
    ///
    pub fn ChildEvent(self: QFormLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QFormLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` e: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QFormLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QFormLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, e: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QFormLayout, callback: *const fn (QFormLayout, QChildEvent) callconv(.c) void) void {
        qtc.QFormLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QFormLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QFormLayout_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QFormLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QFormLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QFormLayout, callback: *const fn (QFormLayout, QEvent) callconv(.c) bool) void {
        qtc.QFormLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QFormLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QFormLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QFormLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QFormLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QFormLayout, callback: *const fn (QFormLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QFormLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QFormLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QFormLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QFormLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QFormLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QFormLayout, callback: *const fn (QFormLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QFormLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QFormLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QFormLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QFormLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QFormLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QFormLayout, callback: *const fn (QFormLayout, QEvent) callconv(.c) void) void {
        qtc.QFormLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QFormLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QFormLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QFormLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QFormLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QFormLayout, callback: *const fn (QFormLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QFormLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QFormLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QFormLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QFormLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QFormLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QFormLayout, callback: *const fn (QFormLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QFormLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: QFormLayout, param1: i32) i32 {
        return qtc.QFormLayout_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMinimumHeightForWidth` instead
    ///
    pub const QBaseMinimumHeightForWidth = SuperMinimumHeightForWidth;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: QFormLayout, param1: i32) i32 {
        return qtc.QFormLayout_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: QFormLayout, callback: *const fn (QFormLayout, i32) callconv(.c) i32) void {
        qtc.QFormLayout_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Widget(self: QFormLayout) QWidget {
        return .{ .ptr = qtc.QFormLayout_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperWidget(self: QFormLayout) QWidget {
        return .{ .ptr = qtc.QFormLayout_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnWidget(self: QFormLayout, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QFormLayout_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SpacerItem(self: QFormLayout) QSpacerItem {
        return .{ .ptr = qtc.QFormLayout_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSpacerItem` instead
    ///
    pub const QBaseSpacerItem = SuperSpacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperSpacerItem(self: QFormLayout) QSpacerItem {
        return .{ .ptr = qtc.QFormLayout_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSpacerItem `
    ///
    pub fn OnSpacerItem(self: QFormLayout, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QFormLayout_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: QEvent `
    ///
    pub fn WidgetEvent(self: QFormLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QFormLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperWidgetEvent` instead
    ///
    pub const QBaseWidgetEvent = SuperWidgetEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperWidgetEvent(self: QFormLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QFormLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnWidgetEvent(self: QFormLayout, callback: *const fn (QFormLayout, QEvent) callconv(.c) void) void {
        qtc.QFormLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` l: QLayout `
    ///
    pub fn AddChildLayout(self: QFormLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QFormLayout_AddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddChildLayout` instead
    ///
    pub const QBaseAddChildLayout = SuperAddChildLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` l: QLayout `
    ///
    pub fn SuperAddChildLayout(self: QFormLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QFormLayout_SuperAddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, l: QLayout) callconv(.c) void `
    ///
    pub fn OnAddChildLayout(self: QFormLayout, callback: *const fn (QFormLayout, QLayout) callconv(.c) void) void {
        qtc.QFormLayout_OnAddChildLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn AddChildWidget(self: QFormLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QFormLayout_AddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddChildWidget` instead
    ///
    pub const QBaseAddChildWidget = SuperAddChildWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn SuperAddChildWidget(self: QFormLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QFormLayout_SuperAddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, w: QWidget) callconv(.c) void `
    ///
    pub fn OnAddChildWidget(self: QFormLayout, callback: *const fn (QFormLayout, QWidget) callconv(.c) void) void {
        qtc.QFormLayout_OnAddChildWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn AdoptLayout(self: QFormLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QFormLayout_AdoptLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// ### DEPRECATED: Use `SuperAdoptLayout` instead
    ///
    pub const QBaseAdoptLayout = SuperAdoptLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SuperAdoptLayout(self: QFormLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QFormLayout_SuperAdoptLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, layout: QLayout) callconv(.c) bool `
    ///
    pub fn OnAdoptLayout(self: QFormLayout, callback: *const fn (QFormLayout, QLayout) callconv(.c) bool) void {
        qtc.QFormLayout_OnAdoptLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: QRect `
    ///
    pub fn AlignmentRect(self: QFormLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QFormLayout_AlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAlignmentRect` instead
    ///
    pub const QBaseAlignmentRect = SuperAlignmentRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: QRect `
    ///
    pub fn SuperAlignmentRect(self: QFormLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QFormLayout_SuperAlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, param1: QRect) callconv(.c) QRect `
    ///
    pub fn OnAlignmentRect(self: QFormLayout, callback: *const fn (QFormLayout, QRect) callconv(.c) QRect) void {
        qtc.QFormLayout_OnAlignmentRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Sender(self: QFormLayout) QObject {
        return .{ .ptr = qtc.QFormLayout_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperSender(self: QFormLayout) QObject {
        return .{ .ptr = qtc.QFormLayout_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QFormLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QFormLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SenderSignalIndex(self: QFormLayout) i32 {
        return qtc.QFormLayout_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn SuperSenderSignalIndex(self: QFormLayout) i32 {
        return qtc.QFormLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QFormLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QFormLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QFormLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QFormLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QFormLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QFormLayout, callback: *const fn (QFormLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QFormLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QFormLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QFormLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QFormLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QFormLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout`
    ///
    /// ` callback: *const fn (self: QFormLayout, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QFormLayout, callback: *const fn (QFormLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QFormLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QFormLayout, callback: *const fn (QFormLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#dtor.QFormLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFormLayout `
    ///
    pub fn Delete(self: QFormLayout) void {
        qtc.QFormLayout_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html)
pub const QFormLayout__TakeRowResult = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFormLayout__TakeRowResult,

    pub const _is_QFormLayout__TakeRowResult = {};

    /// New constructs a new QFormLayout::TakeRowResult object.
    ///
    pub fn New() QFormLayout__TakeRowResult {
        return .{ .ptr = qtc.QFormLayout__TakeRowResult_new() };
    }

    /// New2 constructs a new QFormLayout::TakeRowResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFormLayout__TakeRowResult `
    ///
    pub fn New2(param1: anytype) QFormLayout__TakeRowResult {
        comptime _ = @TypeOf(param1)._is_QFormLayout__TakeRowResult;
        return .{ .ptr = qtc.QFormLayout__TakeRowResult_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#labelItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout__TakeRowResult `
    ///
    pub fn LabelItem(self: QFormLayout__TakeRowResult) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout__TakeRowResult_LabelItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#labelItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout__TakeRowResult `
    ///
    /// ` labelItem: QLayoutItem `
    ///
    pub fn SetLabelItem(self: QFormLayout__TakeRowResult, labelItem: anytype) void {
        comptime _ = @TypeOf(labelItem)._is_QLayoutItem;
        qtc.QFormLayout__TakeRowResult_SetLabelItem(@ptrCast(self.ptr), @ptrCast(labelItem.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#fieldItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout__TakeRowResult `
    ///
    pub fn FieldItem(self: QFormLayout__TakeRowResult) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout__TakeRowResult_FieldItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#fieldItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout__TakeRowResult `
    ///
    /// ` fieldItem: QLayoutItem `
    ///
    pub fn SetFieldItem(self: QFormLayout__TakeRowResult, fieldItem: anytype) void {
        comptime _ = @TypeOf(fieldItem)._is_QLayoutItem;
        qtc.QFormLayout__TakeRowResult_SetFieldItem(@ptrCast(self.ptr), @ptrCast(fieldItem.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFormLayout__TakeRowResult `
    ///
    pub fn Delete(self: QFormLayout__TakeRowResult) void {
        qtc.QFormLayout__TakeRowResult_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#public-types)
pub const enums = struct {
    pub const FieldGrowthPolicy = enum(i32) {
        pub const FieldsStayAtSizeHint: i32 = 0;
        pub const ExpandingFieldsGrow: i32 = 1;
        pub const AllNonFixedFieldsGrow: i32 = 2;
    };

    pub const RowWrapPolicy = enum(i32) {
        pub const DontWrapRows: i32 = 0;
        pub const WrapLongRows: i32 = 1;
        pub const WrapAllRows: i32 = 2;
    };

    pub const ItemRole = enum(i32) {
        pub const LabelRole: i32 = 0;
        pub const FieldRole: i32 = 1;
        pub const SpanningRole: i32 = 2;
    };
};
