const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfactoryinterface.html)
pub const QFactoryInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfactoryinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFactoryInterface,

    pub const _is_QFactoryInterface = {};

    /// ### DEPRECATED: Use `keys` instead
    ///
    pub const Keys = keys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfactoryinterface.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFactoryInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keys(self: QFactoryInterface, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFactoryInterface_Keys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QFactoryInterface.keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QFactoryInterface.keys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfactoryinterface.html#dtor.QFactoryInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFactoryInterface `
    ///
    pub fn delete(self: QFactoryInterface) void {
        qtc.QFactoryInterface_Delete(@ptrCast(self.ptr));
    }
};
