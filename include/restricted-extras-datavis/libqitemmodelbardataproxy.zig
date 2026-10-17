const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QBar3DSeries = @import("libqt6").QBar3DSeries;
const QBarDataItem = @import("libqt6").QBarDataItem;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QRegularExpression = @import("libqt6").QRegularExpression;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractdataproxy_enums = @import("libqabstractdataproxy.zig").enums;
const qitemmodelbardataproxy_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)
pub const QItemModelBarDataProxy = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QItemModelBarDataProxy,

    pub const _is_QItemModelBarDataProxy = {};
    pub const _is_QBarDataProxy = {};
    pub const _is_QAbstractDataProxy = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    pub fn new() QItemModelBarDataProxy {
        return .{ .ptr = qtc.QItemModelBarDataProxy_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    pub fn new2(_itemModel: anytype) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        return .{ .ptr = qtc.QItemModelBarDataProxy_new2(@ptrCast(_itemModel.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _valueRole: []const u8 `
    ///
    pub fn new3(_itemModel: anytype, _valueRole: []const u8) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const valueRole_str = qtc.libqt_string{
            .len = _valueRole.len,
            .data = _valueRole.ptr,
        };
        return .{ .ptr = qtc.QItemModelBarDataProxy_new3(@ptrCast(_itemModel.ptr), valueRole_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _valueRole: []const u8 `
    ///
    pub fn new4(_itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _valueRole: []const u8) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const valueRole_str = qtc.libqt_string{
            .len = _valueRole.len,
            .data = _valueRole.ptr,
        };
        return .{ .ptr = qtc.QItemModelBarDataProxy_new4(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, valueRole_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _valueRole: []const u8 `
    ///
    /// ` _rotationRole: []const u8 `
    ///
    pub fn new5(_itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _valueRole: []const u8, _rotationRole: []const u8) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const valueRole_str = qtc.libqt_string{
            .len = _valueRole.len,
            .data = _valueRole.ptr,
        };
        const rotationRole_str = qtc.libqt_string{
            .len = _rotationRole.len,
            .data = _rotationRole.ptr,
        };
        return .{ .ptr = qtc.QItemModelBarDataProxy_new5(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, valueRole_str, rotationRole_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _valueRole: []const u8 `
    ///
    /// ` _rowCategories: []const []const u8 `
    ///
    /// ` _columnCategories: []const []const u8 `
    ///
    pub fn new6(allocator: std.mem.Allocator, _itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _valueRole: []const u8, _rowCategories: []const []const u8, _columnCategories: []const []const u8) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const valueRole_str = qtc.libqt_string{
            .len = _valueRole.len,
            .data = _valueRole.ptr,
        };
        const rowCategories_arr = allocator.alloc(qtc.libqt_string, _rowCategories.len) catch @panic("QItemModelBarDataProxy.new6: Memory allocation failed");
        defer allocator.free(rowCategories_arr);
        for (_rowCategories, 0.._rowCategories.len) |str_item, i|
            rowCategories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const rowCategories_list = qtc.libqt_list{
            .len = _rowCategories.len,
            .data = rowCategories_arr.ptr,
        };
        const columnCategories_arr = allocator.alloc(qtc.libqt_string, _columnCategories.len) catch @panic("QItemModelBarDataProxy.new6: Memory allocation failed");
        defer allocator.free(columnCategories_arr);
        for (_columnCategories, 0.._columnCategories.len) |str_item, i|
            columnCategories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const columnCategories_list = qtc.libqt_list{
            .len = _columnCategories.len,
            .data = columnCategories_arr.ptr,
        };
        return .{ .ptr = qtc.QItemModelBarDataProxy_new6(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, valueRole_str, rowCategories_list, columnCategories_list) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _valueRole: []const u8 `
    ///
    /// ` _rotationRole: []const u8 `
    ///
    /// ` _rowCategories: []const []const u8 `
    ///
    /// ` _columnCategories: []const []const u8 `
    ///
    pub fn new7(allocator: std.mem.Allocator, _itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _valueRole: []const u8, _rotationRole: []const u8, _rowCategories: []const []const u8, _columnCategories: []const []const u8) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const valueRole_str = qtc.libqt_string{
            .len = _valueRole.len,
            .data = _valueRole.ptr,
        };
        const rotationRole_str = qtc.libqt_string{
            .len = _rotationRole.len,
            .data = _rotationRole.ptr,
        };
        const rowCategories_arr = allocator.alloc(qtc.libqt_string, _rowCategories.len) catch @panic("QItemModelBarDataProxy.new7: Memory allocation failed");
        defer allocator.free(rowCategories_arr);
        for (_rowCategories, 0.._rowCategories.len) |str_item, i|
            rowCategories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const rowCategories_list = qtc.libqt_list{
            .len = _rowCategories.len,
            .data = rowCategories_arr.ptr,
        };
        const columnCategories_arr = allocator.alloc(qtc.libqt_string, _columnCategories.len) catch @panic("QItemModelBarDataProxy.new7: Memory allocation failed");
        defer allocator.free(columnCategories_arr);
        for (_columnCategories, 0.._columnCategories.len) |str_item, i|
            columnCategories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const columnCategories_list = qtc.libqt_list{
            .len = _columnCategories.len,
            .data = columnCategories_arr.ptr,
        };
        return .{ .ptr = qtc.QItemModelBarDataProxy_new7(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, valueRole_str, rotationRole_str, rowCategories_list, columnCategories_list) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new8(_parent: anytype) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelBarDataProxy_new8(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new9(_itemModel: anytype, _parent: anytype) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelBarDataProxy_new9(@ptrCast(_itemModel.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _valueRole: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new10(_itemModel: anytype, _valueRole: []const u8, _parent: anytype) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const valueRole_str = qtc.libqt_string{
            .len = _valueRole.len,
            .data = _valueRole.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelBarDataProxy_new10(@ptrCast(_itemModel.ptr), valueRole_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _valueRole: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new11(_itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _valueRole: []const u8, _parent: anytype) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const valueRole_str = qtc.libqt_string{
            .len = _valueRole.len,
            .data = _valueRole.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelBarDataProxy_new11(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, valueRole_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _valueRole: []const u8 `
    ///
    /// ` _rotationRole: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new12(_itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _valueRole: []const u8, _rotationRole: []const u8, _parent: anytype) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const valueRole_str = qtc.libqt_string{
            .len = _valueRole.len,
            .data = _valueRole.ptr,
        };
        const rotationRole_str = qtc.libqt_string{
            .len = _rotationRole.len,
            .data = _rotationRole.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelBarDataProxy_new12(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, valueRole_str, rotationRole_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new13` instead
    ///
    pub const New13 = new13;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _valueRole: []const u8 `
    ///
    /// ` _rowCategories: []const []const u8 `
    ///
    /// ` _columnCategories: []const []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new13(allocator: std.mem.Allocator, _itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _valueRole: []const u8, _rowCategories: []const []const u8, _columnCategories: []const []const u8, _parent: anytype) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const valueRole_str = qtc.libqt_string{
            .len = _valueRole.len,
            .data = _valueRole.ptr,
        };
        const rowCategories_arr = allocator.alloc(qtc.libqt_string, _rowCategories.len) catch @panic("QItemModelBarDataProxy.new13: Memory allocation failed");
        defer allocator.free(rowCategories_arr);
        for (_rowCategories, 0.._rowCategories.len) |str_item, i|
            rowCategories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const rowCategories_list = qtc.libqt_list{
            .len = _rowCategories.len,
            .data = rowCategories_arr.ptr,
        };
        const columnCategories_arr = allocator.alloc(qtc.libqt_string, _columnCategories.len) catch @panic("QItemModelBarDataProxy.new13: Memory allocation failed");
        defer allocator.free(columnCategories_arr);
        for (_columnCategories, 0.._columnCategories.len) |str_item, i|
            columnCategories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const columnCategories_list = qtc.libqt_list{
            .len = _columnCategories.len,
            .data = columnCategories_arr.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelBarDataProxy_new13(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, valueRole_str, rowCategories_list, columnCategories_list, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new14` instead
    ///
    pub const New14 = new14;

    /// Allocate a new QItemModelBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _valueRole: []const u8 `
    ///
    /// ` _rotationRole: []const u8 `
    ///
    /// ` _rowCategories: []const []const u8 `
    ///
    /// ` _columnCategories: []const []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new14(allocator: std.mem.Allocator, _itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _valueRole: []const u8, _rotationRole: []const u8, _rowCategories: []const []const u8, _columnCategories: []const []const u8, _parent: anytype) QItemModelBarDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const valueRole_str = qtc.libqt_string{
            .len = _valueRole.len,
            .data = _valueRole.ptr,
        };
        const rotationRole_str = qtc.libqt_string{
            .len = _rotationRole.len,
            .data = _rotationRole.ptr,
        };
        const rowCategories_arr = allocator.alloc(qtc.libqt_string, _rowCategories.len) catch @panic("QItemModelBarDataProxy.new14: Memory allocation failed");
        defer allocator.free(rowCategories_arr);
        for (_rowCategories, 0.._rowCategories.len) |str_item, i|
            rowCategories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const rowCategories_list = qtc.libqt_list{
            .len = _rowCategories.len,
            .data = rowCategories_arr.ptr,
        };
        const columnCategories_arr = allocator.alloc(qtc.libqt_string, _columnCategories.len) catch @panic("QItemModelBarDataProxy.new14: Memory allocation failed");
        defer allocator.free(columnCategories_arr);
        for (_columnCategories, 0.._columnCategories.len) |str_item, i|
            columnCategories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const columnCategories_list = qtc.libqt_list{
            .len = _columnCategories.len,
            .data = columnCategories_arr.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelBarDataProxy_new14(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, valueRole_str, rotationRole_str, rowCategories_list, columnCategories_list, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn metaObject(self: QItemModelBarDataProxy) QMetaObject {
        return .{ .ptr = qtc.QItemModelBarDataProxy_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy) callconv(.c) QMetaObject) void {
        qtc.QItemModelBarDataProxy_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn superMetaObject(self: QItemModelBarDataProxy) QMetaObject {
        return .{ .ptr = qtc.QItemModelBarDataProxy_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QItemModelBarDataProxy, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemModelBarDataProxy_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QItemModelBarDataProxy_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QItemModelBarDataProxy, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemModelBarDataProxy_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QItemModelBarDataProxy, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemModelBarDataProxy_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QItemModelBarDataProxy_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QItemModelBarDataProxy, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemModelBarDataProxy_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QItemModelBarDataProxy_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelBarDataProxy.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setItemModel` instead
    ///
    pub const SetItemModel = setItemModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setItemModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    pub fn setItemModel(self: QItemModelBarDataProxy, _itemModel: anytype) void {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        qtc.QItemModelBarDataProxy_SetItemModel(@ptrCast(self.ptr), @ptrCast(_itemModel.ptr));
    }

    /// ### DEPRECATED: Use `itemModel` instead
    ///
    pub const ItemModel = itemModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#itemModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn itemModel(self: QItemModelBarDataProxy) QAbstractItemModel {
        return .{ .ptr = qtc.QItemModelBarDataProxy_ItemModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRowRole` instead
    ///
    pub const SetRowRole = setRowRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setRowRole(self: QItemModelBarDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelBarDataProxy_SetRowRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `rowRole` instead
    ///
    pub const RowRole = rowRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rowRole(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelBarDataProxy_RowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelBarDataProxy.rowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setColumnRole` instead
    ///
    pub const SetColumnRole = setColumnRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setColumnRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setColumnRole(self: QItemModelBarDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelBarDataProxy_SetColumnRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `columnRole` instead
    ///
    pub const ColumnRole = columnRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn columnRole(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelBarDataProxy_ColumnRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelBarDataProxy.columnRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setValueRole` instead
    ///
    pub const SetValueRole = setValueRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setValueRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setValueRole(self: QItemModelBarDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelBarDataProxy_SetValueRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `valueRole` instead
    ///
    pub const ValueRole = valueRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn valueRole(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelBarDataProxy_ValueRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelBarDataProxy.valueRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRotationRole` instead
    ///
    pub const SetRotationRole = setRotationRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRotationRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setRotationRole(self: QItemModelBarDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelBarDataProxy_SetRotationRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `rotationRole` instead
    ///
    pub const RotationRole = rotationRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rotationRole(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelBarDataProxy_RotationRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelBarDataProxy.rotationRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRowCategories` instead
    ///
    pub const SetRowCategories = setRowCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRowCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` categories: []const []const u8 `
    ///
    pub fn setRowCategories(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, categories: []const []const u8) void {
        const categories_arr = allocator.alloc(qtc.libqt_string, categories.len) catch @panic("QItemModelBarDataProxy.setRowCategories: Memory allocation failed");
        defer allocator.free(categories_arr);
        for (categories, 0..categories.len) |str_item, i|
            categories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = categories_arr.ptr,
        };
        qtc.QItemModelBarDataProxy_SetRowCategories(@ptrCast(self.ptr), categories_list);
    }

    /// ### DEPRECATED: Use `rowCategories` instead
    ///
    pub const RowCategories = rowCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rowCategories(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QItemModelBarDataProxy_RowCategories(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QItemModelBarDataProxy.rowCategories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QItemModelBarDataProxy.rowCategories: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setColumnCategories` instead
    ///
    pub const SetColumnCategories = setColumnCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setColumnCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` categories: []const []const u8 `
    ///
    pub fn setColumnCategories(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, categories: []const []const u8) void {
        const categories_arr = allocator.alloc(qtc.libqt_string, categories.len) catch @panic("QItemModelBarDataProxy.setColumnCategories: Memory allocation failed");
        defer allocator.free(categories_arr);
        for (categories, 0..categories.len) |str_item, i|
            categories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = categories_arr.ptr,
        };
        qtc.QItemModelBarDataProxy_SetColumnCategories(@ptrCast(self.ptr), categories_list);
    }

    /// ### DEPRECATED: Use `columnCategories` instead
    ///
    pub const ColumnCategories = columnCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn columnCategories(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QItemModelBarDataProxy_ColumnCategories(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QItemModelBarDataProxy.columnCategories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QItemModelBarDataProxy.columnCategories: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setUseModelCategories` instead
    ///
    pub const SetUseModelCategories = setUseModelCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setUseModelCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` enable: bool `
    ///
    pub fn setUseModelCategories(self: QItemModelBarDataProxy, enable: bool) void {
        qtc.QItemModelBarDataProxy_SetUseModelCategories(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `useModelCategories` instead
    ///
    pub const UseModelCategories = useModelCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#useModelCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn useModelCategories(self: QItemModelBarDataProxy) bool {
        return qtc.QItemModelBarDataProxy_UseModelCategories(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoRowCategories` instead
    ///
    pub const SetAutoRowCategories = setAutoRowCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setAutoRowCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` enable: bool `
    ///
    pub fn setAutoRowCategories(self: QItemModelBarDataProxy, enable: bool) void {
        qtc.QItemModelBarDataProxy_SetAutoRowCategories(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `autoRowCategories` instead
    ///
    pub const AutoRowCategories = autoRowCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#autoRowCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn autoRowCategories(self: QItemModelBarDataProxy) bool {
        return qtc.QItemModelBarDataProxy_AutoRowCategories(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoColumnCategories` instead
    ///
    pub const SetAutoColumnCategories = setAutoColumnCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setAutoColumnCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` enable: bool `
    ///
    pub fn setAutoColumnCategories(self: QItemModelBarDataProxy, enable: bool) void {
        qtc.QItemModelBarDataProxy_SetAutoColumnCategories(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `autoColumnCategories` instead
    ///
    pub const AutoColumnCategories = autoColumnCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#autoColumnCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn autoColumnCategories(self: QItemModelBarDataProxy) bool {
        return qtc.QItemModelBarDataProxy_AutoColumnCategories(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `remap` instead
    ///
    pub const Remap = remap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#remap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _valueRole: []const u8 `
    ///
    /// ` _rotationRole: []const u8 `
    ///
    /// ` _rowCategories: []const []const u8 `
    ///
    /// ` _columnCategories: []const []const u8 `
    ///
    pub fn remap(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, _rowRole: []const u8, _columnRole: []const u8, _valueRole: []const u8, _rotationRole: []const u8, _rowCategories: []const []const u8, _columnCategories: []const []const u8) void {
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const valueRole_str = qtc.libqt_string{
            .len = _valueRole.len,
            .data = _valueRole.ptr,
        };
        const rotationRole_str = qtc.libqt_string{
            .len = _rotationRole.len,
            .data = _rotationRole.ptr,
        };
        const rowCategories_arr = allocator.alloc(qtc.libqt_string, _rowCategories.len) catch @panic("QItemModelBarDataProxy.remap: Memory allocation failed");
        defer allocator.free(rowCategories_arr);
        for (_rowCategories, 0.._rowCategories.len) |str_item, i|
            rowCategories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const rowCategories_list = qtc.libqt_list{
            .len = _rowCategories.len,
            .data = rowCategories_arr.ptr,
        };
        const columnCategories_arr = allocator.alloc(qtc.libqt_string, _columnCategories.len) catch @panic("QItemModelBarDataProxy.remap: Memory allocation failed");
        defer allocator.free(columnCategories_arr);
        for (_columnCategories, 0.._columnCategories.len) |str_item, i|
            columnCategories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const columnCategories_list = qtc.libqt_list{
            .len = _columnCategories.len,
            .data = columnCategories_arr.ptr,
        };
        qtc.QItemModelBarDataProxy_Remap(@ptrCast(self.ptr), rowRole_str, columnRole_str, valueRole_str, rotationRole_str, rowCategories_list, columnCategories_list);
    }

    /// ### DEPRECATED: Use `rowCategoryIndex` instead
    ///
    pub const RowCategoryIndex = rowCategoryIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowCategoryIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` category: []const u8 `
    ///
    pub fn rowCategoryIndex(self: QItemModelBarDataProxy, category: []const u8) i32 {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        return qtc.QItemModelBarDataProxy_RowCategoryIndex(@ptrCast(self.ptr), category_str);
    }

    /// ### DEPRECATED: Use `columnCategoryIndex` instead
    ///
    pub const ColumnCategoryIndex = columnCategoryIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnCategoryIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` category: []const u8 `
    ///
    pub fn columnCategoryIndex(self: QItemModelBarDataProxy, category: []const u8) i32 {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        return qtc.QItemModelBarDataProxy_ColumnCategoryIndex(@ptrCast(self.ptr), category_str);
    }

    /// ### DEPRECATED: Use `setRowRolePattern` instead
    ///
    pub const SetRowRolePattern = setRowRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRowRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setRowRolePattern(self: QItemModelBarDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelBarDataProxy_SetRowRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `rowRolePattern` instead
    ///
    pub const RowRolePattern = rowRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn rowRolePattern(self: QItemModelBarDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelBarDataProxy_RowRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColumnRolePattern` instead
    ///
    pub const SetColumnRolePattern = setColumnRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setColumnRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setColumnRolePattern(self: QItemModelBarDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelBarDataProxy_SetColumnRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `columnRolePattern` instead
    ///
    pub const ColumnRolePattern = columnRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn columnRolePattern(self: QItemModelBarDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelBarDataProxy_ColumnRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setValueRolePattern` instead
    ///
    pub const SetValueRolePattern = setValueRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setValueRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setValueRolePattern(self: QItemModelBarDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelBarDataProxy_SetValueRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `valueRolePattern` instead
    ///
    pub const ValueRolePattern = valueRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn valueRolePattern(self: QItemModelBarDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelBarDataProxy_ValueRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRotationRolePattern` instead
    ///
    pub const SetRotationRolePattern = setRotationRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRotationRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setRotationRolePattern(self: QItemModelBarDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelBarDataProxy_SetRotationRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `rotationRolePattern` instead
    ///
    pub const RotationRolePattern = rotationRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn rotationRolePattern(self: QItemModelBarDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelBarDataProxy_RotationRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRowRoleReplace` instead
    ///
    pub const SetRowRoleReplace = setRowRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRowRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setRowRoleReplace(self: QItemModelBarDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelBarDataProxy_SetRowRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `rowRoleReplace` instead
    ///
    pub const RowRoleReplace = rowRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rowRoleReplace(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelBarDataProxy_RowRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelBarDataProxy.rowRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setColumnRoleReplace` instead
    ///
    pub const SetColumnRoleReplace = setColumnRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setColumnRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setColumnRoleReplace(self: QItemModelBarDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelBarDataProxy_SetColumnRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `columnRoleReplace` instead
    ///
    pub const ColumnRoleReplace = columnRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn columnRoleReplace(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelBarDataProxy_ColumnRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelBarDataProxy.columnRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setValueRoleReplace` instead
    ///
    pub const SetValueRoleReplace = setValueRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setValueRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setValueRoleReplace(self: QItemModelBarDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelBarDataProxy_SetValueRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `valueRoleReplace` instead
    ///
    pub const ValueRoleReplace = valueRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn valueRoleReplace(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelBarDataProxy_ValueRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelBarDataProxy.valueRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRotationRoleReplace` instead
    ///
    pub const SetRotationRoleReplace = setRotationRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRotationRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setRotationRoleReplace(self: QItemModelBarDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelBarDataProxy_SetRotationRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `rotationRoleReplace` instead
    ///
    pub const RotationRoleReplace = rotationRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rotationRoleReplace(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelBarDataProxy_RotationRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelBarDataProxy.rotationRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMultiMatchBehavior` instead
    ///
    pub const SetMultiMatchBehavior = setMultiMatchBehavior;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setMultiMatchBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` behavior: qitemmodelbardataproxy_enums.MultiMatchBehavior `
    ///
    pub fn setMultiMatchBehavior(self: QItemModelBarDataProxy, behavior: i32) void {
        qtc.QItemModelBarDataProxy_SetMultiMatchBehavior(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `multiMatchBehavior` instead
    ///
    pub const MultiMatchBehavior = multiMatchBehavior;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#multiMatchBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ## Returns:
    ///
    /// ` qitemmodelbardataproxy_enums.MultiMatchBehavior `
    ///
    pub fn multiMatchBehavior(self: QItemModelBarDataProxy) i32 {
        return qtc.QItemModelBarDataProxy_MultiMatchBehavior(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemModelChanged` instead
    ///
    pub const ItemModelChanged = itemModelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#itemModelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    pub fn itemModelChanged(self: QItemModelBarDataProxy, _itemModel: anytype) void {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        qtc.QItemModelBarDataProxy_ItemModelChanged(@ptrCast(self.ptr), @ptrCast(_itemModel.ptr));
    }

    /// ### DEPRECATED: Use `onItemModelChanged` instead
    ///
    pub const OnItemModelChanged = onItemModelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#itemModelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, itemModel: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn onItemModelChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QAbstractItemModel) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_ItemModelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowRoleChanged` instead
    ///
    pub const RowRoleChanged = rowRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn rowRoleChanged(self: QItemModelBarDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelBarDataProxy_RowRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onRowRoleChanged` instead
    ///
    pub const OnRowRoleChanged = onRowRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRowRoleChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_RowRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnRoleChanged` instead
    ///
    pub const ColumnRoleChanged = columnRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn columnRoleChanged(self: QItemModelBarDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelBarDataProxy_ColumnRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onColumnRoleChanged` instead
    ///
    pub const OnColumnRoleChanged = onColumnRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onColumnRoleChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_ColumnRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `valueRoleChanged` instead
    ///
    pub const ValueRoleChanged = valueRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn valueRoleChanged(self: QItemModelBarDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelBarDataProxy_ValueRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onValueRoleChanged` instead
    ///
    pub const OnValueRoleChanged = onValueRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onValueRoleChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_ValueRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationRoleChanged` instead
    ///
    pub const RotationRoleChanged = rotationRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn rotationRoleChanged(self: QItemModelBarDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelBarDataProxy_RotationRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onRotationRoleChanged` instead
    ///
    pub const OnRotationRoleChanged = onRotationRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRotationRoleChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_RotationRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowCategoriesChanged` instead
    ///
    pub const RowCategoriesChanged = rowCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowCategoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn rowCategoriesChanged(self: QItemModelBarDataProxy) void {
        qtc.QItemModelBarDataProxy_RowCategoriesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRowCategoriesChanged` instead
    ///
    pub const OnRowCategoriesChanged = onRowCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowCategoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy) callconv(.c) void `
    ///
    pub fn onRowCategoriesChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_RowCategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnCategoriesChanged` instead
    ///
    pub const ColumnCategoriesChanged = columnCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnCategoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn columnCategoriesChanged(self: QItemModelBarDataProxy) void {
        qtc.QItemModelBarDataProxy_ColumnCategoriesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColumnCategoriesChanged` instead
    ///
    pub const OnColumnCategoriesChanged = onColumnCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnCategoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy) callconv(.c) void `
    ///
    pub fn onColumnCategoriesChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_ColumnCategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `useModelCategoriesChanged` instead
    ///
    pub const UseModelCategoriesChanged = useModelCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#useModelCategoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` enable: bool `
    ///
    pub fn useModelCategoriesChanged(self: QItemModelBarDataProxy, enable: bool) void {
        qtc.QItemModelBarDataProxy_UseModelCategoriesChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onUseModelCategoriesChanged` instead
    ///
    pub const OnUseModelCategoriesChanged = onUseModelCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#useModelCategoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, enable: bool) callconv(.c) void `
    ///
    pub fn onUseModelCategoriesChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, bool) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_UseModelCategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoRowCategoriesChanged` instead
    ///
    pub const AutoRowCategoriesChanged = autoRowCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#autoRowCategoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` enable: bool `
    ///
    pub fn autoRowCategoriesChanged(self: QItemModelBarDataProxy, enable: bool) void {
        qtc.QItemModelBarDataProxy_AutoRowCategoriesChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onAutoRowCategoriesChanged` instead
    ///
    pub const OnAutoRowCategoriesChanged = onAutoRowCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#autoRowCategoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, enable: bool) callconv(.c) void `
    ///
    pub fn onAutoRowCategoriesChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, bool) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_AutoRowCategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoColumnCategoriesChanged` instead
    ///
    pub const AutoColumnCategoriesChanged = autoColumnCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#autoColumnCategoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` enable: bool `
    ///
    pub fn autoColumnCategoriesChanged(self: QItemModelBarDataProxy, enable: bool) void {
        qtc.QItemModelBarDataProxy_AutoColumnCategoriesChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onAutoColumnCategoriesChanged` instead
    ///
    pub const OnAutoColumnCategoriesChanged = onAutoColumnCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#autoColumnCategoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, enable: bool) callconv(.c) void `
    ///
    pub fn onAutoColumnCategoriesChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, bool) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_AutoColumnCategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowRolePatternChanged` instead
    ///
    pub const RowRolePatternChanged = rowRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn rowRolePatternChanged(self: QItemModelBarDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelBarDataProxy_RowRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onRowRolePatternChanged` instead
    ///
    pub const OnRowRolePatternChanged = onRowRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onRowRolePatternChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_RowRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnRolePatternChanged` instead
    ///
    pub const ColumnRolePatternChanged = columnRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn columnRolePatternChanged(self: QItemModelBarDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelBarDataProxy_ColumnRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onColumnRolePatternChanged` instead
    ///
    pub const OnColumnRolePatternChanged = onColumnRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onColumnRolePatternChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_ColumnRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `valueRolePatternChanged` instead
    ///
    pub const ValueRolePatternChanged = valueRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn valueRolePatternChanged(self: QItemModelBarDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelBarDataProxy_ValueRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onValueRolePatternChanged` instead
    ///
    pub const OnValueRolePatternChanged = onValueRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onValueRolePatternChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_ValueRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationRolePatternChanged` instead
    ///
    pub const RotationRolePatternChanged = rotationRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn rotationRolePatternChanged(self: QItemModelBarDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelBarDataProxy_RotationRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onRotationRolePatternChanged` instead
    ///
    pub const OnRotationRolePatternChanged = onRotationRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onRotationRolePatternChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_RotationRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowRoleReplaceChanged` instead
    ///
    pub const RowRoleReplaceChanged = rowRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn rowRoleReplaceChanged(self: QItemModelBarDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelBarDataProxy_RowRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onRowRoleReplaceChanged` instead
    ///
    pub const OnRowRoleReplaceChanged = onRowRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRowRoleReplaceChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_RowRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnRoleReplaceChanged` instead
    ///
    pub const ColumnRoleReplaceChanged = columnRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn columnRoleReplaceChanged(self: QItemModelBarDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelBarDataProxy_ColumnRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onColumnRoleReplaceChanged` instead
    ///
    pub const OnColumnRoleReplaceChanged = onColumnRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onColumnRoleReplaceChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_ColumnRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `valueRoleReplaceChanged` instead
    ///
    pub const ValueRoleReplaceChanged = valueRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn valueRoleReplaceChanged(self: QItemModelBarDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelBarDataProxy_ValueRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onValueRoleReplaceChanged` instead
    ///
    pub const OnValueRoleReplaceChanged = onValueRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onValueRoleReplaceChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_ValueRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationRoleReplaceChanged` instead
    ///
    pub const RotationRoleReplaceChanged = rotationRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn rotationRoleReplaceChanged(self: QItemModelBarDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelBarDataProxy_RotationRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onRotationRoleReplaceChanged` instead
    ///
    pub const OnRotationRoleReplaceChanged = onRotationRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRotationRoleReplaceChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_RotationRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multiMatchBehaviorChanged` instead
    ///
    pub const MultiMatchBehaviorChanged = multiMatchBehaviorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#multiMatchBehaviorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` behavior: qitemmodelbardataproxy_enums.MultiMatchBehavior `
    ///
    pub fn multiMatchBehaviorChanged(self: QItemModelBarDataProxy, behavior: i32) void {
        qtc.QItemModelBarDataProxy_MultiMatchBehaviorChanged(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `onMultiMatchBehaviorChanged` instead
    ///
    pub const OnMultiMatchBehaviorChanged = onMultiMatchBehaviorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#multiMatchBehaviorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, behavior: qitemmodelbardataproxy_enums.MultiMatchBehavior) callconv(.c) void `
    ///
    pub fn onMultiMatchBehaviorChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, i32) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_Connect_MultiMatchBehaviorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QItemModelBarDataProxy_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelBarDataProxy.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QItemModelBarDataProxy_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelBarDataProxy.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn series(self: QItemModelBarDataProxy) QBar3DSeries {
        return .{ .ptr = qtc.QBarDataProxy_Series(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn rowCount(self: QItemModelBarDataProxy) i32 {
        return qtc.QBarDataProxy_RowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rowLabels` instead
    ///
    pub const RowLabels = rowLabels;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rowLabels(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QBarDataProxy_RowLabels(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QItemModelBarDataProxy.rowLabels: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QItemModelBarDataProxy.rowLabels: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setRowLabels` instead
    ///
    pub const SetRowLabels = setRowLabels;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setRowLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn setRowLabels(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QItemModelBarDataProxy.setRowLabels: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QBarDataProxy_SetRowLabels(@ptrCast(self.ptr), labels_list);
    }

    /// ### DEPRECATED: Use `columnLabels` instead
    ///
    pub const ColumnLabels = columnLabels;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#columnLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn columnLabels(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QBarDataProxy_ColumnLabels(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QItemModelBarDataProxy.columnLabels: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QItemModelBarDataProxy.columnLabels: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setColumnLabels` instead
    ///
    pub const SetColumnLabels = setColumnLabels;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setColumnLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn setColumnLabels(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QItemModelBarDataProxy.setColumnLabels: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QBarDataProxy_SetColumnLabels(@ptrCast(self.ptr), labels_list);
    }

    /// ### DEPRECATED: Use `array` instead
    ///
    pub const Array = array;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#array)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn array(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) [][]QBarDataItem {
        const _arr: qtc.libqt_list = qtc.QBarDataProxy_Array(@ptrCast(self.ptr));
        const _list: [*]qtc.libqt_list = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_free(_list[i].data);
            qtc.libqt_free(_list);
        }
        const _ret = allocator.alloc([]QBarDataItem, _arr.len) catch @panic("QItemModelBarDataProxy.array: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val: [*]QtC.QBarDataItem = @ptrCast(@alignCast(_list[i].data));
            _ret[i] = allocator.alloc(QBarDataItem, _list[i].len) catch @panic("QItemModelBarDataProxy.array: Memory allocation failed");
            for (0.._list[i].len) |j|
                _ret[i][j] = .{ .ptr = _data_val[j] };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `rowAt` instead
    ///
    pub const RowAt = rowAt;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    pub fn rowAt(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, rowIndex: i32) []QBarDataItem {
        const _arr: qtc.libqt_list = qtc.QBarDataProxy_RowAt(@ptrCast(self.ptr), @bitCast(rowIndex));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBarDataItem, _arr.len) catch @panic("QItemModelBarDataProxy.rowAt: Memory allocation failed");
        const _data_val: [*]QtC.QBarDataItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` columnIndex: i32 `
    ///
    pub fn itemAt(self: QItemModelBarDataProxy, rowIndex: i32, columnIndex: i32) QBarDataItem {
        return .{ .ptr = qtc.QBarDataProxy_ItemAt(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(columnIndex)) };
    }

    /// ### DEPRECATED: Use `itemAt2` instead
    ///
    pub const ItemAt2 = itemAt2;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` position: QPoint `
    ///
    pub fn itemAt2(self: QItemModelBarDataProxy, position: anytype) QBarDataItem {
        comptime _ = @TypeOf(position)._is_QPoint;
        return .{ .ptr = qtc.QBarDataProxy_ItemAt2(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `resetArray` instead
    ///
    pub const ResetArray = resetArray;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#resetArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn resetArray(self: QItemModelBarDataProxy) void {
        qtc.QBarDataProxy_ResetArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetArray2` instead
    ///
    pub const ResetArray2 = resetArray2;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#resetArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` newArray: [][]QBarDataItem `
    ///
    pub fn resetArray2(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, newArray: [][]QBarDataItem) void {
        const newArray_arr = allocator.alloc(qtc.libqt_list, newArray.len) catch @panic("QItemModelBarDataProxy.resetArray2: Memory allocation failed");
        defer allocator.free(newArray_arr);
        for (newArray, 0..) |newArray_inner, i|
            newArray_arr[i] = qtc.libqt_list{
                .len = newArray_inner.len,
                .data = @ptrCast(newArray_inner.ptr),
            };
        const newArray_list = qtc.libqt_list{
            .len = newArray.len,
            .data = @ptrCast(newArray_arr.ptr),
        };
        qtc.QBarDataProxy_ResetArray2(@ptrCast(self.ptr), newArray_list);
    }

    /// ### DEPRECATED: Use `resetArray3` instead
    ///
    pub const ResetArray3 = resetArray3;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#resetArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` newArray: [][]QBarDataItem `
    ///
    /// ` _rowLabels: []const []const u8 `
    ///
    /// ` _columnLabels: []const []const u8 `
    ///
    pub fn resetArray3(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, newArray: [][]QBarDataItem, _rowLabels: []const []const u8, _columnLabels: []const []const u8) void {
        const newArray_arr = allocator.alloc(qtc.libqt_list, newArray.len) catch @panic("QItemModelBarDataProxy.resetArray3: Memory allocation failed");
        defer allocator.free(newArray_arr);
        for (newArray, 0..) |newArray_inner, i|
            newArray_arr[i] = qtc.libqt_list{
                .len = newArray_inner.len,
                .data = @ptrCast(newArray_inner.ptr),
            };
        const newArray_list = qtc.libqt_list{
            .len = newArray.len,
            .data = @ptrCast(newArray_arr.ptr),
        };
        const rowLabels_arr = allocator.alloc(qtc.libqt_string, _rowLabels.len) catch @panic("QItemModelBarDataProxy.resetArray3: Memory allocation failed");
        defer allocator.free(rowLabels_arr);
        for (_rowLabels, 0.._rowLabels.len) |str_item, i|
            rowLabels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const rowLabels_list = qtc.libqt_list{
            .len = _rowLabels.len,
            .data = rowLabels_arr.ptr,
        };
        const columnLabels_arr = allocator.alloc(qtc.libqt_string, _columnLabels.len) catch @panic("QItemModelBarDataProxy.resetArray3: Memory allocation failed");
        defer allocator.free(columnLabels_arr);
        for (_columnLabels, 0.._columnLabels.len) |str_item, i|
            columnLabels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const columnLabels_list = qtc.libqt_list{
            .len = _columnLabels.len,
            .data = columnLabels_arr.ptr,
        };
        qtc.QBarDataProxy_ResetArray3(@ptrCast(self.ptr), newArray_list, rowLabels_list, columnLabels_list);
    }

    /// ### DEPRECATED: Use `setRow` instead
    ///
    pub const SetRow = setRow;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` row: []QBarDataItem `
    ///
    pub fn setRow(self: QItemModelBarDataProxy, rowIndex: i32, row: []QBarDataItem) void {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        qtc.QBarDataProxy_SetRow(@ptrCast(self.ptr), @bitCast(rowIndex), row_list);
    }

    /// ### DEPRECATED: Use `setRow2` instead
    ///
    pub const SetRow2 = setRow2;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` row: []QBarDataItem `
    ///
    /// ` label: []const u8 `
    ///
    pub fn setRow2(self: QItemModelBarDataProxy, rowIndex: i32, row: []QBarDataItem, label: []const u8) void {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QBarDataProxy_SetRow2(@ptrCast(self.ptr), @bitCast(rowIndex), row_list, label_str);
    }

    /// ### DEPRECATED: Use `setRows` instead
    ///
    pub const SetRows = setRows;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` rows: [][]QBarDataItem `
    ///
    pub fn setRows(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, rowIndex: i32, rows: [][]QBarDataItem) void {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QItemModelBarDataProxy.setRows: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        qtc.QBarDataProxy_SetRows(@ptrCast(self.ptr), @bitCast(rowIndex), rows_list);
    }

    /// ### DEPRECATED: Use `setRows2` instead
    ///
    pub const SetRows2 = setRows2;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` rows: [][]QBarDataItem `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn setRows2(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, rowIndex: i32, rows: [][]QBarDataItem, labels: []const []const u8) void {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QItemModelBarDataProxy.setRows2: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QItemModelBarDataProxy.setRows2: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QBarDataProxy_SetRows2(@ptrCast(self.ptr), @bitCast(rowIndex), rows_list, labels_list);
    }

    /// ### DEPRECATED: Use `setItem` instead
    ///
    pub const SetItem = setItem;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` columnIndex: i32 `
    ///
    /// ` item: QBarDataItem `
    ///
    pub fn setItem(self: QItemModelBarDataProxy, rowIndex: i32, columnIndex: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QBarDataItem;
        qtc.QBarDataProxy_SetItem(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(columnIndex), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setItem2` instead
    ///
    pub const SetItem2 = setItem2;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` position: QPoint `
    ///
    /// ` item: QBarDataItem `
    ///
    pub fn setItem2(self: QItemModelBarDataProxy, position: anytype, item: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        comptime _ = @TypeOf(item)._is_QBarDataItem;
        qtc.QBarDataProxy_SetItem2(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `addRow` instead
    ///
    pub const AddRow = addRow;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` row: []QBarDataItem `
    ///
    pub fn addRow(self: QItemModelBarDataProxy, row: []QBarDataItem) i32 {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        return qtc.QBarDataProxy_AddRow(@ptrCast(self.ptr), row_list);
    }

    /// ### DEPRECATED: Use `addRow2` instead
    ///
    pub const AddRow2 = addRow2;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` row: []QBarDataItem `
    ///
    /// ` label: []const u8 `
    ///
    pub fn addRow2(self: QItemModelBarDataProxy, row: []QBarDataItem, label: []const u8) i32 {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return qtc.QBarDataProxy_AddRow2(@ptrCast(self.ptr), row_list, label_str);
    }

    /// ### DEPRECATED: Use `addRows` instead
    ///
    pub const AddRows = addRows;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#addRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rows: [][]QBarDataItem `
    ///
    pub fn addRows(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, rows: [][]QBarDataItem) i32 {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QItemModelBarDataProxy.addRows: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        return qtc.QBarDataProxy_AddRows(@ptrCast(self.ptr), rows_list);
    }

    /// ### DEPRECATED: Use `addRows2` instead
    ///
    pub const AddRows2 = addRows2;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#addRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rows: [][]QBarDataItem `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn addRows2(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, rows: [][]QBarDataItem, labels: []const []const u8) i32 {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QItemModelBarDataProxy.addRows2: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QItemModelBarDataProxy.addRows2: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        return qtc.QBarDataProxy_AddRows2(@ptrCast(self.ptr), rows_list, labels_list);
    }

    /// ### DEPRECATED: Use `insertRow` instead
    ///
    pub const InsertRow = insertRow;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` row: []QBarDataItem `
    ///
    pub fn insertRow(self: QItemModelBarDataProxy, rowIndex: i32, row: []QBarDataItem) void {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        qtc.QBarDataProxy_InsertRow(@ptrCast(self.ptr), @bitCast(rowIndex), row_list);
    }

    /// ### DEPRECATED: Use `insertRow2` instead
    ///
    pub const InsertRow2 = insertRow2;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` row: []QBarDataItem `
    ///
    /// ` label: []const u8 `
    ///
    pub fn insertRow2(self: QItemModelBarDataProxy, rowIndex: i32, row: []QBarDataItem, label: []const u8) void {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QBarDataProxy_InsertRow2(@ptrCast(self.ptr), @bitCast(rowIndex), row_list, label_str);
    }

    /// ### DEPRECATED: Use `insertRows` instead
    ///
    pub const InsertRows = insertRows;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` rows: [][]QBarDataItem `
    ///
    pub fn insertRows(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, rowIndex: i32, rows: [][]QBarDataItem) void {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QItemModelBarDataProxy.insertRows: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        qtc.QBarDataProxy_InsertRows(@ptrCast(self.ptr), @bitCast(rowIndex), rows_list);
    }

    /// ### DEPRECATED: Use `insertRows2` instead
    ///
    pub const InsertRows2 = insertRows2;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` rows: [][]QBarDataItem `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn insertRows2(self: QItemModelBarDataProxy, allocator: std.mem.Allocator, rowIndex: i32, rows: [][]QBarDataItem, labels: []const []const u8) void {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QItemModelBarDataProxy.insertRows2: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QItemModelBarDataProxy.insertRows2: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QBarDataProxy_InsertRows2(@ptrCast(self.ptr), @bitCast(rowIndex), rows_list, labels_list);
    }

    /// ### DEPRECATED: Use `removeRows` instead
    ///
    pub const RemoveRows = removeRows;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` removeCount: i32 `
    ///
    pub fn removeRows(self: QItemModelBarDataProxy, rowIndex: i32, removeCount: i32) void {
        qtc.QBarDataProxy_RemoveRows(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(removeCount));
    }

    /// ### DEPRECATED: Use `arrayReset` instead
    ///
    pub const ArrayReset = arrayReset;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#arrayReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn arrayReset(self: QItemModelBarDataProxy) void {
        qtc.QBarDataProxy_ArrayReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onArrayReset` instead
    ///
    pub const OnArrayReset = onArrayReset;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#arrayReset)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy) callconv(.c) void `
    ///
    pub fn onArrayReset(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_ArrayReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsAdded` instead
    ///
    pub const RowsAdded = rowsAdded;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsAdded(self: QItemModelBarDataProxy, startIndex: i32, count: i32) void {
        qtc.QBarDataProxy_RowsAdded(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsAdded` instead
    ///
    pub const OnRowsAdded = onRowsAdded;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsAdded(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_RowsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsChanged` instead
    ///
    pub const RowsChanged = rowsChanged;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsChanged(self: QItemModelBarDataProxy, startIndex: i32, count: i32) void {
        qtc.QBarDataProxy_RowsChanged(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsChanged` instead
    ///
    pub const OnRowsChanged = onRowsChanged;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_RowsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsRemoved` instead
    ///
    pub const RowsRemoved = rowsRemoved;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsRemoved(self: QItemModelBarDataProxy, startIndex: i32, count: i32) void {
        qtc.QBarDataProxy_RowsRemoved(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsRemoved` instead
    ///
    pub const OnRowsRemoved = onRowsRemoved;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsRemoved(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_RowsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsInserted` instead
    ///
    pub const RowsInserted = rowsInserted;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsInserted(self: QItemModelBarDataProxy, startIndex: i32, count: i32) void {
        qtc.QBarDataProxy_RowsInserted(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsInserted` instead
    ///
    pub const OnRowsInserted = onRowsInserted;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsInserted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_RowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemChanged` instead
    ///
    pub const ItemChanged = itemChanged;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#itemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` columnIndex: i32 `
    ///
    pub fn itemChanged(self: QItemModelBarDataProxy, rowIndex: i32, columnIndex: i32) void {
        qtc.QBarDataProxy_ItemChanged(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(columnIndex));
    }

    /// ### DEPRECATED: Use `onItemChanged` instead
    ///
    pub const OnItemChanged = onItemChanged;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#itemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, rowIndex: i32, columnIndex: i32) callconv(.c) void `
    ///
    pub fn onItemChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_ItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowCountChanged` instead
    ///
    pub const RowCountChanged = rowCountChanged;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` count: i32 `
    ///
    pub fn rowCountChanged(self: QItemModelBarDataProxy, count: i32) void {
        qtc.QBarDataProxy_RowCountChanged(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowCountChanged` instead
    ///
    pub const OnRowCountChanged = onRowCountChanged;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, count: i32) callconv(.c) void `
    ///
    pub fn onRowCountChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, i32) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_RowCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowLabelsChanged` instead
    ///
    pub const RowLabelsChanged = rowLabelsChanged;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowLabelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn rowLabelsChanged(self: QItemModelBarDataProxy) void {
        qtc.QBarDataProxy_RowLabelsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRowLabelsChanged` instead
    ///
    pub const OnRowLabelsChanged = onRowLabelsChanged;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowLabelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy) callconv(.c) void `
    ///
    pub fn onRowLabelsChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_RowLabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnLabelsChanged` instead
    ///
    pub const ColumnLabelsChanged = columnLabelsChanged;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#columnLabelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn columnLabelsChanged(self: QItemModelBarDataProxy) void {
        qtc.QBarDataProxy_ColumnLabelsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColumnLabelsChanged` instead
    ///
    pub const OnColumnLabelsChanged = onColumnLabelsChanged;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#columnLabelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy) callconv(.c) void `
    ///
    pub fn onColumnLabelsChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_ColumnLabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `seriesChanged` instead
    ///
    pub const SeriesChanged = seriesChanged;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#seriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _series: QBar3DSeries `
    ///
    pub fn seriesChanged(self: QItemModelBarDataProxy, _series: anytype) void {
        comptime _ = @TypeOf(_series)._is_QBar3DSeries;
        qtc.QBarDataProxy_SeriesChanged(@ptrCast(self.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `onSeriesChanged` instead
    ///
    pub const OnSeriesChanged = onSeriesChanged;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#seriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, series: QBar3DSeries) callconv(.c) void `
    ///
    pub fn onSeriesChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QBar3DSeries) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_SeriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeRows3` instead
    ///
    pub const RemoveRows3 = removeRows3;

    /// Inherited from QBarDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` removeCount: i32 `
    ///
    /// ` removeLabels: bool `
    ///
    pub fn removeRows3(self: QItemModelBarDataProxy, rowIndex: i32, removeCount: i32, removeLabels: bool) void {
        qtc.QBarDataProxy_RemoveRows3(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(removeCount), removeLabels);
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QAbstractDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractdataproxy.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ## Returns:
    ///
    /// ` qabstractdataproxy_enums.DataType `
    ///
    pub fn type0(self: QItemModelBarDataProxy) i32 {
        return qtc.QAbstractDataProxy_Type(@ptrCast(self.ptr));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelBarDataProxy.objectName: Memory allocation failed");
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QItemModelBarDataProxy, name: []const u8) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn isWidgetType(self: QItemModelBarDataProxy) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn isWindowType(self: QItemModelBarDataProxy) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn isQuickItemType(self: QItemModelBarDataProxy) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn signalsBlocked(self: QItemModelBarDataProxy) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QItemModelBarDataProxy, b: bool) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn thread(self: QItemModelBarDataProxy) QThread {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QItemModelBarDataProxy, _thread: anytype) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QItemModelBarDataProxy, interval: i32) i32 {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QItemModelBarDataProxy, time: i64) i32 {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QItemModelBarDataProxy, id: i32) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QItemModelBarDataProxy, id: i32) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QItemModelBarDataProxy.children: Memory allocation failed");
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QItemModelBarDataProxy, _parent: anytype) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QItemModelBarDataProxy, filterObj: anytype) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QItemModelBarDataProxy, obj: anytype) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QItemModelBarDataProxy, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn disconnect3(self: QItemModelBarDataProxy) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QItemModelBarDataProxy, receiver: anytype) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn dumpObjectTree(self: QItemModelBarDataProxy) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn dumpObjectInfo(self: QItemModelBarDataProxy) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QItemModelBarDataProxy, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QItemModelBarDataProxy, name: [:0]const u8) QVariant {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QItemModelBarDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QItemModelBarDataProxy.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QItemModelBarDataProxy.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn bindingStorage(self: QItemModelBarDataProxy) QBindingStorage {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn bindingStorage2(self: QItemModelBarDataProxy) QBindingStorage {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn destroyed(self: QItemModelBarDataProxy) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy) callconv(.c) void) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn parent(self: QItemModelBarDataProxy) QObject {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QItemModelBarDataProxy, classname: [:0]const u8) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn deleteLater(self: QItemModelBarDataProxy) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QItemModelBarDataProxy, interval: i32, timerType: i32) i32 {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QItemModelBarDataProxy, time: i64, timerType: i32) i32 {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QItemModelBarDataProxy, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QItemModelBarDataProxy, signal: [:0]const u8) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QItemModelBarDataProxy, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QItemModelBarDataProxy, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QItemModelBarDataProxy, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QItemModelBarDataProxy, param1: anytype) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QObject) callconv(.c) void) void {
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QItemModelBarDataProxy, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemModelBarDataProxy_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QItemModelBarDataProxy, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemModelBarDataProxy_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelBarDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QEvent) callconv(.c) bool) void {
        qtc.QItemModelBarDataProxy_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QItemModelBarDataProxy, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemModelBarDataProxy_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QItemModelBarDataProxy, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemModelBarDataProxy_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelBarDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QObject, QEvent) callconv(.c) bool) void {
        qtc.QItemModelBarDataProxy_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QItemModelBarDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QItemModelBarDataProxy_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QItemModelBarDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QItemModelBarDataProxy_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelBarDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QTimerEvent) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QItemModelBarDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QItemModelBarDataProxy_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QItemModelBarDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QItemModelBarDataProxy_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelBarDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QChildEvent) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QItemModelBarDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QItemModelBarDataProxy_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QItemModelBarDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QItemModelBarDataProxy_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelBarDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QEvent) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QItemModelBarDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemModelBarDataProxy_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QItemModelBarDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemModelBarDataProxy_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelBarDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QMetaMethod) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QItemModelBarDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemModelBarDataProxy_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QItemModelBarDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemModelBarDataProxy_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelBarDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, QMetaMethod) callconv(.c) void) void {
        qtc.QItemModelBarDataProxy_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn sender(self: QItemModelBarDataProxy) QObject {
        return .{ .ptr = qtc.QItemModelBarDataProxy_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn senderSignalIndex(self: QItemModelBarDataProxy) i32 {
        return qtc.QItemModelBarDataProxy_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QItemModelBarDataProxy, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemModelBarDataProxy_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QItemModelBarDataProxy, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QItemModelBarDataProxy_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelBarDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelBarDataProxy, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QItemModelBarDataProxy, callback: *const fn (QItemModelBarDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#dtor.QItemModelBarDataProxy)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QItemModelBarDataProxy `
    ///
    pub fn delete(self: QItemModelBarDataProxy) void {
        qtc.QItemModelBarDataProxy_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#public-types)
pub const enums = struct {
    pub const MultiMatchBehavior = enum {
        pub const MMBFirst: i32 = 0;
        pub const MMBLast: i32 = 1;
        pub const MMBAverage: i32 = 2;
        pub const MMBCumulative: i32 = 3;
    };
};
