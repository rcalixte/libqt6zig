const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemdelegate_enums = @import("libqabstractitemdelegate.zig").enums;
const qabstractitemview_enums = enums;
const qabstractscrollarea_enums = @import("libqabstractscrollarea.zig").enums;
const qframe_enums = @import("libqframe.zig").enums;
const qitemselectionmodel_enums = @import("libqitemselectionmodel.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qabstractitemview.html
pub const qabstractitemview = struct {
    /// New constructs a new QAbstractItemView object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.QAbstractItemView {
        return qtc.QAbstractItemView_new(@ptrCast(parent));
    }

    /// New2 constructs a new QAbstractItemView object.
    ///
    ///
    pub fn New2() QtC.QAbstractItemView {
        return qtc.QAbstractItemView_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QAbstractItemView_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QAbstractItemView, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractItemView_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QAbstractItemView, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QAbstractItemView_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
    ///
    /// ``` self: QtC.QAbstractItemView, model: QtC.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QAbstractItemView_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, model: QtC.QAbstractItemModel) callconv(.c) void ```
    pub fn OnSetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, model: QtC.QAbstractItemModel ```
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QAbstractItemView_Model(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
    ///
    /// ``` self: QtC.QAbstractItemView, selectionModel: QtC.QItemSelectionModel ```
    pub fn SetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QAbstractItemView_SetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, selectionModel: QtC.QItemSelectionModel) callconv(.c) void ```
    pub fn OnSetSelectionModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetSelectionModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, selectionModel: QtC.QItemSelectionModel ```
    pub fn QBaseSetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn SelectionModel(self: ?*anyopaque) QtC.QItemSelectionModel {
        return qtc.QAbstractItemView_SelectionModel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
    ///
    /// ``` self: QtC.QAbstractItemView, delegate: QtC.QAbstractItemDelegate ```
    pub fn SetItemDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ItemDelegate(self: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
    ///
    /// ``` self: QtC.QAbstractItemView, mode: qabstractitemview_enums.SelectionMode ```
    pub fn SetSelectionMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetSelectionMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qabstractitemview_enums.SelectionMode ```
    pub fn SelectionMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_SelectionMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
    ///
    /// ``` self: QtC.QAbstractItemView, behavior: qabstractitemview_enums.SelectionBehavior ```
    pub fn SetSelectionBehavior(self: ?*anyopaque, behavior: i32) void {
        qtc.QAbstractItemView_SetSelectionBehavior(@ptrCast(self), @intCast(behavior));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qabstractitemview_enums.SelectionBehavior ```
    pub fn SelectionBehavior(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_SelectionBehavior(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn CurrentIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemView_CurrentIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn RootIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemView_RootIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
    ///
    /// ``` self: QtC.QAbstractItemView, triggers: flag of qabstractitemview_enums.EditTrigger ```
    pub fn SetEditTriggers(self: ?*anyopaque, triggers: i32) void {
        qtc.QAbstractItemView_SetEditTriggers(@ptrCast(self), @intCast(triggers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` flag of qabstractitemview_enums.EditTrigger ```
    pub fn EditTriggers(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_EditTriggers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
    ///
    /// ``` self: QtC.QAbstractItemView, mode: qabstractitemview_enums.ScrollMode ```
    pub fn SetVerticalScrollMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qabstractitemview_enums.ScrollMode ```
    pub fn VerticalScrollMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_VerticalScrollMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ResetVerticalScrollMode(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
    ///
    /// ``` self: QtC.QAbstractItemView, mode: qabstractitemview_enums.ScrollMode ```
    pub fn SetHorizontalScrollMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qabstractitemview_enums.ScrollMode ```
    pub fn HorizontalScrollMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_HorizontalScrollMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ResetHorizontalScrollMode(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
    ///
    /// ``` self: QtC.QAbstractItemView, enable: bool ```
    pub fn SetAutoScroll(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetAutoScroll(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn HasAutoScroll(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_HasAutoScroll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
    ///
    /// ``` self: QtC.QAbstractItemView, margin: i32 ```
    pub fn SetAutoScrollMargin(self: ?*anyopaque, margin: i32) void {
        qtc.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn AutoScrollMargin(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_AutoScrollMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
    ///
    /// ``` self: QtC.QAbstractItemView, enable: bool ```
    pub fn SetTabKeyNavigation(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn TabKeyNavigation(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_TabKeyNavigation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
    ///
    /// ``` self: QtC.QAbstractItemView, enable: bool ```
    pub fn SetDropIndicatorShown(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ShowDropIndicator(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_ShowDropIndicator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
    ///
    /// ``` self: QtC.QAbstractItemView, enable: bool ```
    pub fn SetDragEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetDragEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn DragEnabled(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_DragEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
    ///
    /// ``` self: QtC.QAbstractItemView, overwrite: bool ```
    pub fn SetDragDropOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        qtc.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self), overwrite);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn DragDropOverwriteMode(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
    ///
    /// ``` self: QtC.QAbstractItemView, behavior: qabstractitemview_enums.DragDropMode ```
    pub fn SetDragDropMode(self: ?*anyopaque, behavior: i32) void {
        qtc.QAbstractItemView_SetDragDropMode(@ptrCast(self), @intCast(behavior));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qabstractitemview_enums.DragDropMode ```
    pub fn DragDropMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_DragDropMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
    ///
    /// ``` self: QtC.QAbstractItemView, dropAction: qnamespace_enums.DropAction ```
    pub fn SetDefaultDropAction(self: ?*anyopaque, dropAction: i32) void {
        qtc.QAbstractItemView_SetDefaultDropAction(@ptrCast(self), @intCast(dropAction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qnamespace_enums.DropAction ```
    pub fn DefaultDropAction(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_DefaultDropAction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
    ///
    /// ``` self: QtC.QAbstractItemView, enable: bool ```
    pub fn SetAlternatingRowColors(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn AlternatingRowColors(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_AlternatingRowColors(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ``` self: QtC.QAbstractItemView, size: QtC.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QAbstractItemView_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_IconSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
    ///
    /// ``` self: QtC.QAbstractItemView, mode: qnamespace_enums.TextElideMode ```
    pub fn SetTextElideMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetTextElideMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qnamespace_enums.TextElideMode ```
    pub fn TextElideMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_TextElideMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// ``` self: QtC.QAbstractItemView, search: []const u8 ```
    pub fn KeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QAbstractItemView_KeyboardSearch(@ptrCast(self), search_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, search: [*:0]const u8) callconv(.c) void ```
    pub fn OnKeyboardSearch(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractItemView_OnKeyboardSearch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, search: []const u8 ```
    pub fn QBaseKeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QAbstractItemView_QBaseKeyboardSearch(@ptrCast(self), search_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRect)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn VisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QAbstractItemView_VisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, index: QtC.QModelIndex) callconv(.c) QtC.QRect ```
    pub fn OnVisualRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QAbstractItemView_OnVisualRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn QBaseVisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QAbstractItemView_QBaseVisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollTo)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex, hint: qabstractitemview_enums.ScrollHint ```
    pub fn ScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QAbstractItemView_ScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollTo)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, index: QtC.QModelIndex, hint: qabstractitemview_enums.ScrollHint) callconv(.c) void ```
    pub fn OnScrollTo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnScrollTo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollTo)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex, hint: qabstractitemview_enums.ScrollHint ```
    pub fn QBaseScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QAbstractItemView_QBaseScrollTo(@ptrCast(self), @ptrCast(index), @intCast(hint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexAt)
    ///
    /// ``` self: QtC.QAbstractItemView, point: QtC.QPoint ```
    pub fn IndexAt(self: ?*anyopaque, point: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemView_IndexAt(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, point: QtC.QPoint) callconv(.c) QtC.QModelIndex ```
    pub fn OnIndexAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractItemView_OnIndexAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, point: QtC.QPoint ```
    pub fn QBaseIndexAt(self: ?*anyopaque, point: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemView_QBaseIndexAt(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn SizeHintForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_SizeHintForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// ``` self: QtC.QAbstractItemView, row: i32 ```
    pub fn SizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return qtc.QAbstractItemView_SizeHintForRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, row: i32) callconv(.c) i32 ```
    pub fn OnSizeHintForRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnSizeHintForRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, row: i32 ```
    pub fn QBaseSizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return qtc.QAbstractItemView_QBaseSizeHintForRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// ``` self: QtC.QAbstractItemView, column: i32 ```
    pub fn SizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QAbstractItemView_SizeHintForColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, column: i32) callconv(.c) i32 ```
    pub fn OnSizeHintForColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnSizeHintForColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, column: i32 ```
    pub fn QBaseSizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QAbstractItemView_QBaseSizeHintForColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn OpenPersistentEditor(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_OpenPersistentEditor(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn ClosePersistentEditor(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_ClosePersistentEditor(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn IsPersistentEditorOpen(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemView_IsPersistentEditorOpen(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex, widget: QtC.QWidget ```
    pub fn SetIndexWidget(self: ?*anyopaque, index: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractItemView_SetIndexWidget(@ptrCast(self), @ptrCast(index), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn IndexWidget(self: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractItemView_IndexWidget(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
    ///
    /// ``` self: QtC.QAbstractItemView, row: i32, delegate: QtC.QAbstractItemDelegate ```
    pub fn SetItemDelegateForRow(self: ?*anyopaque, row: i32, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self), @intCast(row), @ptrCast(delegate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
    ///
    /// ``` self: QtC.QAbstractItemView, row: i32 ```
    pub fn ItemDelegateForRow(self: ?*anyopaque, row: i32) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
    ///
    /// ``` self: QtC.QAbstractItemView, column: i32, delegate: QtC.QAbstractItemDelegate ```
    pub fn SetItemDelegateForColumn(self: ?*anyopaque, column: i32, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self), @intCast(column), @ptrCast(delegate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
    ///
    /// ``` self: QtC.QAbstractItemView, column: i32 ```
    pub fn ItemDelegateForColumn(self: ?*anyopaque, column: i32) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn ItemDelegate2(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegate2(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn ItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, index: QtC.QModelIndex) callconv(.c) QtC.QAbstractItemDelegate ```
    pub fn OnItemDelegateForIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAbstractItemDelegate) void {
        qtc.QAbstractItemView_OnItemDelegateForIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn QBaseItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_QBaseItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// ``` self: QtC.QAbstractItemView, query: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QAbstractItemView_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, query: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QAbstractItemView_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, query: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QAbstractItemView_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QAbstractItemView_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseReset(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseReset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn SetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_SetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnSetRootIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetRootIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn QBaseSetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn DoItemsLayout(self: ?*anyopaque) void {
        qtc.QAbstractItemView_DoItemsLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnDoItemsLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnDoItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseDoItemsLayout(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDoItemsLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn SelectAll(self: ?*anyopaque) void {
        qtc.QAbstractItemView_SelectAll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnSelectAll(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnSelectAll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseSelectAll(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSelectAll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn Edit(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Edit(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ClearSelection(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ClearSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn SetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_SetCurrentIndex(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ScrollToTop(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ScrollToTop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ScrollToBottom(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ScrollToBottom(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn Update(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Update(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: []i32 ```
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemView_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: [*:-1]i32) callconv(.c) void ```
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:-1]i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: []i32 ```
    pub fn QBaseDataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemView_QBaseDataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
    ///
    /// ``` self: QtC.QAbstractItemView, parent: QtC.QModelIndex, start: i32, end: i32 ```
    pub fn RowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QAbstractItemView_RowsInserted(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, parent: QtC.QModelIndex, start: i32, end: i32) callconv(.c) void ```
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnRowsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, parent: QtC.QModelIndex, start: i32, end: i32 ```
    pub fn QBaseRowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QAbstractItemView_QBaseRowsInserted(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// ``` self: QtC.QAbstractItemView, parent: QtC.QModelIndex, start: i32, end: i32 ```
    pub fn RowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QAbstractItemView_RowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, parent: QtC.QModelIndex, start: i32, end: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnRowsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, parent: QtC.QModelIndex, start: i32, end: i32 ```
    pub fn QBaseRowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QAbstractItemView_QBaseRowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), @intCast(start), @intCast(end));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, selected: QtC.QItemSelection, deselected: QtC.QItemSelection ```
    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QAbstractItemView_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, selected: QtC.QItemSelection, deselected: QtC.QItemSelection) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, selected: QtC.QItemSelection, deselected: QtC.QItemSelection ```
    pub fn QBaseSelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, current: QtC.QModelIndex, previous: QtC.QModelIndex ```
    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QAbstractItemView_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, current: QtC.QModelIndex, previous: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnCurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentChanged)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, current: QtC.QModelIndex, previous: QtC.QModelIndex ```
    pub fn QBaseCurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseCurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn UpdateEditorData(self: ?*anyopaque) void {
        qtc.QAbstractItemView_UpdateEditorData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateEditorData(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnUpdateEditorData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseUpdateEditorData(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseUpdateEditorData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn UpdateEditorGeometries(self: ?*anyopaque) void {
        qtc.QAbstractItemView_UpdateEditorGeometries(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateEditorGeometries(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnUpdateEditorGeometries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseUpdateEditorGeometries(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseUpdateEditorGeometries(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn UpdateGeometries(self: ?*anyopaque) void {
        qtc.QAbstractItemView_UpdateGeometries(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateGeometries(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnUpdateGeometries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseUpdateGeometries(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseUpdateGeometries(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// ``` self: QtC.QAbstractItemView, action: i32 ```
    pub fn VerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QAbstractItemView_VerticalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, action: i32) callconv(.c) void ```
    pub fn OnVerticalScrollbarAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnVerticalScrollbarAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, action: i32 ```
    pub fn QBaseVerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QAbstractItemView_QBaseVerticalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// ``` self: QtC.QAbstractItemView, action: i32 ```
    pub fn HorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QAbstractItemView_HorizontalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, action: i32) callconv(.c) void ```
    pub fn OnHorizontalScrollbarAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnHorizontalScrollbarAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, action: i32 ```
    pub fn QBaseHorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QAbstractItemView_QBaseHorizontalScrollbarAction(@ptrCast(self), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, value: i32 ```
    pub fn VerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QAbstractItemView_VerticalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, value: i32) callconv(.c) void ```
    pub fn OnVerticalScrollbarValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnVerticalScrollbarValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, value: i32 ```
    pub fn QBaseVerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QAbstractItemView_QBaseVerticalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, value: i32 ```
    pub fn HorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QAbstractItemView_HorizontalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, value: i32) callconv(.c) void ```
    pub fn OnHorizontalScrollbarValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnHorizontalScrollbarValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, value: i32 ```
    pub fn QBaseHorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QAbstractItemView_QBaseHorizontalScrollbarValueChanged(@ptrCast(self), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// ``` self: QtC.QAbstractItemView, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn CloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QAbstractItemView_CloseEditor(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void ```
    pub fn OnCloseEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnCloseEditor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn QBaseCloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QAbstractItemView_QBaseCloseEditor(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// ``` self: QtC.QAbstractItemView, editor: QtC.QWidget ```
    pub fn CommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemView_CommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, editor: QtC.QWidget) callconv(.c) void ```
    pub fn OnCommitData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnCommitData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, editor: QtC.QWidget ```
    pub fn QBaseCommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseCommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// ``` self: QtC.QAbstractItemView, editor: QtC.QObject ```
    pub fn EditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemView_EditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, editor: QtC.QObject) callconv(.c) void ```
    pub fn OnEditorDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnEditorDestroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, editor: QtC.QObject ```
    pub fn QBaseEditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseEditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn Pressed(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Pressed(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn Clicked(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Clicked(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn DoubleClicked(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_DoubleClicked(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn Activated(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Activated(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Activated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn Entered(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Entered(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Entered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ViewportEntered(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ViewportEntered(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView) callconv(.c) void ```
    pub fn OnViewportEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, size: QtC.QSize ```
    pub fn IconSizeChanged(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QAbstractItemView_IconSizeChanged(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, size: QtC.QSize) callconv(.c) void ```
    pub fn OnIconSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#moveCursor)
    ///
    /// ``` self: QtC.QAbstractItemView, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn MoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QAbstractItemView_MoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#moveCursor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier) callconv(.c) QtC.QModelIndex ```
    pub fn OnMoveCursor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractItemView_OnMoveCursor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#moveCursor)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn QBaseMoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i64) QtC.QModelIndex {
        return qtc.QAbstractItemView_QBaseMoveCursor(@ptrCast(self), @intCast(cursorAction), @intCast(modifiers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalOffset)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn HorizontalOffset(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_HorizontalOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) i32 ```
    pub fn OnHorizontalOffset(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractItemView_OnHorizontalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalOffset)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseHorizontalOffset(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_QBaseHorizontalOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalOffset)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn VerticalOffset(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_VerticalOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) i32 ```
    pub fn OnVerticalOffset(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractItemView_OnVerticalOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalOffset)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseVerticalOffset(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_QBaseVerticalOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isIndexHidden)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn IsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemView_IsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isIndexHidden)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, index: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnIsIndexHidden(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnIsIndexHidden(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isIndexHidden)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex ```
    pub fn QBaseIsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseIsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelection)
    ///
    /// ``` self: QtC.QAbstractItemView, rect: QtC.QRect, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn SetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QAbstractItemView_SetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, rect: QtC.QRect, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void ```
    pub fn OnSetSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelection)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, rect: QtC.QRect, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn QBaseSetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QAbstractItemView_QBaseSetSelection(@ptrCast(self), @ptrCast(rect), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRegionForSelection)
    ///
    /// ``` self: QtC.QAbstractItemView, selection: QtC.QItemSelection ```
    pub fn VisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QAbstractItemView_VisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRegionForSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, selection: QtC.QItemSelection) callconv(.c) QtC.QRegion ```
    pub fn OnVisualRegionForSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRegion) void {
        qtc.QAbstractItemView_OnVisualRegionForSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRegionForSelection)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, selection: QtC.QItemSelection ```
    pub fn QBaseVisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QAbstractItemView_QBaseVisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn SelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QAbstractItemView_SelectedIndexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qabstractitemview.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) [*:null]QtC.QModelIndex ```
    pub fn OnSelectedIndexes(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.QModelIndex) void {
        qtc.QAbstractItemView_OnSelectedIndexes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn QBaseSelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QAbstractItemView_QBaseSelectedIndexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qabstractitemview.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QtC.QEvent ```
    pub fn Edit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i32, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_Edit2(@ptrCast(self), @ptrCast(index), @intCast(trigger), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, index: QtC.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEdit2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnEdit2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QtC.QEvent ```
    pub fn QBaseEdit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i32, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseEdit2(@ptrCast(self), @ptrCast(index), @intCast(trigger), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex, event: QtC.QEvent ```
    ///
    /// Returns: ``` flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn SelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_SelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, index: QtC.QModelIndex, event: QtC.QEvent) callconv(.c) i32 ```
    pub fn OnSelectionCommand(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnSelectionCommand(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, index: QtC.QModelIndex, event: QtC.QEvent ```
    ///
    /// Returns: ``` flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn QBaseSelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_QBaseSelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// ``` self: QtC.QAbstractItemView, supportedActions: flag of qnamespace_enums.DropAction ```
    pub fn StartDrag(self: ?*anyopaque, supportedActions: i32) void {
        qtc.QAbstractItemView_StartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, supportedActions: flag of qnamespace_enums.DropAction) callconv(.c) void ```
    pub fn OnStartDrag(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnStartDrag(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, supportedActions: flag of qnamespace_enums.DropAction ```
    pub fn QBaseStartDrag(self: ?*anyopaque, supportedActions: i32) void {
        qtc.QAbstractItemView_QBaseStartDrag(@ptrCast(self), @intCast(supportedActions));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// ``` self: QtC.QAbstractItemView, option: QtC.QStyleOptionViewItem ```
    pub fn InitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QAbstractItemView_InitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, option: QtC.QStyleOptionViewItem) callconv(.c) void ```
    pub fn OnInitViewItemOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnInitViewItemOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, option: QtC.QStyleOptionViewItem ```
    pub fn QBaseInitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseInitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qabstractitemview_enums.State ```
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) i32 ```
    pub fn OnState(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractItemView_OnState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qabstractitemview_enums.State ```
    pub fn QBaseState(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_QBaseState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// ``` self: QtC.QAbstractItemView, state: qabstractitemview_enums.State ```
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QAbstractItemView_SetState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, state: qabstractitemview_enums.State) callconv(.c) void ```
    pub fn OnSetState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, state: qabstractitemview_enums.State ```
    pub fn QBaseSetState(self: ?*anyopaque, state: i32) void {
        qtc.QAbstractItemView_QBaseSetState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ScheduleDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnScheduleDelayedItemsLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnScheduleDelayedItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseScheduleDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ExecuteDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnExecuteDelayedItemsLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnExecuteDelayedItemsLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseExecuteDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// ``` self: QtC.QAbstractItemView, region: QtC.QRegion ```
    pub fn SetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QAbstractItemView_SetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, region: QtC.QRegion) callconv(.c) void ```
    pub fn OnSetDirtyRegion(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetDirtyRegion(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, region: QtC.QRegion ```
    pub fn QBaseSetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// ``` self: QtC.QAbstractItemView, dx: i32, dy: i32 ```
    pub fn ScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QAbstractItemView_ScrollDirtyRegion(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, dx: i32, dy: i32) callconv(.c) void ```
    pub fn OnScrollDirtyRegion(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnScrollDirtyRegion(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, dx: i32, dy: i32 ```
    pub fn QBaseScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QAbstractItemView_QBaseScrollDirtyRegion(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn DirtyRegionOffset(self: ?*anyopaque) QtC.QPoint {
        return qtc.QAbstractItemView_DirtyRegionOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) QtC.QPoint ```
    pub fn OnDirtyRegionOffset(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPoint) void {
        qtc.QAbstractItemView_OnDirtyRegionOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseDirtyRegionOffset(self: ?*anyopaque) QtC.QPoint {
        return qtc.QAbstractItemView_QBaseDirtyRegionOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn StartAutoScroll(self: ?*anyopaque) void {
        qtc.QAbstractItemView_StartAutoScroll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnStartAutoScroll(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnStartAutoScroll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseStartAutoScroll(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseStartAutoScroll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn StopAutoScroll(self: ?*anyopaque) void {
        qtc.QAbstractItemView_StopAutoScroll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnStopAutoScroll(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnStopAutoScroll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseStopAutoScroll(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseStopAutoScroll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn DoAutoScroll(self: ?*anyopaque) void {
        qtc.QAbstractItemView_DoAutoScroll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnDoAutoScroll(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnDoAutoScroll(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseDoAutoScroll(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDoAutoScroll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// ``` self: QtC.QAbstractItemView, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QAbstractItemView_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QAbstractItemView_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_Event(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QEvent ```
    pub fn ViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_ViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnViewportEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnViewportEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QEvent ```
    pub fn QBaseViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// ``` self: QtC.QAbstractItemView, object: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, object: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView, object: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qabstractitemview_enums.DropIndicatorPosition ```
    pub fn DropIndicatorPosition(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_DropIndicatorPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) i32 ```
    pub fn OnDropIndicatorPosition(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractItemView_OnDropIndicatorPosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qabstractitemview_enums.DropIndicatorPosition ```
    pub fn QBaseDropIndicatorPosition(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_QBaseDropIndicatorPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_ViewportSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnViewportSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QAbstractItemView_OnViewportSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_QBaseViewportSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAbstractItemView_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAbstractItemView_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qnamespace_enums.ScrollBarPolicy ```
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ``` self: QtC.QAbstractItemView, verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @intCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn VerticalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ``` self: QtC.QAbstractItemView, scrollbar: QtC.QScrollBar ```
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qnamespace_enums.ScrollBarPolicy ```
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.QAbstractItemView, horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @intCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn HorizontalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ``` self: QtC.QAbstractItemView, scrollbar: QtC.QScrollBar ```
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn CornerWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ``` self: QtC.QAbstractItemView, widget: QtC.QWidget ```
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ``` self: QtC.QAbstractItemView, widget: QtC.QWidget, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i32) void {
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @intCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ``` self: QtC.QAbstractItemView, alignment: flag of qnamespace_enums.AlignmentFlag, allocator: std.mem.Allocator ```
    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i32, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @intCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("qabstractitemview.ScrollBarWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Viewport(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ``` self: QtC.QAbstractItemView, widget: QtC.QWidget ```
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn MaximumViewportSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ``` self: QtC.QAbstractItemView, policy: qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ``` self: QtC.QAbstractItemView, frameStyle: i32 ```
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self), @intCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qframe_enums.Shape ```
    pub fn FrameShape(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ``` self: QtC.QAbstractItemView, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qframe_enums.Shadow ```
    pub fn FrameShadow(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ``` self: QtC.QAbstractItemView, frameShadow: qframe_enums.Shadow ```
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ``` self: QtC.QAbstractItemView, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ``` self: QtC.QAbstractItemView, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn FrameRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ``` self: QtC.QAbstractItemView, frameRect: QtC.QRect ```
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        qtc.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.QAbstractItemView, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qnamespace_enums.WindowModality ```
    pub fn WindowModality(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.QAbstractItemView, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.QAbstractItemView, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.QAbstractItemView, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.QAbstractItemView, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QAbstractItemView, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QAbstractItemView, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QAbstractItemView, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QAbstractItemView, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QAbstractItemView, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QAbstractItemView, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QAbstractItemView, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QAbstractItemView, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QAbstractItemView, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QAbstractItemView, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QAbstractItemView, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QAbstractItemView, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QAbstractItemView, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QAbstractItemView, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.QAbstractItemView, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.QAbstractItemView, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPoint ```
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPoint ```
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.QAbstractItemView, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.QAbstractItemView, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn BackgroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.QAbstractItemView, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn ForegroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: QtC.QAbstractItemView, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.QAbstractItemView, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.QAbstractItemView, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.QAbstractItemView, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QAbstractItemView, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QAbstractItemView, mask: QtC.QRegion ```
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QAbstractItemView, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QAbstractItemView, painter: QtC.QPainter ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.QAbstractItemView, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QAbstractItemView, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.QAbstractItemView, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.QAbstractItemView, windowTitle: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ``` self: QtC.QAbstractItemView, styleSheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.QAbstractItemView, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.QAbstractItemView, windowIconText: []const u8 ```
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.QAbstractItemView, windowRole: []const u8 ```
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.QAbstractItemView, filePath: []const u8 ```
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.QAbstractItemView, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.QAbstractItemView, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.QAbstractItemView, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.QAbstractItemView, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.QAbstractItemView, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.QAbstractItemView, name: []const u8 ```
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.QAbstractItemView, description: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QAbstractItemView, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.QAbstractItemView, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QAbstractItemView, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qnamespace_enums.FocusPolicy ```
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.QAbstractItemView, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ``` param1: QtC.QWidget, param2: QtC.QWidget ```
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ``` self: QtC.QAbstractItemView, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qnamespace_enums.ContextMenuPolicy ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.QAbstractItemView, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QCursor ```
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QAbstractItemView, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.QAbstractItemView, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QAbstractItemView, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QAbstractItemView, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    ///
    pub fn MouseGrabber() QtC.QWidget {
        return qtc.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    ///
    pub fn KeyboardGrabber() QtC.QWidget {
        return qtc.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.QAbstractItemView, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QAbstractItemView, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QRect ```
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QRegion ```
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QAbstractItemView, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QRect ```
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QRegion ```
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.QAbstractItemView, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QAbstractItemView, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPoint ```
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QAbstractItemView, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QSize ```
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QAbstractItemView, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QAbstractItemView, geometry: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qabstractitemview.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.QAbstractItemView, geometry: []u8 ```
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowState ```
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.QAbstractItemView, state: flag of qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.QAbstractItemView, state: flag of qnamespace_enums.WindowState ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QAbstractItemView, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QAbstractItemView, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QAbstractItemView, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QAbstractItemView, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.QAbstractItemView, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QAbstractItemView, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QAbstractItemView, parent: QtC.QWidget, f: flag of qnamespace_enums.WindowType ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QAbstractItemView, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QAbstractItemView, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.QAbstractItemView, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QAbstractItemView, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.QAbstractItemView, actions: []QtC.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ``` self: QtC.QAbstractItemView, before: QtC.QAction, actions: []QtC.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ``` self: QtC.QAbstractItemView, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.QAbstractItemView, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qabstractitemview.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QAbstractItemView, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction2(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QAbstractItemView, icon: QtC.QIcon, text: []const u8 ```
    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QAbstractItemView, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction4(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction4(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QAbstractItemView, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction5(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction5(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.QAbstractItemView, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.QAbstractItemView, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` qnamespace_enums.WindowType ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ``` param1: u64 ```
    pub fn Find(param1: u64) QtC.QWidget {
        return qtc.QWidget_Find(@intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QAbstractItemView, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QAbstractItemView, p: QtC.QPoint ```
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QAbstractItemView, p: QtC.QPointF ```
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.QAbstractItemView, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.QAbstractItemView, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.QAbstractItemView, screen: QtC.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow ```
    pub fn CreateWindowContainer(window: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, iconText: []const u8 ```
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, iconText: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QAbstractItemView, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.QAbstractItemView, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QAbstractItemView, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QAbstractItemView, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QAbstractItemView, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QAbstractItemView, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QAbstractItemView, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QAbstractItemView, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QAbstractItemView, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QAbstractItemView, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QAbstractItemView, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QAbstractItemView, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QAbstractItemView, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget ```
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget, flags: flag of qnamespace_enums.WindowType ```
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractitemview.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QAbstractItemView, name: []const u8 ```
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
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QAbstractItemView, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAbstractItemView, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractItemView, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAbstractItemView, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAbstractItemView, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qabstractitemview.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QAbstractItemView, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QAbstractItemView, obj: QtC.QObject ```
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
    /// ``` self: QtC.QAbstractItemView, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QAbstractItemView ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QAbstractItemView, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QAbstractItemView, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QAbstractItemView, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qabstractitemview.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qabstractitemview.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QAbstractItemView, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAbstractItemView, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractItemView, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QAbstractItemView, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ``` metric: qpaintdevice_enums.PaintDeviceMetric, value: f64 ```
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QAbstractItemView_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_SizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QAbstractItemView_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, viewport: QtC.QWidget ```
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QAbstractItemView_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, viewport: QtC.QWidget ```
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, viewport: QtC.QWidget) callconv(.c) void ```
    pub fn OnSetupViewport(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetupViewport(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemView_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemView_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, param1: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemView_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, param1: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemView_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, param1: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, dx: i32, dy: i32 ```
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QAbstractItemView_ScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, dx: i32, dy: i32 ```
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QAbstractItemView_QBaseScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, dx: i32, dy: i32) callconv(.c) void ```
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemView_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, param1: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, option: QtC.QStyleOptionFrame ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QAbstractItemView_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, option: QtC.QStyleOptionFrame ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, option: QtC.QStyleOptionFrame) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractItemView_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractItemView_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractItemView_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QAbstractItemView_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QAbstractItemView_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QAbstractItemView_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QAbstractItemView_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QAbstractItemView_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QAbstractItemView_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnTabletEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnActionEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractItemView_NativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractItemView_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, eventType: [*:0]u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnNativeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QAbstractItemView_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QAbstractItemView_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QAbstractItemView_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnInitPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QAbstractItemView_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QAbstractItemView_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QAbstractItemView_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QAbstractItemView_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QAbstractItemView_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.QAbstractItemView_OnSharedPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAbstractItemView_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAbstractItemView_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QAbstractItemView_SetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn QBaseSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QAbstractItemView_QBaseSetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void ```
    pub fn OnSetViewportMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetViewportMargins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn ViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QAbstractItemView_ViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QAbstractItemView_QBaseViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) QtC.QMargins ```
    pub fn OnViewportMargins(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMargins) void {
        qtc.QAbstractItemView_OnViewportMargins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPainter ```
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemView_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, param1: QtC.QPainter ```
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, param1: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawFrame(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_OnDrawFrame(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QAbstractItemView_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnUpdateMicroFocus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.QAbstractItemView_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QAbstractItemView_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.QAbstractItemView_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractItemView_OnDestroy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QAbstractItemView_OnFocusNextChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QAbstractItemView_OnFocusPreviousChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QAbstractItemView_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QAbstractItemView_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QAbstractItemView_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractItemView_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAbstractItemView_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAbstractItemView_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QAbstractItemView_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QAbstractItemView_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QAbstractItemView_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemView_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QAbstractItemView_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QAbstractItemView_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QAbstractItemView_OnGetDecodedMetricF(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QAbstractItemView, callback: *const fn (self: QtC.QAbstractItemView, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dtor.QAbstractItemView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractItemView ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractItemView_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractitemview.html#types
pub const enums = struct {
    pub const SelectionMode = enum {
        pub const NoSelection: i32 = 0;
        pub const SingleSelection: i32 = 1;
        pub const MultiSelection: i32 = 2;
        pub const ExtendedSelection: i32 = 3;
        pub const ContiguousSelection: i32 = 4;
    };

    pub const SelectionBehavior = enum {
        pub const SelectItems: i32 = 0;
        pub const SelectRows: i32 = 1;
        pub const SelectColumns: i32 = 2;
    };

    pub const ScrollHint = enum {
        pub const EnsureVisible: i32 = 0;
        pub const PositionAtTop: i32 = 1;
        pub const PositionAtBottom: i32 = 2;
        pub const PositionAtCenter: i32 = 3;
    };

    pub const EditTrigger = enum {
        pub const NoEditTriggers: i32 = 0;
        pub const CurrentChanged: i32 = 1;
        pub const DoubleClicked: i32 = 2;
        pub const SelectedClicked: i32 = 4;
        pub const EditKeyPressed: i32 = 8;
        pub const AnyKeyPressed: i32 = 16;
        pub const AllEditTriggers: i32 = 31;
    };

    pub const ScrollMode = enum {
        pub const ScrollPerItem: i32 = 0;
        pub const ScrollPerPixel: i32 = 1;
    };

    pub const DragDropMode = enum {
        pub const NoDragDrop: i32 = 0;
        pub const DragOnly: i32 = 1;
        pub const DropOnly: i32 = 2;
        pub const DragDrop: i32 = 3;
        pub const InternalMove: i32 = 4;
    };

    pub const CursorAction = enum {
        pub const MoveUp: i32 = 0;
        pub const MoveDown: i32 = 1;
        pub const MoveLeft: i32 = 2;
        pub const MoveRight: i32 = 3;
        pub const MoveHome: i32 = 4;
        pub const MoveEnd: i32 = 5;
        pub const MovePageUp: i32 = 6;
        pub const MovePageDown: i32 = 7;
        pub const MoveNext: i32 = 8;
        pub const MovePrevious: i32 = 9;
    };

    pub const State = enum {
        pub const NoState: i32 = 0;
        pub const DraggingState: i32 = 1;
        pub const DragSelectingState: i32 = 2;
        pub const EditingState: i32 = 3;
        pub const ExpandingState: i32 = 4;
        pub const CollapsingState: i32 = 5;
        pub const AnimatingState: i32 = 6;
    };

    pub const DropIndicatorPosition = enum {
        pub const OnItem: i32 = 0;
        pub const AboveItem: i32 = 1;
        pub const BelowItem: i32 = 2;
        pub const OnViewport: i32 = 3;
    };
};
