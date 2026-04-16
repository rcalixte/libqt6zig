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
const qlayout_enums = @import("libqlayout.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html)
pub const QGridLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGridLayout,

    pub const _is_QGridLayout = {};
    pub const _is_QLayout = {};
    pub const _is_QObject = {};
    pub const _is_QLayoutItem = {};

    /// New constructs a new QGridLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QGridLayout {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QGridLayout_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QGridLayout object.
    ///
    pub fn New2() QGridLayout {
        return .{ .ptr = qtc.QGridLayout_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn MetaObject(self: QGridLayout) QMetaObject {
        return .{ .ptr = qtc.QGridLayout_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QGridLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGridLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGridLayout `
    ///
    pub fn SuperMetaObject(self: QGridLayout) QMetaObject {
        return .{ .ptr = qtc.QGridLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGridLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGridLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGridLayout, callback: *const fn (QGridLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGridLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGridLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGridLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QGridLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGridLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGridLayout, callback: *const fn (QGridLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGridLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QGridLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGridLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgridlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn SizeHint(self: QGridLayout) QSize {
        return .{ .ptr = qtc.QGridLayout_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QGridLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QGridLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn SuperSizeHint(self: QGridLayout) QSize {
        return .{ .ptr = qtc.QGridLayout_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn MinimumSize(self: QGridLayout) QSize {
        return .{ .ptr = qtc.QGridLayout_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSize(self: QGridLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QGridLayout_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumSize` instead
    ///
    pub const QBaseMinimumSize = SuperMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn SuperMinimumSize(self: QGridLayout) QSize {
        return .{ .ptr = qtc.QGridLayout_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn MaximumSize(self: QGridLayout) QSize {
        return .{ .ptr = qtc.QGridLayout_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMaximumSize(self: QGridLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QGridLayout_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaximumSize` instead
    ///
    pub const QBaseMaximumSize = SuperMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn SuperMaximumSize(self: QGridLayout) QSize {
        return .{ .ptr = qtc.QGridLayout_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setHorizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetHorizontalSpacing(self: QGridLayout, spacing: i32) void {
        qtc.QGridLayout_SetHorizontalSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#horizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn HorizontalSpacing(self: QGridLayout) i32 {
        return qtc.QGridLayout_HorizontalSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setVerticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetVerticalSpacing(self: QGridLayout, spacing: i32) void {
        qtc.QGridLayout_SetVerticalSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#verticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn VerticalSpacing(self: QGridLayout) i32 {
        return qtc.QGridLayout_VerticalSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetSpacing(self: QGridLayout, spacing: i32) void {
        qtc.QGridLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout, spacing: i32) callconv(.c) void `
    ///
    pub fn OnSetSpacing(self: QGridLayout, callback: *const fn (QGridLayout, i32) callconv(.c) void) void {
        qtc.QGridLayout_OnSetSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSpacing` instead
    ///
    pub const QBaseSetSpacing = SuperSetSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SuperSetSpacing(self: QGridLayout, spacing: i32) void {
        qtc.QGridLayout_SuperSetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn Spacing(self: QGridLayout) i32 {
        return qtc.QGridLayout_Spacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSpacing(self: QGridLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QGridLayout_OnSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSpacing` instead
    ///
    pub const QBaseSpacing = SuperSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn SuperSpacing(self: QGridLayout) i32 {
        return qtc.QGridLayout_SuperSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setRowStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetRowStretch(self: QGridLayout, row: i32, stretch: i32) void {
        qtc.QGridLayout_SetRowStretch(@ptrCast(self.ptr), @bitCast(row), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setColumnStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetColumnStretch(self: QGridLayout, column: i32, stretch: i32) void {
        qtc.QGridLayout_SetColumnStretch(@ptrCast(self.ptr), @bitCast(column), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#rowStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RowStretch(self: QGridLayout, row: i32) i32 {
        return qtc.QGridLayout_RowStretch(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#columnStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnStretch(self: QGridLayout, column: i32) i32 {
        return qtc.QGridLayout_ColumnStretch(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setRowMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` minSize: i32 `
    ///
    pub fn SetRowMinimumHeight(self: QGridLayout, row: i32, minSize: i32) void {
        qtc.QGridLayout_SetRowMinimumHeight(@ptrCast(self.ptr), @bitCast(row), @bitCast(minSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setColumnMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` column: i32 `
    ///
    /// ` minSize: i32 `
    ///
    pub fn SetColumnMinimumWidth(self: QGridLayout, column: i32, minSize: i32) void {
        qtc.QGridLayout_SetColumnMinimumWidth(@ptrCast(self.ptr), @bitCast(column), @bitCast(minSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#rowMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` row: i32 `
    ///
    pub fn RowMinimumHeight(self: QGridLayout, row: i32) i32 {
        return qtc.QGridLayout_RowMinimumHeight(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#columnMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnMinimumWidth(self: QGridLayout, column: i32) i32 {
        return qtc.QGridLayout_ColumnMinimumWidth(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn ColumnCount(self: QGridLayout) i32 {
        return qtc.QGridLayout_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn RowCount(self: QGridLayout) i32 {
        return qtc.QGridLayout_RowCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#cellRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CellRect(self: QGridLayout, row: i32, column: i32) QRect {
        return .{ .ptr = qtc.QGridLayout_CellRect(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn HasHeightForWidth(self: QGridLayout) bool {
        return qtc.QGridLayout_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QGridLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QGridLayout_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn SuperHasHeightForWidth(self: QGridLayout) bool {
        return qtc.QGridLayout_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QGridLayout, param1: i32) i32 {
        return qtc.QGridLayout_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QGridLayout, callback: *const fn (QGridLayout, i32) callconv(.c) i32) void {
        qtc.QGridLayout_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QGridLayout, param1: i32) i32 {
        return qtc.QGridLayout_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: QGridLayout, param1: i32) i32 {
        return qtc.QGridLayout_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: QGridLayout, callback: *const fn (QGridLayout, i32) callconv(.c) i32) void {
        qtc.QGridLayout_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumHeightForWidth` instead
    ///
    pub const QBaseMinimumHeightForWidth = SuperMinimumHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: QGridLayout, param1: i32) i32 {
        return qtc.QGridLayout_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: QGridLayout) i32 {
        return qtc.QGridLayout_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: QGridLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QGridLayout_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandingDirections` instead
    ///
    pub const QBaseExpandingDirections = SuperExpandingDirections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: QGridLayout) i32 {
        return qtc.QGridLayout_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn Invalidate(self: QGridLayout) void {
        qtc.QGridLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: QGridLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGridLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn SuperInvalidate(self: QGridLayout) void {
        qtc.QGridLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn AddWidget(self: QGridLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QGridLayout_AddWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn AddWidget2(self: QGridLayout, param1: anytype, row: i32, column: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QGridLayout_AddWidget2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` rowSpan: i32 `
    ///
    /// ` columnSpan: i32 `
    ///
    pub fn AddWidget3(self: QGridLayout, param1: anytype, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QGridLayout_AddWidget3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn AddLayout(self: QGridLayout, param1: anytype, row: i32, column: i32) void {
        comptime _ = @TypeOf(param1)._is_QLayout;
        qtc.QGridLayout_AddLayout(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` rowSpan: i32 `
    ///
    /// ` columnSpan: i32 `
    ///
    pub fn AddLayout2(self: QGridLayout, param1: anytype, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        comptime _ = @TypeOf(param1)._is_QLayout;
        qtc.QGridLayout_AddLayout2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setOriginCorner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` originCorner: qnamespace_enums.Corner `
    ///
    pub fn SetOriginCorner(self: QGridLayout, originCorner: i32) void {
        qtc.QGridLayout_SetOriginCorner(@ptrCast(self.ptr), @bitCast(originCorner));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#originCorner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Corner `
    ///
    pub fn OriginCorner(self: QGridLayout) i32 {
        return qtc.QGridLayout_OriginCorner(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemAt(self: QGridLayout, index: i32) QLayoutItem {
        return .{ .ptr = qtc.QGridLayout_ItemAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout, index: i32) callconv(.c) QLayoutItem `
    ///
    pub fn OnItemAt(self: QGridLayout, callback: *const fn (QGridLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QGridLayout_OnItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemAt` instead
    ///
    pub const QBaseItemAt = SuperItemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperItemAt(self: QGridLayout, index: i32) QLayoutItem {
        return .{ .ptr = qtc.QGridLayout_SuperItemAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#itemAtPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemAtPosition(self: QGridLayout, row: i32, column: i32) QLayoutItem {
        return .{ .ptr = qtc.QGridLayout_ItemAtPosition(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn TakeAt(self: QGridLayout, index: i32) QLayoutItem {
        return .{ .ptr = qtc.QGridLayout_TakeAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout, index: i32) callconv(.c) QLayoutItem `
    ///
    pub fn OnTakeAt(self: QGridLayout, callback: *const fn (QGridLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QGridLayout_OnTakeAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTakeAt` instead
    ///
    pub const QBaseTakeAt = SuperTakeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperTakeAt(self: QGridLayout, index: i32) QLayoutItem {
        return .{ .ptr = qtc.QGridLayout_SuperTakeAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn Count(self: QGridLayout) i32 {
        return qtc.QGridLayout_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: QGridLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QGridLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn SuperCount(self: QGridLayout) i32 {
        return qtc.QGridLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry(self: QGridLayout, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QGridLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout, geometry: QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: QGridLayout, callback: *const fn (QGridLayout, QRect) callconv(.c) void) void {
        qtc.QGridLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SuperSetGeometry(self: QGridLayout, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QGridLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` item: QLayoutItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn AddItem(self: QGridLayout, item: anytype, row: i32, column: i32) void {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        qtc.QGridLayout_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setDefaultPositioning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` n: i32 `
    ///
    /// ` orient: qnamespace_enums.Orientation `
    ///
    pub fn SetDefaultPositioning(self: QGridLayout, n: i32, orient: i32) void {
        qtc.QGridLayout_SetDefaultPositioning(@ptrCast(self.ptr), @bitCast(n), @bitCast(orient));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#getItemPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` idx: i32 `
    ///
    /// ` row: *i32 `
    ///
    /// ` column: *i32 `
    ///
    /// ` rowSpan: *i32 `
    ///
    /// ` columnSpan: *i32 `
    ///
    pub fn GetItemPosition(self: QGridLayout, idx: i32, row: *i32, column: *i32, rowSpan: *i32, columnSpan: *i32) void {
        qtc.QGridLayout_GetItemPosition(@ptrCast(self.ptr), @bitCast(idx), @ptrCast(row), @ptrCast(column), @ptrCast(rowSpan), @ptrCast(columnSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn AddItem2(self: QGridLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QGridLayout_AddItem2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout, param1: QLayoutItem) callconv(.c) void `
    ///
    pub fn OnAddItem2(self: QGridLayout, callback: *const fn (QGridLayout, QLayoutItem) callconv(.c) void) void {
        qtc.QGridLayout_OnAddItem2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddItem2` instead
    ///
    pub const QBaseAddItem2 = SuperAddItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn SuperAddItem2(self: QGridLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QGridLayout_SuperAddItem2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgridlayout.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgridlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` param4: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddWidget4(self: QGridLayout, param1: anytype, row: i32, column: i32, param4: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QGridLayout_AddWidget4(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(row), @bitCast(column), @bitCast(param4));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` rowSpan: i32 `
    ///
    /// ` columnSpan: i32 `
    ///
    /// ` param6: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddWidget6(self: QGridLayout, param1: anytype, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QGridLayout_AddWidget6(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan), @bitCast(param6));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` param4: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddLayout4(self: QGridLayout, param1: anytype, row: i32, column: i32, param4: i32) void {
        comptime _ = @TypeOf(param1)._is_QLayout;
        qtc.QGridLayout_AddLayout4(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(row), @bitCast(column), @bitCast(param4));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QLayout `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` rowSpan: i32 `
    ///
    /// ` columnSpan: i32 `
    ///
    /// ` param6: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddLayout6(self: QGridLayout, param1: anytype, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i32) void {
        comptime _ = @TypeOf(param1)._is_QLayout;
        qtc.QGridLayout_AddLayout6(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan), @bitCast(param6));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` item: QLayoutItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` rowSpan: i32 `
    ///
    pub fn AddItem4(self: QGridLayout, item: anytype, row: i32, column: i32, rowSpan: i32) void {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        qtc.QGridLayout_AddItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(row), @bitCast(column), @bitCast(rowSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` item: QLayoutItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` rowSpan: i32 `
    ///
    /// ` columnSpan: i32 `
    ///
    pub fn AddItem5(self: QGridLayout, item: anytype, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        qtc.QGridLayout_AddItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` item: QLayoutItem `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` rowSpan: i32 `
    ///
    /// ` columnSpan: i32 `
    ///
    /// ` param6: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddItem6(self: QGridLayout, item: anytype, row: i32, column: i32, rowSpan: i32, columnSpan: i32, param6: i32) void {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        qtc.QGridLayout_AddItem6(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan), @bitCast(param6));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QGridLayout, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QGridLayout, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLayout_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn UnsetContentsMargins(self: QGridLayout) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` left: *i32 `
    ///
    /// ` top: *i32 `
    ///
    /// ` right: *i32 `
    ///
    /// ` bottom: *i32 `
    ///
    pub fn GetContentsMargins(self: QGridLayout, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn ContentsMargins(self: QGridLayout) QMargins {
        return .{ .ptr = qtc.QLayout_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn ContentsRect(self: QGridLayout) QRect {
        return .{ .ptr = qtc.QLayout_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` w: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QGridLayout, w: anytype, alignment: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` l: QLayout `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment2(self: QGridLayout, l: anytype, alignment: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QLayout_SetAlignment2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` sizeConstraint: qlayout_enums.SizeConstraint `
    ///
    pub fn SetSizeConstraint(self: QGridLayout, sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self.ptr), @bitCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ## Returns:
    ///
    /// ` qlayout_enums.SizeConstraint `
    ///
    pub fn SizeConstraint(self: QGridLayout) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn SetMenuBar(self: QGridLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_SetMenuBar(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn MenuBar(self: QGridLayout) QWidget {
        return .{ .ptr = qtc.QLayout_MenuBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn ParentWidget(self: QGridLayout) QWidget {
        return .{ .ptr = qtc.QLayout_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn Activate(self: QGridLayout) bool {
        return qtc.QLayout_Activate(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn Update(self: QGridLayout) void {
        qtc.QLayout_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn RemoveWidget(self: QGridLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_RemoveWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn RemoveItem(self: QGridLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn IndexOf2(self: QGridLayout, param1: anytype) i32 {
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
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout, param1: QLayoutItem) callconv(.c) i32 `
    ///
    pub fn OnIndexOf2(self: QGridLayout, callback: *const fn (QGridLayout, QLayoutItem) callconv(.c) i32) void {
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
    /// ` self: QGridLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn SuperIndexOf2(self: QGridLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_SuperIndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn TotalMinimumHeightForWidth(self: QGridLayout, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn TotalHeightForWidth(self: QGridLayout, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn TotalMinimumSize(self: QGridLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn TotalMaximumSize(self: QGridLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn TotalSizeHint(self: QGridLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QGridLayout, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn IsEnabled(self: QGridLayout) bool {
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
    /// ` self: QGridLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QGridLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgridlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QGridLayout, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn IsWidgetType(self: QGridLayout) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn IsWindowType(self: QGridLayout) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn IsQuickItemType(self: QGridLayout) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn SignalsBlocked(self: QGridLayout) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QGridLayout, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn Thread(self: QGridLayout) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGridLayout, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QGridLayout, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QGridLayout, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QGridLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QGridLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QGridLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgridlayout.Children: Memory allocation failed");
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
    /// ` self: QGridLayout `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGridLayout, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QGridLayout, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QGridLayout, obj: anytype) void {
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
    /// ` self: QGridLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGridLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGridLayout `
    ///
    pub fn Disconnect3(self: QGridLayout) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QGridLayout, receiver: anytype) bool {
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
    /// ` self: QGridLayout `
    ///
    pub fn DumpObjectTree(self: QGridLayout) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn DumpObjectInfo(self: QGridLayout) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QGridLayout, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGridLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGridLayout, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QGridLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn BindingStorage(self: QGridLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn BindingStorage2(self: QGridLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn Destroyed(self: QGridLayout) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QGridLayout, callback: *const fn (QGridLayout) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn Parent(self: QGridLayout) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QGridLayout, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn DeleteLater(self: QGridLayout) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QGridLayout, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QGridLayout, time: i64, timerType: i32) i32 {
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
    /// ` self: QGridLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGridLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGridLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGridLayout, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QGridLayout, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGridLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGridLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGridLayout `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGridLayout, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGridLayout `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGridLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QGridLayout, callback: *const fn (QGridLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QGridLayout) i32 {
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
    /// ` self: QGridLayout `
    ///
    pub fn Geometry(self: QGridLayout) QRect {
        return .{ .ptr = qtc.QGridLayout_Geometry(@ptrCast(self.ptr)) };
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
    /// ` self: QGridLayout `
    ///
    pub fn SuperGeometry(self: QGridLayout) QRect {
        return .{ .ptr = qtc.QGridLayout_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    pub fn OnGeometry(self: QGridLayout, callback: *const fn () callconv(.c) QRect) void {
        qtc.QGridLayout_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IndexOf(self: QGridLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QGridLayout_IndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn SuperIndexOf(self: QGridLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QGridLayout_SuperIndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, param1: QWidget) callconv(.c) i32 `
    ///
    pub fn OnIndexOf(self: QGridLayout, callback: *const fn (QGridLayout, QWidget) callconv(.c) i32) void {
        qtc.QGridLayout_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn IsEmpty(self: QGridLayout) bool {
        return qtc.QGridLayout_IsEmpty(@ptrCast(self.ptr));
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
    /// ` self: QGridLayout `
    ///
    pub fn SuperIsEmpty(self: QGridLayout) bool {
        return qtc.QGridLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: QGridLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QGridLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: QGridLayout) i32 {
        return qtc.QGridLayout_ControlTypes(@ptrCast(self.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: QGridLayout) i32 {
        return qtc.QGridLayout_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: QGridLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QGridLayout_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` from: QWidget `
    ///
    /// ` to: QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn ReplaceWidget(self: QGridLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QGridLayout_ReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
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
    /// ` self: QGridLayout `
    ///
    /// ` from: QWidget `
    ///
    /// ` to: QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn SuperReplaceWidget(self: QGridLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QGridLayout_SuperReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, from: QWidget, to: QWidget, options: flag of qnamespace_enums.FindChildOption) callconv(.c) QLayoutItem `
    ///
    pub fn OnReplaceWidget(self: QGridLayout, callback: *const fn (QGridLayout, QWidget, QWidget, i32) callconv(.c) QLayoutItem) void {
        qtc.QGridLayout_OnReplaceWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn Layout(self: QGridLayout) QLayout {
        return .{ .ptr = qtc.QGridLayout_Layout(@ptrCast(self.ptr)) };
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
    /// ` self: QGridLayout `
    ///
    pub fn SuperLayout(self: QGridLayout) QLayout {
        return .{ .ptr = qtc.QGridLayout_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QLayout `
    ///
    pub fn OnLayout(self: QGridLayout, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QGridLayout_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` e: QChildEvent `
    ///
    pub fn ChildEvent(self: QGridLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QGridLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` e: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGridLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QGridLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, e: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QGridLayout, callback: *const fn (QGridLayout, QChildEvent) callconv(.c) void) void {
        qtc.QGridLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGridLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGridLayout_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QGridLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGridLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QGridLayout, callback: *const fn (QGridLayout, QEvent) callconv(.c) bool) void {
        qtc.QGridLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGridLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGridLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGridLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGridLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QGridLayout, callback: *const fn (QGridLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGridLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGridLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGridLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGridLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGridLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QGridLayout, callback: *const fn (QGridLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QGridLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGridLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGridLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGridLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGridLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QGridLayout, callback: *const fn (QGridLayout, QEvent) callconv(.c) void) void {
        qtc.QGridLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QGridLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGridLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QGridLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGridLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QGridLayout, callback: *const fn (QGridLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QGridLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QGridLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGridLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QGridLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGridLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QGridLayout, callback: *const fn (QGridLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QGridLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn Widget(self: QGridLayout) QWidget {
        return .{ .ptr = qtc.QGridLayout_Widget(@ptrCast(self.ptr)) };
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
    /// ` self: QGridLayout `
    ///
    pub fn SuperWidget(self: QGridLayout) QWidget {
        return .{ .ptr = qtc.QGridLayout_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnWidget(self: QGridLayout, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QGridLayout_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn SpacerItem(self: QGridLayout) QSpacerItem {
        return .{ .ptr = qtc.QGridLayout_SpacerItem(@ptrCast(self.ptr)) };
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
    /// ` self: QGridLayout `
    ///
    pub fn SuperSpacerItem(self: QGridLayout) QSpacerItem {
        return .{ .ptr = qtc.QGridLayout_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSpacerItem `
    ///
    pub fn OnSpacerItem(self: QGridLayout, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QGridLayout_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QEvent `
    ///
    pub fn WidgetEvent(self: QGridLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QGridLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperWidgetEvent(self: QGridLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QGridLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnWidgetEvent(self: QGridLayout, callback: *const fn (QGridLayout, QEvent) callconv(.c) void) void {
        qtc.QGridLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` l: QLayout `
    ///
    pub fn AddChildLayout(self: QGridLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QGridLayout_AddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` l: QLayout `
    ///
    pub fn SuperAddChildLayout(self: QGridLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QGridLayout_SuperAddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, l: QLayout) callconv(.c) void `
    ///
    pub fn OnAddChildLayout(self: QGridLayout, callback: *const fn (QGridLayout, QLayout) callconv(.c) void) void {
        qtc.QGridLayout_OnAddChildLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn AddChildWidget(self: QGridLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QGridLayout_AddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn SuperAddChildWidget(self: QGridLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QGridLayout_SuperAddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, w: QWidget) callconv(.c) void `
    ///
    pub fn OnAddChildWidget(self: QGridLayout, callback: *const fn (QGridLayout, QWidget) callconv(.c) void) void {
        qtc.QGridLayout_OnAddChildWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn AdoptLayout(self: QGridLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QGridLayout_AdoptLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SuperAdoptLayout(self: QGridLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QGridLayout_SuperAdoptLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, layout: QLayout) callconv(.c) bool `
    ///
    pub fn OnAdoptLayout(self: QGridLayout, callback: *const fn (QGridLayout, QLayout) callconv(.c) bool) void {
        qtc.QGridLayout_OnAdoptLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` param1: QRect `
    ///
    pub fn AlignmentRect(self: QGridLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QGridLayout_AlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
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
    /// ` self: QGridLayout `
    ///
    /// ` param1: QRect `
    ///
    pub fn SuperAlignmentRect(self: QGridLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QGridLayout_SuperAlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, param1: QRect) callconv(.c) QRect `
    ///
    pub fn OnAlignmentRect(self: QGridLayout, callback: *const fn (QGridLayout, QRect) callconv(.c) QRect) void {
        qtc.QGridLayout_OnAlignmentRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn Sender(self: QGridLayout) QObject {
        return .{ .ptr = qtc.QGridLayout_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGridLayout `
    ///
    pub fn SuperSender(self: QGridLayout) QObject {
        return .{ .ptr = qtc.QGridLayout_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QGridLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGridLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    pub fn SenderSignalIndex(self: QGridLayout) i32 {
        return qtc.QGridLayout_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGridLayout `
    ///
    pub fn SuperSenderSignalIndex(self: QGridLayout) i32 {
        return qtc.QGridLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QGridLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QGridLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QGridLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGridLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGridLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QGridLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGridLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QGridLayout, callback: *const fn (QGridLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGridLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGridLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QGridLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGridLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGridLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QGridLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGridLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout`
    ///
    /// ` callback: *const fn (self: QGridLayout, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QGridLayout, callback: *const fn (QGridLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QGridLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QGridLayout `
    ///
    /// ` callback: *const fn (self: QGridLayout, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QGridLayout, callback: *const fn (QGridLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#dtor.QGridLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGridLayout `
    ///
    pub fn Delete(self: QGridLayout) void {
        qtc.QGridLayout_Delete(@ptrCast(self.ptr));
    }
};
