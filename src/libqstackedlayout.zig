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
const qstackedlayout_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html)
pub const QStackedLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStackedLayout,

    pub const _is_QStackedLayout = {};
    pub const _is_QLayout = {};
    pub const _is_QObject = {};
    pub const _is_QLayoutItem = {};

    /// New constructs a new QStackedLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QStackedLayout {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QStackedLayout_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QStackedLayout object.
    ///
    pub fn New2() QStackedLayout {
        return .{ .ptr = qtc.QStackedLayout_new2() };
    }

    /// New3 constructs a new QStackedLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parentLayout: QLayout `
    ///
    pub fn New3(parentLayout: anytype) QStackedLayout {
        comptime _ = @TypeOf(parentLayout)._is_QLayout;
        return .{ .ptr = qtc.QStackedLayout_new3(@ptrCast(parentLayout.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn MetaObject(self: QStackedLayout) QMetaObject {
        return .{ .ptr = qtc.QStackedLayout_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QStackedLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QStackedLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStackedLayout `
    ///
    pub fn SuperMetaObject(self: QStackedLayout) QMetaObject {
        return .{ .ptr = qtc.QStackedLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QStackedLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStackedLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QStackedLayout, callback: *const fn (QStackedLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QStackedLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QStackedLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStackedLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QStackedLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStackedLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QStackedLayout, callback: *const fn (QStackedLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QStackedLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QStackedLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStackedLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstackedlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn AddWidget(self: QStackedLayout, w: anytype) i32 {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QStackedLayout_AddWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` w: QWidget `
    ///
    pub fn InsertWidget(self: QStackedLayout, index: i32, w: anytype) i32 {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QStackedLayout_InsertWidget(@ptrCast(self.ptr), @bitCast(index), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#currentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn CurrentWidget(self: QStackedLayout) QWidget {
        return .{ .ptr = qtc.QStackedLayout_CurrentWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn CurrentIndex(self: QStackedLayout) i32 {
        return qtc.QStackedLayout_CurrentIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn Widget(self: QStackedLayout, param1: i32) QWidget {
        return .{ .ptr = qtc.QStackedLayout_Widget(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn Count(self: QStackedLayout) i32 {
        return qtc.QStackedLayout_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: QStackedLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QStackedLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn SuperCount(self: QStackedLayout) i32 {
        return qtc.QStackedLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#stackingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` qstackedlayout_enums.StackingMode `
    ///
    pub fn StackingMode(self: QStackedLayout) i32 {
        return qtc.QStackedLayout_StackingMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setStackingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` stackingMode: qstackedlayout_enums.StackingMode `
    ///
    pub fn SetStackingMode(self: QStackedLayout, stackingMode: i32) void {
        qtc.QStackedLayout_SetStackingMode(@ptrCast(self.ptr), @bitCast(stackingMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` item: QLayoutItem `
    ///
    pub fn AddItem(self: QStackedLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        qtc.QStackedLayout_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#addItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout, item: QLayoutItem) callconv(.c) void `
    ///
    pub fn OnAddItem(self: QStackedLayout, callback: *const fn (QStackedLayout, QLayoutItem) callconv(.c) void) void {
        qtc.QStackedLayout_OnAddItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddItem` instead
    ///
    pub const QBaseAddItem = SuperAddItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#addItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` item: QLayoutItem `
    ///
    pub fn SuperAddItem(self: QStackedLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QLayoutItem;
        qtc.QStackedLayout_SuperAddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn SizeHint(self: QStackedLayout) QSize {
        return .{ .ptr = qtc.QStackedLayout_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QStackedLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QStackedLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn SuperSizeHint(self: QStackedLayout) QSize {
        return .{ .ptr = qtc.QStackedLayout_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn MinimumSize(self: QStackedLayout) QSize {
        return .{ .ptr = qtc.QStackedLayout_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSize(self: QStackedLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QStackedLayout_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumSize` instead
    ///
    pub const QBaseMinimumSize = SuperMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn SuperMinimumSize(self: QStackedLayout) QSize {
        return .{ .ptr = qtc.QStackedLayout_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn ItemAt(self: QStackedLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QStackedLayout_ItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout, param1: i32) callconv(.c) QLayoutItem `
    ///
    pub fn OnItemAt(self: QStackedLayout, callback: *const fn (QStackedLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QStackedLayout_OnItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemAt` instead
    ///
    pub const QBaseItemAt = SuperItemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperItemAt(self: QStackedLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QStackedLayout_SuperItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#takeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn TakeAt(self: QStackedLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QStackedLayout_TakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#takeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout, param1: i32) callconv(.c) QLayoutItem `
    ///
    pub fn OnTakeAt(self: QStackedLayout, callback: *const fn (QStackedLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QStackedLayout_OnTakeAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTakeAt` instead
    ///
    pub const QBaseTakeAt = SuperTakeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#takeAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperTakeAt(self: QStackedLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QStackedLayout_SuperTakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetGeometry(self: QStackedLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStackedLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout, rect: QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: QStackedLayout, callback: *const fn (QStackedLayout, QRect) callconv(.c) void) void {
        qtc.QStackedLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` rect: QRect `
    ///
    pub fn SuperSetGeometry(self: QStackedLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStackedLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn HasHeightForWidth(self: QStackedLayout) bool {
        return qtc.QStackedLayout_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QStackedLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QStackedLayout_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn SuperHasHeightForWidth(self: QStackedLayout) bool {
        return qtc.QStackedLayout_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` width: i32 `
    ///
    pub fn HeightForWidth(self: QStackedLayout, width: i32) i32 {
        return qtc.QStackedLayout_HeightForWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout, width: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QStackedLayout, callback: *const fn (QStackedLayout, i32) callconv(.c) i32) void {
        qtc.QStackedLayout_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` width: i32 `
    ///
    pub fn SuperHeightForWidth(self: QStackedLayout, width: i32) i32 {
        return qtc.QStackedLayout_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#widgetRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn WidgetRemoved(self: QStackedLayout, index: i32) void {
        qtc.QStackedLayout_WidgetRemoved(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#widgetRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout, index: i32) callconv(.c) void `
    ///
    pub fn OnWidgetRemoved(self: QStackedLayout, callback: *const fn (QStackedLayout, i32) callconv(.c) void) void {
        qtc.QStackedLayout_Connect_WidgetRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#currentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn CurrentChanged(self: QStackedLayout, index: i32) void {
        qtc.QStackedLayout_CurrentChanged(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#currentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout, index: i32) callconv(.c) void `
    ///
    pub fn OnCurrentChanged(self: QStackedLayout, callback: *const fn (QStackedLayout, i32) callconv(.c) void) void {
        qtc.QStackedLayout_Connect_CurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentIndex(self: QStackedLayout, index: i32) void {
        qtc.QStackedLayout_SetCurrentIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setCurrentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn SetCurrentWidget(self: QStackedLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStackedLayout_SetCurrentWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstackedlayout.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstackedlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QStackedLayout, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QStackedLayout, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLayout_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn UnsetContentsMargins(self: QStackedLayout) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` left: *i32 `
    ///
    /// ` top: *i32 `
    ///
    /// ` right: *i32 `
    ///
    /// ` bottom: *i32 `
    ///
    pub fn GetContentsMargins(self: QStackedLayout, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn ContentsMargins(self: QStackedLayout) QMargins {
        return .{ .ptr = qtc.QLayout_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn ContentsRect(self: QStackedLayout) QRect {
        return .{ .ptr = qtc.QLayout_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` w: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QStackedLayout, w: anytype, alignment: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` l: QLayout `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment2(self: QStackedLayout, l: anytype, alignment: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QLayout_SetAlignment2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` sizeConstraint: qlayout_enums.SizeConstraint `
    ///
    pub fn SetSizeConstraint(self: QStackedLayout, sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self.ptr), @bitCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` qlayout_enums.SizeConstraint `
    ///
    pub fn SizeConstraint(self: QStackedLayout) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn SetMenuBar(self: QStackedLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_SetMenuBar(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn MenuBar(self: QStackedLayout) QWidget {
        return .{ .ptr = qtc.QLayout_MenuBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn ParentWidget(self: QStackedLayout) QWidget {
        return .{ .ptr = qtc.QLayout_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn Activate(self: QStackedLayout) bool {
        return qtc.QLayout_Activate(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn Update(self: QStackedLayout) void {
        qtc.QLayout_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn RemoveWidget(self: QStackedLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_RemoveWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn RemoveItem(self: QStackedLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn IndexOf2(self: QStackedLayout, param1: anytype) i32 {
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
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout, param1: QLayoutItem) callconv(.c) i32 `
    ///
    pub fn OnIndexOf2(self: QStackedLayout, callback: *const fn (QStackedLayout, QLayoutItem) callconv(.c) i32) void {
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
    /// ` self: QStackedLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn SuperIndexOf2(self: QStackedLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_SuperIndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn TotalMinimumHeightForWidth(self: QStackedLayout, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn TotalHeightForWidth(self: QStackedLayout, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn TotalMinimumSize(self: QStackedLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn TotalMaximumSize(self: QStackedLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn TotalSizeHint(self: QStackedLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QStackedLayout, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn IsEnabled(self: QStackedLayout) bool {
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
    /// ` self: QStackedLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QStackedLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstackedlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QStackedLayout, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn IsWidgetType(self: QStackedLayout) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn IsWindowType(self: QStackedLayout) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn IsQuickItemType(self: QStackedLayout) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn SignalsBlocked(self: QStackedLayout) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QStackedLayout, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn Thread(self: QStackedLayout) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QStackedLayout, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QStackedLayout, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QStackedLayout, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QStackedLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QStackedLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QStackedLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qstackedlayout.Children: Memory allocation failed");
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
    /// ` self: QStackedLayout `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QStackedLayout, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QStackedLayout, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QStackedLayout, obj: anytype) void {
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
    /// ` self: QStackedLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QStackedLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QStackedLayout `
    ///
    pub fn Disconnect3(self: QStackedLayout) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QStackedLayout, receiver: anytype) bool {
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
    /// ` self: QStackedLayout `
    ///
    pub fn DumpObjectTree(self: QStackedLayout) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn DumpObjectInfo(self: QStackedLayout) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QStackedLayout, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QStackedLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QStackedLayout, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QStackedLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qstackedlayout.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstackedlayout.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QStackedLayout `
    ///
    pub fn BindingStorage(self: QStackedLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn BindingStorage2(self: QStackedLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn Destroyed(self: QStackedLayout) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QStackedLayout, callback: *const fn (QStackedLayout) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn Parent(self: QStackedLayout) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QStackedLayout, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn DeleteLater(self: QStackedLayout) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QStackedLayout, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QStackedLayout, time: i64, timerType: i32) i32 {
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
    /// ` self: QStackedLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QStackedLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QStackedLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QStackedLayout, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QStackedLayout, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QStackedLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QStackedLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QStackedLayout `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QStackedLayout, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QStackedLayout `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QStackedLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QStackedLayout, callback: *const fn (QStackedLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QStackedLayout) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#spacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn Spacing(self: QStackedLayout) i32 {
        return qtc.QStackedLayout_Spacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSpacing` instead
    ///
    pub const QBaseSpacing = SuperSpacing;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#spacing)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn SuperSpacing(self: QStackedLayout) i32 {
        return qtc.QStackedLayout_SuperSpacing(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#spacing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSpacing(self: QStackedLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QStackedLayout_OnSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetSpacing(self: QStackedLayout, spacing: i32) void {
        qtc.QStackedLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `SuperSetSpacing` instead
    ///
    pub const QBaseSetSpacing = SuperSetSpacing;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SuperSetSpacing(self: QStackedLayout, spacing: i32) void {
        qtc.QStackedLayout_SuperSetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, spacing: i32) callconv(.c) void `
    ///
    pub fn OnSetSpacing(self: QStackedLayout, callback: *const fn (QStackedLayout, i32) callconv(.c) void) void {
        qtc.QStackedLayout_OnSetSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn Invalidate(self: QStackedLayout) void {
        qtc.QStackedLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#invalidate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn SuperInvalidate(self: QStackedLayout) void {
        qtc.QStackedLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: QStackedLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QStackedLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn Geometry(self: QStackedLayout) QRect {
        return .{ .ptr = qtc.QStackedLayout_Geometry(@ptrCast(self.ptr)) };
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
    /// ` self: QStackedLayout `
    ///
    pub fn SuperGeometry(self: QStackedLayout) QRect {
        return .{ .ptr = qtc.QStackedLayout_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    pub fn OnGeometry(self: QStackedLayout, callback: *const fn () callconv(.c) QRect) void {
        qtc.QStackedLayout_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: QStackedLayout) i32 {
        return qtc.QStackedLayout_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperExpandingDirections` instead
    ///
    pub const QBaseExpandingDirections = SuperExpandingDirections;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: QStackedLayout) i32 {
        return qtc.QStackedLayout_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: QStackedLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QStackedLayout_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn MaximumSize(self: QStackedLayout) QSize {
        return .{ .ptr = qtc.QStackedLayout_MaximumSize(@ptrCast(self.ptr)) };
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
    /// ` self: QStackedLayout `
    ///
    pub fn SuperMaximumSize(self: QStackedLayout) QSize {
        return .{ .ptr = qtc.QStackedLayout_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMaximumSize(self: QStackedLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QStackedLayout_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IndexOf(self: QStackedLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QStackedLayout_IndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn SuperIndexOf(self: QStackedLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QStackedLayout_SuperIndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, param1: QWidget) callconv(.c) i32 `
    ///
    pub fn OnIndexOf(self: QStackedLayout, callback: *const fn (QStackedLayout, QWidget) callconv(.c) i32) void {
        qtc.QStackedLayout_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn IsEmpty(self: QStackedLayout) bool {
        return qtc.QStackedLayout_IsEmpty(@ptrCast(self.ptr));
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
    /// ` self: QStackedLayout `
    ///
    pub fn SuperIsEmpty(self: QStackedLayout) bool {
        return qtc.QStackedLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: QStackedLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QStackedLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: QStackedLayout) i32 {
        return qtc.QStackedLayout_ControlTypes(@ptrCast(self.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: QStackedLayout) i32 {
        return qtc.QStackedLayout_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: QStackedLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QStackedLayout_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` from: QWidget `
    ///
    /// ` to: QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn ReplaceWidget(self: QStackedLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QStackedLayout_ReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
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
    /// ` self: QStackedLayout `
    ///
    /// ` from: QWidget `
    ///
    /// ` to: QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn SuperReplaceWidget(self: QStackedLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QStackedLayout_SuperReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, from: QWidget, to: QWidget, options: flag of qnamespace_enums.FindChildOption) callconv(.c) QLayoutItem `
    ///
    pub fn OnReplaceWidget(self: QStackedLayout, callback: *const fn (QStackedLayout, QWidget, QWidget, i32) callconv(.c) QLayoutItem) void {
        qtc.QStackedLayout_OnReplaceWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn Layout(self: QStackedLayout) QLayout {
        return .{ .ptr = qtc.QStackedLayout_Layout(@ptrCast(self.ptr)) };
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
    /// ` self: QStackedLayout `
    ///
    pub fn SuperLayout(self: QStackedLayout) QLayout {
        return .{ .ptr = qtc.QStackedLayout_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QLayout `
    ///
    pub fn OnLayout(self: QStackedLayout, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QStackedLayout_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` e: QChildEvent `
    ///
    pub fn ChildEvent(self: QStackedLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QStackedLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` e: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QStackedLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QStackedLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, e: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QStackedLayout, callback: *const fn (QStackedLayout, QChildEvent) callconv(.c) void) void {
        qtc.QStackedLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QStackedLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QStackedLayout_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QStackedLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QStackedLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QStackedLayout, callback: *const fn (QStackedLayout, QEvent) callconv(.c) bool) void {
        qtc.QStackedLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QStackedLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QStackedLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QStackedLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QStackedLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QStackedLayout, callback: *const fn (QStackedLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QStackedLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QStackedLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QStackedLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QStackedLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QStackedLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QStackedLayout, callback: *const fn (QStackedLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QStackedLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QStackedLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStackedLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QStackedLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStackedLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QStackedLayout, callback: *const fn (QStackedLayout, QEvent) callconv(.c) void) void {
        qtc.QStackedLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QStackedLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStackedLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QStackedLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStackedLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QStackedLayout, callback: *const fn (QStackedLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QStackedLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QStackedLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStackedLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QStackedLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStackedLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QStackedLayout, callback: *const fn (QStackedLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QStackedLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: QStackedLayout, param1: i32) i32 {
        return qtc.QStackedLayout_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: QStackedLayout, param1: i32) i32 {
        return qtc.QStackedLayout_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: QStackedLayout, callback: *const fn (QStackedLayout, i32) callconv(.c) i32) void {
        qtc.QStackedLayout_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn SpacerItem(self: QStackedLayout) QSpacerItem {
        return .{ .ptr = qtc.QStackedLayout_SpacerItem(@ptrCast(self.ptr)) };
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
    /// ` self: QStackedLayout `
    ///
    pub fn SuperSpacerItem(self: QStackedLayout) QSpacerItem {
        return .{ .ptr = qtc.QStackedLayout_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSpacerItem `
    ///
    pub fn OnSpacerItem(self: QStackedLayout, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QStackedLayout_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: QEvent `
    ///
    pub fn WidgetEvent(self: QStackedLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QStackedLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperWidgetEvent(self: QStackedLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QStackedLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnWidgetEvent(self: QStackedLayout, callback: *const fn (QStackedLayout, QEvent) callconv(.c) void) void {
        qtc.QStackedLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` l: QLayout `
    ///
    pub fn AddChildLayout(self: QStackedLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QStackedLayout_AddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` l: QLayout `
    ///
    pub fn SuperAddChildLayout(self: QStackedLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QStackedLayout_SuperAddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, l: QLayout) callconv(.c) void `
    ///
    pub fn OnAddChildLayout(self: QStackedLayout, callback: *const fn (QStackedLayout, QLayout) callconv(.c) void) void {
        qtc.QStackedLayout_OnAddChildLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn AddChildWidget(self: QStackedLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStackedLayout_AddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn SuperAddChildWidget(self: QStackedLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStackedLayout_SuperAddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, w: QWidget) callconv(.c) void `
    ///
    pub fn OnAddChildWidget(self: QStackedLayout, callback: *const fn (QStackedLayout, QWidget) callconv(.c) void) void {
        qtc.QStackedLayout_OnAddChildWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn AdoptLayout(self: QStackedLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QStackedLayout_AdoptLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SuperAdoptLayout(self: QStackedLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QStackedLayout_SuperAdoptLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, layout: QLayout) callconv(.c) bool `
    ///
    pub fn OnAdoptLayout(self: QStackedLayout, callback: *const fn (QStackedLayout, QLayout) callconv(.c) bool) void {
        qtc.QStackedLayout_OnAdoptLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` param1: QRect `
    ///
    pub fn AlignmentRect(self: QStackedLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QStackedLayout_AlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
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
    /// ` self: QStackedLayout `
    ///
    /// ` param1: QRect `
    ///
    pub fn SuperAlignmentRect(self: QStackedLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QStackedLayout_SuperAlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, param1: QRect) callconv(.c) QRect `
    ///
    pub fn OnAlignmentRect(self: QStackedLayout, callback: *const fn (QStackedLayout, QRect) callconv(.c) QRect) void {
        qtc.QStackedLayout_OnAlignmentRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn Sender(self: QStackedLayout) QObject {
        return .{ .ptr = qtc.QStackedLayout_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QStackedLayout `
    ///
    pub fn SuperSender(self: QStackedLayout) QObject {
        return .{ .ptr = qtc.QStackedLayout_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QStackedLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QStackedLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn SenderSignalIndex(self: QStackedLayout) i32 {
        return qtc.QStackedLayout_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QStackedLayout `
    ///
    pub fn SuperSenderSignalIndex(self: QStackedLayout) i32 {
        return qtc.QStackedLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QStackedLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QStackedLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QStackedLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStackedLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QStackedLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QStackedLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStackedLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QStackedLayout, callback: *const fn (QStackedLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QStackedLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QStackedLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QStackedLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QStackedLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QStackedLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QStackedLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout`
    ///
    /// ` callback: *const fn (self: QStackedLayout, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QStackedLayout, callback: *const fn (QStackedLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QStackedLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStackedLayout `
    ///
    /// ` callback: *const fn (self: QStackedLayout, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QStackedLayout, callback: *const fn (QStackedLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#dtor.QStackedLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStackedLayout `
    ///
    pub fn Delete(self: QStackedLayout) void {
        qtc.QStackedLayout_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#public-types)
pub const enums = struct {
    pub const StackingMode = enum(i32) {
        pub const StackOne: i32 = 0;
        pub const StackAll: i32 = 1;
    };
};
