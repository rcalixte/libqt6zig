const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QStyle = @import("libqt6").QStyle;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstylefactory.html)
pub const QStyleFactory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylefactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleFactory,

    pub const _is_QStyleFactory = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyleFactory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleFactory `
    ///
    pub fn new(other: anytype) QStyleFactory {
        comptime _ = @TypeOf(other)._is_QStyleFactory;
        return .{ .ptr = qtc.QStyleFactory_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStyleFactory object and invalidate the source QStyleFactory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleFactory `
    ///
    pub fn new2(other: anytype) QStyleFactory {
        comptime _ = @TypeOf(other)._is_QStyleFactory;
        return .{ .ptr = qtc.QStyleFactory_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleFactory `
    ///
    /// ` other: QStyleFactory `
    ///
    pub fn copyAssign(self: QStyleFactory, other: QStyleFactory) void {
        qtc.QStyleFactory_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleFactory `
    ///
    /// ` other: QStyleFactory `
    ///
    pub fn moveAssign(self: QStyleFactory, other: QStyleFactory) void {
        qtc.QStyleFactory_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `keys` instead
    ///
    pub const Keys = keys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylefactory.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keys(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QStyleFactory_Keys();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QStyleFactory.keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStyleFactory.keys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylefactory.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn create(param1: []const u8) QStyle {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return .{ .ptr = qtc.QStyleFactory_Create(param1_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylefactory.html#dtor.QStyleFactory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleFactory `
    ///
    pub fn delete(self: QStyleFactory) void {
        qtc.QStyleFactory_Delete(@ptrCast(self.ptr));
    }
};
