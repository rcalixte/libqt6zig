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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFormLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) QFormLayout {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QFormLayout_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFormLayout object in C++ memory
    ///
    pub fn new2() QFormLayout {
        return .{ .ptr = qtc.QFormLayout_new2() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn metaObject(self: QFormLayout) QMetaObject {
        return .{ .ptr = qtc.QFormLayout_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QFormLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QFormLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn superMetaObject(self: QFormLayout) QMetaObject {
        return .{ .ptr = qtc.QFormLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QFormLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFormLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QFormLayout, callback: *const fn (QFormLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QFormLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QFormLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFormLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QFormLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QFormLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormLayout `
    ///
    /// ` callback: *const fn (self: QFormLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QFormLayout, callback: *const fn (QFormLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QFormLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QFormLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QFormLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFormLayout.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFieldGrowthPolicy` instead
    ///
    pub const SetFieldGrowthPolicy = setFieldGrowthPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setFieldGrowthPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` policy: qformlayout_enums.FieldGrowthPolicy `
    ///
    pub fn setFieldGrowthPolicy(self: QFormLayout, policy: i32) void {
        qtc.QFormLayout_SetFieldGrowthPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `fieldGrowthPolicy` instead
    ///
    pub const FieldGrowthPolicy = fieldGrowthPolicy;

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
    pub fn fieldGrowthPolicy(self: QFormLayout) i32 {
        return qtc.QFormLayout_FieldGrowthPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRowWrapPolicy` instead
    ///
    pub const SetRowWrapPolicy = setRowWrapPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setRowWrapPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` policy: qformlayout_enums.RowWrapPolicy `
    ///
    pub fn setRowWrapPolicy(self: QFormLayout, policy: i32) void {
        qtc.QFormLayout_SetRowWrapPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `rowWrapPolicy` instead
    ///
    pub const RowWrapPolicy = rowWrapPolicy;

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
    pub fn rowWrapPolicy(self: QFormLayout) i32 {
        return qtc.QFormLayout_RowWrapPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelAlignment` instead
    ///
    pub const SetLabelAlignment = setLabelAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setLabelAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setLabelAlignment(self: QFormLayout, _alignment: i32) void {
        qtc.QFormLayout_SetLabelAlignment(@ptrCast(self.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `labelAlignment` instead
    ///
    pub const LabelAlignment = labelAlignment;

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
    pub fn labelAlignment(self: QFormLayout) i32 {
        return qtc.QFormLayout_LabelAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFormAlignment` instead
    ///
    pub const SetFormAlignment = setFormAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setFormAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setFormAlignment(self: QFormLayout, _alignment: i32) void {
        qtc.QFormLayout_SetFormAlignment(@ptrCast(self.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `formAlignment` instead
    ///
    pub const FormAlignment = formAlignment;

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
    pub fn formAlignment(self: QFormLayout) i32 {
        return qtc.QFormLayout_FormAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalSpacing` instead
    ///
    pub const SetHorizontalSpacing = setHorizontalSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setHorizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _spacing: i32 `
    ///
    pub fn setHorizontalSpacing(self: QFormLayout, _spacing: i32) void {
        qtc.QFormLayout_SetHorizontalSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `horizontalSpacing` instead
    ///
    pub const HorizontalSpacing = horizontalSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#horizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn horizontalSpacing(self: QFormLayout) i32 {
        return qtc.QFormLayout_HorizontalSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalSpacing` instead
    ///
    pub const SetVerticalSpacing = setVerticalSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setVerticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _spacing: i32 `
    ///
    pub fn setVerticalSpacing(self: QFormLayout, _spacing: i32) void {
        qtc.QFormLayout_SetVerticalSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `verticalSpacing` instead
    ///
    pub const VerticalSpacing = verticalSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#verticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn verticalSpacing(self: QFormLayout) i32 {
        return qtc.QFormLayout_VerticalSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spacing` instead
    ///
    pub const Spacing = spacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn spacing(self: QFormLayout) i32 {
        return qtc.QFormLayout_Spacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSpacing` instead
    ///
    pub const OnSpacing = onSpacing;

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
    pub fn onSpacing(self: QFormLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSpacing` instead
    ///
    pub const SuperSpacing = superSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#spacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn superSpacing(self: QFormLayout) i32 {
        return qtc.QFormLayout_SuperSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpacing` instead
    ///
    pub const SetSpacing = setSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _spacing: i32 `
    ///
    pub fn setSpacing(self: QFormLayout, _spacing: i32) void {
        qtc.QFormLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `onSetSpacing` instead
    ///
    pub const OnSetSpacing = onSetSpacing;

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
    pub fn onSetSpacing(self: QFormLayout, callback: *const fn (QFormLayout, i32) callconv(.c) void) void {
        qtc.QFormLayout_OnSetSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSpacing` instead
    ///
    pub const SuperSetSpacing = superSetSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _spacing: i32 `
    ///
    pub fn superSetSpacing(self: QFormLayout, _spacing: i32) void {
        qtc.QFormLayout_SuperSetSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `addRow` instead
    ///
    pub const AddRow = addRow;

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
    pub fn addRow(self: QFormLayout, label: anytype, field: anytype) void {
        comptime _ = @TypeOf(label)._is_QWidget;
        comptime _ = @TypeOf(field)._is_QWidget;
        qtc.QFormLayout_AddRow(@ptrCast(self.ptr), @ptrCast(label.ptr), @ptrCast(field.ptr));
    }

    /// ### DEPRECATED: Use `addRow2` instead
    ///
    pub const AddRow2 = addRow2;

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
    pub fn addRow2(self: QFormLayout, label: anytype, field: anytype) void {
        comptime _ = @TypeOf(label)._is_QWidget;
        comptime _ = @TypeOf(field)._is_QLayout;
        qtc.QFormLayout_AddRow2(@ptrCast(self.ptr), @ptrCast(label.ptr), @ptrCast(field.ptr));
    }

    /// ### DEPRECATED: Use `addRow3` instead
    ///
    pub const AddRow3 = addRow3;

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
    pub fn addRow3(self: QFormLayout, labelText: []const u8, field: anytype) void {
        const labelText_str = qtc.libqt_string{
            .len = labelText.len,
            .data = labelText.ptr,
        };
        comptime _ = @TypeOf(field)._is_QWidget;
        qtc.QFormLayout_AddRow3(@ptrCast(self.ptr), labelText_str, @ptrCast(field.ptr));
    }

    /// ### DEPRECATED: Use `addRow4` instead
    ///
    pub const AddRow4 = addRow4;

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
    pub fn addRow4(self: QFormLayout, labelText: []const u8, field: anytype) void {
        const labelText_str = qtc.libqt_string{
            .len = labelText.len,
            .data = labelText.ptr,
        };
        comptime _ = @TypeOf(field)._is_QLayout;
        qtc.QFormLayout_AddRow4(@ptrCast(self.ptr), labelText_str, @ptrCast(field.ptr));
    }

    /// ### DEPRECATED: Use `addRow5` instead
    ///
    pub const AddRow5 = addRow5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn addRow5(self: QFormLayout, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QFormLayout_AddRow5(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `addRow6` instead
    ///
    pub const AddRow6 = addRow6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn addRow6(self: QFormLayout, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QFormLayout_AddRow6(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `insertRow` instead
    ///
    pub const InsertRow = insertRow;

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
    pub fn insertRow(self: QFormLayout, row: i32, label: anytype, field: anytype) void {
        comptime _ = @TypeOf(label)._is_QWidget;
        comptime _ = @TypeOf(field)._is_QWidget;
        qtc.QFormLayout_InsertRow(@ptrCast(self.ptr), @bitCast(row), @ptrCast(label.ptr), @ptrCast(field.ptr));
    }

    /// ### DEPRECATED: Use `insertRow2` instead
    ///
    pub const InsertRow2 = insertRow2;

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
    pub fn insertRow2(self: QFormLayout, row: i32, label: anytype, field: anytype) void {
        comptime _ = @TypeOf(label)._is_QWidget;
        comptime _ = @TypeOf(field)._is_QLayout;
        qtc.QFormLayout_InsertRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(label.ptr), @ptrCast(field.ptr));
    }

    /// ### DEPRECATED: Use `insertRow3` instead
    ///
    pub const InsertRow3 = insertRow3;

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
    pub fn insertRow3(self: QFormLayout, row: i32, labelText: []const u8, field: anytype) void {
        const labelText_str = qtc.libqt_string{
            .len = labelText.len,
            .data = labelText.ptr,
        };
        comptime _ = @TypeOf(field)._is_QWidget;
        qtc.QFormLayout_InsertRow3(@ptrCast(self.ptr), @bitCast(row), labelText_str, @ptrCast(field.ptr));
    }

    /// ### DEPRECATED: Use `insertRow4` instead
    ///
    pub const InsertRow4 = insertRow4;

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
    pub fn insertRow4(self: QFormLayout, row: i32, labelText: []const u8, field: anytype) void {
        const labelText_str = qtc.libqt_string{
            .len = labelText.len,
            .data = labelText.ptr,
        };
        comptime _ = @TypeOf(field)._is_QLayout;
        qtc.QFormLayout_InsertRow4(@ptrCast(self.ptr), @bitCast(row), labelText_str, @ptrCast(field.ptr));
    }

    /// ### DEPRECATED: Use `insertRow5` instead
    ///
    pub const InsertRow5 = insertRow5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn insertRow5(self: QFormLayout, row: i32, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QFormLayout_InsertRow5(@ptrCast(self.ptr), @bitCast(row), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `insertRow6` instead
    ///
    pub const InsertRow6 = insertRow6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn insertRow6(self: QFormLayout, row: i32, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QFormLayout_InsertRow6(@ptrCast(self.ptr), @bitCast(row), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `removeRow` instead
    ///
    pub const RemoveRow = removeRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn removeRow(self: QFormLayout, row: i32) void {
        qtc.QFormLayout_RemoveRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `removeRow2` instead
    ///
    pub const RemoveRow2 = removeRow2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn removeRow2(self: QFormLayout, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QFormLayout_RemoveRow2(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `removeRow3` instead
    ///
    pub const RemoveRow3 = removeRow3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn removeRow3(self: QFormLayout, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QFormLayout_RemoveRow3(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `takeRow` instead
    ///
    pub const TakeRow = takeRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn takeRow(self: QFormLayout, row: i32) QFormLayout__TakeRowResult {
        return .{ .ptr = qtc.QFormLayout_TakeRow(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// ### DEPRECATED: Use `takeRow2` instead
    ///
    pub const TakeRow2 = takeRow2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn takeRow2(self: QFormLayout, _widget: anytype) QFormLayout__TakeRowResult {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        return .{ .ptr = qtc.QFormLayout_TakeRow2(@ptrCast(self.ptr), @ptrCast(_widget.ptr)) };
    }

    /// ### DEPRECATED: Use `takeRow3` instead
    ///
    pub const TakeRow3 = takeRow3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn takeRow3(self: QFormLayout, _layout: anytype) QFormLayout__TakeRowResult {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        return .{ .ptr = qtc.QFormLayout_TakeRow3(@ptrCast(self.ptr), @ptrCast(_layout.ptr)) };
    }

    /// ### DEPRECATED: Use `setItem` instead
    ///
    pub const SetItem = setItem;

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
    pub fn setItem(self: QFormLayout, row: i32, role: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        qtc.QFormLayout_SetItem(@ptrCast(self.ptr), @bitCast(row), @bitCast(role), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

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
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QFormLayout, row: i32, role: i32, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QFormLayout_SetWidget(@ptrCast(self.ptr), @bitCast(row), @bitCast(role), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `setLayout` instead
    ///
    pub const SetLayout = setLayout;

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
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: QFormLayout, row: i32, role: i32, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QFormLayout_SetLayout(@ptrCast(self.ptr), @bitCast(row), @bitCast(role), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `setRowVisible` instead
    ///
    pub const SetRowVisible = setRowVisible;

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
    pub fn setRowVisible(self: QFormLayout, row: i32, on: bool) void {
        qtc.QFormLayout_SetRowVisible(@ptrCast(self.ptr), @bitCast(row), on);
    }

    /// ### DEPRECATED: Use `setRowVisible2` instead
    ///
    pub const SetRowVisible2 = setRowVisible2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` on: bool `
    ///
    pub fn setRowVisible2(self: QFormLayout, _widget: anytype, on: bool) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QFormLayout_SetRowVisible2(@ptrCast(self.ptr), @ptrCast(_widget.ptr), on);
    }

    /// ### DEPRECATED: Use `setRowVisible3` instead
    ///
    pub const SetRowVisible3 = setRowVisible3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _layout: QLayout `
    ///
    /// ` on: bool `
    ///
    pub fn setRowVisible3(self: QFormLayout, _layout: anytype, on: bool) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QFormLayout_SetRowVisible3(@ptrCast(self.ptr), @ptrCast(_layout.ptr), on);
    }

    /// ### DEPRECATED: Use `isRowVisible` instead
    ///
    pub const IsRowVisible = isRowVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn isRowVisible(self: QFormLayout, row: i32) bool {
        return qtc.QFormLayout_IsRowVisible(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `isRowVisible2` instead
    ///
    pub const IsRowVisible2 = isRowVisible2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn isRowVisible2(self: QFormLayout, _widget: anytype) bool {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        return qtc.QFormLayout_IsRowVisible2(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `isRowVisible3` instead
    ///
    pub const IsRowVisible3 = isRowVisible3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn isRowVisible3(self: QFormLayout, _layout: anytype) bool {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        return qtc.QFormLayout_IsRowVisible3(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

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
    pub fn itemAt(self: QFormLayout, row: i32, role: i32) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout_ItemAt(@ptrCast(self.ptr), @bitCast(row), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `getItemPosition` instead
    ///
    pub const GetItemPosition = getItemPosition;

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
    pub fn getItemPosition(self: QFormLayout, index: i32, rowPtr: *i32, rolePtr: *i32) void {
        qtc.QFormLayout_GetItemPosition(@ptrCast(self.ptr), @bitCast(index), @ptrCast(rowPtr), @ptrCast(rolePtr));
    }

    /// ### DEPRECATED: Use `getWidgetPosition` instead
    ///
    pub const GetWidgetPosition = getWidgetPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#getWidgetPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` rowPtr: *i32 `
    ///
    /// ` rolePtr: *qformlayout_enums.ItemRole `
    ///
    pub fn getWidgetPosition(self: QFormLayout, _widget: anytype, rowPtr: *i32, rolePtr: *i32) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QFormLayout_GetWidgetPosition(@ptrCast(self.ptr), @ptrCast(_widget.ptr), @ptrCast(rowPtr), @ptrCast(rolePtr));
    }

    /// ### DEPRECATED: Use `getLayoutPosition` instead
    ///
    pub const GetLayoutPosition = getLayoutPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#getLayoutPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _layout: QLayout `
    ///
    /// ` rowPtr: *i32 `
    ///
    /// ` rolePtr: *qformlayout_enums.ItemRole `
    ///
    pub fn getLayoutPosition(self: QFormLayout, _layout: anytype, rowPtr: *i32, rolePtr: *i32) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QFormLayout_GetLayoutPosition(@ptrCast(self.ptr), @ptrCast(_layout.ptr), @ptrCast(rowPtr), @ptrCast(rolePtr));
    }

    /// ### DEPRECATED: Use `labelForField` instead
    ///
    pub const LabelForField = labelForField;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` field: QWidget `
    ///
    pub fn labelForField(self: QFormLayout, field: anytype) QWidget {
        comptime _ = @TypeOf(field)._is_QWidget;
        return .{ .ptr = qtc.QFormLayout_LabelForField(@ptrCast(self.ptr), @ptrCast(field.ptr)) };
    }

    /// ### DEPRECATED: Use `labelForField2` instead
    ///
    pub const LabelForField2 = labelForField2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` field: QLayout `
    ///
    pub fn labelForField2(self: QFormLayout, field: anytype) QWidget {
        comptime _ = @TypeOf(field)._is_QLayout;
        return .{ .ptr = qtc.QFormLayout_LabelForField2(@ptrCast(self.ptr), @ptrCast(field.ptr)) };
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` item: QLayoutItem `
    ///
    pub fn addItem(self: QFormLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        qtc.QFormLayout_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onAddItem` instead
    ///
    pub const OnAddItem = onAddItem;

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
    pub fn onAddItem(self: QFormLayout, callback: *const fn (QFormLayout, QLayoutItem) callconv(.c) void) void {
        qtc.QFormLayout_OnAddItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddItem` instead
    ///
    pub const SuperAddItem = superAddItem;

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
    pub fn superAddItem(self: QFormLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        qtc.QFormLayout_SuperAddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `itemAt2` instead
    ///
    pub const ItemAt2 = itemAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn itemAt2(self: QFormLayout, index: i32) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout_ItemAt2(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onItemAt2` instead
    ///
    pub const OnItemAt2 = onItemAt2;

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
    pub fn onItemAt2(self: QFormLayout, callback: *const fn (QFormLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QFormLayout_OnItemAt2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemAt2` instead
    ///
    pub const SuperItemAt2 = superItemAt2;

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
    pub fn superItemAt2(self: QFormLayout, index: i32) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout_SuperItemAt2(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `takeAt` instead
    ///
    pub const TakeAt = takeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn takeAt(self: QFormLayout, index: i32) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout_TakeAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onTakeAt` instead
    ///
    pub const OnTakeAt = onTakeAt;

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
    pub fn onTakeAt(self: QFormLayout, callback: *const fn (QFormLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QFormLayout_OnTakeAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTakeAt` instead
    ///
    pub const SuperTakeAt = superTakeAt;

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
    pub fn superTakeAt(self: QFormLayout, index: i32) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout_SuperTakeAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` rect: QRect `
    ///
    pub fn setGeometry(self: QFormLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QFormLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

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
    pub fn onSetGeometry(self: QFormLayout, callback: *const fn (QFormLayout, QRect) callconv(.c) void) void {
        qtc.QFormLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

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
    pub fn superSetGeometry(self: QFormLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QFormLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn minimumSize(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QFormLayout_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSize` instead
    ///
    pub const OnMinimumSize = onMinimumSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSize(self: QFormLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QFormLayout_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumSize` instead
    ///
    pub const SuperMinimumSize = superMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn superMinimumSize(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QFormLayout_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn sizeHint(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QFormLayout_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QFormLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QFormLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn superSizeHint(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QFormLayout_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn invalidate(self: QFormLayout) void {
        qtc.QFormLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidate` instead
    ///
    pub const OnInvalidate = onInvalidate;

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
    pub fn onInvalidate(self: QFormLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QFormLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInvalidate` instead
    ///
    pub const SuperInvalidate = superInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn superInvalidate(self: QFormLayout) void {
        qtc.QFormLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn hasHeightForWidth(self: QFormLayout) bool {
        return qtc.QFormLayout_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasHeightForWidth` instead
    ///
    pub const OnHasHeightForWidth = onHasHeightForWidth;

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
    pub fn onHasHeightForWidth(self: QFormLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QFormLayout_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasHeightForWidth` instead
    ///
    pub const SuperHasHeightForWidth = superHasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn superHasHeightForWidth(self: QFormLayout) bool {
        return qtc.QFormLayout_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` width: i32 `
    ///
    pub fn heightForWidth(self: QFormLayout, width: i32) i32 {
        return qtc.QFormLayout_HeightForWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `onHeightForWidth` instead
    ///
    pub const OnHeightForWidth = onHeightForWidth;

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
    pub fn onHeightForWidth(self: QFormLayout, callback: *const fn (QFormLayout, i32) callconv(.c) i32) void {
        qtc.QFormLayout_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHeightForWidth` instead
    ///
    pub const SuperHeightForWidth = superHeightForWidth;

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
    pub fn superHeightForWidth(self: QFormLayout, width: i32) i32 {
        return qtc.QFormLayout_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `expandingDirections` instead
    ///
    pub const ExpandingDirections = expandingDirections;

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
    pub fn expandingDirections(self: QFormLayout) i32 {
        return qtc.QFormLayout_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExpandingDirections` instead
    ///
    pub const OnExpandingDirections = onExpandingDirections;

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
    pub fn onExpandingDirections(self: QFormLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandingDirections` instead
    ///
    pub const SuperExpandingDirections = superExpandingDirections;

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
    pub fn superExpandingDirections(self: QFormLayout) i32 {
        return qtc.QFormLayout_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn count(self: QFormLayout) i32 {
        return qtc.QFormLayout_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

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
    pub fn onCount(self: QFormLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCount` instead
    ///
    pub const SuperCount = superCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn superCount(self: QFormLayout) i32 {
        return qtc.QFormLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn rowCount(self: QFormLayout) i32 {
        return qtc.QFormLayout_RowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFormLayout.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFormLayout.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

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
    pub fn setContentsMargins(self: QFormLayout, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setContentsMargins2` instead
    ///
    pub const SetContentsMargins2 = setContentsMargins2;

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
    pub fn setContentsMargins2(self: QFormLayout, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLayout_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `unsetContentsMargins` instead
    ///
    pub const UnsetContentsMargins = unsetContentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn unsetContentsMargins(self: QFormLayout) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getContentsMargins` instead
    ///
    pub const GetContentsMargins = getContentsMargins;

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
    pub fn getContentsMargins(self: QFormLayout, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `contentsMargins` instead
    ///
    pub const ContentsMargins = contentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn contentsMargins(self: QFormLayout) QMargins {
        return .{ .ptr = qtc.QLayout_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn contentsRect(self: QFormLayout) QRect {
        return .{ .ptr = qtc.QLayout_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

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
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: QFormLayout, w: anytype, _alignment: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `setAlignment2` instead
    ///
    pub const SetAlignment2 = setAlignment2;

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
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment2(self: QFormLayout, l: anytype, _alignment: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QLayout_SetAlignment2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `setSizeConstraint` instead
    ///
    pub const SetSizeConstraint = setSizeConstraint;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _sizeConstraint: qlayout_enums.SizeConstraint `
    ///
    pub fn setSizeConstraint(self: QFormLayout, _sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self.ptr), @bitCast(_sizeConstraint));
    }

    /// ### DEPRECATED: Use `sizeConstraint` instead
    ///
    pub const SizeConstraint = sizeConstraint;

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
    pub fn sizeConstraint(self: QFormLayout) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMenuBar` instead
    ///
    pub const SetMenuBar = setMenuBar;

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
    pub fn setMenuBar(self: QFormLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_SetMenuBar(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `menuBar` instead
    ///
    pub const MenuBar = menuBar;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn menuBar(self: QFormLayout) QWidget {
        return .{ .ptr = qtc.QLayout_MenuBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn parentWidget(self: QFormLayout) QWidget {
        return .{ .ptr = qtc.QLayout_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activate` instead
    ///
    pub const Activate = activate;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn activate(self: QFormLayout) bool {
        return qtc.QLayout_Activate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn update(self: QFormLayout) void {
        qtc.QLayout_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addWidget` instead
    ///
    pub const AddWidget = addWidget;

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
    pub fn addWidget(self: QFormLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_AddWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `removeWidget` instead
    ///
    pub const RemoveWidget = removeWidget;

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
    pub fn removeWidget(self: QFormLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_RemoveWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

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
    pub fn removeItem(self: QFormLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `indexOf2` instead
    ///
    pub const IndexOf2 = indexOf2;

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
    pub fn indexOf2(self: QFormLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_IndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOf2` instead
    ///
    pub const OnIndexOf2 = onIndexOf2;

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
    pub fn onIndexOf2(self: QFormLayout, callback: *const fn (QFormLayout, QLayoutItem) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndexOf2` instead
    ///
    pub const SuperIndexOf2 = superIndexOf2;

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
    pub fn superIndexOf2(self: QFormLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_SuperIndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `totalMinimumHeightForWidth` instead
    ///
    pub const TotalMinimumHeightForWidth = totalMinimumHeightForWidth;

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
    pub fn totalMinimumHeightForWidth(self: QFormLayout, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `totalHeightForWidth` instead
    ///
    pub const TotalHeightForWidth = totalHeightForWidth;

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
    pub fn totalHeightForWidth(self: QFormLayout, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `totalMinimumSize` instead
    ///
    pub const TotalMinimumSize = totalMinimumSize;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn totalMinimumSize(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `totalMaximumSize` instead
    ///
    pub const TotalMaximumSize = totalMaximumSize;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn totalMaximumSize(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `totalSizeHint` instead
    ///
    pub const TotalSizeHint = totalSizeHint;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn totalSizeHint(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

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
    pub fn setEnabled(self: QFormLayout, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn isEnabled(self: QFormLayout) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closestAcceptableSize` instead
    ///
    pub const ClosestAcceptableSize = closestAcceptableSize;

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
    pub fn closestAcceptableSize(w: anytype, s: anytype) QSize {
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QLayout_ClosestAcceptableSize(@ptrCast(w.ptr), @ptrCast(s.ptr)) };
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QFormLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFormLayout.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QFormLayout, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn isWidgetType(self: QFormLayout) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn isWindowType(self: QFormLayout) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn isQuickItemType(self: QFormLayout) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn signalsBlocked(self: QFormLayout) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QFormLayout, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn thread(self: QFormLayout) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QFormLayout, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QFormLayout, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QFormLayout, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QFormLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QFormLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QFormLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QFormLayout.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QFormLayout, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QFormLayout, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QFormLayout, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QFormLayout, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn disconnect3(self: QFormLayout) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QFormLayout, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn dumpObjectTree(self: QFormLayout) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn dumpObjectInfo(self: QFormLayout) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QFormLayout, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QFormLayout, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QFormLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QFormLayout.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QFormLayout.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn bindingStorage(self: QFormLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn bindingStorage2(self: QFormLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn destroyed(self: QFormLayout) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QFormLayout, callback: *const fn (QFormLayout) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn parent(self: QFormLayout) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QFormLayout, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    pub fn deleteLater(self: QFormLayout) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QFormLayout, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QFormLayout, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QFormLayout, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QFormLayout, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QFormLayout, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QFormLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QFormLayout, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QFormLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QFormLayout, callback: *const fn (QFormLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

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
    pub fn alignment(self: QFormLayout) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

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
    pub fn geometry(self: QFormLayout) QRect {
        return .{ .ptr = qtc.QFormLayout_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superGeometry` instead
    ///
    pub const SuperGeometry = superGeometry;

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
    pub fn superGeometry(self: QFormLayout) QRect {
        return .{ .ptr = qtc.QFormLayout_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onGeometry` instead
    ///
    pub const OnGeometry = onGeometry;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGeometry(self: QFormLayout, callback: *const fn () callconv(.c) QRect) void {
        qtc.QFormLayout_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

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
    pub fn maximumSize(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QFormLayout_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMaximumSize` instead
    ///
    pub const SuperMaximumSize = superMaximumSize;

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
    pub fn superMaximumSize(self: QFormLayout) QSize {
        return .{ .ptr = qtc.QFormLayout_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaximumSize` instead
    ///
    pub const OnMaximumSize = onMaximumSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaximumSize(self: QFormLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QFormLayout_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexOf` instead
    ///
    pub const IndexOf = indexOf;

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
    pub fn indexOf(self: QFormLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QFormLayout_IndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superIndexOf` instead
    ///
    pub const SuperIndexOf = superIndexOf;

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
    pub fn superIndexOf(self: QFormLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QFormLayout_SuperIndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOf` instead
    ///
    pub const OnIndexOf = onIndexOf;

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
    pub fn onIndexOf(self: QFormLayout, callback: *const fn (QFormLayout, QWidget) callconv(.c) i32) void {
        qtc.QFormLayout_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

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
    pub fn isEmpty(self: QFormLayout) bool {
        return qtc.QFormLayout_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

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
    pub fn superIsEmpty(self: QFormLayout) bool {
        return qtc.QFormLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

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
    pub fn onIsEmpty(self: QFormLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QFormLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `controlTypes` instead
    ///
    pub const ControlTypes = controlTypes;

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
    pub fn controlTypes(self: QFormLayout) i32 {
        return qtc.QFormLayout_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superControlTypes` instead
    ///
    pub const SuperControlTypes = superControlTypes;

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
    pub fn superControlTypes(self: QFormLayout) i32 {
        return qtc.QFormLayout_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onControlTypes` instead
    ///
    pub const OnControlTypes = onControlTypes;

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
    pub fn onControlTypes(self: QFormLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `replaceWidget` instead
    ///
    pub const ReplaceWidget = replaceWidget;

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
    pub fn replaceWidget(self: QFormLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QFormLayout_ReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `superReplaceWidget` instead
    ///
    pub const SuperReplaceWidget = superReplaceWidget;

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
    pub fn superReplaceWidget(self: QFormLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QFormLayout_SuperReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `onReplaceWidget` instead
    ///
    pub const OnReplaceWidget = onReplaceWidget;

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
    pub fn onReplaceWidget(self: QFormLayout, callback: *const fn (QFormLayout, QWidget, QWidget, i32) callconv(.c) QLayoutItem) void {
        qtc.QFormLayout_OnReplaceWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

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
    pub fn layout(self: QFormLayout) QLayout {
        return .{ .ptr = qtc.QFormLayout_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superLayout` instead
    ///
    pub const SuperLayout = superLayout;

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
    pub fn superLayout(self: QFormLayout) QLayout {
        return .{ .ptr = qtc.QFormLayout_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onLayout` instead
    ///
    pub const OnLayout = onLayout;

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
    pub fn onLayout(self: QFormLayout, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QFormLayout_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    pub fn childEvent(self: QFormLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QFormLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    pub fn superChildEvent(self: QFormLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QFormLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QFormLayout, callback: *const fn (QFormLayout, QChildEvent) callconv(.c) void) void {
        qtc.QFormLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QFormLayout, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QFormLayout_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QFormLayout, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QFormLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QFormLayout, callback: *const fn (QFormLayout, QEvent) callconv(.c) bool) void {
        qtc.QFormLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QFormLayout, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QFormLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QFormLayout, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QFormLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QFormLayout, callback: *const fn (QFormLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QFormLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QFormLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QFormLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QFormLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QFormLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QFormLayout, callback: *const fn (QFormLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QFormLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QFormLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QFormLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QFormLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QFormLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QFormLayout, callback: *const fn (QFormLayout, QEvent) callconv(.c) void) void {
        qtc.QFormLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QFormLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QFormLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QFormLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QFormLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QFormLayout, callback: *const fn (QFormLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QFormLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QFormLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QFormLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QFormLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QFormLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QFormLayout, callback: *const fn (QFormLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QFormLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumHeightForWidth` instead
    ///
    pub const MinimumHeightForWidth = minimumHeightForWidth;

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
    pub fn minimumHeightForWidth(self: QFormLayout, param1: i32) i32 {
        return qtc.QFormLayout_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superMinimumHeightForWidth` instead
    ///
    pub const SuperMinimumHeightForWidth = superMinimumHeightForWidth;

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
    pub fn superMinimumHeightForWidth(self: QFormLayout, param1: i32) i32 {
        return qtc.QFormLayout_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMinimumHeightForWidth` instead
    ///
    pub const OnMinimumHeightForWidth = onMinimumHeightForWidth;

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
    pub fn onMinimumHeightForWidth(self: QFormLayout, callback: *const fn (QFormLayout, i32) callconv(.c) i32) void {
        qtc.QFormLayout_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

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
    pub fn widget(self: QFormLayout) QWidget {
        return .{ .ptr = qtc.QFormLayout_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superWidget` instead
    ///
    pub const SuperWidget = superWidget;

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
    pub fn superWidget(self: QFormLayout) QWidget {
        return .{ .ptr = qtc.QFormLayout_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

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
    pub fn onWidget(self: QFormLayout, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QFormLayout_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `spacerItem` instead
    ///
    pub const SpacerItem = spacerItem;

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
    pub fn spacerItem(self: QFormLayout) QSpacerItem {
        return .{ .ptr = qtc.QFormLayout_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSpacerItem` instead
    ///
    pub const SuperSpacerItem = superSpacerItem;

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
    pub fn superSpacerItem(self: QFormLayout) QSpacerItem {
        return .{ .ptr = qtc.QFormLayout_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpacerItem` instead
    ///
    pub const OnSpacerItem = onSpacerItem;

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
    pub fn onSpacerItem(self: QFormLayout, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QFormLayout_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widgetEvent` instead
    ///
    pub const WidgetEvent = widgetEvent;

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
    pub fn widgetEvent(self: QFormLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QFormLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superWidgetEvent` instead
    ///
    pub const SuperWidgetEvent = superWidgetEvent;

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
    pub fn superWidgetEvent(self: QFormLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QFormLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onWidgetEvent` instead
    ///
    pub const OnWidgetEvent = onWidgetEvent;

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
    pub fn onWidgetEvent(self: QFormLayout, callback: *const fn (QFormLayout, QEvent) callconv(.c) void) void {
        qtc.QFormLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addChildLayout` instead
    ///
    pub const AddChildLayout = addChildLayout;

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
    pub fn addChildLayout(self: QFormLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QFormLayout_AddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `superAddChildLayout` instead
    ///
    pub const SuperAddChildLayout = superAddChildLayout;

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
    pub fn superAddChildLayout(self: QFormLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QFormLayout_SuperAddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `onAddChildLayout` instead
    ///
    pub const OnAddChildLayout = onAddChildLayout;

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
    pub fn onAddChildLayout(self: QFormLayout, callback: *const fn (QFormLayout, QLayout) callconv(.c) void) void {
        qtc.QFormLayout_OnAddChildLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addChildWidget` instead
    ///
    pub const AddChildWidget = addChildWidget;

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
    pub fn addChildWidget(self: QFormLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QFormLayout_AddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `superAddChildWidget` instead
    ///
    pub const SuperAddChildWidget = superAddChildWidget;

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
    pub fn superAddChildWidget(self: QFormLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QFormLayout_SuperAddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `onAddChildWidget` instead
    ///
    pub const OnAddChildWidget = onAddChildWidget;

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
    pub fn onAddChildWidget(self: QFormLayout, callback: *const fn (QFormLayout, QWidget) callconv(.c) void) void {
        qtc.QFormLayout_OnAddChildWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `adoptLayout` instead
    ///
    pub const AdoptLayout = adoptLayout;

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
    /// ` _layout: QLayout `
    ///
    pub fn adoptLayout(self: QFormLayout, _layout: anytype) bool {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        return qtc.QFormLayout_AdoptLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `superAdoptLayout` instead
    ///
    pub const SuperAdoptLayout = superAdoptLayout;

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
    /// ` _layout: QLayout `
    ///
    pub fn superAdoptLayout(self: QFormLayout, _layout: anytype) bool {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        return qtc.QFormLayout_SuperAdoptLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `onAdoptLayout` instead
    ///
    pub const OnAdoptLayout = onAdoptLayout;

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
    pub fn onAdoptLayout(self: QFormLayout, callback: *const fn (QFormLayout, QLayout) callconv(.c) bool) void {
        qtc.QFormLayout_OnAdoptLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alignmentRect` instead
    ///
    pub const AlignmentRect = alignmentRect;

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
    pub fn alignmentRect(self: QFormLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QFormLayout_AlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `superAlignmentRect` instead
    ///
    pub const SuperAlignmentRect = superAlignmentRect;

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
    pub fn superAlignmentRect(self: QFormLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QFormLayout_SuperAlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `onAlignmentRect` instead
    ///
    pub const OnAlignmentRect = onAlignmentRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onAlignmentRect(self: QFormLayout, callback: *const fn (QFormLayout, QRect) callconv(.c) QRect) void {
        qtc.QFormLayout_OnAlignmentRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QFormLayout) QObject {
        return .{ .ptr = qtc.QFormLayout_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QFormLayout) QObject {
        return .{ .ptr = qtc.QFormLayout_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QFormLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QFormLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QFormLayout) i32 {
        return qtc.QFormLayout_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QFormLayout) i32 {
        return qtc.QFormLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QFormLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QFormLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QFormLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QFormLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QFormLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QFormLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QFormLayout, callback: *const fn (QFormLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QFormLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QFormLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QFormLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QFormLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QFormLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QFormLayout, callback: *const fn (QFormLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QFormLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QFormLayout, callback: *const fn (QFormLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#dtor.QFormLayout)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFormLayout `
    ///
    pub fn delete(self: QFormLayout) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFormLayout::TakeRowResult object in C++ memory
    ///
    pub fn new() QFormLayout__TakeRowResult {
        return .{ .ptr = qtc.QFormLayout__TakeRowResult_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFormLayout::TakeRowResult object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFormLayout__TakeRowResult `
    ///
    pub fn new2(param1: anytype) QFormLayout__TakeRowResult {
        comptime _ = @TypeOf(param1)._is_QFormLayout__TakeRowResult;
        return .{ .ptr = qtc.QFormLayout__TakeRowResult_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `labelItem` instead
    ///
    pub const LabelItem = labelItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#labelItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout__TakeRowResult `
    ///
    pub fn labelItem(self: QFormLayout__TakeRowResult) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout__TakeRowResult_LabelItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelItem` instead
    ///
    pub const SetLabelItem = setLabelItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#labelItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout__TakeRowResult `
    ///
    /// ` _labelItem: QLayoutItem `
    ///
    pub fn setLabelItem(self: QFormLayout__TakeRowResult, _labelItem: anytype) void {
        comptime _ = @TypeOf(_labelItem)._is_QLayoutItem;
        qtc.QFormLayout__TakeRowResult_SetLabelItem(@ptrCast(self.ptr), @ptrCast(_labelItem.ptr));
    }

    /// ### DEPRECATED: Use `fieldItem` instead
    ///
    pub const FieldItem = fieldItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#fieldItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout__TakeRowResult `
    ///
    pub fn fieldItem(self: QFormLayout__TakeRowResult) QLayoutItem {
        return .{ .ptr = qtc.QFormLayout__TakeRowResult_FieldItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFieldItem` instead
    ///
    pub const SetFieldItem = setFieldItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#fieldItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormLayout__TakeRowResult `
    ///
    /// ` _fieldItem: QLayoutItem `
    ///
    pub fn setFieldItem(self: QFormLayout__TakeRowResult, _fieldItem: anytype) void {
        comptime _ = @TypeOf(_fieldItem)._is_QLayoutItem;
        qtc.QFormLayout__TakeRowResult_SetFieldItem(@ptrCast(self.ptr), @ptrCast(_fieldItem.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFormLayout__TakeRowResult `
    ///
    pub fn delete(self: QFormLayout__TakeRowResult) void {
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
