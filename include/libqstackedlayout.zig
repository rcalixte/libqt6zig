const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlayout_enums = @import("libqlayout.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qstackedlayout_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html)
pub const qstackedlayout = struct {
    /// New constructs a new QStackedLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn New(parent: ?*anyopaque) QtC.QStackedLayout {
        return qtc.QStackedLayout_new(@ptrCast(parent));
    }

    /// New2 constructs a new QStackedLayout object.
    ///
    pub fn New2() QtC.QStackedLayout {
        return qtc.QStackedLayout_new2();
    }

    /// New3 constructs a new QStackedLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parentLayout: QtC.QLayout `
    ///
    pub fn New3(parentLayout: ?*anyopaque) QtC.QStackedLayout {
        return qtc.QStackedLayout_new3(@ptrCast(parentLayout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QStackedLayout_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QStackedLayout_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QStackedLayout_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStackedLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QStackedLayout_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStackedLayout_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStackedLayout_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QStackedLayout_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStackedLayout_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn AddWidget(self: ?*anyopaque, w: ?*anyopaque) i32 {
        return qtc.QStackedLayout_AddWidget(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn InsertWidget(self: ?*anyopaque, index: i32, w: ?*anyopaque) i32 {
        return qtc.QStackedLayout_InsertWidget(@ptrCast(self), @bitCast(index), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#currentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn CurrentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QStackedLayout_CurrentWidget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn CurrentIndex(self: ?*anyopaque) i32 {
        return qtc.QStackedLayout_CurrentIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn Widget(self: ?*anyopaque, param1: i32) QtC.QWidget {
        return qtc.QStackedLayout_Widget(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QStackedLayout_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QStackedLayout_OnCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperCount(self: ?*anyopaque) i32 {
        return qtc.QStackedLayout_SuperCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#stackingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` qstackedlayout_enums.StackingMode `
    ///
    pub fn StackingMode(self: ?*anyopaque) i32 {
        return qtc.QStackedLayout_StackingMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setStackingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` stackingMode: qstackedlayout_enums.StackingMode `
    ///
    pub fn SetStackingMode(self: ?*anyopaque, stackingMode: i32) void {
        qtc.QStackedLayout_SetStackingMode(@ptrCast(self), @bitCast(stackingMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` item: QtC.QLayoutItem `
    ///
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QStackedLayout_AddItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#addItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, item: QtC.QLayoutItem) callconv(.c) void `
    ///
    pub fn OnAddItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStackedLayout_OnAddItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` item: QtC.QLayoutItem `
    ///
    pub fn SuperAddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QStackedLayout_SuperAddItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QStackedLayout_SizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QStackedLayout_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QStackedLayout_SuperSizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStackedLayout_MinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QStackedLayout_OnMinimumSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStackedLayout_SuperMinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn ItemAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QStackedLayout_ItemAt(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, param1: i32) callconv(.c) QtC.QLayoutItem `
    ///
    pub fn OnItemAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QStackedLayout_OnItemAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperItemAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QStackedLayout_SuperItemAt(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#takeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn TakeAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QStackedLayout_TakeAt(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#takeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, param1: i32) callconv(.c) QtC.QLayoutItem `
    ///
    pub fn OnTakeAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QStackedLayout_OnTakeAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperTakeAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QStackedLayout_SuperTakeAt(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QStackedLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, rect: QtC.QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStackedLayout_OnSetGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SuperSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QStackedLayout_SuperSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QStackedLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QStackedLayout_OnHasHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QStackedLayout_SuperHasHeightForWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` width: i32 `
    ///
    pub fn HeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QStackedLayout_HeightForWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, width: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QStackedLayout_OnHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` width: i32 `
    ///
    pub fn SuperHeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QStackedLayout_SuperHeightForWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#widgetRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn WidgetRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QStackedLayout_WidgetRemoved(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#widgetRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, index: i32) callconv(.c) void `
    ///
    pub fn OnWidgetRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStackedLayout_Connect_WidgetRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#currentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn CurrentChanged(self: ?*anyopaque, index: i32) void {
        qtc.QStackedLayout_CurrentChanged(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#currentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, index: i32) callconv(.c) void `
    ///
    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStackedLayout_Connect_CurrentChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QStackedLayout_SetCurrentIndex(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setCurrentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn SetCurrentWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStackedLayout_SetCurrentWidget(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` margins: QtC.QMargins `
    ///
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QLayout_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` left: *i32 `
    ///
    /// ` top: *i32 `
    ///
    /// ` right: *i32 `
    ///
    /// ` bottom: *i32 `
    ///
    pub fn GetContentsMargins(self: ?*anyopaque, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i32) bool {
        return qtc.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @bitCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` l: QtC.QLayout `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i32) bool {
        return qtc.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @bitCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` sizeConstraint: qlayout_enums.SizeConstraint `
    ///
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self), @bitCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` qlayout_enums.SizeConstraint `
    ///
    pub fn SizeConstraint(self: ?*anyopaque) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn MenuBar(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_MenuBar(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Activate(self: ?*anyopaque) bool {
        return qtc.QLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Update(self: ?*anyopaque) void {
        qtc.QLayout_Update(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: QtC.QLayoutItem `
    ///
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: QtC.QLayoutItem `
    ///
    pub fn IndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_IndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, param1: QtC.QLayoutItem) callconv(.c) i32 `
    ///
    pub fn OnIndexOf2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: QtC.QLayoutItem `
    ///
    pub fn SuperIndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_SuperIndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @bitCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self), @bitCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn TotalMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn TotalMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn TotalSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QtC.QWidget `
    ///
    /// ` s: QtC.QSize `
    ///
    pub fn ClosestAcceptableSize(w: ?*anyopaque, s: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_ClosestAcceptableSize(@ptrCast(w), @ptrCast(s));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qstackedlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#spacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Spacing(self: ?*anyopaque) i32 {
        return qtc.QStackedLayout_Spacing(@ptrCast(self));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperSpacing(self: ?*anyopaque) i32 {
        return qtc.QStackedLayout_SuperSpacing(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#spacing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSpacing(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QStackedLayout_OnSpacing(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QStackedLayout_SetSpacing(@ptrCast(self), @bitCast(spacing));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SuperSetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QStackedLayout_SuperSetSpacing(@ptrCast(self), @bitCast(spacing));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, spacing: i32) callconv(.c) void `
    ///
    pub fn OnSetSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStackedLayout_OnSetSpacing(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QStackedLayout_Invalidate(@ptrCast(self));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperInvalidate(self: ?*anyopaque) void {
        qtc.QStackedLayout_SuperInvalidate(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QStackedLayout_OnInvalidate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QStackedLayout_Geometry(@ptrCast(self));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QStackedLayout_SuperGeometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QRect `
    ///
    pub fn OnGeometry(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QRect) void {
        qtc.QStackedLayout_OnGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QStackedLayout_ExpandingDirections(@ptrCast(self));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QStackedLayout_SuperExpandingDirections(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QStackedLayout_OnExpandingDirections(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStackedLayout_MaximumSize(@ptrCast(self));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QStackedLayout_SuperMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QStackedLayout_OnMaximumSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QStackedLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn SuperIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QStackedLayout_SuperIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, param1: QtC.QWidget) callconv(.c) i32 `
    ///
    pub fn OnIndexOf(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStackedLayout_OnIndexOf(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QStackedLayout_IsEmpty(@ptrCast(self));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperIsEmpty(self: ?*anyopaque) bool {
        return qtc.QStackedLayout_SuperIsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QStackedLayout_OnIsEmpty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: ?*anyopaque) i32 {
        return qtc.QStackedLayout_ControlTypes(@ptrCast(self));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: ?*anyopaque) i32 {
        return qtc.QStackedLayout_SuperControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QStackedLayout_OnControlTypes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` from: QtC.QWidget `
    ///
    /// ` to: QtC.QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i32) QtC.QLayoutItem {
        return qtc.QStackedLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @bitCast(options));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` from: QtC.QWidget `
    ///
    /// ` to: QtC.QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn SuperReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i32) QtC.QLayoutItem {
        return qtc.QStackedLayout_SuperReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @bitCast(options));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, from: QtC.QWidget, to: QtC.QWidget, options: flag of qnamespace_enums.FindChildOption) callconv(.c) QtC.QLayoutItem `
    ///
    pub fn OnReplaceWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QStackedLayout_OnReplaceWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QStackedLayout_Layout(@ptrCast(self));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QStackedLayout_SuperLayout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QLayout `
    ///
    pub fn OnLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QLayout) void {
        qtc.QStackedLayout_OnLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` e: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QStackedLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` e: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QStackedLayout_SuperChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, e: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStackedLayout_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStackedLayout_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStackedLayout_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStackedLayout_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStackedLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStackedLayout_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStackedLayout_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStackedLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStackedLayout_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStackedLayout_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStackedLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStackedLayout_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStackedLayout_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStackedLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStackedLayout_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStackedLayout_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStackedLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStackedLayout_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStackedLayout_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QStackedLayout_MinimumHeightForWidth(@ptrCast(self), @bitCast(param1));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QStackedLayout_SuperMinimumHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QStackedLayout_OnMinimumHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QStackedLayout_SpacerItem(@ptrCast(self));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QStackedLayout_SuperSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSpacerItem `
    ///
    pub fn OnSpacerItem(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QStackedLayout_OnSpacerItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStackedLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn SuperWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStackedLayout_SuperWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, param1: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnWidgetEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStackedLayout_OnWidgetEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` l: QtC.QLayout `
    ///
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QStackedLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` l: QtC.QLayout `
    ///
    pub fn SuperAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QStackedLayout_SuperAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, l: QtC.QLayout) callconv(.c) void `
    ///
    pub fn OnAddChildLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStackedLayout_OnAddChildLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStackedLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn SuperAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStackedLayout_SuperAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, w: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnAddChildWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStackedLayout_OnAddChildWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` layout: QtC.QLayout `
    ///
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QStackedLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` layout: QtC.QLayout `
    ///
    pub fn SuperAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QStackedLayout_SuperAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, layout: QtC.QLayout) callconv(.c) bool `
    ///
    pub fn OnAdoptLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStackedLayout_OnAdoptLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: QtC.QRect `
    ///
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QStackedLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` param1: QtC.QRect `
    ///
    pub fn SuperAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QStackedLayout_SuperAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, param1: QtC.QRect) callconv(.c) QtC.QRect `
    ///
    pub fn OnAlignmentRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QStackedLayout_OnAlignmentRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QStackedLayout_Sender(@ptrCast(self));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QStackedLayout_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QStackedLayout_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QStackedLayout_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QStackedLayout_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QStackedLayout_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStackedLayout_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStackedLayout_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QStackedLayout_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QStackedLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QStackedLayout_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout`
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStackedLayout_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStackedLayout `
    ///
    /// ` callback: *const fn (self: QtC.QStackedLayout, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStackedLayout `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QStackedLayout_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#public-types)
pub const enums = struct {
    pub const StackingMode = enum(i32) {
        pub const StackOne: i32 = 0;
        pub const StackAll: i32 = 1;
    };
};
