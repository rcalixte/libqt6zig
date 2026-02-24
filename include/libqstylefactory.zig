const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstylefactory.html)
pub const qstylefactory = struct {
    /// New constructs a new QStyleFactory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleFactory `
    ///
    pub fn New(other: ?*anyopaque) QtC.QStyleFactory {
        return qtc.QStyleFactory_new(@ptrCast(other));
    }

    /// New2 constructs a new QStyleFactory object and invalidates the source QStyleFactory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStyleFactory `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStyleFactory {
        return qtc.QStyleFactory_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStyleFactory `
    ///
    /// ` other: QtC.QStyleFactory `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleFactory_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStyleFactory `
    ///
    /// ` other: QtC.QStyleFactory `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleFactory_MoveAssign(@ptrCast(self), @ptrCast(other));
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
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    pub fn Create(param1: []const u8) QtC.QStyle {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QStyleFactory_Create(param1_str);
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
    /// ` self: QtC.QStyleFactory `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QStyleFactory_Delete(@ptrCast(self));
    }
};
