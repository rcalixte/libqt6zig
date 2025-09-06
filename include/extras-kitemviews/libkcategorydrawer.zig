const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api-staging.kde.org/kcategorydrawer.html
pub const kcategorydrawer = struct {
    /// New constructs a new KCategoryDrawer object.
    ///
    /// ``` view: QtC.KCategorizedView ```
    pub fn New(view: ?*anyopaque) QtC.KCategoryDrawer {
        return qtc.KCategoryDrawer_new(@ptrCast(view));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KCategoryDrawer_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KCategoryDrawer, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCategoryDrawer_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KCategoryDrawer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KCategoryDrawer_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KCategoryDrawer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KCategoryDrawer_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KCategoryDrawer_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorydrawer.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#view)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn View(self: ?*anyopaque) QtC.KCategorizedView {
        return qtc.KCategoryDrawer_View(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#drawCategory)
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, sortRole: i32, option: QtC.QStyleOption, painter: QtC.QPainter ```
    pub fn DrawCategory(self: ?*anyopaque, index: ?*anyopaque, sortRole: i32, option: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KCategoryDrawer_DrawCategory(@ptrCast(self), @ptrCast(index), @intCast(sortRole), @ptrCast(option), @ptrCast(painter));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#drawCategory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, index: QtC.QModelIndex, sortRole: i32, option: QtC.QStyleOption, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawCategory(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnDrawCategory(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#drawCategory)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, sortRole: i32, option: QtC.QStyleOption, painter: QtC.QPainter ```
    pub fn QBaseDrawCategory(self: ?*anyopaque, index: ?*anyopaque, sortRole: i32, option: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KCategoryDrawer_QBaseDrawCategory(@ptrCast(self), @ptrCast(index), @intCast(sortRole), @ptrCast(option), @ptrCast(painter));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#categoryHeight)
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, option: QtC.QStyleOption ```
    pub fn CategoryHeight(self: ?*anyopaque, index: ?*anyopaque, option: ?*anyopaque) i32 {
        return qtc.KCategoryDrawer_CategoryHeight(@ptrCast(self), @ptrCast(index), @ptrCast(option));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#categoryHeight)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, index: QtC.QModelIndex, option: QtC.QStyleOption) callconv(.c) i32 ```
    pub fn OnCategoryHeight(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnCategoryHeight(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#categoryHeight)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, option: QtC.QStyleOption ```
    pub fn QBaseCategoryHeight(self: ?*anyopaque, index: ?*anyopaque, option: ?*anyopaque) i32 {
        return qtc.KCategoryDrawer_QBaseCategoryHeight(@ptrCast(self), @ptrCast(index), @ptrCast(option));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#leftMargin)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn LeftMargin(self: ?*anyopaque) i32 {
        return qtc.KCategoryDrawer_LeftMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#leftMargin)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn () callconv(.c) i32 ```
    pub fn OnLeftMargin(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnLeftMargin(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#leftMargin)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn QBaseLeftMargin(self: ?*anyopaque) i32 {
        return qtc.KCategoryDrawer_QBaseLeftMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#rightMargin)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn RightMargin(self: ?*anyopaque) i32 {
        return qtc.KCategoryDrawer_RightMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#rightMargin)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn () callconv(.c) i32 ```
    pub fn OnRightMargin(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnRightMargin(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#rightMargin)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn QBaseRightMargin(self: ?*anyopaque) i32 {
        return qtc.KCategoryDrawer_QBaseRightMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#collapseOrExpandClicked)
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex ```
    pub fn CollapseOrExpandClicked(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KCategoryDrawer_CollapseOrExpandClicked(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#collapseOrExpandClicked)
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnCollapseOrExpandClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_Connect_CollapseOrExpandClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#actionRequested)
    ///
    /// ``` self: QtC.KCategoryDrawer, action: i32, index: QtC.QModelIndex ```
    pub fn ActionRequested(self: ?*anyopaque, action: i32, index: ?*anyopaque) void {
        qtc.KCategoryDrawer_ActionRequested(@ptrCast(self), @intCast(action), @ptrCast(index));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#actionRequested)
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, action: i32, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnActionRequested(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_Connect_ActionRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonPressed)
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect, event: QtC.QMouseEvent ```
    pub fn MouseButtonPressed(self: ?*anyopaque, index: ?*anyopaque, blockRect: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_MouseButtonPressed(@ptrCast(self), @ptrCast(index), @ptrCast(blockRect), @ptrCast(event));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonPressed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseButtonPressed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseButtonPressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonPressed)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect, event: QtC.QMouseEvent ```
    pub fn QBaseMouseButtonPressed(self: ?*anyopaque, index: ?*anyopaque, blockRect: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_QBaseMouseButtonPressed(@ptrCast(self), @ptrCast(index), @ptrCast(blockRect), @ptrCast(event));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonReleased)
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect, event: QtC.QMouseEvent ```
    pub fn MouseButtonReleased(self: ?*anyopaque, index: ?*anyopaque, blockRect: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_MouseButtonReleased(@ptrCast(self), @ptrCast(index), @ptrCast(blockRect), @ptrCast(event));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonReleased)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseButtonReleased(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseButtonReleased(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonReleased)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect, event: QtC.QMouseEvent ```
    pub fn QBaseMouseButtonReleased(self: ?*anyopaque, index: ?*anyopaque, blockRect: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_QBaseMouseButtonReleased(@ptrCast(self), @ptrCast(index), @ptrCast(blockRect), @ptrCast(event));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseMoved)
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect, event: QtC.QMouseEvent ```
    pub fn MouseMoved(self: ?*anyopaque, index: ?*anyopaque, blockRect: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_MouseMoved(@ptrCast(self), @ptrCast(index), @ptrCast(blockRect), @ptrCast(event));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseMoved)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoved(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseMoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseMoved)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect, event: QtC.QMouseEvent ```
    pub fn QBaseMouseMoved(self: ?*anyopaque, index: ?*anyopaque, blockRect: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_QBaseMouseMoved(@ptrCast(self), @ptrCast(index), @ptrCast(blockRect), @ptrCast(event));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonDoubleClicked)
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect, event: QtC.QMouseEvent ```
    pub fn MouseButtonDoubleClicked(self: ?*anyopaque, index: ?*anyopaque, blockRect: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_MouseButtonDoubleClicked(@ptrCast(self), @ptrCast(index), @ptrCast(blockRect), @ptrCast(event));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonDoubleClicked)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseButtonDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseButtonDoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonDoubleClicked)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect, event: QtC.QMouseEvent ```
    pub fn QBaseMouseButtonDoubleClicked(self: ?*anyopaque, index: ?*anyopaque, blockRect: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_QBaseMouseButtonDoubleClicked(@ptrCast(self), @ptrCast(index), @ptrCast(blockRect), @ptrCast(event));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseLeft)
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect ```
    pub fn MouseLeft(self: ?*anyopaque, index: ?*anyopaque, blockRect: ?*anyopaque) void {
        qtc.KCategoryDrawer_MouseLeft(@ptrCast(self), @ptrCast(index), @ptrCast(blockRect));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseLeft)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect) callconv(.c) void ```
    pub fn OnMouseLeft(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnMouseLeft(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseLeft)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCategoryDrawer, index: QtC.QModelIndex, blockRect: QtC.QRect ```
    pub fn QBaseMouseLeft(self: ?*anyopaque, index: ?*anyopaque, blockRect: ?*anyopaque) void {
        qtc.KCategoryDrawer_QBaseMouseLeft(@ptrCast(self), @ptrCast(index), @ptrCast(blockRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KCategoryDrawer_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorydrawer.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KCategoryDrawer_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorydrawer.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KCategoryDrawer, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcategorydrawer.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KCategoryDrawer, name: []const u8 ```
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
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KCategoryDrawer, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KCategoryDrawer, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KCategoryDrawer, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KCategoryDrawer, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KCategoryDrawer, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KCategoryDrawer, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kcategorydrawer.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KCategoryDrawer, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KCategoryDrawer, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KCategoryDrawer, obj: QtC.QObject ```
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
    /// ``` self: QtC.KCategoryDrawer, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KCategoryDrawer, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KCategoryDrawer, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KCategoryDrawer, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KCategoryDrawer, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KCategoryDrawer, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KCategoryDrawer, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KCategoryDrawer, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCategoryDrawer, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCategoryDrawer_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCategoryDrawer_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCategoryDrawer_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCategoryDrawer_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCategoryDrawer_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCategoryDrawer_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCategoryDrawer_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCategoryDrawer_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCategoryDrawer_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCategoryDrawer_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCategoryDrawer_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCategoryDrawer_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KCategoryDrawer_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KCategoryDrawer_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KCategoryDrawer_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KCategoryDrawer_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KCategoryDrawer_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCategoryDrawer_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCategoryDrawer_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCategoryDrawer_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KCategoryDrawer_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KCategoryDrawer_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCategoryDrawer_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KCategoryDrawer, slot: fn (self: QtC.KCategoryDrawer, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#dtor.KCategoryDrawer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KCategoryDrawer ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCategoryDrawer_Delete(@ptrCast(self));
    }
};
