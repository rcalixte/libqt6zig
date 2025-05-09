const C = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qgenericpluginfactory.html
pub const qgenericpluginfactory = struct {
    /// New constructs a new QGenericPluginFactory object.
    ///
    /// ``` other: ?*C.QGenericPluginFactory ```
    pub fn New(other: ?*anyopaque) ?*C.QGenericPluginFactory {
        return C.QGenericPluginFactory_new(@ptrCast(other));
    }

    /// New2 constructs a new QGenericPluginFactory object and invalidates the source QGenericPluginFactory object.
    ///
    /// ``` other: ?*C.QGenericPluginFactory ```
    pub fn New2(other: ?*anyopaque) ?*C.QGenericPluginFactory {
        return C.QGenericPluginFactory_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QGenericPluginFactory, other: ?*QGenericPluginFactory ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QGenericPluginFactory_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QGenericPluginFactory, other: ?*QGenericPluginFactory ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QGenericPluginFactory_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgenericpluginfactory.html#keys)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Keys(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QGenericPluginFactory_Keys();
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgenericpluginfactory.html#create)
    ///
    /// ``` param1: []const u8, param2: []const u8 ```
    pub fn Create(param1: []const u8, param2: []const u8) ?*C.QObject {
        const param1_str = C.struct_libqt_string{
            .len = param1.len,
            .data = @constCast(param1.ptr),
        };
        const param2_str = C.struct_libqt_string{
            .len = param2.len,
            .data = @constCast(param2.ptr),
        };
        return C.QGenericPluginFactory_Create(param1_str, param2_str);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QGenericPluginFactory ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QGenericPluginFactory_Delete(@ptrCast(self));
    }
};
