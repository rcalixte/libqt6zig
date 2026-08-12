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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KWidgetItemDelegate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemView: QAbstractItemView `
    ///
    pub fn new(_itemView: anytype) KWidgetItemDelegate {
        comptime _ = @TypeOf(_itemView)._is_QAbstractItemView;
        return .{ .ptr = qtc.KWidgetItemDelegate_new(@ptrCast(_itemView.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KWidgetItemDelegate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemView: QAbstractItemView `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_itemView: anytype, _parent: anytype) KWidgetItemDelegate {
        comptime _ = @TypeOf(_itemView)._is_QAbstractItemView;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KWidgetItemDelegate_new2(@ptrCast(_itemView.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn metaObject(self: KWidgetItemDelegate) QMetaObject {
        return .{ .ptr = qtc.KWidgetItemDelegate_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KWidgetItemDelegate, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KWidgetItemDelegate_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn superMetaObject(self: KWidgetItemDelegate) QMetaObject {
        return .{ .ptr = qtc.KWidgetItemDelegate_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KWidgetItemDelegate, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KWidgetItemDelegate_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KWidgetItemDelegate_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KWidgetItemDelegate, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KWidgetItemDelegate_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KWidgetItemDelegate, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KWidgetItemDelegate_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KWidgetItemDelegate_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KWidgetItemDelegate, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KWidgetItemDelegate_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWidgetItemDelegate.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `itemView` instead
    ///
    pub const ItemView = itemView;

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#itemView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn itemView(self: KWidgetItemDelegate) QAbstractItemView {
        return .{ .ptr = qtc.KWidgetItemDelegate_ItemView(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `focusedIndex` instead
    ///
    pub const FocusedIndex = focusedIndex;

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#focusedIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn focusedIndex(self: KWidgetItemDelegate) QPersistentModelIndex {
        return .{ .ptr = qtc.KWidgetItemDelegate_FocusedIndex(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `resetModel` instead
    ///
    pub const ResetModel = resetModel;

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#resetModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn resetModel(self: KWidgetItemDelegate) void {
        qtc.KWidgetItemDelegate_ResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createItemWidgets` instead
    ///
    pub const CreateItemWidgets = createItemWidgets;

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
    pub fn createItemWidgets(self: KWidgetItemDelegate, allocator: std.mem.Allocator, index: anytype) []QWidget {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_CreateItemWidgets(@ptrCast(self.ptr), @ptrCast(index.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("KWidgetItemDelegate.createItemWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onCreateItemWidgets` instead
    ///
    pub const OnCreateItemWidgets = onCreateItemWidgets;

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
    pub fn onCreateItemWidgets(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QModelIndex) callconv(.c) qtc.libqt_list) void {
        qtc.KWidgetItemDelegate_OnCreateItemWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateItemWidgets` instead
    ///
    pub const SuperCreateItemWidgets = superCreateItemWidgets;

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
    pub fn superCreateItemWidgets(self: KWidgetItemDelegate, allocator: std.mem.Allocator, index: anytype) []QWidget {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_SuperCreateItemWidgets(@ptrCast(self.ptr), @ptrCast(index.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("KWidgetItemDelegate.createItemWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `updateItemWidgets` instead
    ///
    pub const UpdateItemWidgets = updateItemWidgets;

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
    pub fn updateItemWidgets(self: KWidgetItemDelegate, widgets: []QWidget, option: anytype, index: anytype) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QPersistentModelIndex;
        qtc.KWidgetItemDelegate_UpdateItemWidgets(@ptrCast(self.ptr), widgets_list, @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateItemWidgets` instead
    ///
    pub const OnUpdateItemWidgets = onUpdateItemWidgets;

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
    pub fn onUpdateItemWidgets(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, qtc.libqt_list, QStyleOptionViewItem, QPersistentModelIndex) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnUpdateItemWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateItemWidgets` instead
    ///
    pub const SuperUpdateItemWidgets = superUpdateItemWidgets;

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
    pub fn superUpdateItemWidgets(self: KWidgetItemDelegate, widgets: []QWidget, option: anytype, index: anytype) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QPersistentModelIndex;
        qtc.KWidgetItemDelegate_SuperUpdateItemWidgets(@ptrCast(self.ptr), widgets_list, @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `setBlockedEventTypes` instead
    ///
    pub const SetBlockedEventTypes = setBlockedEventTypes;

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
    pub fn setBlockedEventTypes(self: KWidgetItemDelegate, widget: anytype, types: []i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const types_list = qtc.libqt_list{
            .len = types.len,
            .data = types.ptr,
        };
        qtc.KWidgetItemDelegate_SetBlockedEventTypes(@ptrCast(self.ptr), @ptrCast(widget.ptr), types_list);
    }

    /// ### DEPRECATED: Use `onSetBlockedEventTypes` instead
    ///
    pub const OnSetBlockedEventTypes = onSetBlockedEventTypes;

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
    pub fn onSetBlockedEventTypes(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, qtc.libqt_list) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnSetBlockedEventTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetBlockedEventTypes` instead
    ///
    pub const SuperSetBlockedEventTypes = superSetBlockedEventTypes;

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
    pub fn superSetBlockedEventTypes(self: KWidgetItemDelegate, widget: anytype, types: []i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const types_list = qtc.libqt_list{
            .len = types.len,
            .data = types.ptr,
        };
        qtc.KWidgetItemDelegate_SuperSetBlockedEventTypes(@ptrCast(self.ptr), @ptrCast(widget.ptr), types_list);
    }

    /// ### DEPRECATED: Use `blockedEventTypes` instead
    ///
    pub const BlockedEventTypes = blockedEventTypes;

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
    pub fn blockedEventTypes(self: KWidgetItemDelegate, allocator: std.mem.Allocator, widget: anytype) []i32 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_BlockedEventTypes(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("KWidgetItemDelegate.blockedEventTypes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onBlockedEventTypes` instead
    ///
    pub const OnBlockedEventTypes = onBlockedEventTypes;

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
    pub fn onBlockedEventTypes(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget) callconv(.c) qtc.libqt_list) void {
        qtc.KWidgetItemDelegate_OnBlockedEventTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBlockedEventTypes` instead
    ///
    pub const SuperBlockedEventTypes = superBlockedEventTypes;

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
    pub fn superBlockedEventTypes(self: KWidgetItemDelegate, allocator: std.mem.Allocator, widget: anytype) []i32 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_SuperBlockedEventTypes(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("KWidgetItemDelegate.blockedEventTypes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWidgetItemDelegate.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWidgetItemDelegate.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `commitData` instead
    ///
    pub const CommitData = commitData;

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
    pub fn commitData(self: KWidgetItemDelegate, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `onCommitData` instead
    ///
    pub const OnCommitData = onCommitData;

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
    pub fn onCommitData(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEditor` instead
    ///
    pub const CloseEditor = closeEditor;

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
    pub fn closeEditor(self: KWidgetItemDelegate, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEditor` instead
    ///
    pub const OnCloseEditor = onCloseEditor;

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
    pub fn onCloseEditor(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHintChanged` instead
    ///
    pub const SizeHintChanged = sizeHintChanged;

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
    pub fn sizeHintChanged(self: KWidgetItemDelegate, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QModelIndex;
        qtc.QAbstractItemDelegate_SizeHintChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onSizeHintChanged` instead
    ///
    pub const OnSizeHintChanged = onSizeHintChanged;

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
    pub fn onSizeHintChanged(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_SizeHintChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEditor2` instead
    ///
    pub const CloseEditor2 = closeEditor2;

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
    pub fn closeEditor2(self: KWidgetItemDelegate, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CloseEditor2(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onCloseEditor2` instead
    ///
    pub const OnCloseEditor2 = onCloseEditor2;

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
    pub fn onCloseEditor2(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, i32) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KWidgetItemDelegate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWidgetItemDelegate.objectName: Memory allocation failed");
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KWidgetItemDelegate, name: []const u8) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn isWidgetType(self: KWidgetItemDelegate) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn isWindowType(self: KWidgetItemDelegate) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn isQuickItemType(self: KWidgetItemDelegate) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn signalsBlocked(self: KWidgetItemDelegate) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KWidgetItemDelegate, b: bool) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn thread(self: KWidgetItemDelegate) QThread {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KWidgetItemDelegate, _thread: anytype) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KWidgetItemDelegate, interval: i32) i32 {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KWidgetItemDelegate, time: i64) i32 {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KWidgetItemDelegate, id: i32) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KWidgetItemDelegate, id: i32) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KWidgetItemDelegate, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KWidgetItemDelegate.children: Memory allocation failed");
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KWidgetItemDelegate, _parent: anytype) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KWidgetItemDelegate, filterObj: anytype) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KWidgetItemDelegate, obj: anytype) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KWidgetItemDelegate, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn disconnect3(self: KWidgetItemDelegate) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KWidgetItemDelegate, receiver: anytype) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn dumpObjectTree(self: KWidgetItemDelegate) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn dumpObjectInfo(self: KWidgetItemDelegate) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KWidgetItemDelegate, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KWidgetItemDelegate, name: [:0]const u8) QVariant {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KWidgetItemDelegate, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KWidgetItemDelegate.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KWidgetItemDelegate.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn bindingStorage(self: KWidgetItemDelegate) QBindingStorage {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn bindingStorage2(self: KWidgetItemDelegate) QBindingStorage {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn destroyed(self: KWidgetItemDelegate) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate) callconv(.c) void) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn parent(self: KWidgetItemDelegate) QObject {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KWidgetItemDelegate, classname: [:0]const u8) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn deleteLater(self: KWidgetItemDelegate) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KWidgetItemDelegate, interval: i32, timerType: i32) i32 {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KWidgetItemDelegate, time: i64, timerType: i32) i32 {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KWidgetItemDelegate, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KWidgetItemDelegate, signal: [:0]const u8) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KWidgetItemDelegate, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KWidgetItemDelegate, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KWidgetItemDelegate, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KWidgetItemDelegate, param1: anytype) void {
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

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
    pub fn paint(self: KWidgetItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superPaint` instead
    ///
    pub const SuperPaint = superPaint;

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
    pub fn superPaint(self: KWidgetItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onPaint` instead
    ///
    pub const OnPaint = onPaint;

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
    pub fn onPaint(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QPainter, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

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
    pub fn sizeHint(self: KWidgetItemDelegate, option: anytype, index: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KWidgetItemDelegate_SizeHint(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

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
    pub fn superSizeHint(self: KWidgetItemDelegate, option: anytype, index: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KWidgetItemDelegate_SuperSizeHint(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QStyleOptionViewItem, QModelIndex) callconv(.c) QSize) void {
        qtc.KWidgetItemDelegate_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createEditor` instead
    ///
    pub const CreateEditor = createEditor;

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
    /// ` _parent: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn createEditor(self: KWidgetItemDelegate, _parent: anytype, option: anytype, index: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KWidgetItemDelegate_CreateEditor(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `superCreateEditor` instead
    ///
    pub const SuperCreateEditor = superCreateEditor;

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
    /// ` _parent: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superCreateEditor(self: KWidgetItemDelegate, _parent: anytype, option: anytype, index: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KWidgetItemDelegate_SuperCreateEditor(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateEditor` instead
    ///
    pub const OnCreateEditor = onCreateEditor;

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
    pub fn onCreateEditor(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, QStyleOptionViewItem, QModelIndex) callconv(.c) QWidget) void {
        qtc.KWidgetItemDelegate_OnCreateEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `destroyEditor` instead
    ///
    pub const DestroyEditor = destroyEditor;

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
    pub fn destroyEditor(self: KWidgetItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_DestroyEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superDestroyEditor` instead
    ///
    pub const SuperDestroyEditor = superDestroyEditor;

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
    pub fn superDestroyEditor(self: KWidgetItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SuperDestroyEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyEditor` instead
    ///
    pub const OnDestroyEditor = onDestroyEditor;

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
    pub fn onDestroyEditor(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, QModelIndex) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnDestroyEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setEditorData` instead
    ///
    pub const SetEditorData = setEditorData;

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
    pub fn setEditorData(self: KWidgetItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SetEditorData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superSetEditorData` instead
    ///
    pub const SuperSetEditorData = superSetEditorData;

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
    pub fn superSetEditorData(self: KWidgetItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SuperSetEditorData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onSetEditorData` instead
    ///
    pub const OnSetEditorData = onSetEditorData;

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
    pub fn onSetEditorData(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, QModelIndex) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnSetEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setModelData` instead
    ///
    pub const SetModelData = setModelData;

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
    pub fn setModelData(self: KWidgetItemDelegate, editor: anytype, model: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SetModelData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(model.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superSetModelData` instead
    ///
    pub const SuperSetModelData = superSetModelData;

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
    pub fn superSetModelData(self: KWidgetItemDelegate, editor: anytype, model: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SuperSetModelData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(model.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onSetModelData` instead
    ///
    pub const OnSetModelData = onSetModelData;

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
    pub fn onSetModelData(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, QAbstractItemModel, QModelIndex) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnSetModelData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateEditorGeometry` instead
    ///
    pub const UpdateEditorGeometry = updateEditorGeometry;

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
    pub fn updateEditorGeometry(self: KWidgetItemDelegate, editor: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_UpdateEditorGeometry(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateEditorGeometry` instead
    ///
    pub const SuperUpdateEditorGeometry = superUpdateEditorGeometry;

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
    pub fn superUpdateEditorGeometry(self: KWidgetItemDelegate, editor: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KWidgetItemDelegate_SuperUpdateEditorGeometry(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateEditorGeometry` instead
    ///
    pub const OnUpdateEditorGeometry = onUpdateEditorGeometry;

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
    pub fn onUpdateEditorGeometry(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QWidget, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnUpdateEditorGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `editorEvent` instead
    ///
    pub const EditorEvent = editorEvent;

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
    /// ` _event: QEvent `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn editorEvent(self: KWidgetItemDelegate, _event: anytype, model: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KWidgetItemDelegate_EditorEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(model.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superEditorEvent` instead
    ///
    pub const SuperEditorEvent = superEditorEvent;

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
    /// ` _event: QEvent `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superEditorEvent(self: KWidgetItemDelegate, _event: anytype, model: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KWidgetItemDelegate_SuperEditorEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(model.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onEditorEvent` instead
    ///
    pub const OnEditorEvent = onEditorEvent;

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
    pub fn onEditorEvent(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QEvent, QAbstractItemModel, QStyleOptionViewItem, QModelIndex) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnEditorEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `helpEvent` instead
    ///
    pub const HelpEvent = helpEvent;

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
    /// ` _event: QHelpEvent `
    ///
    /// ` view: QAbstractItemView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn helpEvent(self: KWidgetItemDelegate, _event: anytype, view: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QHelpEvent;
        comptime _ = @TypeOf(view)._is_QAbstractItemView;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KWidgetItemDelegate_HelpEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(view.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superHelpEvent` instead
    ///
    pub const SuperHelpEvent = superHelpEvent;

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
    /// ` _event: QHelpEvent `
    ///
    /// ` view: QAbstractItemView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superHelpEvent(self: KWidgetItemDelegate, _event: anytype, view: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QHelpEvent;
        comptime _ = @TypeOf(view)._is_QAbstractItemView;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KWidgetItemDelegate_SuperHelpEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(view.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onHelpEvent` instead
    ///
    pub const OnHelpEvent = onHelpEvent;

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
    pub fn onHelpEvent(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QHelpEvent, QAbstractItemView, QStyleOptionViewItem, QModelIndex) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnHelpEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintingRoles` instead
    ///
    pub const PaintingRoles = paintingRoles;

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
    pub fn paintingRoles(self: KWidgetItemDelegate, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_PaintingRoles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("KWidgetItemDelegate.paintingRoles: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superPaintingRoles` instead
    ///
    pub const SuperPaintingRoles = superPaintingRoles;

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
    pub fn superPaintingRoles(self: KWidgetItemDelegate, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_SuperPaintingRoles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("KWidgetItemDelegate.paintingRoles: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onPaintingRoles` instead
    ///
    pub const OnPaintingRoles = onPaintingRoles;

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
    pub fn onPaintingRoles(self: KWidgetItemDelegate, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KWidgetItemDelegate_OnPaintingRoles(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KWidgetItemDelegate, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KWidgetItemDelegate_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KWidgetItemDelegate, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KWidgetItemDelegate_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QEvent) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KWidgetItemDelegate, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KWidgetItemDelegate_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KWidgetItemDelegate, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KWidgetItemDelegate_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QObject, QEvent) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KWidgetItemDelegate, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KWidgetItemDelegate_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KWidgetItemDelegate, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KWidgetItemDelegate_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QTimerEvent) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KWidgetItemDelegate, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KWidgetItemDelegate_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KWidgetItemDelegate, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KWidgetItemDelegate_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QChildEvent) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KWidgetItemDelegate, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KWidgetItemDelegate_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KWidgetItemDelegate, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KWidgetItemDelegate_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QEvent) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KWidgetItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KWidgetItemDelegate_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KWidgetItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KWidgetItemDelegate_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QMetaMethod) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KWidgetItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KWidgetItemDelegate_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KWidgetItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KWidgetItemDelegate_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QMetaMethod) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn sender(self: KWidgetItemDelegate) QObject {
        return .{ .ptr = qtc.KWidgetItemDelegate_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn superSender(self: KWidgetItemDelegate) QObject {
        return .{ .ptr = qtc.KWidgetItemDelegate_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KWidgetItemDelegate, callback: *const fn () callconv(.c) QObject) void {
        qtc.KWidgetItemDelegate_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn senderSignalIndex(self: KWidgetItemDelegate) i32 {
        return qtc.KWidgetItemDelegate_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn superSenderSignalIndex(self: KWidgetItemDelegate) i32 {
        return qtc.KWidgetItemDelegate_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KWidgetItemDelegate, callback: *const fn () callconv(.c) i32) void {
        qtc.KWidgetItemDelegate_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KWidgetItemDelegate, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KWidgetItemDelegate_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KWidgetItemDelegate, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KWidgetItemDelegate_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, [*:0]const u8) callconv(.c) i32) void {
        qtc.KWidgetItemDelegate_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KWidgetItemDelegate, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KWidgetItemDelegate_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KWidgetItemDelegate, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KWidgetItemDelegate_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KWidgetItemDelegate`
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, QMetaMethod) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KWidgetItemDelegate `
    ///
    /// ` callback: *const fn (self: KWidgetItemDelegate, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KWidgetItemDelegate, callback: *const fn (KWidgetItemDelegate, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#dtor.KWidgetItemDelegate)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KWidgetItemDelegate `
    ///
    pub fn delete(self: KWidgetItemDelegate) void {
        qtc.KWidgetItemDelegate_Delete(@ptrCast(self.ptr));
    }
};
