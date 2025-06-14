const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qstylefactory.html
pub const qstylefactory = struct {
    /// New constructs a new QStyleFactory object.
    ///
    /// ``` other: QtC.QStyleFactory ```
    pub fn New(other: ?*anyopaque) QtC.QStyleFactory {
        return qtc.QStyleFactory_new(@ptrCast(other));
    }

    /// New2 constructs a new QStyleFactory object and invalidates the source QStyleFactory object.
    ///
    /// ``` other: QtC.QStyleFactory ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleFactory {
        return qtc.QStyleFactory_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QStyleFactory, other: QtC.QStyleFactory ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleFactory_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QStyleFactory, other: QtC.QStyleFactory ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleFactory_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylefactory.html#keys)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Keys(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QStyleFactory_Keys();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylefactory.html#create)
    ///
    /// ``` param1: []const u8 ```
    pub fn Create(param1: []const u8) QtC.QStyle {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QStyleFactory_Create(param1_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylefactory.html#dtor.QStyleFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleFactory ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleFactory_Delete(@ptrCast(self));
    }
};
