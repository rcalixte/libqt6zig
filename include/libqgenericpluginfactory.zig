const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericpluginfactory.html)
pub const QGenericPluginFactory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericpluginfactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGenericPluginFactory,

    pub const _is_QGenericPluginFactory = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGenericPluginFactory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGenericPluginFactory `
    ///
    pub fn new(other: anytype) QGenericPluginFactory {
        comptime _ = @TypeOf(other)._is_QGenericPluginFactory;
        return .{ .ptr = qtc.QGenericPluginFactory_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGenericPluginFactory object and invalidate the source QGenericPluginFactory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGenericPluginFactory `
    ///
    pub fn new2(other: anytype) QGenericPluginFactory {
        comptime _ = @TypeOf(other)._is_QGenericPluginFactory;
        return .{ .ptr = qtc.QGenericPluginFactory_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QGenericPluginFactory `
    ///
    /// ` other: QGenericPluginFactory `
    ///
    pub fn copyAssign(self: QGenericPluginFactory, other: QGenericPluginFactory) void {
        qtc.QGenericPluginFactory_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QGenericPluginFactory `
    ///
    /// ` other: QGenericPluginFactory `
    ///
    pub fn moveAssign(self: QGenericPluginFactory, other: QGenericPluginFactory) void {
        qtc.QGenericPluginFactory_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `keys` instead
    ///
    pub const Keys = keys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericpluginfactory.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keys(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QGenericPluginFactory_Keys();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QGenericPluginFactory.keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGenericPluginFactory.keys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericpluginfactory.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn create(param1: []const u8, param2: []const u8) QObject {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return .{ .ptr = qtc.QGenericPluginFactory_Create(param1_str, param2_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericpluginfactory.html#dtor.QGenericPluginFactory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGenericPluginFactory `
    ///
    pub fn delete(self: QGenericPluginFactory) void {
        qtc.QGenericPluginFactory_Delete(@ptrCast(self.ptr));
    }
};
