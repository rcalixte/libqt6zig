const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QAbstractItemView = @import("libqt6").QAbstractItemView;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QHelpEvent = @import("libqt6").QHelpEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QModelIndex = @import("libqt6").QModelIndex;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPersistentModelIndex = @import("libqt6").QPersistentModelIndex;
const QSize = @import("libqt6").QSize;
const QStyleOptionViewItem = @import("libqt6").QStyleOptionViewItem;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qabstractitemdelegate_enums = @import("../libqabstractitemdelegate.zig").enums;
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html)
pub const KWidgetItemDelegate = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KWidgetItemDelegate,

    pub const _is_KWidgetItemDelegate = {};
    pub const _is_QAbstractItemDelegate = {};
    pub const _is_QObject = {};

    /// New constructs a new KWidgetItemDelegate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` itemView: QAbstractItemView `
    ///
    pub fn New(itemView: anytype) KWidgetItemDelegate {
        comptime _ = @TypeOf(itemView)._is_QAbstractItemView;
        return .{ .ptr = qtc.KWidgetItemDelegate_new(@ptrCast(itemView.ptr)) };
    }

    /// New2 constructs a new KWidgetItemDelegate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` itemView: QAbstractItemView `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(itemView: anytype, parent: anytype) KWidgetItemDelegate {
        comptime _ = @TypeOf(itemView)._is_QAbstractItemView;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KWidgetItemDelegate_new2(@ptrCast(itemView.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn MetaObject(self: KWidgetItemDelegate) QMetaObject {
        return .{ .ptr = qtc.KWidgetItemDelegate_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KWidgetItemDelegate, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KWidgetItemDelegate_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn SuperMetaObject(self: KWidgetItemDelegate) QMetaObject {
        return .{ .ptr = qtc.KWidgetItemDelegate_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KWidgetItemDelegate, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KWidgetItemDelegate_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KWidgetItemDelegate_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KWidgetItemDelegate, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KWidgetItemDelegate_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KWidgetItemDelegate, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KWidgetItemDelegate_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KWidgetItemDelegate_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KWidgetItemDelegate, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KWidgetItemDelegate_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwidgetitemdelegate.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#itemView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn ItemView(self: KWidgetItemDelegate) QAbstractItemView {
        return .{ .ptr = qtc.KWidgetItemDelegate_ItemView(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#focusedIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn FocusedIndex(self: KWidgetItemDelegate) QPersistentModelIndex {
        return .{ .ptr = qtc.KWidgetItemDelegate_FocusedIndex(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#resetModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn ResetModel(self: KWidgetItemDelegate) void {
        qtc.KWidgetItemDelegate_ResetModel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#createItemWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn CreateItemWidgets(self: KWidgetItemDelegate, allocator: std.mem.Allocator, index: anytype) []QWidget {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_CreateItemWidgets(@ptrCast(self.ptr), @ptrCast(index.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("kwidgetitemdelegate.CreateItemWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#createItemWidgets)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, index: QModelIndex) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QWidget `
    ///
    pub fn OnCreateItemWidgets(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QModelIndex) callconv(.c) qtc.libqt_list) void {
        qtc.KWidgetItemDelegate_OnCreateItemWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateItemWidgets` instead
    ///
    pub const QBaseCreateItemWidgets = SuperCreateItemWidgets;

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#createItemWidgets)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperCreateItemWidgets(self: KWidgetItemDelegate, allocator: std.mem.Allocator, index: anytype) []QWidget {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_SuperCreateItemWidgets(@ptrCast(self.ptr), @ptrCast(index.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("kwidgetitemdelegate.CreateItemWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#updateItemWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` widgets: []QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QPersistentModelIndex `
    ///
    pub fn UpdateItemWidgets(self: KWidgetItemDelegate, widgets: []QWidget, option: anytype, index: anytype) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QPersistentModelIndex;
        qtc.KWidgetItemDelegate_UpdateItemWidgets(@ptrCast(self.ptr), widgets_list, @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#updateItemWidgets)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, widgets: qtc.libqt_list ([]QWidget), option: QStyleOptionViewItem, index: QPersistentModelIndex) callconv(.c) void `
    ///
    pub fn OnUpdateItemWidgets(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, qtc.libqt_list, QStyleOptionViewItem, QPersistentModelIndex) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnUpdateItemWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateItemWidgets` instead
    ///
    pub const QBaseUpdateItemWidgets = SuperUpdateItemWidgets;

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#updateItemWidgets)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` widgets: []QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QPersistentModelIndex `
    ///
    pub fn SuperUpdateItemWidgets(self: KWidgetItemDelegate, widgets: []QWidget, option: anytype, index: anytype) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QPersistentModelIndex;
        qtc.KWidgetItemDelegate_SuperUpdateItemWidgets(@ptrCast(self.ptr), widgets_list, @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#setBlockedEventTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` widget: QWidget `
    ///
    /// ` types: []qcoreevent_enums.Type `
    ///
    pub fn SetBlockedEventTypes(self: KWidgetItemDelegate, widget: anytype, types: []i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const types_list = qtc.libqt_list{
            .len = types.len,
            .data = types.ptr,
        };
        qtc.KWidgetItemDelegate_SetBlockedEventTypes(@ptrCast(self.ptr), @ptrCast(widget.ptr), types_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#setBlockedEventTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, widget: QWidget, types: qtc.libqt_list ([]qcoreevent_enums.Type)) callconv(.c) void `
    ///
    pub fn OnSetBlockedEventTypes(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, qtc.libqt_list) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnSetBlockedEventTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetBlockedEventTypes` instead
    ///
    pub const QBaseSetBlockedEventTypes = SuperSetBlockedEventTypes;

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#setBlockedEventTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` widget: QWidget `
    ///
    /// ` types: []qcoreevent_enums.Type `
    ///
    pub fn SuperSetBlockedEventTypes(self: KWidgetItemDelegate, widget: anytype, types: []i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const types_list = qtc.libqt_list{
            .len = types.len,
            .data = types.ptr,
        };
        qtc.KWidgetItemDelegate_SuperSetBlockedEventTypes(@ptrCast(self.ptr), @ptrCast(widget.ptr), types_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#blockedEventTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` widget: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` []qcoreevent_enums.Type `
    ///
    pub fn BlockedEventTypes(self: KWidgetItemDelegate, allocator: std.mem.Allocator, widget: anytype) []i32 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_BlockedEventTypes(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kwidgetitemdelegate.BlockedEventTypes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#blockedEventTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, widget: QWidget) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []i32 `
    ///
    pub fn OnBlockedEventTypes(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget) callconv(.c) qtc.libqt_list) void {
        qtc.KWidgetItemDelegate_OnBlockedEventTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBlockedEventTypes` instead
    ///
    pub const QBaseBlockedEventTypes = SuperBlockedEventTypes;

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#blockedEventTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` widget: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` []qcoreevent_enums.Type `
    ///
    pub fn SuperBlockedEventTypes(self: KWidgetItemDelegate, allocator: std.mem.Allocator, widget: anytype) []i32 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_SuperBlockedEventTypes(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kwidgetitemdelegate.BlockedEventTypes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwidgetitemdelegate.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwidgetitemdelegate.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    pub fn CommitData(self: KWidgetItemDelegate, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, editor: QWidget) callconv(.c) void `
    ///
    pub fn OnCommitData(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    pub fn CloseEditor(self: KWidgetItemDelegate, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, editor: QWidget) callconv(.c) void `
    ///
    pub fn OnCloseEditor(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` param1: QModelIndex `
    ///
    pub fn SizeHintChanged(self: KWidgetItemDelegate, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QModelIndex;
        qtc.QAbstractItemDelegate_SizeHintChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, param1: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSizeHintChanged(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_SizeHintChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn CloseEditor2(self: KWidgetItemDelegate, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CloseEditor2(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, editor: QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
    ///
    pub fn OnCloseEditor2(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, i32) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KWidgetItemDelegate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwidgetitemdelegate.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KWidgetItemDelegate, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn IsWidgetType(self: KWidgetItemDelegate) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn IsWindowType(self: KWidgetItemDelegate) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn IsQuickItemType(self: KWidgetItemDelegate) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn SignalsBlocked(self: KWidgetItemDelegate) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KWidgetItemDelegate, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn Thread(self: KWidgetItemDelegate) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KWidgetItemDelegate, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KWidgetItemDelegate, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KWidgetItemDelegate, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KWidgetItemDelegate, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KWidgetItemDelegate, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KWidgetItemDelegate, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kwidgetitemdelegate.Children: Memory allocation failed");
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KWidgetItemDelegate, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KWidgetItemDelegate, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KWidgetItemDelegate, obj: anytype) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KWidgetItemDelegate, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn Disconnect3(self: KWidgetItemDelegate) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KWidgetItemDelegate, receiver: anytype) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn DumpObjectTree(self: KWidgetItemDelegate) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn DumpObjectInfo(self: KWidgetItemDelegate) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KWidgetItemDelegate, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KWidgetItemDelegate, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KWidgetItemDelegate, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kwidgetitemdelegate.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kwidgetitemdelegate.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn BindingStorage(self: KWidgetItemDelegate) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn BindingStorage2(self: KWidgetItemDelegate) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn Destroyed(self: KWidgetItemDelegate) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn Parent(self: KWidgetItemDelegate) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KWidgetItemDelegate, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn DeleteLater(self: KWidgetItemDelegate) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KWidgetItemDelegate, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KWidgetItemDelegate, time: i64, timerType: i32) i32 {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KWidgetItemDelegate, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KWidgetItemDelegate, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KWidgetItemDelegate, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KWidgetItemDelegate, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KWidgetItemDelegate, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KWidgetItemDelegate, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Paint(self: KWidgetItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaint` instead
    ///
    pub const QBasePaint = SuperPaint;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperPaint(self: KWidgetItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, painter: QPainter, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnPaint(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QPainter, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SizeHint(self: KWidgetItemDelegate, option: anytype, index: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KWidgetItemDelegate_SizeHint(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSizeHint(self: KWidgetItemDelegate, option: anytype, index: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KWidgetItemDelegate_SuperSizeHint(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QStyleOptionViewItem, QModelIndex) callconv(.c) QSize) void {
        qtc.KWidgetItemDelegate_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` parent: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn CreateEditor(self: KWidgetItemDelegate, parent: anytype, option: anytype, index: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KWidgetItemDelegate_CreateEditor(@ptrCast(self.ptr), @ptrCast(parent.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCreateEditor` instead
    ///
    pub const QBaseCreateEditor = SuperCreateEditor;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` parent: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperCreateEditor(self: KWidgetItemDelegate, parent: anytype, option: anytype, index: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KWidgetItemDelegate_SuperCreateEditor(@ptrCast(self.ptr), @ptrCast(parent.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, parent: QWidget, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) QWidget `
    ///
    pub fn OnCreateEditor(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, QStyleOptionViewItem, QModelIndex) callconv(.c) QWidget) void {
        qtc.KWidgetItemDelegate_OnCreateEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn DestroyEditor(self: KWidgetItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_DestroyEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperDestroyEditor` instead
    ///
    pub const QBaseDestroyEditor = SuperDestroyEditor;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperDestroyEditor(self: KWidgetItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SuperDestroyEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, editor: QWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDestroyEditor(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, QModelIndex) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnDestroyEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetEditorData(self: KWidgetItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SetEditorData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetEditorData` instead
    ///
    pub const QBaseSetEditorData = SuperSetEditorData;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSetEditorData(self: KWidgetItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SuperSetEditorData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, editor: QWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetEditorData(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, QModelIndex) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnSetEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetModelData(self: KWidgetItemDelegate, editor: anytype, model: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SetModelData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(model.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetModelData` instead
    ///
    pub const QBaseSetModelData = SuperSetModelData;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSetModelData(self: KWidgetItemDelegate, editor: anytype, model: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SuperSetModelData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(model.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, editor: QWidget, model: QAbstractItemModel, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetModelData(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, QAbstractItemModel, QModelIndex) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnSetModelData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn UpdateEditorGeometry(self: KWidgetItemDelegate, editor: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_UpdateEditorGeometry(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateEditorGeometry` instead
    ///
    pub const QBaseUpdateEditorGeometry = SuperUpdateEditorGeometry;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperUpdateEditorGeometry(self: KWidgetItemDelegate, editor: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SuperUpdateEditorGeometry(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, editor: QWidget, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnUpdateEditorGeometry(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnUpdateEditorGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn EditorEvent(self: KWidgetItemDelegate, event: anytype, model: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KWidgetItemDelegate_EditorEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(model.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperEditorEvent` instead
    ///
    pub const QBaseEditorEvent = SuperEditorEvent;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperEditorEvent(self: KWidgetItemDelegate, event: anytype, model: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KWidgetItemDelegate_SuperEditorEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(model.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, event: QEvent, model: QAbstractItemModel, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnEditorEvent(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QEvent, QAbstractItemModel, QStyleOptionViewItem, QModelIndex) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnEditorEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` event: QHelpEvent `
    ///
    /// ` view: QAbstractItemView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn HelpEvent(self: KWidgetItemDelegate, event: anytype, view: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(event)._is_QHelpEvent;
        comptime _ = @TypeOf(view)._is_QAbstractItemView;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KWidgetItemDelegate_HelpEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(view.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperHelpEvent` instead
    ///
    pub const QBaseHelpEvent = SuperHelpEvent;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` event: QHelpEvent `
    ///
    /// ` view: QAbstractItemView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperHelpEvent(self: KWidgetItemDelegate, event: anytype, view: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(event)._is_QHelpEvent;
        comptime _ = @TypeOf(view)._is_QAbstractItemView;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KWidgetItemDelegate_SuperHelpEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(view.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, event: QHelpEvent, view: QAbstractItemView, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnHelpEvent(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QHelpEvent, QAbstractItemView, QStyleOptionViewItem, QModelIndex) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnHelpEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PaintingRoles(self: KWidgetItemDelegate, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_PaintingRoles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kwidgetitemdelegate.PaintingRoles: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperPaintingRoles` instead
    ///
    pub const QBasePaintingRoles = SuperPaintingRoles;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPaintingRoles(self: KWidgetItemDelegate, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_SuperPaintingRoles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kwidgetitemdelegate.PaintingRoles: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []i32 `
    ///
    pub fn OnPaintingRoles(self: KWidgetItemDelegate, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KWidgetItemDelegate_OnPaintingRoles(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KWidgetItemDelegate, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KWidgetItemDelegate_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KWidgetItemDelegate, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KWidgetItemDelegate_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QEvent) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KWidgetItemDelegate, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KWidgetItemDelegate_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KWidgetItemDelegate, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KWidgetItemDelegate_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QObject, QEvent) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KWidgetItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KWidgetItemDelegate_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KWidgetItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KWidgetItemDelegate_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QTimerEvent) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KWidgetItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KWidgetItemDelegate_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KWidgetItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KWidgetItemDelegate_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QChildEvent) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KWidgetItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KWidgetItemDelegate_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KWidgetItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KWidgetItemDelegate_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QEvent) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KWidgetItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KWidgetItemDelegate_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KWidgetItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KWidgetItemDelegate_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QMetaMethod) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KWidgetItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KWidgetItemDelegate_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KWidgetItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KWidgetItemDelegate_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QMetaMethod) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn Sender(self: KWidgetItemDelegate) QObject {
        return .{ .ptr = qtc.KWidgetItemDelegate_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn SuperSender(self: KWidgetItemDelegate) QObject {
        return .{ .ptr = qtc.KWidgetItemDelegate_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KWidgetItemDelegate, callback: *const fn () callconv(.c) QObject) void {
        qtc.KWidgetItemDelegate_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn SenderSignalIndex(self: KWidgetItemDelegate) i32 {
        return qtc.KWidgetItemDelegate_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn SuperSenderSignalIndex(self: KWidgetItemDelegate) i32 {
        return qtc.KWidgetItemDelegate_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KWidgetItemDelegate, callback: *const fn () callconv(.c) i32) void {
        qtc.KWidgetItemDelegate_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KWidgetItemDelegate, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KWidgetItemDelegate_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KWidgetItemDelegate, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KWidgetItemDelegate_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, [*:0]const u8) callconv(.c) i32) void {
        qtc.KWidgetItemDelegate_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KWidgetItemDelegate, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KWidgetItemDelegate_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KWidgetItemDelegate, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KWidgetItemDelegate_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QMetaMethod) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#dtor.KWidgetItemDelegate)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn Delete(self: KWidgetItemDelegate) void {
        qtc.KWidgetItemDelegate_Delete(@ptrCast(self.ptr));
    }
};
