const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qfactoryinterface.html
pub const qfactoryinterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qfactoryinterface.html#keys)
    ///
    /// ``` self: QtC.QFactoryInterface, allocator: std.mem.Allocator ```
    pub fn Keys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QFactoryInterface_Keys(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfactoryinterface.Keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfactoryinterface.Keys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfactoryinterface.html#dtor.QFactoryInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFactoryInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFactoryInterface_Delete(@ptrCast(self));
    }
};
