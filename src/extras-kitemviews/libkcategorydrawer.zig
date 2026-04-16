const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KCategorizedView = @import("libqt6").KCategorizedView;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QModelIndex = @import("libqt6").QModelIndex;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QRect = @import("libqt6").QRect;
const QStyleOption = @import("libqt6").QStyleOption;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html)
pub const KCategoryDrawer = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCategoryDrawer,

    pub const _is_KCategoryDrawer = {};
    pub const _is_QObject = {};

    /// New constructs a new KCategoryDrawer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` view: KCategorizedView `
    ///
    pub fn New(view: anytype) KCategoryDrawer {
        comptime _ = @TypeOf(view)._is_KCategorizedView;
        return .{ .ptr = qtc.KCategoryDrawer_new(@ptrCast(view.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn MetaObject(self: KCategoryDrawer) QMetaObject {
        return .{ .ptr = qtc.KCategoryDrawer_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KCategoryDrawer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KCategoryDrawer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn SuperMetaObject(self: KCategoryDrawer) QMetaObject {
        return .{ .ptr = qtc.KCategoryDrawer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KCategoryDrawer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCategoryDrawer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KCategoryDrawer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KCategoryDrawer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCategoryDrawer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KCategoryDrawer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCategoryDrawer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KCategoryDrawer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCategoryDrawer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorydrawer.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn View(self: KCategoryDrawer) KCategorizedView {
        return .{ .ptr = qtc.KCategoryDrawer_View(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#drawCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` sortRole: i32 `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` painter: QPainter `
    ///
    pub fn DrawCategory(self: KCategoryDrawer, index: anytype, sortRole: i32, option: anytype, painter: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KCategoryDrawer_DrawCategory(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(sortRole), @ptrCast(option.ptr), @ptrCast(painter.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#drawCategory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, index: QModelIndex, sortRole: i32, option: QStyleOption, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnDrawCategory(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, i32, QStyleOption, QPainter) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnDrawCategory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawCategory` instead
    ///
    pub const QBaseDrawCategory = SuperDrawCategory;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#drawCategory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` sortRole: i32 `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperDrawCategory(self: KCategoryDrawer, index: anytype, sortRole: i32, option: anytype, painter: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KCategoryDrawer_SuperDrawCategory(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(sortRole), @ptrCast(option.ptr), @ptrCast(painter.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#categoryHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` option: QStyleOption `
    ///
    pub fn CategoryHeight(self: KCategoryDrawer, index: anytype, option: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(option)._is_QStyleOption;
        return qtc.KCategoryDrawer_CategoryHeight(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(option.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#categoryHeight)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, index: QModelIndex, option: QStyleOption) callconv(.c) i32 `
    ///
    pub fn OnCategoryHeight(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, QStyleOption) callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnCategoryHeight(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCategoryHeight` instead
    ///
    pub const QBaseCategoryHeight = SuperCategoryHeight;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#categoryHeight)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` option: QStyleOption `
    ///
    pub fn SuperCategoryHeight(self: KCategoryDrawer, index: anytype, option: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(option)._is_QStyleOption;
        return qtc.KCategoryDrawer_SuperCategoryHeight(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(option.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#leftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn LeftMargin(self: KCategoryDrawer) i32 {
        return qtc.KCategoryDrawer_LeftMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#leftMargin)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLeftMargin(self: KCategoryDrawer, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnLeftMargin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLeftMargin` instead
    ///
    pub const QBaseLeftMargin = SuperLeftMargin;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#leftMargin)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn SuperLeftMargin(self: KCategoryDrawer) i32 {
        return qtc.KCategoryDrawer_SuperLeftMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#rightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn RightMargin(self: KCategoryDrawer) i32 {
        return qtc.KCategoryDrawer_RightMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#rightMargin)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnRightMargin(self: KCategoryDrawer, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnRightMargin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRightMargin` instead
    ///
    pub const QBaseRightMargin = SuperRightMargin;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#rightMargin)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn SuperRightMargin(self: KCategoryDrawer) i32 {
        return qtc.KCategoryDrawer_SuperRightMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#collapseOrExpandClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn CollapseOrExpandClicked(self: KCategoryDrawer, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KCategoryDrawer_CollapseOrExpandClicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#collapseOrExpandClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnCollapseOrExpandClicked(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex) callconv(.c) void) void {
        qtc.KCategoryDrawer_Connect_CollapseOrExpandClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#actionRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` action: i32 `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ActionRequested(self: KCategoryDrawer, action: i32, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KCategoryDrawer_ActionRequested(@ptrCast(self.ptr), @bitCast(action), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#actionRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, action: i32, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnActionRequested(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, i32, QModelIndex) callconv(.c) void) void {
        qtc.KCategoryDrawer_Connect_ActionRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` blockRect: QRect `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseButtonPressed(self: KCategoryDrawer, index: anytype, blockRect: anytype, event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategoryDrawer_MouseButtonPressed(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonPressed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, index: QModelIndex, blockRect: QRect, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseButtonPressed(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, QRect, QMouseEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseButtonPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseButtonPressed` instead
    ///
    pub const QBaseMouseButtonPressed = SuperMouseButtonPressed;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonPressed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` blockRect: QRect `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseButtonPressed(self: KCategoryDrawer, index: anytype, blockRect: anytype, event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategoryDrawer_SuperMouseButtonPressed(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonReleased)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` blockRect: QRect `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseButtonReleased(self: KCategoryDrawer, index: anytype, blockRect: anytype, event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategoryDrawer_MouseButtonReleased(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonReleased)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, index: QModelIndex, blockRect: QRect, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseButtonReleased(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, QRect, QMouseEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseButtonReleased(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseButtonReleased` instead
    ///
    pub const QBaseMouseButtonReleased = SuperMouseButtonReleased;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonReleased)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` blockRect: QRect `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseButtonReleased(self: KCategoryDrawer, index: anytype, blockRect: anytype, event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategoryDrawer_SuperMouseButtonReleased(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseMoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` blockRect: QRect `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoved(self: KCategoryDrawer, index: anytype, blockRect: anytype, event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategoryDrawer_MouseMoved(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseMoved)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, index: QModelIndex, blockRect: QRect, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoved(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, QRect, QMouseEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseMoved` instead
    ///
    pub const QBaseMouseMoved = SuperMouseMoved;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseMoved)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` blockRect: QRect `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoved(self: KCategoryDrawer, index: anytype, blockRect: anytype, event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategoryDrawer_SuperMouseMoved(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonDoubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` blockRect: QRect `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseButtonDoubleClicked(self: KCategoryDrawer, index: anytype, blockRect: anytype, event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategoryDrawer_MouseButtonDoubleClicked(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonDoubleClicked)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, index: QModelIndex, blockRect: QRect, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseButtonDoubleClicked(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, QRect, QMouseEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseButtonDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseButtonDoubleClicked` instead
    ///
    pub const QBaseMouseButtonDoubleClicked = SuperMouseButtonDoubleClicked;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonDoubleClicked)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` blockRect: QRect `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseButtonDoubleClicked(self: KCategoryDrawer, index: anytype, blockRect: anytype, event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KCategoryDrawer_SuperMouseButtonDoubleClicked(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` blockRect: QRect `
    ///
    pub fn MouseLeft(self: KCategoryDrawer, index: anytype, blockRect: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        qtc.KCategoryDrawer_MouseLeft(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseLeft)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, index: QModelIndex, blockRect: QRect) callconv(.c) void `
    ///
    pub fn OnMouseLeft(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, QRect) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseLeft(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseLeft` instead
    ///
    pub const QBaseMouseLeft = SuperMouseLeft;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseLeft)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` blockRect: QRect `
    ///
    pub fn SuperMouseLeft(self: KCategoryDrawer, index: anytype, blockRect: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        qtc.KCategoryDrawer_SuperMouseLeft(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorydrawer.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorydrawer.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KCategoryDrawer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorydrawer.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KCategoryDrawer, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn IsWidgetType(self: KCategoryDrawer) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn IsWindowType(self: KCategoryDrawer) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn IsQuickItemType(self: KCategoryDrawer) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn SignalsBlocked(self: KCategoryDrawer) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KCategoryDrawer, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn Thread(self: KCategoryDrawer) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KCategoryDrawer, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KCategoryDrawer, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KCategoryDrawer, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KCategoryDrawer, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KCategoryDrawer, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KCategoryDrawer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kcategorydrawer.Children: Memory allocation failed");
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KCategoryDrawer, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KCategoryDrawer, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KCategoryDrawer, obj: anytype) void {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KCategoryDrawer, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn Disconnect3(self: KCategoryDrawer) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KCategoryDrawer, receiver: anytype) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn DumpObjectTree(self: KCategoryDrawer) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn DumpObjectInfo(self: KCategoryDrawer) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KCategoryDrawer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KCategoryDrawer, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KCategoryDrawer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kcategorydrawer.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcategorydrawer.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn BindingStorage(self: KCategoryDrawer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn BindingStorage2(self: KCategoryDrawer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn Destroyed(self: KCategoryDrawer) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn Parent(self: KCategoryDrawer) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KCategoryDrawer, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn DeleteLater(self: KCategoryDrawer) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KCategoryDrawer, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KCategoryDrawer, time: i64, timerType: i32) i32 {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KCategoryDrawer, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KCategoryDrawer, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KCategoryDrawer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KCategoryDrawer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KCategoryDrawer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KCategoryDrawer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KCategoryDrawer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCategoryDrawer_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KCategoryDrawer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCategoryDrawer_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QEvent) callconv(.c) bool) void {
        qtc.KCategoryDrawer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KCategoryDrawer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCategoryDrawer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KCategoryDrawer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCategoryDrawer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QObject, QEvent) callconv(.c) bool) void {
        qtc.KCategoryDrawer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KCategoryDrawer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KCategoryDrawer_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KCategoryDrawer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KCategoryDrawer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QTimerEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KCategoryDrawer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KCategoryDrawer_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KCategoryDrawer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KCategoryDrawer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QChildEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KCategoryDrawer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KCategoryDrawer_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KCategoryDrawer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KCategoryDrawer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KCategoryDrawer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategoryDrawer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KCategoryDrawer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategoryDrawer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QMetaMethod) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KCategoryDrawer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategoryDrawer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KCategoryDrawer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategoryDrawer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QMetaMethod) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn Sender(self: KCategoryDrawer) QObject {
        return .{ .ptr = qtc.KCategoryDrawer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn SuperSender(self: KCategoryDrawer) QObject {
        return .{ .ptr = qtc.KCategoryDrawer_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KCategoryDrawer, callback: *const fn () callconv(.c) QObject) void {
        qtc.KCategoryDrawer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn SenderSignalIndex(self: KCategoryDrawer) i32 {
        return qtc.KCategoryDrawer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn SuperSenderSignalIndex(self: KCategoryDrawer) i32 {
        return qtc.KCategoryDrawer_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KCategoryDrawer, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KCategoryDrawer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCategoryDrawer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KCategoryDrawer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCategoryDrawer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KCategoryDrawer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCategoryDrawer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KCategoryDrawer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCategoryDrawer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QMetaMethod) callconv(.c) bool) void {
        qtc.KCategoryDrawer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#dtor.KCategoryDrawer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn Delete(self: KCategoryDrawer) void {
        qtc.KCategoryDrawer_Delete(@ptrCast(self.ptr));
    }
};
