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

    /// New constructs a new QStyleFactory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleFactory `
    ///
    pub fn New(other: anytype) QStyleFactory {
        comptime _ = @TypeOf(other)._is_QStyleFactory;
        return .{ .ptr = qtc.QStyleFactory_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QStyleFactory object and invalidates the source QStyleFactory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStyleFactory `
    ///
    pub fn New2(other: anytype) QStyleFactory {
        comptime _ = @TypeOf(other)._is_QStyleFactory;
        return .{ .ptr = qtc.QStyleFactory_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleFactory `
    ///
    /// ` other: QStyleFactory `
    ///
    pub fn CopyAssign(self: QStyleFactory, other: QStyleFactory) void {
        qtc.QStyleFactory_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleFactory `
    ///
    /// ` other: QStyleFactory `
    ///
    pub fn MoveAssign(self: QStyleFactory, other: QStyleFactory) void {
        qtc.QStyleFactory_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylefactory.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Keys(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QStyleFactory_Keys();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qstylefactory.Keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstylefactory.Keys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylefactory.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Create(param1: []const u8) QStyle {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return .{ .ptr = qtc.QStyleFactory_Create(param1_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylefactory.html#dtor.QStyleFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleFactory `
    ///
    pub fn Delete(self: QStyleFactory) void {
        qtc.QStyleFactory_Delete(@ptrCast(self.ptr));
    }
};
