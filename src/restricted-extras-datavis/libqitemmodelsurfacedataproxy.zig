const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QRegularExpression = @import("libqt6").QRegularExpression;
const QSurface3DSeries = @import("libqt6").QSurface3DSeries;
const QSurfaceDataItem = @import("libqt6").QSurfaceDataItem;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractdataproxy_enums = @import("libqabstractdataproxy.zig").enums;
const qitemmodelsurfacedataproxy_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)
pub const QItemModelSurfaceDataProxy = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QItemModelSurfaceDataProxy,

    pub const _is_QItemModelSurfaceDataProxy = {};
    pub const _is_QSurfaceDataProxy = {};
    pub const _is_QAbstractDataProxy = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
    ///
    pub fn new() QItemModelSurfaceDataProxy {
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    pub fn new2(_itemModel: anytype) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new2(@ptrCast(_itemModel.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    pub fn new3(_itemModel: anytype, _yPosRole: []const u8) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const yPosRole_str = qtc.libqt_string{
            .len = _yPosRole.len,
            .data = _yPosRole.ptr,
        };
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new3(@ptrCast(_itemModel.ptr), yPosRole_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    pub fn new4(_itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _yPosRole: []const u8) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const yPosRole_str = qtc.libqt_string{
            .len = _yPosRole.len,
            .data = _yPosRole.ptr,
        };
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new4(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, yPosRole_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _xPosRole: []const u8 `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _zPosRole: []const u8 `
    ///
    pub fn new5(_itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _xPosRole: []const u8, _yPosRole: []const u8, _zPosRole: []const u8) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const xPosRole_str = qtc.libqt_string{
            .len = _xPosRole.len,
            .data = _xPosRole.ptr,
        };
        const yPosRole_str = qtc.libqt_string{
            .len = _yPosRole.len,
            .data = _yPosRole.ptr,
        };
        const zPosRole_str = qtc.libqt_string{
            .len = _zPosRole.len,
            .data = _zPosRole.ptr,
        };
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new5(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, xPosRole_str, yPosRole_str, zPosRole_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
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
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _rowCategories: []const []const u8 `
    ///
    /// ` _columnCategories: []const []const u8 `
    ///
    pub fn new6(allocator: std.mem.Allocator, _itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _yPosRole: []const u8, _rowCategories: []const []const u8, _columnCategories: []const []const u8) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const yPosRole_str = qtc.libqt_string{
            .len = _yPosRole.len,
            .data = _yPosRole.ptr,
        };
        const rowCategories_arr = allocator.alloc(qtc.libqt_string, _rowCategories.len) catch @panic("QItemModelSurfaceDataProxy.new6: Memory allocation failed");
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
        const columnCategories_arr = allocator.alloc(qtc.libqt_string, _columnCategories.len) catch @panic("QItemModelSurfaceDataProxy.new6: Memory allocation failed");
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
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new6(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, yPosRole_str, rowCategories_list, columnCategories_list) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
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
    /// ` _xPosRole: []const u8 `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _zPosRole: []const u8 `
    ///
    /// ` _rowCategories: []const []const u8 `
    ///
    /// ` _columnCategories: []const []const u8 `
    ///
    pub fn new7(allocator: std.mem.Allocator, _itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _xPosRole: []const u8, _yPosRole: []const u8, _zPosRole: []const u8, _rowCategories: []const []const u8, _columnCategories: []const []const u8) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const xPosRole_str = qtc.libqt_string{
            .len = _xPosRole.len,
            .data = _xPosRole.ptr,
        };
        const yPosRole_str = qtc.libqt_string{
            .len = _yPosRole.len,
            .data = _yPosRole.ptr,
        };
        const zPosRole_str = qtc.libqt_string{
            .len = _zPosRole.len,
            .data = _zPosRole.ptr,
        };
        const rowCategories_arr = allocator.alloc(qtc.libqt_string, _rowCategories.len) catch @panic("QItemModelSurfaceDataProxy.new7: Memory allocation failed");
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
        const columnCategories_arr = allocator.alloc(qtc.libqt_string, _columnCategories.len) catch @panic("QItemModelSurfaceDataProxy.new7: Memory allocation failed");
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
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new7(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, xPosRole_str, yPosRole_str, zPosRole_str, rowCategories_list, columnCategories_list) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new8(_parent: anytype) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new8(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new9(_itemModel: anytype, _parent: anytype) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new9(@ptrCast(_itemModel.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new10(_itemModel: anytype, _yPosRole: []const u8, _parent: anytype) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const yPosRole_str = qtc.libqt_string{
            .len = _yPosRole.len,
            .data = _yPosRole.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new10(@ptrCast(_itemModel.ptr), yPosRole_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new11(_itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _yPosRole: []const u8, _parent: anytype) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const yPosRole_str = qtc.libqt_string{
            .len = _yPosRole.len,
            .data = _yPosRole.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new11(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, yPosRole_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _xPosRole: []const u8 `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _zPosRole: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new12(_itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _xPosRole: []const u8, _yPosRole: []const u8, _zPosRole: []const u8, _parent: anytype) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const xPosRole_str = qtc.libqt_string{
            .len = _xPosRole.len,
            .data = _xPosRole.ptr,
        };
        const yPosRole_str = qtc.libqt_string{
            .len = _yPosRole.len,
            .data = _yPosRole.ptr,
        };
        const zPosRole_str = qtc.libqt_string{
            .len = _zPosRole.len,
            .data = _zPosRole.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new12(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, xPosRole_str, yPosRole_str, zPosRole_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new13` instead
    ///
    pub const New13 = new13;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
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
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _rowCategories: []const []const u8 `
    ///
    /// ` _columnCategories: []const []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new13(allocator: std.mem.Allocator, _itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _yPosRole: []const u8, _rowCategories: []const []const u8, _columnCategories: []const []const u8, _parent: anytype) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const yPosRole_str = qtc.libqt_string{
            .len = _yPosRole.len,
            .data = _yPosRole.ptr,
        };
        const rowCategories_arr = allocator.alloc(qtc.libqt_string, _rowCategories.len) catch @panic("QItemModelSurfaceDataProxy.new13: Memory allocation failed");
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
        const columnCategories_arr = allocator.alloc(qtc.libqt_string, _columnCategories.len) catch @panic("QItemModelSurfaceDataProxy.new13: Memory allocation failed");
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
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new13(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, yPosRole_str, rowCategories_list, columnCategories_list, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new14` instead
    ///
    pub const New14 = new14;

    /// Allocate a new QItemModelSurfaceDataProxy object in C++ memory
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
    /// ` _xPosRole: []const u8 `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _zPosRole: []const u8 `
    ///
    /// ` _rowCategories: []const []const u8 `
    ///
    /// ` _columnCategories: []const []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new14(allocator: std.mem.Allocator, _itemModel: anytype, _rowRole: []const u8, _columnRole: []const u8, _xPosRole: []const u8, _yPosRole: []const u8, _zPosRole: []const u8, _rowCategories: []const []const u8, _columnCategories: []const []const u8, _parent: anytype) QItemModelSurfaceDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const xPosRole_str = qtc.libqt_string{
            .len = _xPosRole.len,
            .data = _xPosRole.ptr,
        };
        const yPosRole_str = qtc.libqt_string{
            .len = _yPosRole.len,
            .data = _yPosRole.ptr,
        };
        const zPosRole_str = qtc.libqt_string{
            .len = _zPosRole.len,
            .data = _zPosRole.ptr,
        };
        const rowCategories_arr = allocator.alloc(qtc.libqt_string, _rowCategories.len) catch @panic("QItemModelSurfaceDataProxy.new14: Memory allocation failed");
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
        const columnCategories_arr = allocator.alloc(qtc.libqt_string, _columnCategories.len) catch @panic("QItemModelSurfaceDataProxy.new14: Memory allocation failed");
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
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_new14(@ptrCast(_itemModel.ptr), rowRole_str, columnRole_str, xPosRole_str, yPosRole_str, zPosRole_str, rowCategories_list, columnCategories_list, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn metaObject(self: QItemModelSurfaceDataProxy) QMetaObject {
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy) callconv(.c) QMetaObject) void {
        qtc.QItemModelSurfaceDataProxy_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn superMetaObject(self: QItemModelSurfaceDataProxy) QMetaObject {
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QItemModelSurfaceDataProxy, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemModelSurfaceDataProxy_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QItemModelSurfaceDataProxy_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QItemModelSurfaceDataProxy, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemModelSurfaceDataProxy_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QItemModelSurfaceDataProxy, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemModelSurfaceDataProxy_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QItemModelSurfaceDataProxy_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QItemModelSurfaceDataProxy, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemModelSurfaceDataProxy_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QItemModelSurfaceDataProxy_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setItemModel` instead
    ///
    pub const SetItemModel = setItemModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setItemModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    pub fn setItemModel(self: QItemModelSurfaceDataProxy, _itemModel: anytype) void {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        qtc.QItemModelSurfaceDataProxy_SetItemModel(@ptrCast(self.ptr), @ptrCast(_itemModel.ptr));
    }

    /// ### DEPRECATED: Use `itemModel` instead
    ///
    pub const ItemModel = itemModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#itemModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn itemModel(self: QItemModelSurfaceDataProxy) QAbstractItemModel {
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_ItemModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRowRole` instead
    ///
    pub const SetRowRole = setRowRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setRowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setRowRole(self: QItemModelSurfaceDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_SetRowRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `rowRole` instead
    ///
    pub const RowRole = rowRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rowRole(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelSurfaceDataProxy_RowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.rowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setColumnRole` instead
    ///
    pub const SetColumnRole = setColumnRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setColumnRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setColumnRole(self: QItemModelSurfaceDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_SetColumnRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `columnRole` instead
    ///
    pub const ColumnRole = columnRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn columnRole(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelSurfaceDataProxy_ColumnRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.columnRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setXPosRole` instead
    ///
    pub const SetXPosRole = setXPosRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setXPosRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setXPosRole(self: QItemModelSurfaceDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_SetXPosRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `xPosRole` instead
    ///
    pub const XPosRole = xPosRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn xPosRole(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelSurfaceDataProxy_XPosRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.xPosRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setYPosRole` instead
    ///
    pub const SetYPosRole = setYPosRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setYPosRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setYPosRole(self: QItemModelSurfaceDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_SetYPosRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `yPosRole` instead
    ///
    pub const YPosRole = yPosRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn yPosRole(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelSurfaceDataProxy_YPosRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.yPosRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setZPosRole` instead
    ///
    pub const SetZPosRole = setZPosRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setZPosRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setZPosRole(self: QItemModelSurfaceDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_SetZPosRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `zPosRole` instead
    ///
    pub const ZPosRole = zPosRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn zPosRole(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelSurfaceDataProxy_ZPosRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.zPosRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRowCategories` instead
    ///
    pub const SetRowCategories = setRowCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setRowCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` categories: []const []const u8 `
    ///
    pub fn setRowCategories(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator, categories: []const []const u8) void {
        const categories_arr = allocator.alloc(qtc.libqt_string, categories.len) catch @panic("QItemModelSurfaceDataProxy.setRowCategories: Memory allocation failed");
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
        qtc.QItemModelSurfaceDataProxy_SetRowCategories(@ptrCast(self.ptr), categories_list);
    }

    /// ### DEPRECATED: Use `rowCategories` instead
    ///
    pub const RowCategories = rowCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rowCategories(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QItemModelSurfaceDataProxy_RowCategories(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QItemModelSurfaceDataProxy.rowCategories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QItemModelSurfaceDataProxy.rowCategories: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setColumnCategories` instead
    ///
    pub const SetColumnCategories = setColumnCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setColumnCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` categories: []const []const u8 `
    ///
    pub fn setColumnCategories(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator, categories: []const []const u8) void {
        const categories_arr = allocator.alloc(qtc.libqt_string, categories.len) catch @panic("QItemModelSurfaceDataProxy.setColumnCategories: Memory allocation failed");
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
        qtc.QItemModelSurfaceDataProxy_SetColumnCategories(@ptrCast(self.ptr), categories_list);
    }

    /// ### DEPRECATED: Use `columnCategories` instead
    ///
    pub const ColumnCategories = columnCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn columnCategories(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QItemModelSurfaceDataProxy_ColumnCategories(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QItemModelSurfaceDataProxy.columnCategories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QItemModelSurfaceDataProxy.columnCategories: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setUseModelCategories` instead
    ///
    pub const SetUseModelCategories = setUseModelCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setUseModelCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` enable: bool `
    ///
    pub fn setUseModelCategories(self: QItemModelSurfaceDataProxy, enable: bool) void {
        qtc.QItemModelSurfaceDataProxy_SetUseModelCategories(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `useModelCategories` instead
    ///
    pub const UseModelCategories = useModelCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#useModelCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn useModelCategories(self: QItemModelSurfaceDataProxy) bool {
        return qtc.QItemModelSurfaceDataProxy_UseModelCategories(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoRowCategories` instead
    ///
    pub const SetAutoRowCategories = setAutoRowCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setAutoRowCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` enable: bool `
    ///
    pub fn setAutoRowCategories(self: QItemModelSurfaceDataProxy, enable: bool) void {
        qtc.QItemModelSurfaceDataProxy_SetAutoRowCategories(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `autoRowCategories` instead
    ///
    pub const AutoRowCategories = autoRowCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#autoRowCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn autoRowCategories(self: QItemModelSurfaceDataProxy) bool {
        return qtc.QItemModelSurfaceDataProxy_AutoRowCategories(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoColumnCategories` instead
    ///
    pub const SetAutoColumnCategories = setAutoColumnCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setAutoColumnCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` enable: bool `
    ///
    pub fn setAutoColumnCategories(self: QItemModelSurfaceDataProxy, enable: bool) void {
        qtc.QItemModelSurfaceDataProxy_SetAutoColumnCategories(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `autoColumnCategories` instead
    ///
    pub const AutoColumnCategories = autoColumnCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#autoColumnCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn autoColumnCategories(self: QItemModelSurfaceDataProxy) bool {
        return qtc.QItemModelSurfaceDataProxy_AutoColumnCategories(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `remap` instead
    ///
    pub const Remap = remap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#remap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _rowRole: []const u8 `
    ///
    /// ` _columnRole: []const u8 `
    ///
    /// ` _xPosRole: []const u8 `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _zPosRole: []const u8 `
    ///
    /// ` _rowCategories: []const []const u8 `
    ///
    /// ` _columnCategories: []const []const u8 `
    ///
    pub fn remap(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator, _rowRole: []const u8, _columnRole: []const u8, _xPosRole: []const u8, _yPosRole: []const u8, _zPosRole: []const u8, _rowCategories: []const []const u8, _columnCategories: []const []const u8) void {
        const rowRole_str = qtc.libqt_string{
            .len = _rowRole.len,
            .data = _rowRole.ptr,
        };
        const columnRole_str = qtc.libqt_string{
            .len = _columnRole.len,
            .data = _columnRole.ptr,
        };
        const xPosRole_str = qtc.libqt_string{
            .len = _xPosRole.len,
            .data = _xPosRole.ptr,
        };
        const yPosRole_str = qtc.libqt_string{
            .len = _yPosRole.len,
            .data = _yPosRole.ptr,
        };
        const zPosRole_str = qtc.libqt_string{
            .len = _zPosRole.len,
            .data = _zPosRole.ptr,
        };
        const rowCategories_arr = allocator.alloc(qtc.libqt_string, _rowCategories.len) catch @panic("QItemModelSurfaceDataProxy.remap: Memory allocation failed");
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
        const columnCategories_arr = allocator.alloc(qtc.libqt_string, _columnCategories.len) catch @panic("QItemModelSurfaceDataProxy.remap: Memory allocation failed");
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
        qtc.QItemModelSurfaceDataProxy_Remap(@ptrCast(self.ptr), rowRole_str, columnRole_str, xPosRole_str, yPosRole_str, zPosRole_str, rowCategories_list, columnCategories_list);
    }

    /// ### DEPRECATED: Use `rowCategoryIndex` instead
    ///
    pub const RowCategoryIndex = rowCategoryIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowCategoryIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` category: []const u8 `
    ///
    pub fn rowCategoryIndex(self: QItemModelSurfaceDataProxy, category: []const u8) i32 {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        return qtc.QItemModelSurfaceDataProxy_RowCategoryIndex(@ptrCast(self.ptr), category_str);
    }

    /// ### DEPRECATED: Use `columnCategoryIndex` instead
    ///
    pub const ColumnCategoryIndex = columnCategoryIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnCategoryIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` category: []const u8 `
    ///
    pub fn columnCategoryIndex(self: QItemModelSurfaceDataProxy, category: []const u8) i32 {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        return qtc.QItemModelSurfaceDataProxy_ColumnCategoryIndex(@ptrCast(self.ptr), category_str);
    }

    /// ### DEPRECATED: Use `setRowRolePattern` instead
    ///
    pub const SetRowRolePattern = setRowRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setRowRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setRowRolePattern(self: QItemModelSurfaceDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelSurfaceDataProxy_SetRowRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `rowRolePattern` instead
    ///
    pub const RowRolePattern = rowRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn rowRolePattern(self: QItemModelSurfaceDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_RowRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColumnRolePattern` instead
    ///
    pub const SetColumnRolePattern = setColumnRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setColumnRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setColumnRolePattern(self: QItemModelSurfaceDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelSurfaceDataProxy_SetColumnRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `columnRolePattern` instead
    ///
    pub const ColumnRolePattern = columnRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn columnRolePattern(self: QItemModelSurfaceDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_ColumnRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setXPosRolePattern` instead
    ///
    pub const SetXPosRolePattern = setXPosRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setXPosRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setXPosRolePattern(self: QItemModelSurfaceDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelSurfaceDataProxy_SetXPosRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `xPosRolePattern` instead
    ///
    pub const XPosRolePattern = xPosRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn xPosRolePattern(self: QItemModelSurfaceDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_XPosRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setYPosRolePattern` instead
    ///
    pub const SetYPosRolePattern = setYPosRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setYPosRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setYPosRolePattern(self: QItemModelSurfaceDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelSurfaceDataProxy_SetYPosRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `yPosRolePattern` instead
    ///
    pub const YPosRolePattern = yPosRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn yPosRolePattern(self: QItemModelSurfaceDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_YPosRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setZPosRolePattern` instead
    ///
    pub const SetZPosRolePattern = setZPosRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setZPosRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setZPosRolePattern(self: QItemModelSurfaceDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelSurfaceDataProxy_SetZPosRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `zPosRolePattern` instead
    ///
    pub const ZPosRolePattern = zPosRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn zPosRolePattern(self: QItemModelSurfaceDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_ZPosRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRowRoleReplace` instead
    ///
    pub const SetRowRoleReplace = setRowRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setRowRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setRowRoleReplace(self: QItemModelSurfaceDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_SetRowRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `rowRoleReplace` instead
    ///
    pub const RowRoleReplace = rowRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rowRoleReplace(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelSurfaceDataProxy_RowRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.rowRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setColumnRoleReplace` instead
    ///
    pub const SetColumnRoleReplace = setColumnRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setColumnRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setColumnRoleReplace(self: QItemModelSurfaceDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_SetColumnRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `columnRoleReplace` instead
    ///
    pub const ColumnRoleReplace = columnRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn columnRoleReplace(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelSurfaceDataProxy_ColumnRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.columnRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setXPosRoleReplace` instead
    ///
    pub const SetXPosRoleReplace = setXPosRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setXPosRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setXPosRoleReplace(self: QItemModelSurfaceDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_SetXPosRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `xPosRoleReplace` instead
    ///
    pub const XPosRoleReplace = xPosRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn xPosRoleReplace(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelSurfaceDataProxy_XPosRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.xPosRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setYPosRoleReplace` instead
    ///
    pub const SetYPosRoleReplace = setYPosRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setYPosRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setYPosRoleReplace(self: QItemModelSurfaceDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_SetYPosRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `yPosRoleReplace` instead
    ///
    pub const YPosRoleReplace = yPosRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn yPosRoleReplace(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelSurfaceDataProxy_YPosRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.yPosRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setZPosRoleReplace` instead
    ///
    pub const SetZPosRoleReplace = setZPosRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setZPosRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setZPosRoleReplace(self: QItemModelSurfaceDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_SetZPosRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `zPosRoleReplace` instead
    ///
    pub const ZPosRoleReplace = zPosRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn zPosRoleReplace(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelSurfaceDataProxy_ZPosRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.zPosRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMultiMatchBehavior` instead
    ///
    pub const SetMultiMatchBehavior = setMultiMatchBehavior;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setMultiMatchBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` behavior: qitemmodelsurfacedataproxy_enums.MultiMatchBehavior `
    ///
    pub fn setMultiMatchBehavior(self: QItemModelSurfaceDataProxy, behavior: i32) void {
        qtc.QItemModelSurfaceDataProxy_SetMultiMatchBehavior(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `multiMatchBehavior` instead
    ///
    pub const MultiMatchBehavior = multiMatchBehavior;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#multiMatchBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ## Returns:
    ///
    /// ` qitemmodelsurfacedataproxy_enums.MultiMatchBehavior `
    ///
    pub fn multiMatchBehavior(self: QItemModelSurfaceDataProxy) i32 {
        return qtc.QItemModelSurfaceDataProxy_MultiMatchBehavior(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemModelChanged` instead
    ///
    pub const ItemModelChanged = itemModelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#itemModelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    pub fn itemModelChanged(self: QItemModelSurfaceDataProxy, _itemModel: anytype) void {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        qtc.QItemModelSurfaceDataProxy_ItemModelChanged(@ptrCast(self.ptr), @ptrCast(_itemModel.ptr));
    }

    /// ### DEPRECATED: Use `onItemModelChanged` instead
    ///
    pub const OnItemModelChanged = onItemModelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#itemModelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, itemModel: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn onItemModelChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QAbstractItemModel) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_ItemModelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowRoleChanged` instead
    ///
    pub const RowRoleChanged = rowRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn rowRoleChanged(self: QItemModelSurfaceDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_RowRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onRowRoleChanged` instead
    ///
    pub const OnRowRoleChanged = onRowRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRowRoleChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_RowRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnRoleChanged` instead
    ///
    pub const ColumnRoleChanged = columnRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn columnRoleChanged(self: QItemModelSurfaceDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_ColumnRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onColumnRoleChanged` instead
    ///
    pub const OnColumnRoleChanged = onColumnRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onColumnRoleChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_ColumnRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xPosRoleChanged` instead
    ///
    pub const XPosRoleChanged = xPosRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn xPosRoleChanged(self: QItemModelSurfaceDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_XPosRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onXPosRoleChanged` instead
    ///
    pub const OnXPosRoleChanged = onXPosRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onXPosRoleChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_XPosRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yPosRoleChanged` instead
    ///
    pub const YPosRoleChanged = yPosRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn yPosRoleChanged(self: QItemModelSurfaceDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_YPosRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onYPosRoleChanged` instead
    ///
    pub const OnYPosRoleChanged = onYPosRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onYPosRoleChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_YPosRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zPosRoleChanged` instead
    ///
    pub const ZPosRoleChanged = zPosRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn zPosRoleChanged(self: QItemModelSurfaceDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_ZPosRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onZPosRoleChanged` instead
    ///
    pub const OnZPosRoleChanged = onZPosRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onZPosRoleChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_ZPosRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowCategoriesChanged` instead
    ///
    pub const RowCategoriesChanged = rowCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowCategoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn rowCategoriesChanged(self: QItemModelSurfaceDataProxy) void {
        qtc.QItemModelSurfaceDataProxy_RowCategoriesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRowCategoriesChanged` instead
    ///
    pub const OnRowCategoriesChanged = onRowCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowCategoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy) callconv(.c) void `
    ///
    pub fn onRowCategoriesChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_RowCategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnCategoriesChanged` instead
    ///
    pub const ColumnCategoriesChanged = columnCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnCategoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn columnCategoriesChanged(self: QItemModelSurfaceDataProxy) void {
        qtc.QItemModelSurfaceDataProxy_ColumnCategoriesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColumnCategoriesChanged` instead
    ///
    pub const OnColumnCategoriesChanged = onColumnCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnCategoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy) callconv(.c) void `
    ///
    pub fn onColumnCategoriesChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_ColumnCategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `useModelCategoriesChanged` instead
    ///
    pub const UseModelCategoriesChanged = useModelCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#useModelCategoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` enable: bool `
    ///
    pub fn useModelCategoriesChanged(self: QItemModelSurfaceDataProxy, enable: bool) void {
        qtc.QItemModelSurfaceDataProxy_UseModelCategoriesChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onUseModelCategoriesChanged` instead
    ///
    pub const OnUseModelCategoriesChanged = onUseModelCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#useModelCategoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, enable: bool) callconv(.c) void `
    ///
    pub fn onUseModelCategoriesChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, bool) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_UseModelCategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoRowCategoriesChanged` instead
    ///
    pub const AutoRowCategoriesChanged = autoRowCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#autoRowCategoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` enable: bool `
    ///
    pub fn autoRowCategoriesChanged(self: QItemModelSurfaceDataProxy, enable: bool) void {
        qtc.QItemModelSurfaceDataProxy_AutoRowCategoriesChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onAutoRowCategoriesChanged` instead
    ///
    pub const OnAutoRowCategoriesChanged = onAutoRowCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#autoRowCategoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, enable: bool) callconv(.c) void `
    ///
    pub fn onAutoRowCategoriesChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, bool) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_AutoRowCategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoColumnCategoriesChanged` instead
    ///
    pub const AutoColumnCategoriesChanged = autoColumnCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#autoColumnCategoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` enable: bool `
    ///
    pub fn autoColumnCategoriesChanged(self: QItemModelSurfaceDataProxy, enable: bool) void {
        qtc.QItemModelSurfaceDataProxy_AutoColumnCategoriesChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onAutoColumnCategoriesChanged` instead
    ///
    pub const OnAutoColumnCategoriesChanged = onAutoColumnCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#autoColumnCategoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, enable: bool) callconv(.c) void `
    ///
    pub fn onAutoColumnCategoriesChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, bool) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_AutoColumnCategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowRolePatternChanged` instead
    ///
    pub const RowRolePatternChanged = rowRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn rowRolePatternChanged(self: QItemModelSurfaceDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelSurfaceDataProxy_RowRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onRowRolePatternChanged` instead
    ///
    pub const OnRowRolePatternChanged = onRowRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onRowRolePatternChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_RowRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnRolePatternChanged` instead
    ///
    pub const ColumnRolePatternChanged = columnRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn columnRolePatternChanged(self: QItemModelSurfaceDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelSurfaceDataProxy_ColumnRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onColumnRolePatternChanged` instead
    ///
    pub const OnColumnRolePatternChanged = onColumnRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onColumnRolePatternChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_ColumnRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xPosRolePatternChanged` instead
    ///
    pub const XPosRolePatternChanged = xPosRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn xPosRolePatternChanged(self: QItemModelSurfaceDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelSurfaceDataProxy_XPosRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onXPosRolePatternChanged` instead
    ///
    pub const OnXPosRolePatternChanged = onXPosRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onXPosRolePatternChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_XPosRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yPosRolePatternChanged` instead
    ///
    pub const YPosRolePatternChanged = yPosRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn yPosRolePatternChanged(self: QItemModelSurfaceDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelSurfaceDataProxy_YPosRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onYPosRolePatternChanged` instead
    ///
    pub const OnYPosRolePatternChanged = onYPosRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onYPosRolePatternChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_YPosRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zPosRolePatternChanged` instead
    ///
    pub const ZPosRolePatternChanged = zPosRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn zPosRolePatternChanged(self: QItemModelSurfaceDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelSurfaceDataProxy_ZPosRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onZPosRolePatternChanged` instead
    ///
    pub const OnZPosRolePatternChanged = onZPosRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onZPosRolePatternChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_ZPosRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowRoleReplaceChanged` instead
    ///
    pub const RowRoleReplaceChanged = rowRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn rowRoleReplaceChanged(self: QItemModelSurfaceDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_RowRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onRowRoleReplaceChanged` instead
    ///
    pub const OnRowRoleReplaceChanged = onRowRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRowRoleReplaceChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_RowRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnRoleReplaceChanged` instead
    ///
    pub const ColumnRoleReplaceChanged = columnRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn columnRoleReplaceChanged(self: QItemModelSurfaceDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_ColumnRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onColumnRoleReplaceChanged` instead
    ///
    pub const OnColumnRoleReplaceChanged = onColumnRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onColumnRoleReplaceChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_ColumnRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xPosRoleReplaceChanged` instead
    ///
    pub const XPosRoleReplaceChanged = xPosRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn xPosRoleReplaceChanged(self: QItemModelSurfaceDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_XPosRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onXPosRoleReplaceChanged` instead
    ///
    pub const OnXPosRoleReplaceChanged = onXPosRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onXPosRoleReplaceChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_XPosRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yPosRoleReplaceChanged` instead
    ///
    pub const YPosRoleReplaceChanged = yPosRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn yPosRoleReplaceChanged(self: QItemModelSurfaceDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_YPosRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onYPosRoleReplaceChanged` instead
    ///
    pub const OnYPosRoleReplaceChanged = onYPosRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onYPosRoleReplaceChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_YPosRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zPosRoleReplaceChanged` instead
    ///
    pub const ZPosRoleReplaceChanged = zPosRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn zPosRoleReplaceChanged(self: QItemModelSurfaceDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelSurfaceDataProxy_ZPosRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onZPosRoleReplaceChanged` instead
    ///
    pub const OnZPosRoleReplaceChanged = onZPosRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onZPosRoleReplaceChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_ZPosRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multiMatchBehaviorChanged` instead
    ///
    pub const MultiMatchBehaviorChanged = multiMatchBehaviorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#multiMatchBehaviorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` behavior: qitemmodelsurfacedataproxy_enums.MultiMatchBehavior `
    ///
    pub fn multiMatchBehaviorChanged(self: QItemModelSurfaceDataProxy, behavior: i32) void {
        qtc.QItemModelSurfaceDataProxy_MultiMatchBehaviorChanged(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `onMultiMatchBehaviorChanged` instead
    ///
    pub const OnMultiMatchBehaviorChanged = onMultiMatchBehaviorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#multiMatchBehaviorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, behavior: qitemmodelsurfacedataproxy_enums.MultiMatchBehavior) callconv(.c) void `
    ///
    pub fn onMultiMatchBehaviorChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, i32) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_Connect_MultiMatchBehaviorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QItemModelSurfaceDataProxy_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.tr2: Memory allocation failed");
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
        var _str = qtc.QItemModelSurfaceDataProxy_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn series(self: QItemModelSurfaceDataProxy) QSurface3DSeries {
        return .{ .ptr = qtc.QSurfaceDataProxy_Series(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn rowCount(self: QItemModelSurfaceDataProxy) i32 {
        return qtc.QSurfaceDataProxy_RowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn columnCount(self: QItemModelSurfaceDataProxy) i32 {
        return qtc.QSurfaceDataProxy_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `array` instead
    ///
    pub const Array = array;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#array)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn array(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) [][]QSurfaceDataItem {
        const _arr: qtc.libqt_list = qtc.QSurfaceDataProxy_Array(@ptrCast(self.ptr));
        const _list: [*]qtc.libqt_list = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_free(_list[i].data);
            qtc.libqt_free(_list);
        }
        const _ret = allocator.alloc([]QSurfaceDataItem, _arr.len) catch @panic("QItemModelSurfaceDataProxy.array: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val: [*]QtC.QSurfaceDataItem = @ptrCast(@alignCast(_list[i].data));
            _ret[i] = allocator.alloc(QSurfaceDataItem, _list[i].len) catch @panic("QItemModelSurfaceDataProxy.array: Memory allocation failed");
            for (0.._list[i].len) |j|
                _ret[i][j] = .{ .ptr = _data_val[j] };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` columnIndex: i32 `
    ///
    pub fn itemAt(self: QItemModelSurfaceDataProxy, rowIndex: i32, columnIndex: i32) QSurfaceDataItem {
        return .{ .ptr = qtc.QSurfaceDataProxy_ItemAt(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(columnIndex)) };
    }

    /// ### DEPRECATED: Use `itemAt2` instead
    ///
    pub const ItemAt2 = itemAt2;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` position: QPoint `
    ///
    pub fn itemAt2(self: QItemModelSurfaceDataProxy, position: anytype) QSurfaceDataItem {
        comptime _ = @TypeOf(position)._is_QPoint;
        return .{ .ptr = qtc.QSurfaceDataProxy_ItemAt2(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `resetArray` instead
    ///
    pub const ResetArray = resetArray;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#resetArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` newArray: [][]QSurfaceDataItem `
    ///
    pub fn resetArray(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator, newArray: [][]QSurfaceDataItem) void {
        const newArray_arr = allocator.alloc(qtc.libqt_list, newArray.len) catch @panic("QItemModelSurfaceDataProxy.resetArray: Memory allocation failed");
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
        qtc.QSurfaceDataProxy_ResetArray(@ptrCast(self.ptr), newArray_list);
    }

    /// ### DEPRECATED: Use `setRow` instead
    ///
    pub const SetRow = setRow;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` row: []QSurfaceDataItem `
    ///
    pub fn setRow(self: QItemModelSurfaceDataProxy, rowIndex: i32, row: []QSurfaceDataItem) void {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        qtc.QSurfaceDataProxy_SetRow(@ptrCast(self.ptr), @bitCast(rowIndex), row_list);
    }

    /// ### DEPRECATED: Use `setRows` instead
    ///
    pub const SetRows = setRows;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` rows: [][]QSurfaceDataItem `
    ///
    pub fn setRows(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator, rowIndex: i32, rows: [][]QSurfaceDataItem) void {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QItemModelSurfaceDataProxy.setRows: Memory allocation failed");
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
        qtc.QSurfaceDataProxy_SetRows(@ptrCast(self.ptr), @bitCast(rowIndex), rows_list);
    }

    /// ### DEPRECATED: Use `setItem` instead
    ///
    pub const SetItem = setItem;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` columnIndex: i32 `
    ///
    /// ` item: QSurfaceDataItem `
    ///
    pub fn setItem(self: QItemModelSurfaceDataProxy, rowIndex: i32, columnIndex: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QSurfaceDataItem;
        qtc.QSurfaceDataProxy_SetItem(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(columnIndex), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setItem2` instead
    ///
    pub const SetItem2 = setItem2;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` position: QPoint `
    ///
    /// ` item: QSurfaceDataItem `
    ///
    pub fn setItem2(self: QItemModelSurfaceDataProxy, position: anytype, item: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        comptime _ = @TypeOf(item)._is_QSurfaceDataItem;
        qtc.QSurfaceDataProxy_SetItem2(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `addRow` instead
    ///
    pub const AddRow = addRow;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` row: []QSurfaceDataItem `
    ///
    pub fn addRow(self: QItemModelSurfaceDataProxy, row: []QSurfaceDataItem) i32 {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        return qtc.QSurfaceDataProxy_AddRow(@ptrCast(self.ptr), row_list);
    }

    /// ### DEPRECATED: Use `addRows` instead
    ///
    pub const AddRows = addRows;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#addRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rows: [][]QSurfaceDataItem `
    ///
    pub fn addRows(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator, rows: [][]QSurfaceDataItem) i32 {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QItemModelSurfaceDataProxy.addRows: Memory allocation failed");
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
        return qtc.QSurfaceDataProxy_AddRows(@ptrCast(self.ptr), rows_list);
    }

    /// ### DEPRECATED: Use `insertRow` instead
    ///
    pub const InsertRow = insertRow;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` row: []QSurfaceDataItem `
    ///
    pub fn insertRow(self: QItemModelSurfaceDataProxy, rowIndex: i32, row: []QSurfaceDataItem) void {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        qtc.QSurfaceDataProxy_InsertRow(@ptrCast(self.ptr), @bitCast(rowIndex), row_list);
    }

    /// ### DEPRECATED: Use `insertRows` instead
    ///
    pub const InsertRows = insertRows;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` rows: [][]QSurfaceDataItem `
    ///
    pub fn insertRows(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator, rowIndex: i32, rows: [][]QSurfaceDataItem) void {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QItemModelSurfaceDataProxy.insertRows: Memory allocation failed");
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
        qtc.QSurfaceDataProxy_InsertRows(@ptrCast(self.ptr), @bitCast(rowIndex), rows_list);
    }

    /// ### DEPRECATED: Use `removeRows` instead
    ///
    pub const RemoveRows = removeRows;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` removeCount: i32 `
    ///
    pub fn removeRows(self: QItemModelSurfaceDataProxy, rowIndex: i32, removeCount: i32) void {
        qtc.QSurfaceDataProxy_RemoveRows(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(removeCount));
    }

    /// ### DEPRECATED: Use `arrayReset` instead
    ///
    pub const ArrayReset = arrayReset;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#arrayReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn arrayReset(self: QItemModelSurfaceDataProxy) void {
        qtc.QSurfaceDataProxy_ArrayReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onArrayReset` instead
    ///
    pub const OnArrayReset = onArrayReset;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#arrayReset)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy) callconv(.c) void `
    ///
    pub fn onArrayReset(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_ArrayReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsAdded` instead
    ///
    pub const RowsAdded = rowsAdded;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsAdded(self: QItemModelSurfaceDataProxy, startIndex: i32, count: i32) void {
        qtc.QSurfaceDataProxy_RowsAdded(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsAdded` instead
    ///
    pub const OnRowsAdded = onRowsAdded;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsAdded(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_RowsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsChanged` instead
    ///
    pub const RowsChanged = rowsChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsChanged(self: QItemModelSurfaceDataProxy, startIndex: i32, count: i32) void {
        qtc.QSurfaceDataProxy_RowsChanged(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsChanged` instead
    ///
    pub const OnRowsChanged = onRowsChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_RowsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsRemoved` instead
    ///
    pub const RowsRemoved = rowsRemoved;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsRemoved(self: QItemModelSurfaceDataProxy, startIndex: i32, count: i32) void {
        qtc.QSurfaceDataProxy_RowsRemoved(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsRemoved` instead
    ///
    pub const OnRowsRemoved = onRowsRemoved;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsRemoved(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_RowsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsInserted` instead
    ///
    pub const RowsInserted = rowsInserted;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsInserted(self: QItemModelSurfaceDataProxy, startIndex: i32, count: i32) void {
        qtc.QSurfaceDataProxy_RowsInserted(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsInserted` instead
    ///
    pub const OnRowsInserted = onRowsInserted;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsInserted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_RowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemChanged` instead
    ///
    pub const ItemChanged = itemChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` columnIndex: i32 `
    ///
    pub fn itemChanged(self: QItemModelSurfaceDataProxy, rowIndex: i32, columnIndex: i32) void {
        qtc.QSurfaceDataProxy_ItemChanged(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(columnIndex));
    }

    /// ### DEPRECATED: Use `onItemChanged` instead
    ///
    pub const OnItemChanged = onItemChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, rowIndex: i32, columnIndex: i32) callconv(.c) void `
    ///
    pub fn onItemChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_ItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowCountChanged` instead
    ///
    pub const RowCountChanged = rowCountChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` count: i32 `
    ///
    pub fn rowCountChanged(self: QItemModelSurfaceDataProxy, count: i32) void {
        qtc.QSurfaceDataProxy_RowCountChanged(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowCountChanged` instead
    ///
    pub const OnRowCountChanged = onRowCountChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, count: i32) callconv(.c) void `
    ///
    pub fn onRowCountChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_RowCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnCountChanged` instead
    ///
    pub const ColumnCountChanged = columnCountChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#columnCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` count: i32 `
    ///
    pub fn columnCountChanged(self: QItemModelSurfaceDataProxy, count: i32) void {
        qtc.QSurfaceDataProxy_ColumnCountChanged(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onColumnCountChanged` instead
    ///
    pub const OnColumnCountChanged = onColumnCountChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#columnCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, count: i32) callconv(.c) void `
    ///
    pub fn onColumnCountChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_ColumnCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `seriesChanged` instead
    ///
    pub const SeriesChanged = seriesChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#seriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _series: QSurface3DSeries `
    ///
    pub fn seriesChanged(self: QItemModelSurfaceDataProxy, _series: anytype) void {
        comptime _ = @TypeOf(_series)._is_QSurface3DSeries;
        qtc.QSurfaceDataProxy_SeriesChanged(@ptrCast(self.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `onSeriesChanged` instead
    ///
    pub const OnSeriesChanged = onSeriesChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#seriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, series: QSurface3DSeries) callconv(.c) void `
    ///
    pub fn onSeriesChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QSurface3DSeries) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_SeriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ## Returns:
    ///
    /// ` qabstractdataproxy_enums.DataType `
    ///
    pub fn type0(self: QItemModelSurfaceDataProxy) i32 {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelSurfaceDataProxy.objectName: Memory allocation failed");
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QItemModelSurfaceDataProxy, name: []const u8) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn isWidgetType(self: QItemModelSurfaceDataProxy) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn isWindowType(self: QItemModelSurfaceDataProxy) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn isQuickItemType(self: QItemModelSurfaceDataProxy) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn signalsBlocked(self: QItemModelSurfaceDataProxy) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QItemModelSurfaceDataProxy, b: bool) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn thread(self: QItemModelSurfaceDataProxy) QThread {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QItemModelSurfaceDataProxy, _thread: anytype) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QItemModelSurfaceDataProxy, interval: i32) i32 {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QItemModelSurfaceDataProxy, time: i64) i32 {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QItemModelSurfaceDataProxy, id: i32) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QItemModelSurfaceDataProxy, id: i32) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QItemModelSurfaceDataProxy.children: Memory allocation failed");
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QItemModelSurfaceDataProxy, _parent: anytype) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QItemModelSurfaceDataProxy, filterObj: anytype) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QItemModelSurfaceDataProxy, obj: anytype) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QItemModelSurfaceDataProxy, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn disconnect3(self: QItemModelSurfaceDataProxy) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QItemModelSurfaceDataProxy, receiver: anytype) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn dumpObjectTree(self: QItemModelSurfaceDataProxy) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn dumpObjectInfo(self: QItemModelSurfaceDataProxy) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QItemModelSurfaceDataProxy, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QItemModelSurfaceDataProxy, name: [:0]const u8) QVariant {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QItemModelSurfaceDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QItemModelSurfaceDataProxy.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QItemModelSurfaceDataProxy.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn bindingStorage(self: QItemModelSurfaceDataProxy) QBindingStorage {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn bindingStorage2(self: QItemModelSurfaceDataProxy) QBindingStorage {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn destroyed(self: QItemModelSurfaceDataProxy) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy) callconv(.c) void) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn parent(self: QItemModelSurfaceDataProxy) QObject {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QItemModelSurfaceDataProxy, classname: [:0]const u8) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn deleteLater(self: QItemModelSurfaceDataProxy) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QItemModelSurfaceDataProxy, interval: i32, timerType: i32) i32 {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QItemModelSurfaceDataProxy, time: i64, timerType: i32) i32 {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QItemModelSurfaceDataProxy, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QItemModelSurfaceDataProxy, signal: [:0]const u8) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QItemModelSurfaceDataProxy, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QItemModelSurfaceDataProxy, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QItemModelSurfaceDataProxy, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QItemModelSurfaceDataProxy, param1: anytype) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QObject) callconv(.c) void) void {
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QItemModelSurfaceDataProxy, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemModelSurfaceDataProxy_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QItemModelSurfaceDataProxy, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemModelSurfaceDataProxy_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QEvent) callconv(.c) bool) void {
        qtc.QItemModelSurfaceDataProxy_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QItemModelSurfaceDataProxy, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemModelSurfaceDataProxy_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QItemModelSurfaceDataProxy, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemModelSurfaceDataProxy_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QObject, QEvent) callconv(.c) bool) void {
        qtc.QItemModelSurfaceDataProxy_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QItemModelSurfaceDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QItemModelSurfaceDataProxy_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QItemModelSurfaceDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QItemModelSurfaceDataProxy_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QTimerEvent) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QItemModelSurfaceDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QItemModelSurfaceDataProxy_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QItemModelSurfaceDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QItemModelSurfaceDataProxy_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QChildEvent) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QItemModelSurfaceDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QItemModelSurfaceDataProxy_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QItemModelSurfaceDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QItemModelSurfaceDataProxy_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QEvent) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QItemModelSurfaceDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemModelSurfaceDataProxy_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QItemModelSurfaceDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemModelSurfaceDataProxy_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QMetaMethod) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QItemModelSurfaceDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemModelSurfaceDataProxy_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QItemModelSurfaceDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemModelSurfaceDataProxy_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, QMetaMethod) callconv(.c) void) void {
        qtc.QItemModelSurfaceDataProxy_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn sender(self: QItemModelSurfaceDataProxy) QObject {
        return .{ .ptr = qtc.QItemModelSurfaceDataProxy_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn senderSignalIndex(self: QItemModelSurfaceDataProxy) i32 {
        return qtc.QItemModelSurfaceDataProxy_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QItemModelSurfaceDataProxy, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemModelSurfaceDataProxy_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QItemModelSurfaceDataProxy, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QItemModelSurfaceDataProxy_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelSurfaceDataProxy, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QItemModelSurfaceDataProxy, callback: *const fn (QItemModelSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#dtor.QItemModelSurfaceDataProxy)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QItemModelSurfaceDataProxy `
    ///
    pub fn delete(self: QItemModelSurfaceDataProxy) void {
        qtc.QItemModelSurfaceDataProxy_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#public-types)
pub const enums = struct {
    pub const MultiMatchBehavior = enum {
        pub const MMBFirst: i32 = 0;
        pub const MMBLast: i32 = 1;
        pub const MMBAverage: i32 = 2;
        pub const MMBCumulativeY: i32 = 3;
    };
};
