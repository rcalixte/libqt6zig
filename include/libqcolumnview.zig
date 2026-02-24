const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemdelegate_enums = @import("libqabstractitemdelegate.zig").enums;
const qabstractitemview_enums = @import("libqabstractitemview.zig").enums;
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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html)
pub const qcolumnview = struct {
    /// New constructs a new QColumnView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn New(parent: ?*anyopaque) QtC.QColumnView {
        return qtc.QColumnView_new(@ptrCast(parent));
    }

    /// New2 constructs a new QColumnView object.
    ///
    pub fn New2() QtC.QColumnView {
        return qtc.QColumnView_new2();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QColumnView_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QColumnView_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QColumnView_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QColumnView_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QColumnView_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QColumnView_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QColumnView_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QColumnView_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QColumnView_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#updatePreviewWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn UpdatePreviewWidget(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QColumnView_UpdatePreviewWidget(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#updatePreviewWidget)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnUpdatePreviewWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_Connect_UpdatePreviewWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#indexAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` point: QtC.QPoint `
    ///
    pub fn IndexAt(self: ?*anyopaque, point: ?*anyopaque) QtC.QModelIndex {
        return qtc.QColumnView_IndexAt(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#indexAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, point: QtC.QPoint) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnIndexAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QColumnView_OnIndexAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexAt` instead
    ///
    pub const QBaseIndexAt = SuperIndexAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#indexAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` point: QtC.QPoint `
    ///
    pub fn SuperIndexAt(self: ?*anyopaque, point: ?*anyopaque) QtC.QModelIndex {
        return qtc.QColumnView_SuperIndexAt(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#scrollTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn ScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QColumnView_ScrollTo(@ptrCast(self), @ptrCast(index), @bitCast(hint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#scrollTo)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex, hint: qabstractitemview_enums.ScrollHint) callconv(.c) void `
    ///
    pub fn OnScrollTo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColumnView_OnScrollTo(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScrollTo` instead
    ///
    pub const QBaseScrollTo = SuperScrollTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#scrollTo)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn SuperScrollTo(self: ?*anyopaque, index: ?*anyopaque, hint: i32) void {
        qtc.QColumnView_SuperScrollTo(@ptrCast(self), @ptrCast(index), @bitCast(hint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QColumnView_SizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QColumnView_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QColumnView_SuperSizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#visualRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn VisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QColumnView_VisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#visualRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex) callconv(.c) QtC.QRect `
    ///
    pub fn OnVisualRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QColumnView_OnVisualRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVisualRect` instead
    ///
    pub const QBaseVisualRect = SuperVisualRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#visualRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperVisualRect(self: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.QColumnView_SuperVisualRect(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QColumnView_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, model: QtC.QAbstractItemModel) callconv(.c) void `
    ///
    pub fn OnSetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnSetModel(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetModel` instead
    ///
    pub const QBaseSetModel = SuperSetModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    pub fn SuperSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QColumnView_SuperSetModel(@ptrCast(self), @ptrCast(model));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setSelectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` selectionModel: QtC.QItemSelectionModel `
    ///
    pub fn SetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QColumnView_SetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setSelectionModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, selectionModel: QtC.QItemSelectionModel) callconv(.c) void `
    ///
    pub fn OnSetSelectionModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnSetSelectionModel(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSelectionModel` instead
    ///
    pub const QBaseSetSelectionModel = SuperSetSelectionModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setSelectionModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` selectionModel: QtC.QItemSelectionModel `
    ///
    pub fn SuperSetSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.QColumnView_SuperSetSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setRootIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QColumnView_SetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setRootIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetRootIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnSetRootIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetRootIndex` instead
    ///
    pub const QBaseSetRootIndex = SuperSetRootIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setRootIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperSetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QColumnView_SuperSetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SelectAll(self: ?*anyopaque) void {
        qtc.QColumnView_SelectAll(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#selectAll)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSelectAll(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnSelectAll(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelectAll` instead
    ///
    pub const QBaseSelectAll = SuperSelectAll;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#selectAll)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperSelectAll(self: ?*anyopaque) void {
        qtc.QColumnView_SuperSelectAll(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setResizeGripsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` visible: bool `
    ///
    pub fn SetResizeGripsVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QColumnView_SetResizeGripsVisible(@ptrCast(self), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#resizeGripsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ResizeGripsVisible(self: ?*anyopaque) bool {
        return qtc.QColumnView_ResizeGripsVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#previewWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn PreviewWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QColumnView_PreviewWidget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setPreviewWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetPreviewWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QColumnView_SetPreviewWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setColumnWidths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` list: []i32 `
    ///
    pub fn SetColumnWidths(self: ?*anyopaque, list: []i32) void {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = list.ptr,
        };
        qtc.QColumnView_SetColumnWidths(@ptrCast(self), list_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#columnWidths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ColumnWidths(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QColumnView_ColumnWidths(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qcolumnview.ColumnWidths: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#isIndexHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn IsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QColumnView_IsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#isIndexHidden)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnIsIndexHidden(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QColumnView_OnIsIndexHidden(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsIndexHidden` instead
    ///
    pub const QBaseIsIndexHidden = SuperIsIndexHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#isIndexHidden)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperIsIndexHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QColumnView_SuperIsIndexHidden(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` cursorAction: qabstractitemview_enums.CursorAction `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn MoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i32) QtC.QModelIndex {
        return qtc.QColumnView_MoveCursor(@ptrCast(self), @bitCast(cursorAction), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#moveCursor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnMoveCursor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QModelIndex) void {
        qtc.QColumnView_OnMoveCursor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMoveCursor` instead
    ///
    pub const QBaseMoveCursor = SuperMoveCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#moveCursor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` cursorAction: qabstractitemview_enums.CursorAction `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SuperMoveCursor(self: ?*anyopaque, cursorAction: i32, modifiers: i32) QtC.QModelIndex {
        return qtc.QColumnView_SuperMoveCursor(@ptrCast(self), @bitCast(cursorAction), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QResizeEvent `
    ///
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnResizeEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QColumnView_SetSelection(@ptrCast(self), @ptrCast(rect), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, rect: QtC.QRect, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSetSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColumnView_OnSetSelection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSelection` instead
    ///
    pub const QBaseSetSelection = SuperSetSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#setSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSetSelection(self: ?*anyopaque, rect: ?*anyopaque, command: i32) void {
        qtc.QColumnView_SuperSetSelection(@ptrCast(self), @ptrCast(rect), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#visualRegionForSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` selection: QtC.QItemSelection `
    ///
    pub fn VisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QColumnView_VisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#visualRegionForSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, selection: QtC.QItemSelection) callconv(.c) QtC.QRegion `
    ///
    pub fn OnVisualRegionForSelection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRegion) void {
        qtc.QColumnView_OnVisualRegionForSelection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVisualRegionForSelection` instead
    ///
    pub const QBaseVisualRegionForSelection = SuperVisualRegionForSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#visualRegionForSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` selection: QtC.QItemSelection `
    ///
    pub fn SuperVisualRegionForSelection(self: ?*anyopaque, selection: ?*anyopaque) QtC.QRegion {
        return qtc.QColumnView_SuperVisualRegionForSelection(@ptrCast(self), @ptrCast(selection));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#horizontalOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn HorizontalOffset(self: ?*anyopaque) i32 {
        return qtc.QColumnView_HorizontalOffset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#horizontalOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnHorizontalOffset(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QColumnView_OnHorizontalOffset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHorizontalOffset` instead
    ///
    pub const QBaseHorizontalOffset = SuperHorizontalOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#horizontalOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperHorizontalOffset(self: ?*anyopaque) i32 {
        return qtc.QColumnView_SuperHorizontalOffset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#verticalOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn VerticalOffset(self: ?*anyopaque) i32 {
        return qtc.QColumnView_VerticalOffset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#verticalOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnVerticalOffset(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QColumnView_OnVerticalOffset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVerticalOffset` instead
    ///
    pub const QBaseVerticalOffset = SuperVerticalOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#verticalOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperVerticalOffset(self: ?*anyopaque) i32 {
        return qtc.QColumnView_SuperVerticalOffset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#rowsInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn RowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QColumnView_RowsInserted(@ptrCast(self), @ptrCast(parent), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#rowsInserted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, parent: QtC.QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QColumnView_OnRowsInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRowsInserted` instead
    ///
    pub const QBaseRowsInserted = SuperRowsInserted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#rowsInserted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRowsInserted(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QColumnView_SuperRowsInserted(@ptrCast(self), @ptrCast(parent), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#currentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` current: QtC.QModelIndex `
    ///
    /// ` previous: QtC.QModelIndex `
    ///
    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QColumnView_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#currentChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, current: QtC.QModelIndex, previous: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnCurrentChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentChanged` instead
    ///
    pub const QBaseCurrentChanged = SuperCurrentChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#currentChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` current: QtC.QModelIndex `
    ///
    /// ` previous: QtC.QModelIndex `
    ///
    pub fn SuperCurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QColumnView_SuperCurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#scrollContentsBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QColumnView_ScrollContentsBy(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#scrollContentsBy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QColumnView_OnScrollContentsBy(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#scrollContentsBy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QColumnView_SuperScrollContentsBy(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#createColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` rootIndex: QtC.QModelIndex `
    ///
    pub fn CreateColumn(self: ?*anyopaque, rootIndex: ?*anyopaque) QtC.QAbstractItemView {
        return qtc.QColumnView_CreateColumn(@ptrCast(self), @ptrCast(rootIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#createColumn)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, rootIndex: QtC.QModelIndex) callconv(.c) QtC.QAbstractItemView `
    ///
    pub fn OnCreateColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAbstractItemView) void {
        qtc.QColumnView_OnCreateColumn(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateColumn` instead
    ///
    pub const QBaseCreateColumn = SuperCreateColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#createColumn)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` rootIndex: QtC.QModelIndex `
    ///
    pub fn SuperCreateColumn(self: ?*anyopaque, rootIndex: ?*anyopaque) QtC.QAbstractItemView {
        return qtc.QColumnView_SuperCreateColumn(@ptrCast(self), @ptrCast(rootIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#initializeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` column: QtC.QAbstractItemView `
    ///
    pub fn InitializeColumn(self: ?*anyopaque, column: ?*anyopaque) void {
        qtc.QColumnView_InitializeColumn(@ptrCast(self), @ptrCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#initializeColumn)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, column: QtC.QAbstractItemView) callconv(.c) void `
    ///
    pub fn OnInitializeColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnInitializeColumn(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitializeColumn` instead
    ///
    pub const QBaseInitializeColumn = SuperInitializeColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#initializeColumn)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` column: QtC.QAbstractItemView `
    ///
    pub fn SuperInitializeColumn(self: ?*anyopaque, column: ?*anyopaque) void {
        qtc.QColumnView_SuperInitializeColumn(@ptrCast(self), @ptrCast(column));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QAbstractItemView_Model(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SelectionModel(self: ?*anyopaque) QtC.QItemSelectionModel {
        return qtc.QAbstractItemView_SelectionModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` delegate: QtC.QAbstractItemDelegate `
    ///
    pub fn SetItemDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ItemDelegate(self: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegate(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` mode: qabstractitemview_enums.SelectionMode `
    ///
    pub fn SetSelectionMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetSelectionMode(@ptrCast(self), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionMode `
    ///
    pub fn SelectionMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_SelectionMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` behavior: qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn SetSelectionBehavior(self: ?*anyopaque, behavior: i32) void {
        qtc.QAbstractItemView_SetSelectionBehavior(@ptrCast(self), @bitCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn SelectionBehavior(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_SelectionBehavior(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn CurrentIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemView_CurrentIndex(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn RootIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemView_RootIndex(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` triggers: flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn SetEditTriggers(self: ?*anyopaque, triggers: i32) void {
        qtc.QAbstractItemView_SetEditTriggers(@ptrCast(self), @bitCast(triggers));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn EditTriggers(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_EditTriggers(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn SetVerticalScrollMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn VerticalScrollMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_VerticalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ResetVerticalScrollMode(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn SetHorizontalScrollMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn HorizontalScrollMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_HorizontalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ResetHorizontalScrollMode(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAutoScroll(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetAutoScroll(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn HasAutoScroll(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_HasAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` margin: i32 `
    ///
    pub fn SetAutoScrollMargin(self: ?*anyopaque, margin: i32) void {
        qtc.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self), @bitCast(margin));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn AutoScrollMargin(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_AutoScrollMargin(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabKeyNavigation(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn TabKeyNavigation(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_TabKeyNavigation(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDropIndicatorShown(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ShowDropIndicator(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_ShowDropIndicator(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDragEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetDragEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn DragEnabled(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_DragEnabled(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` overwrite: bool `
    ///
    pub fn SetDragDropOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        qtc.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self), overwrite);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn DragDropOverwriteMode(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` behavior: qabstractitemview_enums.DragDropMode `
    ///
    pub fn SetDragDropMode(self: ?*anyopaque, behavior: i32) void {
        qtc.QAbstractItemView_SetDragDropMode(@ptrCast(self), @bitCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DragDropMode `
    ///
    pub fn DragDropMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_DragDropMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` dropAction: qnamespace_enums.DropAction `
    ///
    pub fn SetDefaultDropAction(self: ?*anyopaque, dropAction: i32) void {
        qtc.QAbstractItemView_SetDefaultDropAction(@ptrCast(self), @bitCast(dropAction));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn DefaultDropAction(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_DefaultDropAction(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAlternatingRowColors(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn AlternatingRowColors(self: ?*anyopaque) bool {
        return qtc.QAbstractItemView_AlternatingRowColors(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QAbstractItemView_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_IconSize(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    pub fn SetTextElideMode(self: ?*anyopaque, mode: i32) void {
        qtc.QAbstractItemView_SetTextElideMode(@ptrCast(self), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextElideMode `
    ///
    pub fn TextElideMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractItemView_TextElideMode(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SizeHintForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractItemView_SizeHintForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn OpenPersistentEditor(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_OpenPersistentEditor(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn ClosePersistentEditor(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_ClosePersistentEditor(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn IsPersistentEditorOpen(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemView_IsPersistentEditorOpen(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetIndexWidget(self: ?*anyopaque, index: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractItemView_SetIndexWidget(@ptrCast(self), @ptrCast(index), @ptrCast(widget));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn IndexWidget(self: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractItemView_IndexWidget(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` row: i32 `
    ///
    /// ` delegate: QtC.QAbstractItemDelegate `
    ///
    pub fn SetItemDelegateForRow(self: ?*anyopaque, row: i32, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self), @bitCast(row), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` row: i32 `
    ///
    pub fn ItemDelegateForRow(self: ?*anyopaque, row: i32) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self), @bitCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` column: i32 `
    ///
    /// ` delegate: QtC.QAbstractItemDelegate `
    ///
    pub fn SetItemDelegateForColumn(self: ?*anyopaque, column: i32, delegate: ?*anyopaque) void {
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self), @bitCast(column), @ptrCast(delegate));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemDelegateForColumn(self: ?*anyopaque, column: i32) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self), @bitCast(column));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn ItemDelegate2(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QAbstractItemView_ItemDelegate2(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Edit(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Edit(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ClearSelection(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ClearSelection(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_SetCurrentIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ScrollToTop(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ScrollToTop(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ScrollToBottom(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ScrollToBottom(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Update(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Update(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Pressed(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Pressed(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Pressed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Clicked(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Clicked(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Clicked(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn DoubleClicked(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_DoubleClicked(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Activated(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Activated(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Activated(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Entered(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QAbstractItemView_Entered(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Entered(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ViewportEntered(self: ?*anyopaque) void {
        qtc.QAbstractItemView_ViewportEntered(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView) callconv(.c) void `
    ///
    pub fn OnViewportEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn IconSizeChanged(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QAbstractItemView_IconSizeChanged(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, size: QtC.QSize) callconv(.c) void `
    ///
    pub fn OnIconSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn VerticalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` scrollbar: QtC.QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn HorizontalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` scrollbar: QtC.QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn CornerWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i32) void {
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i32, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("qcolumnview.ScrollBarWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Viewport(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn MaximumViewportSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn FrameRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` frameRect: QtC.QRect `
    ///
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        qtc.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` style: QtC.QStyle `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` minimumSize: QtC.QSize `
    ///
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` maximumSize: QtC.QSize `
    ///
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` sizeIncrement: QtC.QSize `
    ///
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` baseSize: QtC.QSize `
    ///
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` fixedSize: QtC.QSize `
    ///
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPointF `
    ///
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPoint `
    ///
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPointF `
    ///
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPoint `
    ///
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPointF `
    ///
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPoint `
    ///
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPointF `
    ///
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPoint `
    ///
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QWidget `
    ///
    /// ` param2: QtC.QPointF `
    ///
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QWidget `
    ///
    /// ` param2: QtC.QPoint `
    ///
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QWidget `
    ///
    /// ` param2: QtC.QPointF `
    ///
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QWidget `
    ///
    /// ` param2: QtC.QPoint `
    ///
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` cursor: QtC.QCursor `
    ///
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` mask: QtC.QBitmap `
    ///
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` mask: QtC.QRegion `
    ///
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` target: QtC.QPaintDevice `
    ///
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` effect: QtC.QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` locale: QtC.QLocale `
    ///
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWidget `
    ///
    /// ` param2: QtC.QWidget `
    ///
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` focusProxy: QtC.QWidget `
    ///
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QCursor `
    ///
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` key: QtC.QKeySequence `
    ///
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    pub fn MouseGrabber() QtC.QWidget {
        return qtc.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    pub fn KeyboardGrabber() QtC.QWidget {
        return qtc.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QRect `
    ///
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QRegion `
    ///
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QRect `
    ///
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QRegion `
    ///
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPoint `
    ///
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QSize `
    ///
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcolumnview.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` sizePolicy: QtC.QSizePolicy `
    ///
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
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
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` margins: QtC.QMargins `
    ///
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` layout: QtC.QLayout `
    ///
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` parent: QtC.QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i32) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QtC.QRect `
    ///
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @bitCast(dx), @bitCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` actions: []QtC.QAction `
    ///
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` before: QtC.QAction `
    ///
    /// ` actions: []QtC.QAction `
    ///
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` before: QtC.QAction `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qcolumnview.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction2(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` icon: QtC.QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QtC.QKeySequence `
    ///
    pub fn AddAction4(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction4(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` icon: QtC.QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QtC.QKeySequence `
    ///
    pub fn AddAction5(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction5(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: u64 `
    ///
    pub fn Find(param1: u64) QtC.QWidget {
        return qtc.QWidget_Find(@bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` child: QtC.QWidget `
    ///
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` screen: QtC.QScreen `
    ///
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QtC.QWindow `
    ///
    pub fn CreateWindowContainer(window: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, icon: QtC.QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, pos: QtC.QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: ?*anyopaque) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` target: QtC.QPaintDevice `
    ///
    /// ` targetOffset: QtC.QPoint `
    ///
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` target: QtC.QPaintDevice `
    ///
    /// ` targetOffset: QtC.QPoint `
    ///
    /// ` sourceRegion: QtC.QRegion `
    ///
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` target: QtC.QPaintDevice `
    ///
    /// ` targetOffset: QtC.QPoint `
    ///
    /// ` sourceRegion: QtC.QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @bitCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` targetOffset: QtC.QPoint `
    ///
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` targetOffset: QtC.QPoint `
    ///
    /// ` sourceRegion: QtC.QRegion `
    ///
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` targetOffset: QtC.QPoint `
    ///
    /// ` sourceRegion: QtC.QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @bitCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` rectangle: QtC.QRect `
    ///
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` key: QtC.QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: ?*anyopaque, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QtC.QWindow `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QtC.QWindow `
    ///
    /// ` parent: QtC.QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i32) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @bitCast(flags));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolumnview.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qcolumnview.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qcolumnview.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcolumnview.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView) callconv(.c) void `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
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
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(metric), @bitCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` search: []const u8 `
    ///
    pub fn KeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QColumnView_KeyboardSearch(@ptrCast(self), search_str);
    }

    /// ### DEPRECATED: Use `SuperKeyboardSearch` instead
    ///
    pub const QBaseKeyboardSearch = SuperKeyboardSearch;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` search: []const u8 `
    ///
    pub fn SuperKeyboardSearch(self: ?*anyopaque, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QColumnView_SuperKeyboardSearch(@ptrCast(self), search_str);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, search: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnKeyboardSearch(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QColumnView_OnKeyboardSearch(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` row: i32 `
    ///
    pub fn SizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return qtc.QColumnView_SizeHintForRow(@ptrCast(self), @bitCast(row));
    }

    /// ### DEPRECATED: Use `SuperSizeHintForRow` instead
    ///
    pub const QBaseSizeHintForRow = SuperSizeHintForRow;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` row: i32 `
    ///
    pub fn SuperSizeHintForRow(self: ?*anyopaque, row: i32) i32 {
        return qtc.QColumnView_SuperSizeHintForRow(@ptrCast(self), @bitCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, row: i32) callconv(.c) i32 `
    ///
    pub fn OnSizeHintForRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QColumnView_OnSizeHintForRow(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` column: i32 `
    ///
    pub fn SizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QColumnView_SizeHintForColumn(@ptrCast(self), @bitCast(column));
    }

    /// ### DEPRECATED: Use `SuperSizeHintForColumn` instead
    ///
    pub const QBaseSizeHintForColumn = SuperSizeHintForColumn;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperSizeHintForColumn(self: ?*anyopaque, column: i32) i32 {
        return qtc.QColumnView_SuperSizeHintForColumn(@ptrCast(self), @bitCast(column));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, column: i32) callconv(.c) i32 `
    ///
    pub fn OnSizeHintForColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QColumnView_OnSizeHintForColumn(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn ItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QColumnView_ItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// ### DEPRECATED: Use `SuperItemDelegateForIndex` instead
    ///
    pub const QBaseItemDelegateForIndex = SuperItemDelegateForIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperItemDelegateForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QColumnView_SuperItemDelegateForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex) callconv(.c) QtC.QAbstractItemDelegate `
    ///
    pub fn OnItemDelegateForIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAbstractItemDelegate) void {
        qtc.QColumnView_OnItemDelegateForIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: ?*anyopaque, query: i32) QtC.QVariant {
        return qtc.QColumnView_InputMethodQuery(@ptrCast(self), @bitCast(query));
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: ?*anyopaque, query: i32) QtC.QVariant {
        return qtc.QColumnView_SuperInputMethodQuery(@ptrCast(self), @bitCast(query));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, query: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant `
    ///
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QColumnView_OnInputMethodQuery(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QColumnView_Reset(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperReset(self: ?*anyopaque) void {
        qtc.QColumnView_SuperReset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn DoItemsLayout(self: ?*anyopaque) void {
        qtc.QColumnView_DoItemsLayout(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperDoItemsLayout` instead
    ///
    pub const QBaseDoItemsLayout = SuperDoItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperDoItemsLayout(self: ?*anyopaque) void {
        qtc.QColumnView_SuperDoItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoItemsLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnDoItemsLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` topLeft: QtC.QModelIndex `
    ///
    /// ` bottomRight: QtC.QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QColumnView_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// ### DEPRECATED: Use `SuperDataChanged` instead
    ///
    pub const QBaseDataChanged = SuperDataChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` topLeft: QtC.QModelIndex `
    ///
    /// ` bottomRight: QtC.QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn SuperDataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QColumnView_SuperDataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QColumnView_OnDataChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn RowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QColumnView_RowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `SuperRowsAboutToBeRemoved` instead
    ///
    pub const QBaseRowsAboutToBeRemoved = SuperRowsAboutToBeRemoved;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRowsAboutToBeRemoved(self: ?*anyopaque, parent: ?*anyopaque, start: i32, end: i32) void {
        qtc.QColumnView_SuperRowsAboutToBeRemoved(@ptrCast(self), @ptrCast(parent), @bitCast(start), @bitCast(end));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, parent: QtC.QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QColumnView_OnRowsAboutToBeRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` selected: QtC.QItemSelection `
    ///
    /// ` deselected: QtC.QItemSelection `
    ///
    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QColumnView_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// ### DEPRECATED: Use `SuperSelectionChanged` instead
    ///
    pub const QBaseSelectionChanged = SuperSelectionChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` selected: QtC.QItemSelection `
    ///
    /// ` deselected: QtC.QItemSelection `
    ///
    pub fn SuperSelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QColumnView_SuperSelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, selected: QtC.QItemSelection, deselected: QtC.QItemSelection) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnSelectionChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn UpdateEditorData(self: ?*anyopaque) void {
        qtc.QColumnView_UpdateEditorData(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperUpdateEditorData` instead
    ///
    pub const QBaseUpdateEditorData = SuperUpdateEditorData;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperUpdateEditorData(self: ?*anyopaque) void {
        qtc.QColumnView_SuperUpdateEditorData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateEditorData(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnUpdateEditorData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn UpdateEditorGeometries(self: ?*anyopaque) void {
        qtc.QColumnView_UpdateEditorGeometries(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperUpdateEditorGeometries` instead
    ///
    pub const QBaseUpdateEditorGeometries = SuperUpdateEditorGeometries;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperUpdateEditorGeometries(self: ?*anyopaque) void {
        qtc.QColumnView_SuperUpdateEditorGeometries(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateEditorGeometries(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnUpdateEditorGeometries(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn UpdateGeometries(self: ?*anyopaque) void {
        qtc.QColumnView_UpdateGeometries(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperUpdateGeometries` instead
    ///
    pub const QBaseUpdateGeometries = SuperUpdateGeometries;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperUpdateGeometries(self: ?*anyopaque) void {
        qtc.QColumnView_SuperUpdateGeometries(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometries(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnUpdateGeometries(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` action: i32 `
    ///
    pub fn VerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QColumnView_VerticalScrollbarAction(@ptrCast(self), @bitCast(action));
    }

    /// ### DEPRECATED: Use `SuperVerticalScrollbarAction` instead
    ///
    pub const QBaseVerticalScrollbarAction = SuperVerticalScrollbarAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` action: i32 `
    ///
    pub fn SuperVerticalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QColumnView_SuperVerticalScrollbarAction(@ptrCast(self), @bitCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, action: i32) callconv(.c) void `
    ///
    pub fn OnVerticalScrollbarAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColumnView_OnVerticalScrollbarAction(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` action: i32 `
    ///
    pub fn HorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QColumnView_HorizontalScrollbarAction(@ptrCast(self), @bitCast(action));
    }

    /// ### DEPRECATED: Use `SuperHorizontalScrollbarAction` instead
    ///
    pub const QBaseHorizontalScrollbarAction = SuperHorizontalScrollbarAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` action: i32 `
    ///
    pub fn SuperHorizontalScrollbarAction(self: ?*anyopaque, action: i32) void {
        qtc.QColumnView_SuperHorizontalScrollbarAction(@ptrCast(self), @bitCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, action: i32) callconv(.c) void `
    ///
    pub fn OnHorizontalScrollbarAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColumnView_OnHorizontalScrollbarAction(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` value: i32 `
    ///
    pub fn VerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QColumnView_VerticalScrollbarValueChanged(@ptrCast(self), @bitCast(value));
    }

    /// ### DEPRECATED: Use `SuperVerticalScrollbarValueChanged` instead
    ///
    pub const QBaseVerticalScrollbarValueChanged = SuperVerticalScrollbarValueChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` value: i32 `
    ///
    pub fn SuperVerticalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QColumnView_SuperVerticalScrollbarValueChanged(@ptrCast(self), @bitCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, value: i32) callconv(.c) void `
    ///
    pub fn OnVerticalScrollbarValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColumnView_OnVerticalScrollbarValueChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` value: i32 `
    ///
    pub fn HorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QColumnView_HorizontalScrollbarValueChanged(@ptrCast(self), @bitCast(value));
    }

    /// ### DEPRECATED: Use `SuperHorizontalScrollbarValueChanged` instead
    ///
    pub const QBaseHorizontalScrollbarValueChanged = SuperHorizontalScrollbarValueChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` value: i32 `
    ///
    pub fn SuperHorizontalScrollbarValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QColumnView_SuperHorizontalScrollbarValueChanged(@ptrCast(self), @bitCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, value: i32) callconv(.c) void `
    ///
    pub fn OnHorizontalScrollbarValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColumnView_OnHorizontalScrollbarValueChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn CloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QColumnView_CloseEditor(@ptrCast(self), @ptrCast(editor), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `SuperCloseEditor` instead
    ///
    pub const QBaseCloseEditor = SuperCloseEditor;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn SuperCloseEditor(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QColumnView_SuperCloseEditor(@ptrCast(self), @ptrCast(editor), @bitCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
    ///
    pub fn OnCloseEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColumnView_OnCloseEditor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` editor: QtC.QWidget `
    ///
    pub fn CommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QColumnView_CommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// ### DEPRECATED: Use `SuperCommitData` instead
    ///
    pub const QBaseCommitData = SuperCommitData;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` editor: QtC.QWidget `
    ///
    pub fn SuperCommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QColumnView_SuperCommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, editor: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnCommitData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnCommitData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` editor: QtC.QObject `
    ///
    pub fn EditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QColumnView_EditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// ### DEPRECATED: Use `SuperEditorDestroyed` instead
    ///
    pub const QBaseEditorDestroyed = SuperEditorDestroyed;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` editor: QtC.QObject `
    ///
    pub fn SuperEditorDestroyed(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QColumnView_SuperEditorDestroyed(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, editor: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnEditorDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnEditorDestroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QColumnView_SelectedIndexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qcolumnview.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperSelectedIndexes` instead
    ///
    pub const QBaseSelectedIndexes = SuperSelectedIndexes;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QColumnView_SuperSelectedIndexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qcolumnview.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.QModelIndex `
    ///
    pub fn OnSelectedIndexes(self: ?*anyopaque, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QColumnView_OnSelectedIndexes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Edit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i32, event: ?*anyopaque) bool {
        return qtc.QColumnView_Edit2(@ptrCast(self), @ptrCast(index), @bitCast(trigger), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEdit2` instead
    ///
    pub const QBaseEdit2 = SuperEdit2;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEdit2(self: ?*anyopaque, index: ?*anyopaque, trigger: i32, event: ?*anyopaque) bool {
        return qtc.QColumnView_SuperEdit2(@ptrCast(self), @ptrCast(index), @bitCast(trigger), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEdit2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QColumnView_OnEdit2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` event: QtC.QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QColumnView_SelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperSelectionCommand` instead
    ///
    pub const QBaseSelectionCommand = SuperSelectionCommand;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` event: QtC.QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSelectionCommand(self: ?*anyopaque, index: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QColumnView_SuperSelectionCommand(@ptrCast(self), @ptrCast(index), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, index: QtC.QModelIndex, event: QtC.QEvent) callconv(.c) i32 `
    ///
    pub fn OnSelectionCommand(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QColumnView_OnSelectionCommand(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn StartDrag(self: ?*anyopaque, supportedActions: i32) void {
        qtc.QColumnView_StartDrag(@ptrCast(self), @bitCast(supportedActions));
    }

    /// ### DEPRECATED: Use `SuperStartDrag` instead
    ///
    pub const QBaseStartDrag = SuperStartDrag;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperStartDrag(self: ?*anyopaque, supportedActions: i32) void {
        qtc.QColumnView_SuperStartDrag(@ptrCast(self), @bitCast(supportedActions));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, supportedActions: flag of qnamespace_enums.DropAction) callconv(.c) void `
    ///
    pub fn OnStartDrag(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColumnView_OnStartDrag(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    pub fn InitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QColumnView_InitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// ### DEPRECATED: Use `SuperInitViewItemOption` instead
    ///
    pub const QBaseInitViewItemOption = SuperInitViewItemOption;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    pub fn SuperInitViewItemOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QColumnView_SuperInitViewItemOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, option: QtC.QStyleOptionViewItem) callconv(.c) void `
    ///
    pub fn OnInitViewItemOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnInitViewItemOption(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QColumnView_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QColumnView_SuperFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QColumnView_OnFocusNextPrevChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QColumnView_Event(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QColumnView_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QColumnView_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn ViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QColumnView_ViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperViewportEvent` instead
    ///
    pub const QBaseViewportEvent = SuperViewportEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperViewportEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QColumnView_SuperViewportEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QColumnView_OnViewportEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QMouseEvent `
    ///
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnMousePressEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnMouseMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnMouseReleaseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnMouseDoubleClickEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnDragEnterEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnDragMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnDragLeaveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QDropEvent `
    ///
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QDropEvent `
    ///
    pub fn SuperDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnDropEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnFocusInEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnFocusOutEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnKeyPressEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnInputMethodEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QColumnView_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QColumnView_SuperEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, object: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QColumnView_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QColumnView_ViewportSizeHint(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperViewportSizeHint` instead
    ///
    pub const QBaseViewportSizeHint = SuperViewportSizeHint;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QColumnView_SuperViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnViewportSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QColumnView_OnViewportSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QColumnView_MinimumSizeHint(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QColumnView_SuperMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QColumnView_OnMinimumSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` viewport: QtC.QWidget `
    ///
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QColumnView_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// ### DEPRECATED: Use `SuperSetupViewport` instead
    ///
    pub const QBaseSetupViewport = SuperSetupViewport;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` viewport: QtC.QWidget `
    ///
    pub fn SuperSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QColumnView_SuperSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, viewport: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnSetupViewport(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPaintEvent `
    ///
    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QColumnView_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QColumnView_SuperPaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, param1: QtC.QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnPaintEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QWheelEvent `
    ///
    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QColumnView_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QColumnView_SuperWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, param1: QtC.QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnWheelEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QColumnView_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QColumnView_SuperContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, param1: QtC.QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnContextMenuEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QColumnView_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn SuperChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QColumnView_SuperChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, param1: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnChangeEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` option: QtC.QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QColumnView_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` option: QtC.QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QColumnView_SuperInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, option: QtC.QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnInitStyleOption(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QColumnView_DevType(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperDevType(self: ?*anyopaque) i32 {
        return qtc.QColumnView_SuperDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QColumnView_OnDevType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QColumnView_SetVisible(@ptrCast(self), visible);
    }

    /// ### DEPRECATED: Use `SuperSetVisible` instead
    ///
    pub const QBaseSetVisible = SuperSetVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QColumnView_SuperSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QColumnView_OnSetVisible(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QColumnView_HeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QColumnView_SuperHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QColumnView_OnHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QColumnView_HasHeightForWidth(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QColumnView_SuperHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QColumnView_OnHasHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QColumnView_PaintEngine(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperPaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QColumnView_SuperPaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPaintEngine `
    ///
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QColumnView_OnPaintEngine(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnKeyReleaseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QEnterEvent `
    ///
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEnterEvent` instead
    ///
    pub const QBaseEnterEvent = SuperEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnEnterEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperLeaveEvent` instead
    ///
    pub const QBaseLeaveEvent = SuperLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnLeaveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QMoveEvent `
    ///
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperMoveEvent` instead
    ///
    pub const QBaseMoveEvent = SuperMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QCloseEvent `
    ///
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnCloseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QTabletEvent `
    ///
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTabletEvent` instead
    ///
    pub const QBaseTabletEvent = SuperTabletEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnTabletEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QActionEvent `
    ///
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperActionEvent` instead
    ///
    pub const QBaseActionEvent = SuperActionEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QActionEvent `
    ///
    pub fn SuperActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnActionEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QShowEvent `
    ///
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QShowEvent `
    ///
    pub fn SuperShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnShowEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QHideEvent `
    ///
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QHideEvent `
    ///
    pub fn SuperHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnHideEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QColumnView_NativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `SuperNativeEvent` instead
    ///
    pub const QBaseNativeEvent = SuperNativeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QColumnView_SuperNativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QColumnView_OnNativeEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QColumnView_Metric(@ptrCast(self), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QColumnView_SuperMetric(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QColumnView_OnMetric(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QColumnView_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// ### DEPRECATED: Use `SuperInitPainter` instead
    ///
    pub const QBaseInitPainter = SuperInitPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn SuperInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QColumnView_SuperInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, painter: QtC.QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnInitPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QColumnView_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// ### DEPRECATED: Use `SuperRedirected` instead
    ///
    pub const QBaseRedirected = SuperRedirected;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn SuperRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QColumnView_SuperRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice `
    ///
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QColumnView_OnRedirected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QColumnView_SharedPainter(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSharedPainter` instead
    ///
    pub const QBaseSharedPainter = SuperSharedPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QColumnView_SuperSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainter `
    ///
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.QColumnView_OnSharedPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QColumnView `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColumnView_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QColumnView_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QColumnView `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QColumnView_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QColumnView_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QColumnView `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QColumnView_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QColumnView_State(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperState` instead
    ///
    pub const QBaseState = SuperState;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn SuperState(self: ?*anyopaque) i32 {
        return qtc.QColumnView_SuperState(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnState(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QColumnView_OnState(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` state: qabstractitemview_enums.State `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QColumnView_SetState(@ptrCast(self), @bitCast(state));
    }

    /// ### DEPRECATED: Use `SuperSetState` instead
    ///
    pub const QBaseSetState = SuperSetState;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` state: qabstractitemview_enums.State `
    ///
    pub fn SuperSetState(self: ?*anyopaque, state: i32) void {
        qtc.QColumnView_SuperSetState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, state: qabstractitemview_enums.State) callconv(.c) void `
    ///
    pub fn OnSetState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColumnView_OnSetState(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ScheduleDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QColumnView_ScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperScheduleDelayedItemsLayout` instead
    ///
    pub const QBaseScheduleDelayedItemsLayout = SuperScheduleDelayedItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperScheduleDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QColumnView_SuperScheduleDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnScheduleDelayedItemsLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnScheduleDelayedItemsLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ExecuteDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QColumnView_ExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperExecuteDelayedItemsLayout` instead
    ///
    pub const QBaseExecuteDelayedItemsLayout = SuperExecuteDelayedItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperExecuteDelayedItemsLayout(self: ?*anyopaque) void {
        qtc.QColumnView_SuperExecuteDelayedItemsLayout(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnExecuteDelayedItemsLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnExecuteDelayedItemsLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` region: QtC.QRegion `
    ///
    pub fn SetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QColumnView_SetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// ### DEPRECATED: Use `SuperSetDirtyRegion` instead
    ///
    pub const QBaseSetDirtyRegion = SuperSetDirtyRegion;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` region: QtC.QRegion `
    ///
    pub fn SuperSetDirtyRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QColumnView_SuperSetDirtyRegion(@ptrCast(self), @ptrCast(region));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, region: QtC.QRegion) callconv(.c) void `
    ///
    pub fn OnSetDirtyRegion(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnSetDirtyRegion(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QColumnView_ScrollDirtyRegion(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `SuperScrollDirtyRegion` instead
    ///
    pub const QBaseScrollDirtyRegion = SuperScrollDirtyRegion;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollDirtyRegion(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QColumnView_SuperScrollDirtyRegion(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollDirtyRegion(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QColumnView_OnScrollDirtyRegion(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn DirtyRegionOffset(self: ?*anyopaque) QtC.QPoint {
        return qtc.QColumnView_DirtyRegionOffset(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperDirtyRegionOffset` instead
    ///
    pub const QBaseDirtyRegionOffset = SuperDirtyRegionOffset;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperDirtyRegionOffset(self: ?*anyopaque) QtC.QPoint {
        return qtc.QColumnView_SuperDirtyRegionOffset(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPoint `
    ///
    pub fn OnDirtyRegionOffset(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPoint) void {
        qtc.QColumnView_OnDirtyRegionOffset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn StartAutoScroll(self: ?*anyopaque) void {
        qtc.QColumnView_StartAutoScroll(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperStartAutoScroll` instead
    ///
    pub const QBaseStartAutoScroll = SuperStartAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperStartAutoScroll(self: ?*anyopaque) void {
        qtc.QColumnView_SuperStartAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartAutoScroll(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnStartAutoScroll(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn StopAutoScroll(self: ?*anyopaque) void {
        qtc.QColumnView_StopAutoScroll(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperStopAutoScroll` instead
    ///
    pub const QBaseStopAutoScroll = SuperStopAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperStopAutoScroll(self: ?*anyopaque) void {
        qtc.QColumnView_SuperStopAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStopAutoScroll(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnStopAutoScroll(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn DoAutoScroll(self: ?*anyopaque) void {
        qtc.QColumnView_DoAutoScroll(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperDoAutoScroll` instead
    ///
    pub const QBaseDoAutoScroll = SuperDoAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperDoAutoScroll(self: ?*anyopaque) void {
        qtc.QColumnView_SuperDoAutoScroll(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoAutoScroll(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnDoAutoScroll(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn DropIndicatorPosition(self: ?*anyopaque) i32 {
        return qtc.QColumnView_DropIndicatorPosition(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperDropIndicatorPosition` instead
    ///
    pub const QBaseDropIndicatorPosition = SuperDropIndicatorPosition;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn SuperDropIndicatorPosition(self: ?*anyopaque) i32 {
        return qtc.QColumnView_SuperDropIndicatorPosition(@ptrCast(self));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDropIndicatorPosition(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QColumnView_OnDropIndicatorPosition(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QColumnView_SetViewportMargins(@ptrCast(self), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `SuperSetViewportMargins` instead
    ///
    pub const QBaseSetViewportMargins = SuperSetViewportMargins;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QColumnView_SuperSetViewportMargins(@ptrCast(self), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QColumnView_OnSetViewportMargins(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn ViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QColumnView_ViewportMargins(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperViewportMargins` instead
    ///
    pub const QBaseViewportMargins = SuperViewportMargins;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QColumnView_SuperViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMargins `
    ///
    pub fn OnViewportMargins(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMargins) void {
        qtc.QColumnView_OnViewportMargins(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPainter `
    ///
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QColumnView_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `SuperDrawFrame` instead
    ///
    pub const QBaseDrawFrame = SuperDrawFrame;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` param1: QtC.QPainter `
    ///
    pub fn SuperDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QColumnView_SuperDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, param1: QtC.QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColumnView_OnDrawFrame(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QColumnView_UpdateMicroFocus(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperUpdateMicroFocus` instead
    ///
    pub const QBaseUpdateMicroFocus = SuperUpdateMicroFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QColumnView_SuperUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnUpdateMicroFocus(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Create(self: ?*anyopaque) void {
        qtc.QColumnView_Create(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperCreate` instead
    ///
    pub const QBaseCreate = SuperCreate;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperCreate(self: ?*anyopaque) void {
        qtc.QColumnView_SuperCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnCreate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QColumnView_Destroy(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperDestroy` instead
    ///
    pub const QBaseDestroy = SuperDestroy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperDestroy(self: ?*anyopaque) void {
        qtc.QColumnView_SuperDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QColumnView_OnDestroy(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.QColumnView_FocusNextChild(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperFocusNextChild` instead
    ///
    pub const QBaseFocusNextChild = SuperFocusNextChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperFocusNextChild(self: ?*anyopaque) bool {
        return qtc.QColumnView_SuperFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QColumnView_OnFocusNextChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QColumnView_FocusPreviousChild(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperFocusPreviousChild` instead
    ///
    pub const QBaseFocusPreviousChild = SuperFocusPreviousChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QColumnView_SuperFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QColumnView_OnFocusPreviousChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QColumnView_Sender(@ptrCast(self));
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
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QColumnView_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QColumnView_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QColumnView_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QColumnView `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QColumnView_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QColumnView_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QColumnView_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QColumnView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QColumnView_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QColumnView_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QColumnView_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QColumnView `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QColumnView_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QColumnView_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QColumnView_GetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `SuperGetDecodedMetricF` instead
    ///
    pub const QBaseGetDecodedMetricF = SuperGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QColumnView_SuperGetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView`
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QColumnView_OnGetDecodedMetricF(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QColumnView `
    ///
    /// ` callback: *const fn (self: QtC.QColumnView, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolumnview.html#dtor.QColumnView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QColumnView `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QColumnView_Delete(@ptrCast(self));
    }
};
