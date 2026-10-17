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
const QRegularExpression = @import("libqt6").QRegularExpression;
const QScatter3DSeries = @import("libqt6").QScatter3DSeries;
const QScatterDataItem = @import("libqt6").QScatterDataItem;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractdataproxy_enums = @import("libqabstractdataproxy.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html)
pub const QItemModelScatterDataProxy = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QItemModelScatterDataProxy,

    pub const _is_QItemModelScatterDataProxy = {};
    pub const _is_QScatterDataProxy = {};
    pub const _is_QAbstractDataProxy = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QItemModelScatterDataProxy object in C++ memory
    ///
    pub fn new() QItemModelScatterDataProxy {
        return .{ .ptr = qtc.QItemModelScatterDataProxy_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QItemModelScatterDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    pub fn new2(_itemModel: anytype) QItemModelScatterDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        return .{ .ptr = qtc.QItemModelScatterDataProxy_new2(@ptrCast(_itemModel.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QItemModelScatterDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _xPosRole: []const u8 `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _zPosRole: []const u8 `
    ///
    pub fn new3(_itemModel: anytype, _xPosRole: []const u8, _yPosRole: []const u8, _zPosRole: []const u8) QItemModelScatterDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
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
        return .{ .ptr = qtc.QItemModelScatterDataProxy_new3(@ptrCast(_itemModel.ptr), xPosRole_str, yPosRole_str, zPosRole_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QItemModelScatterDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _xPosRole: []const u8 `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _zPosRole: []const u8 `
    ///
    /// ` _rotationRole: []const u8 `
    ///
    pub fn new4(_itemModel: anytype, _xPosRole: []const u8, _yPosRole: []const u8, _zPosRole: []const u8, _rotationRole: []const u8) QItemModelScatterDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
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
        const rotationRole_str = qtc.libqt_string{
            .len = _rotationRole.len,
            .data = _rotationRole.ptr,
        };
        return .{ .ptr = qtc.QItemModelScatterDataProxy_new4(@ptrCast(_itemModel.ptr), xPosRole_str, yPosRole_str, zPosRole_str, rotationRole_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QItemModelScatterDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new5(_parent: anytype) QItemModelScatterDataProxy {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelScatterDataProxy_new5(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QItemModelScatterDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new6(_itemModel: anytype, _parent: anytype) QItemModelScatterDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelScatterDataProxy_new6(@ptrCast(_itemModel.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QItemModelScatterDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _xPosRole: []const u8 `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _zPosRole: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new7(_itemModel: anytype, _xPosRole: []const u8, _yPosRole: []const u8, _zPosRole: []const u8, _parent: anytype) QItemModelScatterDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
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
        return .{ .ptr = qtc.QItemModelScatterDataProxy_new7(@ptrCast(_itemModel.ptr), xPosRole_str, yPosRole_str, zPosRole_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QItemModelScatterDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    /// ` _xPosRole: []const u8 `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _zPosRole: []const u8 `
    ///
    /// ` _rotationRole: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new8(_itemModel: anytype, _xPosRole: []const u8, _yPosRole: []const u8, _zPosRole: []const u8, _rotationRole: []const u8, _parent: anytype) QItemModelScatterDataProxy {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
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
        const rotationRole_str = qtc.libqt_string{
            .len = _rotationRole.len,
            .data = _rotationRole.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemModelScatterDataProxy_new8(@ptrCast(_itemModel.ptr), xPosRole_str, yPosRole_str, zPosRole_str, rotationRole_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn metaObject(self: QItemModelScatterDataProxy) QMetaObject {
        return .{ .ptr = qtc.QItemModelScatterDataProxy_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy) callconv(.c) QMetaObject) void {
        qtc.QItemModelScatterDataProxy_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn superMetaObject(self: QItemModelScatterDataProxy) QMetaObject {
        return .{ .ptr = qtc.QItemModelScatterDataProxy_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QItemModelScatterDataProxy, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemModelScatterDataProxy_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QItemModelScatterDataProxy_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QItemModelScatterDataProxy, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemModelScatterDataProxy_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QItemModelScatterDataProxy, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemModelScatterDataProxy_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QItemModelScatterDataProxy_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QItemModelScatterDataProxy, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemModelScatterDataProxy_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QItemModelScatterDataProxy_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelScatterDataProxy.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setItemModel` instead
    ///
    pub const SetItemModel = setItemModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setItemModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    pub fn setItemModel(self: QItemModelScatterDataProxy, _itemModel: anytype) void {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        qtc.QItemModelScatterDataProxy_SetItemModel(@ptrCast(self.ptr), @ptrCast(_itemModel.ptr));
    }

    /// ### DEPRECATED: Use `itemModel` instead
    ///
    pub const ItemModel = itemModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#itemModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn itemModel(self: QItemModelScatterDataProxy) QAbstractItemModel {
        return .{ .ptr = qtc.QItemModelScatterDataProxy_ItemModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setXPosRole` instead
    ///
    pub const SetXPosRole = setXPosRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setXPosRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setXPosRole(self: QItemModelScatterDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelScatterDataProxy_SetXPosRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `xPosRole` instead
    ///
    pub const XPosRole = xPosRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn xPosRole(self: QItemModelScatterDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelScatterDataProxy_XPosRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelScatterDataProxy.xPosRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setYPosRole` instead
    ///
    pub const SetYPosRole = setYPosRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setYPosRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setYPosRole(self: QItemModelScatterDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelScatterDataProxy_SetYPosRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `yPosRole` instead
    ///
    pub const YPosRole = yPosRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn yPosRole(self: QItemModelScatterDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelScatterDataProxy_YPosRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelScatterDataProxy.yPosRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setZPosRole` instead
    ///
    pub const SetZPosRole = setZPosRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setZPosRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setZPosRole(self: QItemModelScatterDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelScatterDataProxy_SetZPosRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `zPosRole` instead
    ///
    pub const ZPosRole = zPosRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn zPosRole(self: QItemModelScatterDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelScatterDataProxy_ZPosRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelScatterDataProxy.zPosRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRotationRole` instead
    ///
    pub const SetRotationRole = setRotationRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setRotationRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn setRotationRole(self: QItemModelScatterDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelScatterDataProxy_SetRotationRole(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `rotationRole` instead
    ///
    pub const RotationRole = rotationRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rotationRole(self: QItemModelScatterDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelScatterDataProxy_RotationRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelScatterDataProxy.rotationRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `remap` instead
    ///
    pub const Remap = remap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#remap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _xPosRole: []const u8 `
    ///
    /// ` _yPosRole: []const u8 `
    ///
    /// ` _zPosRole: []const u8 `
    ///
    /// ` _rotationRole: []const u8 `
    ///
    pub fn remap(self: QItemModelScatterDataProxy, _xPosRole: []const u8, _yPosRole: []const u8, _zPosRole: []const u8, _rotationRole: []const u8) void {
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
        const rotationRole_str = qtc.libqt_string{
            .len = _rotationRole.len,
            .data = _rotationRole.ptr,
        };
        qtc.QItemModelScatterDataProxy_Remap(@ptrCast(self.ptr), xPosRole_str, yPosRole_str, zPosRole_str, rotationRole_str);
    }

    /// ### DEPRECATED: Use `setXPosRolePattern` instead
    ///
    pub const SetXPosRolePattern = setXPosRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setXPosRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setXPosRolePattern(self: QItemModelScatterDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelScatterDataProxy_SetXPosRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `xPosRolePattern` instead
    ///
    pub const XPosRolePattern = xPosRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn xPosRolePattern(self: QItemModelScatterDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelScatterDataProxy_XPosRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setYPosRolePattern` instead
    ///
    pub const SetYPosRolePattern = setYPosRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setYPosRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setYPosRolePattern(self: QItemModelScatterDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelScatterDataProxy_SetYPosRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `yPosRolePattern` instead
    ///
    pub const YPosRolePattern = yPosRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn yPosRolePattern(self: QItemModelScatterDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelScatterDataProxy_YPosRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setZPosRolePattern` instead
    ///
    pub const SetZPosRolePattern = setZPosRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setZPosRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setZPosRolePattern(self: QItemModelScatterDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelScatterDataProxy_SetZPosRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `zPosRolePattern` instead
    ///
    pub const ZPosRolePattern = zPosRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn zPosRolePattern(self: QItemModelScatterDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelScatterDataProxy_ZPosRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRotationRolePattern` instead
    ///
    pub const SetRotationRolePattern = setRotationRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setRotationRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn setRotationRolePattern(self: QItemModelScatterDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelScatterDataProxy_SetRotationRolePattern(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `rotationRolePattern` instead
    ///
    pub const RotationRolePattern = rotationRolePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRolePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn rotationRolePattern(self: QItemModelScatterDataProxy) QRegularExpression {
        return .{ .ptr = qtc.QItemModelScatterDataProxy_RotationRolePattern(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setXPosRoleReplace` instead
    ///
    pub const SetXPosRoleReplace = setXPosRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setXPosRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setXPosRoleReplace(self: QItemModelScatterDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelScatterDataProxy_SetXPosRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `xPosRoleReplace` instead
    ///
    pub const XPosRoleReplace = xPosRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn xPosRoleReplace(self: QItemModelScatterDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelScatterDataProxy_XPosRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelScatterDataProxy.xPosRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setYPosRoleReplace` instead
    ///
    pub const SetYPosRoleReplace = setYPosRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setYPosRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setYPosRoleReplace(self: QItemModelScatterDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelScatterDataProxy_SetYPosRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `yPosRoleReplace` instead
    ///
    pub const YPosRoleReplace = yPosRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn yPosRoleReplace(self: QItemModelScatterDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelScatterDataProxy_YPosRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelScatterDataProxy.yPosRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setZPosRoleReplace` instead
    ///
    pub const SetZPosRoleReplace = setZPosRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setZPosRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setZPosRoleReplace(self: QItemModelScatterDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelScatterDataProxy_SetZPosRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `zPosRoleReplace` instead
    ///
    pub const ZPosRoleReplace = zPosRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn zPosRoleReplace(self: QItemModelScatterDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelScatterDataProxy_ZPosRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelScatterDataProxy.zPosRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRotationRoleReplace` instead
    ///
    pub const SetRotationRoleReplace = setRotationRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setRotationRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn setRotationRoleReplace(self: QItemModelScatterDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelScatterDataProxy_SetRotationRoleReplace(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `rotationRoleReplace` instead
    ///
    pub const RotationRoleReplace = rotationRoleReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRoleReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rotationRoleReplace(self: QItemModelScatterDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QItemModelScatterDataProxy_RotationRoleReplace(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelScatterDataProxy.rotationRoleReplace: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `itemModelChanged` instead
    ///
    pub const ItemModelChanged = itemModelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#itemModelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _itemModel: QAbstractItemModel `
    ///
    pub fn itemModelChanged(self: QItemModelScatterDataProxy, _itemModel: anytype) void {
        comptime _ = @TypeOf(_itemModel)._is_QAbstractItemModel;
        qtc.QItemModelScatterDataProxy_ItemModelChanged(@ptrCast(self.ptr), @ptrCast(_itemModel.ptr));
    }

    /// ### DEPRECATED: Use `onItemModelChanged` instead
    ///
    pub const OnItemModelChanged = onItemModelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#itemModelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, itemModel: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn onItemModelChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QAbstractItemModel) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_ItemModelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xPosRoleChanged` instead
    ///
    pub const XPosRoleChanged = xPosRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn xPosRoleChanged(self: QItemModelScatterDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelScatterDataProxy_XPosRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onXPosRoleChanged` instead
    ///
    pub const OnXPosRoleChanged = onXPosRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onXPosRoleChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_XPosRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yPosRoleChanged` instead
    ///
    pub const YPosRoleChanged = yPosRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn yPosRoleChanged(self: QItemModelScatterDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelScatterDataProxy_YPosRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onYPosRoleChanged` instead
    ///
    pub const OnYPosRoleChanged = onYPosRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onYPosRoleChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_YPosRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zPosRoleChanged` instead
    ///
    pub const ZPosRoleChanged = zPosRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn zPosRoleChanged(self: QItemModelScatterDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelScatterDataProxy_ZPosRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onZPosRoleChanged` instead
    ///
    pub const OnZPosRoleChanged = onZPosRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onZPosRoleChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_ZPosRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationRoleChanged` instead
    ///
    pub const RotationRoleChanged = rotationRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` role: []const u8 `
    ///
    pub fn rotationRoleChanged(self: QItemModelScatterDataProxy, role: []const u8) void {
        const role_str = qtc.libqt_string{
            .len = role.len,
            .data = role.ptr,
        };
        qtc.QItemModelScatterDataProxy_RotationRoleChanged(@ptrCast(self.ptr), role_str);
    }

    /// ### DEPRECATED: Use `onRotationRoleChanged` instead
    ///
    pub const OnRotationRoleChanged = onRotationRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, role: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRotationRoleChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_RotationRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xPosRolePatternChanged` instead
    ///
    pub const XPosRolePatternChanged = xPosRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn xPosRolePatternChanged(self: QItemModelScatterDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelScatterDataProxy_XPosRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onXPosRolePatternChanged` instead
    ///
    pub const OnXPosRolePatternChanged = onXPosRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onXPosRolePatternChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_XPosRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yPosRolePatternChanged` instead
    ///
    pub const YPosRolePatternChanged = yPosRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn yPosRolePatternChanged(self: QItemModelScatterDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelScatterDataProxy_YPosRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onYPosRolePatternChanged` instead
    ///
    pub const OnYPosRolePatternChanged = onYPosRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onYPosRolePatternChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_YPosRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zPosRolePatternChanged` instead
    ///
    pub const ZPosRolePatternChanged = zPosRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn zPosRolePatternChanged(self: QItemModelScatterDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelScatterDataProxy_ZPosRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onZPosRolePatternChanged` instead
    ///
    pub const OnZPosRolePatternChanged = onZPosRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onZPosRolePatternChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_ZPosRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationRolePatternChanged` instead
    ///
    pub const RotationRolePatternChanged = rotationRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRolePatternChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` pattern: QRegularExpression `
    ///
    pub fn rotationRolePatternChanged(self: QItemModelScatterDataProxy, pattern: anytype) void {
        comptime _ = @TypeOf(pattern)._is_QRegularExpression;
        qtc.QItemModelScatterDataProxy_RotationRolePatternChanged(@ptrCast(self.ptr), @ptrCast(pattern.ptr));
    }

    /// ### DEPRECATED: Use `onRotationRolePatternChanged` instead
    ///
    pub const OnRotationRolePatternChanged = onRotationRolePatternChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRolePatternChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, pattern: QRegularExpression) callconv(.c) void `
    ///
    pub fn onRotationRolePatternChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QRegularExpression) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_RotationRolePatternChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationRoleReplaceChanged` instead
    ///
    pub const RotationRoleReplaceChanged = rotationRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn rotationRoleReplaceChanged(self: QItemModelScatterDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelScatterDataProxy_RotationRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onRotationRoleReplaceChanged` instead
    ///
    pub const OnRotationRoleReplaceChanged = onRotationRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRotationRoleReplaceChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_RotationRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xPosRoleReplaceChanged` instead
    ///
    pub const XPosRoleReplaceChanged = xPosRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn xPosRoleReplaceChanged(self: QItemModelScatterDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelScatterDataProxy_XPosRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onXPosRoleReplaceChanged` instead
    ///
    pub const OnXPosRoleReplaceChanged = onXPosRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onXPosRoleReplaceChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_XPosRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yPosRoleReplaceChanged` instead
    ///
    pub const YPosRoleReplaceChanged = yPosRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn yPosRoleReplaceChanged(self: QItemModelScatterDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelScatterDataProxy_YPosRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onYPosRoleReplaceChanged` instead
    ///
    pub const OnYPosRoleReplaceChanged = onYPosRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onYPosRoleReplaceChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_YPosRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zPosRoleReplaceChanged` instead
    ///
    pub const ZPosRoleReplaceChanged = zPosRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRoleReplaceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` replace: []const u8 `
    ///
    pub fn zPosRoleReplaceChanged(self: QItemModelScatterDataProxy, replace: []const u8) void {
        const replace_str = qtc.libqt_string{
            .len = replace.len,
            .data = replace.ptr,
        };
        qtc.QItemModelScatterDataProxy_ZPosRoleReplaceChanged(@ptrCast(self.ptr), replace_str);
    }

    /// ### DEPRECATED: Use `onZPosRoleReplaceChanged` instead
    ///
    pub const OnZPosRoleReplaceChanged = onZPosRoleReplaceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRoleReplaceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, replace: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onZPosRoleReplaceChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_Connect_ZPosRoleReplaceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QItemModelScatterDataProxy_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelScatterDataProxy.tr2: Memory allocation failed");
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
        var _str = qtc.QItemModelScatterDataProxy_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelScatterDataProxy.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn series(self: QItemModelScatterDataProxy) QScatter3DSeries {
        return .{ .ptr = qtc.QScatterDataProxy_Series(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `itemCount` instead
    ///
    pub const ItemCount = itemCount;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn itemCount(self: QItemModelScatterDataProxy) i32 {
        return qtc.QScatterDataProxy_ItemCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `array` instead
    ///
    pub const Array = array;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#array)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn array(self: QItemModelScatterDataProxy, allocator: std.mem.Allocator) []QScatterDataItem {
        const _arr: qtc.libqt_list = qtc.QScatterDataProxy_Array(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QScatterDataItem, _arr.len) catch @panic("QItemModelScatterDataProxy.array: Memory allocation failed");
        const _data_val: [*]QtC.QScatterDataItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` index: i32 `
    ///
    pub fn itemAt(self: QItemModelScatterDataProxy, index: i32) QScatterDataItem {
        return .{ .ptr = qtc.QScatterDataProxy_ItemAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `resetArray` instead
    ///
    pub const ResetArray = resetArray;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#resetArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` newArray: []QScatterDataItem `
    ///
    pub fn resetArray(self: QItemModelScatterDataProxy, newArray: []QScatterDataItem) void {
        const newArray_list = qtc.libqt_list{
            .len = newArray.len,
            .data = @ptrCast(newArray.ptr),
        };
        qtc.QScatterDataProxy_ResetArray(@ptrCast(self.ptr), newArray_list);
    }

    /// ### DEPRECATED: Use `setItem` instead
    ///
    pub const SetItem = setItem;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` index: i32 `
    ///
    /// ` item: QScatterDataItem `
    ///
    pub fn setItem(self: QItemModelScatterDataProxy, index: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QScatterDataItem;
        qtc.QScatterDataProxy_SetItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setItems` instead
    ///
    pub const SetItems = setItems;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#setItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` index: i32 `
    ///
    /// ` items: []QScatterDataItem `
    ///
    pub fn setItems(self: QItemModelScatterDataProxy, index: i32, items: []QScatterDataItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QScatterDataProxy_SetItems(@ptrCast(self.ptr), @bitCast(index), items_list);
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` item: QScatterDataItem `
    ///
    pub fn addItem(self: QItemModelScatterDataProxy, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QScatterDataItem;
        return qtc.QScatterDataProxy_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `addItems` instead
    ///
    pub const AddItems = addItems;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#addItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` items: []QScatterDataItem `
    ///
    pub fn addItems(self: QItemModelScatterDataProxy, items: []QScatterDataItem) i32 {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return qtc.QScatterDataProxy_AddItems(@ptrCast(self.ptr), items_list);
    }

    /// ### DEPRECATED: Use `insertItem` instead
    ///
    pub const InsertItem = insertItem;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` index: i32 `
    ///
    /// ` item: QScatterDataItem `
    ///
    pub fn insertItem(self: QItemModelScatterDataProxy, index: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QScatterDataItem;
        qtc.QScatterDataProxy_InsertItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `insertItems` instead
    ///
    pub const InsertItems = insertItems;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#insertItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` index: i32 `
    ///
    /// ` items: []QScatterDataItem `
    ///
    pub fn insertItems(self: QItemModelScatterDataProxy, index: i32, items: []QScatterDataItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QScatterDataProxy_InsertItems(@ptrCast(self.ptr), @bitCast(index), items_list);
    }

    /// ### DEPRECATED: Use `removeItems` instead
    ///
    pub const RemoveItems = removeItems;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#removeItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` index: i32 `
    ///
    /// ` removeCount: i32 `
    ///
    pub fn removeItems(self: QItemModelScatterDataProxy, index: i32, removeCount: i32) void {
        qtc.QScatterDataProxy_RemoveItems(@ptrCast(self.ptr), @bitCast(index), @bitCast(removeCount));
    }

    /// ### DEPRECATED: Use `arrayReset` instead
    ///
    pub const ArrayReset = arrayReset;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#arrayReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn arrayReset(self: QItemModelScatterDataProxy) void {
        qtc.QScatterDataProxy_ArrayReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onArrayReset` instead
    ///
    pub const OnArrayReset = onArrayReset;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#arrayReset)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy) callconv(.c) void `
    ///
    pub fn onArrayReset(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy) callconv(.c) void) void {
        qtc.QScatterDataProxy_Connect_ArrayReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemsAdded` instead
    ///
    pub const ItemsAdded = itemsAdded;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn itemsAdded(self: QItemModelScatterDataProxy, startIndex: i32, count: i32) void {
        qtc.QScatterDataProxy_ItemsAdded(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onItemsAdded` instead
    ///
    pub const OnItemsAdded = onItemsAdded;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onItemsAdded(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QScatterDataProxy_Connect_ItemsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemsChanged` instead
    ///
    pub const ItemsChanged = itemsChanged;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn itemsChanged(self: QItemModelScatterDataProxy, startIndex: i32, count: i32) void {
        qtc.QScatterDataProxy_ItemsChanged(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onItemsChanged` instead
    ///
    pub const OnItemsChanged = onItemsChanged;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onItemsChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QScatterDataProxy_Connect_ItemsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemsRemoved` instead
    ///
    pub const ItemsRemoved = itemsRemoved;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn itemsRemoved(self: QItemModelScatterDataProxy, startIndex: i32, count: i32) void {
        qtc.QScatterDataProxy_ItemsRemoved(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onItemsRemoved` instead
    ///
    pub const OnItemsRemoved = onItemsRemoved;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onItemsRemoved(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QScatterDataProxy_Connect_ItemsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemsInserted` instead
    ///
    pub const ItemsInserted = itemsInserted;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn itemsInserted(self: QItemModelScatterDataProxy, startIndex: i32, count: i32) void {
        qtc.QScatterDataProxy_ItemsInserted(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onItemsInserted` instead
    ///
    pub const OnItemsInserted = onItemsInserted;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsInserted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onItemsInserted(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QScatterDataProxy_Connect_ItemsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemCountChanged` instead
    ///
    pub const ItemCountChanged = itemCountChanged;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` count: i32 `
    ///
    pub fn itemCountChanged(self: QItemModelScatterDataProxy, count: i32) void {
        qtc.QScatterDataProxy_ItemCountChanged(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onItemCountChanged` instead
    ///
    pub const OnItemCountChanged = onItemCountChanged;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, count: i32) callconv(.c) void `
    ///
    pub fn onItemCountChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, i32) callconv(.c) void) void {
        qtc.QScatterDataProxy_Connect_ItemCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `seriesChanged` instead
    ///
    pub const SeriesChanged = seriesChanged;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#seriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _series: QScatter3DSeries `
    ///
    pub fn seriesChanged(self: QItemModelScatterDataProxy, _series: anytype) void {
        comptime _ = @TypeOf(_series)._is_QScatter3DSeries;
        qtc.QScatterDataProxy_SeriesChanged(@ptrCast(self.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `onSeriesChanged` instead
    ///
    pub const OnSeriesChanged = onSeriesChanged;

    /// Inherited from QScatterDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#seriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, series: QScatter3DSeries) callconv(.c) void `
    ///
    pub fn onSeriesChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QScatter3DSeries) callconv(.c) void) void {
        qtc.QScatterDataProxy_Connect_SeriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ## Returns:
    ///
    /// ` qabstractdataproxy_enums.DataType `
    ///
    pub fn type0(self: QItemModelScatterDataProxy) i32 {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QItemModelScatterDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemModelScatterDataProxy.objectName: Memory allocation failed");
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QItemModelScatterDataProxy, name: []const u8) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn isWidgetType(self: QItemModelScatterDataProxy) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn isWindowType(self: QItemModelScatterDataProxy) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn isQuickItemType(self: QItemModelScatterDataProxy) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn signalsBlocked(self: QItemModelScatterDataProxy) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QItemModelScatterDataProxy, b: bool) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn thread(self: QItemModelScatterDataProxy) QThread {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QItemModelScatterDataProxy, _thread: anytype) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QItemModelScatterDataProxy, interval: i32) i32 {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QItemModelScatterDataProxy, time: i64) i32 {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QItemModelScatterDataProxy, id: i32) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QItemModelScatterDataProxy, id: i32) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QItemModelScatterDataProxy, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QItemModelScatterDataProxy.children: Memory allocation failed");
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QItemModelScatterDataProxy, _parent: anytype) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QItemModelScatterDataProxy, filterObj: anytype) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QItemModelScatterDataProxy, obj: anytype) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QItemModelScatterDataProxy, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn disconnect3(self: QItemModelScatterDataProxy) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QItemModelScatterDataProxy, receiver: anytype) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn dumpObjectTree(self: QItemModelScatterDataProxy) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn dumpObjectInfo(self: QItemModelScatterDataProxy) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QItemModelScatterDataProxy, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QItemModelScatterDataProxy, name: [:0]const u8) QVariant {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QItemModelScatterDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QItemModelScatterDataProxy.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QItemModelScatterDataProxy.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn bindingStorage(self: QItemModelScatterDataProxy) QBindingStorage {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn bindingStorage2(self: QItemModelScatterDataProxy) QBindingStorage {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn destroyed(self: QItemModelScatterDataProxy) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy) callconv(.c) void) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn parent(self: QItemModelScatterDataProxy) QObject {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QItemModelScatterDataProxy, classname: [:0]const u8) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn deleteLater(self: QItemModelScatterDataProxy) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QItemModelScatterDataProxy, interval: i32, timerType: i32) i32 {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QItemModelScatterDataProxy, time: i64, timerType: i32) i32 {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QItemModelScatterDataProxy, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QItemModelScatterDataProxy, signal: [:0]const u8) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QItemModelScatterDataProxy, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QItemModelScatterDataProxy, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QItemModelScatterDataProxy, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QItemModelScatterDataProxy, param1: anytype) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QObject) callconv(.c) void) void {
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QItemModelScatterDataProxy, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemModelScatterDataProxy_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QItemModelScatterDataProxy, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemModelScatterDataProxy_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelScatterDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QEvent) callconv(.c) bool) void {
        qtc.QItemModelScatterDataProxy_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QItemModelScatterDataProxy, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemModelScatterDataProxy_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QItemModelScatterDataProxy, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemModelScatterDataProxy_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelScatterDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QObject, QEvent) callconv(.c) bool) void {
        qtc.QItemModelScatterDataProxy_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QItemModelScatterDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QItemModelScatterDataProxy_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QItemModelScatterDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QItemModelScatterDataProxy_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelScatterDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QTimerEvent) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QItemModelScatterDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QItemModelScatterDataProxy_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QItemModelScatterDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QItemModelScatterDataProxy_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelScatterDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QChildEvent) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QItemModelScatterDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QItemModelScatterDataProxy_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QItemModelScatterDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QItemModelScatterDataProxy_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemModelScatterDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QEvent) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QItemModelScatterDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemModelScatterDataProxy_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QItemModelScatterDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemModelScatterDataProxy_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelScatterDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QMetaMethod) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QItemModelScatterDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemModelScatterDataProxy_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QItemModelScatterDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemModelScatterDataProxy_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelScatterDataProxy`
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, QMetaMethod) callconv(.c) void) void {
        qtc.QItemModelScatterDataProxy_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn sender(self: QItemModelScatterDataProxy) QObject {
        return .{ .ptr = qtc.QItemModelScatterDataProxy_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn senderSignalIndex(self: QItemModelScatterDataProxy) i32 {
        return qtc.QItemModelScatterDataProxy_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QItemModelScatterDataProxy, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemModelScatterDataProxy_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QItemModelScatterDataProxy, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QItemModelScatterDataProxy_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemModelScatterDataProxy `
    ///
    /// ` callback: *const fn (self: QItemModelScatterDataProxy, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QItemModelScatterDataProxy, callback: *const fn (QItemModelScatterDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#dtor.QItemModelScatterDataProxy)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QItemModelScatterDataProxy `
    ///
    pub fn delete(self: QItemModelScatterDataProxy) void {
        qtc.QItemModelScatterDataProxy_Delete(@ptrCast(self.ptr));
    }
};
