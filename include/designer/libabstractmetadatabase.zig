const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html)
pub const QDesignerMetaDataBaseItemInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerMetaDataBaseItemInterface,

    pub const _is_QDesignerMetaDataBaseItemInterface = {};

    /// New constructs a new QDesignerMetaDataBaseItemInterface object.
    ///
    pub fn New() QDesignerMetaDataBaseItemInterface {
        return .{ .ptr = qtc.QDesignerMetaDataBaseItemInterface_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QDesignerMetaDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMetaDataBaseItemInterface_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermetadatabaseiteminterface.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#name)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnName(self: QDesignerMetaDataBaseItemInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMetaDataBaseItemInterface_OnName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperName` instead
    ///
    pub const QBaseName = SuperName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#name)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperName(self: QDesignerMetaDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMetaDataBaseItemInterface_SuperName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermetadatabaseiteminterface.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QDesignerMetaDataBaseItemInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerMetaDataBaseItemInterface_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseItemInterface, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetName(self: QDesignerMetaDataBaseItemInterface, callback: *const fn (QDesignerMetaDataBaseItemInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerMetaDataBaseItemInterface_OnSetName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetName` instead
    ///
    pub const QBaseSetName = SuperSetName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperSetName(self: QDesignerMetaDataBaseItemInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerMetaDataBaseItemInterface_SuperSetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#tabOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TabOrder(self: QDesignerMetaDataBaseItemInterface, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.QDesignerMetaDataBaseItemInterface_TabOrder(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qdesignermetadatabaseiteminterface.TabOrder: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#tabOrder)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QWidget `
    ///
    pub fn OnTabOrder(self: QDesignerMetaDataBaseItemInterface, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QDesignerMetaDataBaseItemInterface_OnTabOrder(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTabOrder` instead
    ///
    pub const QBaseTabOrder = SuperTabOrder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#tabOrder)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperTabOrder(self: QDesignerMetaDataBaseItemInterface, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.QDesignerMetaDataBaseItemInterface_SuperTabOrder(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qdesignermetadatabaseiteminterface.TabOrder: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setTabOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` tabOrder: []QWidget `
    ///
    pub fn SetTabOrder(self: QDesignerMetaDataBaseItemInterface, tabOrder: []QWidget) void {
        const tabOrder_list = qtc.libqt_list{
            .len = tabOrder.len,
            .data = @ptrCast(tabOrder.ptr),
        };
        qtc.QDesignerMetaDataBaseItemInterface_SetTabOrder(@ptrCast(self.ptr), tabOrder_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setTabOrder)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseItemInterface, tabOrder: qtc.libqt_list ([]QWidget)) callconv(.c) void `
    ///
    pub fn OnSetTabOrder(self: QDesignerMetaDataBaseItemInterface, callback: *const fn (QDesignerMetaDataBaseItemInterface, qtc.libqt_list) callconv(.c) void) void {
        qtc.QDesignerMetaDataBaseItemInterface_OnSetTabOrder(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTabOrder` instead
    ///
    pub const QBaseSetTabOrder = SuperSetTabOrder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setTabOrder)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` tabOrder: []QWidget `
    ///
    pub fn SuperSetTabOrder(self: QDesignerMetaDataBaseItemInterface, tabOrder: []QWidget) void {
        const tabOrder_list = qtc.libqt_list{
            .len = tabOrder.len,
            .data = @ptrCast(tabOrder.ptr),
        };
        qtc.QDesignerMetaDataBaseItemInterface_SuperSetTabOrder(@ptrCast(self.ptr), tabOrder_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#enabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    pub fn Enabled(self: QDesignerMetaDataBaseItemInterface) bool {
        return qtc.QDesignerMetaDataBaseItemInterface_Enabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#enabled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnEnabled(self: QDesignerMetaDataBaseItemInterface, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerMetaDataBaseItemInterface_OnEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEnabled` instead
    ///
    pub const QBaseEnabled = SuperEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#enabled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    pub fn SuperEnabled(self: QDesignerMetaDataBaseItemInterface) bool {
        return qtc.QDesignerMetaDataBaseItemInterface_SuperEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` b: bool `
    ///
    pub fn SetEnabled(self: QDesignerMetaDataBaseItemInterface, b: bool) void {
        qtc.QDesignerMetaDataBaseItemInterface_SetEnabled(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setEnabled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseItemInterface, b: bool) callconv(.c) void `
    ///
    pub fn OnSetEnabled(self: QDesignerMetaDataBaseItemInterface, callback: *const fn (QDesignerMetaDataBaseItemInterface, bool) callconv(.c) void) void {
        qtc.QDesignerMetaDataBaseItemInterface_OnSetEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetEnabled` instead
    ///
    pub const QBaseSetEnabled = SuperSetEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setEnabled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    /// ` b: bool `
    ///
    pub fn SuperSetEnabled(self: QDesignerMetaDataBaseItemInterface, b: bool) void {
        qtc.QDesignerMetaDataBaseItemInterface_SuperSetEnabled(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#dtor.QDesignerMetaDataBaseItemInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerMetaDataBaseItemInterface `
    ///
    pub fn Delete(self: QDesignerMetaDataBaseItemInterface) void {
        qtc.QDesignerMetaDataBaseItemInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html)
pub const QDesignerMetaDataBaseInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerMetaDataBaseInterface,

    pub const _is_QDesignerMetaDataBaseInterface = {};
    pub const _is_QObject = {};

    /// New constructs a new QDesignerMetaDataBaseInterface object.
    ///
    pub fn New() QDesignerMetaDataBaseInterface {
        return .{ .ptr = qtc.QDesignerMetaDataBaseInterface_new() };
    }

    /// New2 constructs a new QDesignerMetaDataBaseInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QDesignerMetaDataBaseInterface {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerMetaDataBaseInterface_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn MetaObject(self: QDesignerMetaDataBaseInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerMetaDataBaseInterface_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QDesignerMetaDataBaseInterface, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDesignerMetaDataBaseInterface_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn SuperMetaObject(self: QDesignerMetaDataBaseInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerMetaDataBaseInterface_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDesignerMetaDataBaseInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerMetaDataBaseInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerMetaDataBaseInterface_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDesignerMetaDataBaseInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerMetaDataBaseInterface_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QDesignerMetaDataBaseInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerMetaDataBaseInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerMetaDataBaseInterface_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QDesignerMetaDataBaseInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerMetaDataBaseInterface_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermetadatabaseinterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` object: QObject `
    ///
    pub fn Item(self: QDesignerMetaDataBaseInterface, object: anytype) QDesignerMetaDataBaseItemInterface {
        comptime _ = @TypeOf(object)._is_QObject;
        return .{ .ptr = qtc.QDesignerMetaDataBaseInterface_Item(@ptrCast(self.ptr), @ptrCast(object.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#item)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, object: QObject) callconv(.c) QDesignerMetaDataBaseItemInterface `
    ///
    pub fn OnItem(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, QObject) callconv(.c) QDesignerMetaDataBaseItemInterface) void {
        qtc.QDesignerMetaDataBaseInterface_OnItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItem` instead
    ///
    pub const QBaseItem = SuperItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#item)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` object: QObject `
    ///
    pub fn SuperItem(self: QDesignerMetaDataBaseInterface, object: anytype) QDesignerMetaDataBaseItemInterface {
        comptime _ = @TypeOf(object)._is_QObject;
        return .{ .ptr = qtc.QDesignerMetaDataBaseInterface_SuperItem(@ptrCast(self.ptr), @ptrCast(object.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` object: QObject `
    ///
    pub fn Add(self: QDesignerMetaDataBaseInterface, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QDesignerMetaDataBaseInterface_Add(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#add)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, object: QObject) callconv(.c) void `
    ///
    pub fn OnAdd(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, QObject) callconv(.c) void) void {
        qtc.QDesignerMetaDataBaseInterface_OnAdd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAdd` instead
    ///
    pub const QBaseAdd = SuperAdd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#add)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` object: QObject `
    ///
    pub fn SuperAdd(self: QDesignerMetaDataBaseInterface, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QDesignerMetaDataBaseInterface_SuperAdd(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` object: QObject `
    ///
    pub fn Remove(self: QDesignerMetaDataBaseInterface, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QDesignerMetaDataBaseInterface_Remove(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#remove)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, object: QObject) callconv(.c) void `
    ///
    pub fn OnRemove(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, QObject) callconv(.c) void) void {
        qtc.QDesignerMetaDataBaseInterface_OnRemove(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemove` instead
    ///
    pub const QBaseRemove = SuperRemove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#remove)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` object: QObject `
    ///
    pub fn SuperRemove(self: QDesignerMetaDataBaseInterface, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QDesignerMetaDataBaseInterface_SuperRemove(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#objects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Objects(self: QDesignerMetaDataBaseInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QDesignerMetaDataBaseInterface_Objects(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdesignermetadatabaseinterface.Objects: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#objects)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QObject `
    ///
    pub fn OnObjects(self: QDesignerMetaDataBaseInterface, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QDesignerMetaDataBaseInterface_OnObjects(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperObjects` instead
    ///
    pub const QBaseObjects = SuperObjects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#objects)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperObjects(self: QDesignerMetaDataBaseInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QDesignerMetaDataBaseInterface_SuperObjects(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdesignermetadatabaseinterface.Objects: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn Core(self: QDesignerMetaDataBaseInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerMetaDataBaseInterface_Core(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#core)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QDesignerFormEditorInterface `
    ///
    pub fn OnCore(self: QDesignerMetaDataBaseInterface, callback: *const fn () callconv(.c) QDesignerFormEditorInterface) void {
        qtc.QDesignerMetaDataBaseInterface_OnCore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCore` instead
    ///
    pub const QBaseCore = SuperCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#core)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn SuperCore(self: QDesignerMetaDataBaseInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerMetaDataBaseInterface_SuperCore(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn Changed(self: QDesignerMetaDataBaseInterface) void {
        qtc.QDesignerMetaDataBaseInterface_Changed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface) callconv(.c) void `
    ///
    pub fn OnChanged(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface) callconv(.c) void) void {
        qtc.QDesignerMetaDataBaseInterface_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermetadatabaseinterface.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermetadatabaseinterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QDesignerMetaDataBaseInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermetadatabaseinterface.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QDesignerMetaDataBaseInterface, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn IsWidgetType(self: QDesignerMetaDataBaseInterface) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn IsWindowType(self: QDesignerMetaDataBaseInterface) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn IsQuickItemType(self: QDesignerMetaDataBaseInterface) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn SignalsBlocked(self: QDesignerMetaDataBaseInterface) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QDesignerMetaDataBaseInterface, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn Thread(self: QDesignerMetaDataBaseInterface) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDesignerMetaDataBaseInterface, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QDesignerMetaDataBaseInterface, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QDesignerMetaDataBaseInterface, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QDesignerMetaDataBaseInterface, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QDesignerMetaDataBaseInterface, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QDesignerMetaDataBaseInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdesignermetadatabaseinterface.Children: Memory allocation failed");
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QDesignerMetaDataBaseInterface, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QDesignerMetaDataBaseInterface, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QDesignerMetaDataBaseInterface, obj: anytype) void {
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDesignerMetaDataBaseInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn Disconnect3(self: QDesignerMetaDataBaseInterface) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QDesignerMetaDataBaseInterface, receiver: anytype) bool {
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn DumpObjectTree(self: QDesignerMetaDataBaseInterface) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn DumpObjectInfo(self: QDesignerMetaDataBaseInterface) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QDesignerMetaDataBaseInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDesignerMetaDataBaseInterface, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QDesignerMetaDataBaseInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdesignermetadatabaseinterface.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignermetadatabaseinterface.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn BindingStorage(self: QDesignerMetaDataBaseInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn BindingStorage2(self: QDesignerMetaDataBaseInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn Destroyed(self: QDesignerMetaDataBaseInterface) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn Parent(self: QDesignerMetaDataBaseInterface) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QDesignerMetaDataBaseInterface, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn DeleteLater(self: QDesignerMetaDataBaseInterface) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QDesignerMetaDataBaseInterface, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QDesignerMetaDataBaseInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDesignerMetaDataBaseInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDesignerMetaDataBaseInterface, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QDesignerMetaDataBaseInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDesignerMetaDataBaseInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDesignerMetaDataBaseInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDesignerMetaDataBaseInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, QObject) callconv(.c) void) void {
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDesignerMetaDataBaseInterface, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerMetaDataBaseInterface_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDesignerMetaDataBaseInterface, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerMetaDataBaseInterface_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, QEvent) callconv(.c) bool) void {
        qtc.QDesignerMetaDataBaseInterface_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDesignerMetaDataBaseInterface, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerMetaDataBaseInterface_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDesignerMetaDataBaseInterface, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerMetaDataBaseInterface_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDesignerMetaDataBaseInterface_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDesignerMetaDataBaseInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDesignerMetaDataBaseInterface_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDesignerMetaDataBaseInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDesignerMetaDataBaseInterface_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, QTimerEvent) callconv(.c) void) void {
        qtc.QDesignerMetaDataBaseInterface_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDesignerMetaDataBaseInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDesignerMetaDataBaseInterface_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDesignerMetaDataBaseInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDesignerMetaDataBaseInterface_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, QChildEvent) callconv(.c) void) void {
        qtc.QDesignerMetaDataBaseInterface_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDesignerMetaDataBaseInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDesignerMetaDataBaseInterface_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDesignerMetaDataBaseInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDesignerMetaDataBaseInterface_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, QEvent) callconv(.c) void) void {
        qtc.QDesignerMetaDataBaseInterface_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QDesignerMetaDataBaseInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerMetaDataBaseInterface_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDesignerMetaDataBaseInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerMetaDataBaseInterface_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerMetaDataBaseInterface_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QDesignerMetaDataBaseInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerMetaDataBaseInterface_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDesignerMetaDataBaseInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerMetaDataBaseInterface_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerMetaDataBaseInterface_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn Sender(self: QDesignerMetaDataBaseInterface) QObject {
        return .{ .ptr = qtc.QDesignerMetaDataBaseInterface_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn SuperSender(self: QDesignerMetaDataBaseInterface) QObject {
        return .{ .ptr = qtc.QDesignerMetaDataBaseInterface_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QDesignerMetaDataBaseInterface, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDesignerMetaDataBaseInterface_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn SenderSignalIndex(self: QDesignerMetaDataBaseInterface) i32 {
        return qtc.QDesignerMetaDataBaseInterface_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn SuperSenderSignalIndex(self: QDesignerMetaDataBaseInterface) i32 {
        return qtc.QDesignerMetaDataBaseInterface_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QDesignerMetaDataBaseInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerMetaDataBaseInterface_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QDesignerMetaDataBaseInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerMetaDataBaseInterface_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDesignerMetaDataBaseInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerMetaDataBaseInterface_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerMetaDataBaseInterface_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QDesignerMetaDataBaseInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerMetaDataBaseInterface_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDesignerMetaDataBaseInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerMetaDataBaseInterface_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, QMetaMethod) callconv(.c) bool) void {
        qtc.QDesignerMetaDataBaseInterface_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerMetaDataBaseInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QDesignerMetaDataBaseInterface, callback: *const fn (QDesignerMetaDataBaseInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#dtor.QDesignerMetaDataBaseInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerMetaDataBaseInterface `
    ///
    pub fn Delete(self: QDesignerMetaDataBaseInterface) void {
        qtc.QDesignerMetaDataBaseInterface_Delete(@ptrCast(self.ptr));
    }
};
