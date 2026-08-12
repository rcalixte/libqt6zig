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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCategoryDrawer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _view: KCategorizedView `
    ///
    pub fn new(_view: anytype) KCategoryDrawer {
        comptime _ = @TypeOf(_view)._is_KCategorizedView;
        return .{ .ptr = qtc.KCategoryDrawer_new(@ptrCast(_view.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn metaObject(self: KCategoryDrawer) QMetaObject {
        return .{ .ptr = qtc.KCategoryDrawer_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KCategoryDrawer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KCategoryDrawer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn superMetaObject(self: KCategoryDrawer) QMetaObject {
        return .{ .ptr = qtc.KCategoryDrawer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KCategoryDrawer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCategoryDrawer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KCategoryDrawer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KCategoryDrawer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCategoryDrawer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KCategoryDrawer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCategoryDrawer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KCategoryDrawer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCategoryDrawer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCategoryDrawer.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `view` instead
    ///
    pub const View = view;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn view(self: KCategoryDrawer) KCategorizedView {
        return .{ .ptr = qtc.KCategoryDrawer_View(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `drawCategory` instead
    ///
    pub const DrawCategory = drawCategory;

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
    pub fn drawCategory(self: KCategoryDrawer, index: anytype, sortRole: i32, option: anytype, painter: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KCategoryDrawer_DrawCategory(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(sortRole), @ptrCast(option.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onDrawCategory` instead
    ///
    pub const OnDrawCategory = onDrawCategory;

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
    pub fn onDrawCategory(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, i32, QStyleOption, QPainter) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnDrawCategory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawCategory` instead
    ///
    pub const SuperDrawCategory = superDrawCategory;

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
    pub fn superDrawCategory(self: KCategoryDrawer, index: anytype, sortRole: i32, option: anytype, painter: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KCategoryDrawer_SuperDrawCategory(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(sortRole), @ptrCast(option.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `categoryHeight` instead
    ///
    pub const CategoryHeight = categoryHeight;

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
    pub fn categoryHeight(self: KCategoryDrawer, index: anytype, option: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(option)._is_QStyleOption;
        return qtc.KCategoryDrawer_CategoryHeight(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `onCategoryHeight` instead
    ///
    pub const OnCategoryHeight = onCategoryHeight;

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
    pub fn onCategoryHeight(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, QStyleOption) callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnCategoryHeight(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCategoryHeight` instead
    ///
    pub const SuperCategoryHeight = superCategoryHeight;

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
    pub fn superCategoryHeight(self: KCategoryDrawer, index: anytype, option: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(option)._is_QStyleOption;
        return qtc.KCategoryDrawer_SuperCategoryHeight(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `leftMargin` instead
    ///
    pub const LeftMargin = leftMargin;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#leftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn leftMargin(self: KCategoryDrawer) i32 {
        return qtc.KCategoryDrawer_LeftMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLeftMargin` instead
    ///
    pub const OnLeftMargin = onLeftMargin;

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
    pub fn onLeftMargin(self: KCategoryDrawer, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnLeftMargin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLeftMargin` instead
    ///
    pub const SuperLeftMargin = superLeftMargin;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#leftMargin)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn superLeftMargin(self: KCategoryDrawer) i32 {
        return qtc.KCategoryDrawer_SuperLeftMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rightMargin` instead
    ///
    pub const RightMargin = rightMargin;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#rightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn rightMargin(self: KCategoryDrawer) i32 {
        return qtc.KCategoryDrawer_RightMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRightMargin` instead
    ///
    pub const OnRightMargin = onRightMargin;

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
    pub fn onRightMargin(self: KCategoryDrawer, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnRightMargin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRightMargin` instead
    ///
    pub const SuperRightMargin = superRightMargin;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#rightMargin)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn superRightMargin(self: KCategoryDrawer) i32 {
        return qtc.KCategoryDrawer_SuperRightMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `collapseOrExpandClicked` instead
    ///
    pub const CollapseOrExpandClicked = collapseOrExpandClicked;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#collapseOrExpandClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn collapseOrExpandClicked(self: KCategoryDrawer, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KCategoryDrawer_CollapseOrExpandClicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onCollapseOrExpandClicked` instead
    ///
    pub const OnCollapseOrExpandClicked = onCollapseOrExpandClicked;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#collapseOrExpandClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onCollapseOrExpandClicked(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex) callconv(.c) void) void {
        qtc.KCategoryDrawer_Connect_CollapseOrExpandClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionRequested` instead
    ///
    pub const ActionRequested = actionRequested;

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
    pub fn actionRequested(self: KCategoryDrawer, action: i32, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KCategoryDrawer_ActionRequested(@ptrCast(self.ptr), @bitCast(action), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onActionRequested` instead
    ///
    pub const OnActionRequested = onActionRequested;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#actionRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, action: i32, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onActionRequested(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, i32, QModelIndex) callconv(.c) void) void {
        qtc.KCategoryDrawer_Connect_ActionRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseButtonPressed` instead
    ///
    pub const MouseButtonPressed = mouseButtonPressed;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseButtonPressed(self: KCategoryDrawer, index: anytype, blockRect: anytype, _event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KCategoryDrawer_MouseButtonPressed(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseButtonPressed` instead
    ///
    pub const OnMouseButtonPressed = onMouseButtonPressed;

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
    pub fn onMouseButtonPressed(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, QRect, QMouseEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseButtonPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseButtonPressed` instead
    ///
    pub const SuperMouseButtonPressed = superMouseButtonPressed;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseButtonPressed(self: KCategoryDrawer, index: anytype, blockRect: anytype, _event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KCategoryDrawer_SuperMouseButtonPressed(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseButtonReleased` instead
    ///
    pub const MouseButtonReleased = mouseButtonReleased;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseButtonReleased(self: KCategoryDrawer, index: anytype, blockRect: anytype, _event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KCategoryDrawer_MouseButtonReleased(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseButtonReleased` instead
    ///
    pub const OnMouseButtonReleased = onMouseButtonReleased;

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
    pub fn onMouseButtonReleased(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, QRect, QMouseEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseButtonReleased(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseButtonReleased` instead
    ///
    pub const SuperMouseButtonReleased = superMouseButtonReleased;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseButtonReleased(self: KCategoryDrawer, index: anytype, blockRect: anytype, _event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KCategoryDrawer_SuperMouseButtonReleased(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseMoved` instead
    ///
    pub const MouseMoved = mouseMoved;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoved(self: KCategoryDrawer, index: anytype, blockRect: anytype, _event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KCategoryDrawer_MouseMoved(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoved` instead
    ///
    pub const OnMouseMoved = onMouseMoved;

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
    pub fn onMouseMoved(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, QRect, QMouseEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseMoved` instead
    ///
    pub const SuperMouseMoved = superMouseMoved;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoved(self: KCategoryDrawer, index: anytype, blockRect: anytype, _event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KCategoryDrawer_SuperMouseMoved(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseButtonDoubleClicked` instead
    ///
    pub const MouseButtonDoubleClicked = mouseButtonDoubleClicked;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseButtonDoubleClicked(self: KCategoryDrawer, index: anytype, blockRect: anytype, _event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KCategoryDrawer_MouseButtonDoubleClicked(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseButtonDoubleClicked` instead
    ///
    pub const OnMouseButtonDoubleClicked = onMouseButtonDoubleClicked;

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
    pub fn onMouseButtonDoubleClicked(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, QRect, QMouseEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseButtonDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseButtonDoubleClicked` instead
    ///
    pub const SuperMouseButtonDoubleClicked = superMouseButtonDoubleClicked;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseButtonDoubleClicked(self: KCategoryDrawer, index: anytype, blockRect: anytype, _event: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KCategoryDrawer_SuperMouseButtonDoubleClicked(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseLeft` instead
    ///
    pub const MouseLeft = mouseLeft;

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
    pub fn mouseLeft(self: KCategoryDrawer, index: anytype, blockRect: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        qtc.KCategoryDrawer_MouseLeft(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr));
    }

    /// ### DEPRECATED: Use `onMouseLeft` instead
    ///
    pub const OnMouseLeft = onMouseLeft;

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
    pub fn onMouseLeft(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QModelIndex, QRect) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseLeft(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseLeft` instead
    ///
    pub const SuperMouseLeft = superMouseLeft;

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
    pub fn superMouseLeft(self: KCategoryDrawer, index: anytype, blockRect: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(blockRect)._is_QRect;
        qtc.KCategoryDrawer_SuperMouseLeft(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(blockRect.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCategoryDrawer.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCategoryDrawer.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KCategoryDrawer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCategoryDrawer.objectName: Memory allocation failed");
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KCategoryDrawer, name: []const u8) void {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn isWidgetType(self: KCategoryDrawer) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn isWindowType(self: KCategoryDrawer) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn isQuickItemType(self: KCategoryDrawer) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn signalsBlocked(self: KCategoryDrawer) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KCategoryDrawer, b: bool) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn thread(self: KCategoryDrawer) QThread {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KCategoryDrawer, _thread: anytype) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KCategoryDrawer, interval: i32) i32 {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KCategoryDrawer, time: i64) i32 {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KCategoryDrawer, id: i32) void {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KCategoryDrawer, id: i32) void {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KCategoryDrawer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KCategoryDrawer.children: Memory allocation failed");
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KCategoryDrawer, _parent: anytype) void {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KCategoryDrawer, filterObj: anytype) void {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KCategoryDrawer, obj: anytype) void {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KCategoryDrawer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn disconnect3(self: KCategoryDrawer) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KCategoryDrawer, receiver: anytype) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn dumpObjectTree(self: KCategoryDrawer) void {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn dumpObjectInfo(self: KCategoryDrawer) void {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KCategoryDrawer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KCategoryDrawer, name: [:0]const u8) QVariant {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KCategoryDrawer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KCategoryDrawer.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCategoryDrawer.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn bindingStorage(self: KCategoryDrawer) QBindingStorage {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn bindingStorage2(self: KCategoryDrawer) QBindingStorage {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn destroyed(self: KCategoryDrawer) void {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer) callconv(.c) void) void {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn parent(self: KCategoryDrawer) QObject {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KCategoryDrawer, classname: [:0]const u8) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn deleteLater(self: KCategoryDrawer) void {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KCategoryDrawer, interval: i32, timerType: i32) i32 {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KCategoryDrawer, time: i64, timerType: i32) i32 {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KCategoryDrawer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KCategoryDrawer, signal: [:0]const u8) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KCategoryDrawer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KCategoryDrawer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KCategoryDrawer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KCategoryDrawer, param1: anytype) void {
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KCategoryDrawer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCategoryDrawer_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KCategoryDrawer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCategoryDrawer_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QEvent) callconv(.c) bool) void {
        qtc.KCategoryDrawer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KCategoryDrawer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCategoryDrawer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KCategoryDrawer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCategoryDrawer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QObject, QEvent) callconv(.c) bool) void {
        qtc.KCategoryDrawer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KCategoryDrawer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCategoryDrawer_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KCategoryDrawer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCategoryDrawer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QTimerEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KCategoryDrawer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCategoryDrawer_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KCategoryDrawer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCategoryDrawer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QChildEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KCategoryDrawer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCategoryDrawer_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KCategoryDrawer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCategoryDrawer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QEvent) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KCategoryDrawer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategoryDrawer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KCategoryDrawer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategoryDrawer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QMetaMethod) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KCategoryDrawer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategoryDrawer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KCategoryDrawer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategoryDrawer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QMetaMethod) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn sender(self: KCategoryDrawer) QObject {
        return .{ .ptr = qtc.KCategoryDrawer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn superSender(self: KCategoryDrawer) QObject {
        return .{ .ptr = qtc.KCategoryDrawer_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KCategoryDrawer, callback: *const fn () callconv(.c) QObject) void {
        qtc.KCategoryDrawer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn senderSignalIndex(self: KCategoryDrawer) i32 {
        return qtc.KCategoryDrawer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    pub fn superSenderSignalIndex(self: KCategoryDrawer) i32 {
        return qtc.KCategoryDrawer_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KCategoryDrawer, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KCategoryDrawer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCategoryDrawer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KCategoryDrawer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCategoryDrawer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KCategoryDrawer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCategoryDrawer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KCategoryDrawer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCategoryDrawer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategoryDrawer`
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, QMetaMethod) callconv(.c) bool) void {
        qtc.KCategoryDrawer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategoryDrawer `
    ///
    /// ` callback: *const fn (self: KCategoryDrawer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KCategoryDrawer, callback: *const fn (KCategoryDrawer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcategorydrawer.html#dtor.KCategoryDrawer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCategoryDrawer `
    ///
    pub fn delete(self: KCategoryDrawer) void {
        qtc.KCategoryDrawer_Delete(@ptrCast(self.ptr));
    }
};
