const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemdelegate_enums = @import("../libqabstractitemdelegate.zig").enums;
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kwidgetitemdelegate.html
pub const kwidgetitemdelegate = struct {
    /// New constructs a new KWidgetItemDelegate object.
    ///
    /// ``` itemView: QtC.QAbstractItemView ```
    pub fn New(itemView: ?*anyopaque) QtC.KWidgetItemDelegate {
        return qtc.KWidgetItemDelegate_new(@ptrCast(itemView));
    }

    /// New2 constructs a new KWidgetItemDelegate object.
    ///
    /// ``` itemView: QtC.QAbstractItemView, parent: QtC.QObject ```
    pub fn New2(itemView: ?*anyopaque, parent: ?*anyopaque) QtC.KWidgetItemDelegate {
        return qtc.KWidgetItemDelegate_new2(@ptrCast(itemView), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KWidgetItemDelegate_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KWidgetItemDelegate, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KWidgetItemDelegate_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KWidgetItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KWidgetItemDelegate_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KWidgetItemDelegate_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KWidgetItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KWidgetItemDelegate_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KWidgetItemDelegate_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwidgetitemdelegate.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#itemView)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn ItemView(self: ?*anyopaque) QtC.QAbstractItemView {
        return qtc.KWidgetItemDelegate_ItemView(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#focusedIndex)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn FocusedIndex(self: ?*anyopaque) QtC.QPersistentModelIndex {
        return qtc.KWidgetItemDelegate_FocusedIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#resetModel)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn ResetModel(self: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_ResetModel(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#createItemWidgets)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, index: QtC.QModelIndex, allocator: std.mem.Allocator ```
    pub fn CreateItemWidgets(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_CreateItemWidgets(@ptrCast(self), @ptrCast(index));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("kwidgetitemdelegate.CreateItemWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#createItemWidgets)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, index: QtC.QModelIndex) callconv(.c) [*:null]QtC.QWidget ```
    pub fn OnCreateItemWidgets(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:null]QtC.QWidget) void {
        qtc.KWidgetItemDelegate_OnCreateItemWidgets(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#createItemWidgets)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KWidgetItemDelegate, index: QtC.QModelIndex, allocator: std.mem.Allocator ```
    pub fn QBaseCreateItemWidgets(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_QBaseCreateItemWidgets(@ptrCast(self), @ptrCast(index));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("kwidgetitemdelegate.CreateItemWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#updateItemWidgets)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, widgets: []QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QPersistentModelIndex ```
    pub fn UpdateItemWidgets(self: ?*anyopaque, widgets: []?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        qtc.KWidgetItemDelegate_UpdateItemWidgets(@ptrCast(self), widgets_list, @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#updateItemWidgets)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, widgets: [*]QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnUpdateItemWidgets(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnUpdateItemWidgets(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#updateItemWidgets)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KWidgetItemDelegate, widgets: []QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QPersistentModelIndex ```
    pub fn QBaseUpdateItemWidgets(self: ?*anyopaque, widgets: []?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        qtc.KWidgetItemDelegate_QBaseUpdateItemWidgets(@ptrCast(self), widgets_list, @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#setBlockedEventTypes)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, widget: QtC.QWidget, types: []qcoreevent_enums.Type ```
    pub fn SetBlockedEventTypes(self: ?*anyopaque, widget: ?*anyopaque, types: []i32) void {
        const types_list = qtc.libqt_list{
            .len = types.len,
            .data = types.ptr,
        };
        qtc.KWidgetItemDelegate_SetBlockedEventTypes(@ptrCast(self), @ptrCast(widget), types_list);
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#setBlockedEventTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, widget: QtC.QWidget, types: []qcoreevent_enums.Type) callconv(.c) void ```
    pub fn OnSetBlockedEventTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:-1]i32) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnSetBlockedEventTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#setBlockedEventTypes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KWidgetItemDelegate, widget: QtC.QWidget, types: []qcoreevent_enums.Type ```
    pub fn QBaseSetBlockedEventTypes(self: ?*anyopaque, widget: ?*anyopaque, types: []i32) void {
        const types_list = qtc.libqt_list{
            .len = types.len,
            .data = types.ptr,
        };
        qtc.KWidgetItemDelegate_QBaseSetBlockedEventTypes(@ptrCast(self), @ptrCast(widget), types_list);
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#blockedEventTypes)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, widget: QtC.QWidget, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` []qcoreevent_enums.Type ```
    pub fn BlockedEventTypes(self: ?*anyopaque, widget: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_BlockedEventTypes(@ptrCast(self), @ptrCast(widget));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kwidgetitemdelegate.BlockedEventTypes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#blockedEventTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, widget: QtC.QWidget) callconv(.c) [*:-1]i32 ```
    pub fn OnBlockedEventTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:-1]i32) void {
        qtc.KWidgetItemDelegate_OnBlockedEventTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#blockedEventTypes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KWidgetItemDelegate, widget: QtC.QWidget, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` []qcoreevent_enums.Type ```
    pub fn QBaseBlockedEventTypes(self: ?*anyopaque, widget: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_QBaseBlockedEventTypes(@ptrCast(self), @ptrCast(widget));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kwidgetitemdelegate.BlockedEventTypes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KWidgetItemDelegate_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwidgetitemdelegate.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KWidgetItemDelegate_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwidgetitemdelegate.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, editor: QtC.QWidget ```
    pub fn CommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemDelegate_CommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, editor: QtC.QWidget) callconv(.c) void ```
    pub fn OnCommitData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CommitData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, editor: QtC.QWidget ```
    pub fn CloseEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemDelegate_CloseEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, editor: QtC.QWidget) callconv(.c) void ```
    pub fn OnCloseEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, param1: QtC.QModelIndex ```
    pub fn SizeHintChanged(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemDelegate_SizeHintChanged(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, param1: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnSizeHintChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_SizeHintChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn CloseEditor2(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QAbstractItemDelegate_CloseEditor2(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void ```
    pub fn OnCloseEditor2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwidgetitemdelegate.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, name: []const u8 ```
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
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kwidgetitemdelegate.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, obj: QtC.QObject ```
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
    /// ``` self: QtC.KWidgetItemDelegate, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KWidgetItemDelegate, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn SizeHint(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.KWidgetItemDelegate_SizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseSizeHint(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.KWidgetItemDelegate_QBaseSizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.KWidgetItemDelegate_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, parent: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn CreateEditor(self: ?*anyopaque, parent: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.KWidgetItemDelegate_CreateEditor(@ptrCast(self), @ptrCast(parent), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, parent: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseCreateEditor(self: ?*anyopaque, parent: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.KWidgetItemDelegate_QBaseCreateEditor(@ptrCast(self), @ptrCast(parent), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, parent: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) QtC.QWidget ```
    pub fn OnCreateEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.KWidgetItemDelegate_OnCreateEditor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex ```
    pub fn DestroyEditor(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_DestroyEditor(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex ```
    pub fn QBaseDestroyEditor(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_QBaseDestroyEditor(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnDestroyEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnDestroyEditor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex ```
    pub fn SetEditorData(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_SetEditorData(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex ```
    pub fn QBaseSetEditorData(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_QBaseSetEditorData(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnSetEditorData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnSetEditorData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, model: QtC.QAbstractItemModel, index: QtC.QModelIndex ```
    pub fn SetModelData(self: ?*anyopaque, editor: ?*anyopaque, model: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_SetModelData(@ptrCast(self), @ptrCast(editor), @ptrCast(model), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, model: QtC.QAbstractItemModel, index: QtC.QModelIndex ```
    pub fn QBaseSetModelData(self: ?*anyopaque, editor: ?*anyopaque, model: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_QBaseSetModelData(@ptrCast(self), @ptrCast(editor), @ptrCast(model), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, model: QtC.QAbstractItemModel, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnSetModelData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnSetModelData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn UpdateEditorGeometry(self: ?*anyopaque, editor: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_UpdateEditorGeometry(@ptrCast(self), @ptrCast(editor), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseUpdateEditorGeometry(self: ?*anyopaque, editor: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_QBaseUpdateEditorGeometry(@ptrCast(self), @ptrCast(editor), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, editor: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnUpdateEditorGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnUpdateEditorGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, event: QtC.QEvent, model: QtC.QAbstractItemModel, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn EditorEvent(self: ?*anyopaque, event: ?*anyopaque, model: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KWidgetItemDelegate_EditorEvent(@ptrCast(self), @ptrCast(event), @ptrCast(model), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, event: QtC.QEvent, model: QtC.QAbstractItemModel, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseEditorEvent(self: ?*anyopaque, event: ?*anyopaque, model: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KWidgetItemDelegate_QBaseEditorEvent(@ptrCast(self), @ptrCast(event), @ptrCast(model), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, event: QtC.QEvent, model: QtC.QAbstractItemModel, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnEditorEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnEditorEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, event: QtC.QHelpEvent, view: QtC.QAbstractItemView, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn HelpEvent(self: ?*anyopaque, event: ?*anyopaque, view: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KWidgetItemDelegate_HelpEvent(@ptrCast(self), @ptrCast(event), @ptrCast(view), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, event: QtC.QHelpEvent, view: QtC.QAbstractItemView, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseHelpEvent(self: ?*anyopaque, event: ?*anyopaque, view: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KWidgetItemDelegate_QBaseHelpEvent(@ptrCast(self), @ptrCast(event), @ptrCast(view), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, event: QtC.QHelpEvent, view: QtC.QAbstractItemView, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnHelpEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnHelpEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, allocator: std.mem.Allocator ```
    pub fn PaintingRoles(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_PaintingRoles(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kwidgetitemdelegate.PaintingRoles: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, allocator: std.mem.Allocator ```
    pub fn QBasePaintingRoles(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KWidgetItemDelegate_QBasePaintingRoles(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kwidgetitemdelegate.PaintingRoles: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn () callconv(.c) [*:-1]i32 ```
    pub fn OnPaintingRoles(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:-1]i32) void {
        qtc.KWidgetItemDelegate_OnPaintingRoles(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KWidgetItemDelegate_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KWidgetItemDelegate_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KWidgetItemDelegate_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KWidgetItemDelegate_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KWidgetItemDelegate_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KWidgetItemDelegate_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KWidgetItemDelegate_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KWidgetItemDelegate_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KWidgetItemDelegate_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KWidgetItemDelegate_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KWidgetItemDelegate_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KWidgetItemDelegate_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KWidgetItemDelegate_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KWidgetItemDelegate_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KWidgetItemDelegate_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KWidgetItemDelegate_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KWidgetItemDelegate_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KWidgetItemDelegate, callback: *const fn (self: QtC.KWidgetItemDelegate, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kwidgetitemdelegate.html#dtor.KWidgetItemDelegate)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KWidgetItemDelegate ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KWidgetItemDelegate_Delete(@ptrCast(self));
    }
};
