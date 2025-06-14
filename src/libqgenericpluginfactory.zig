const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qgenericpluginfactory.html
pub const qgenericpluginfactory = struct {
    /// New constructs a new QGenericPluginFactory object.
    ///
    /// ``` other: QtC.QGenericPluginFactory ```
    pub fn New(other: ?*anyopaque) QtC.QGenericPluginFactory {
        return qtc.QGenericPluginFactory_new(@ptrCast(other));
    }

    /// New2 constructs a new QGenericPluginFactory object and invalidates the source QGenericPluginFactory object.
    ///
    /// ``` other: QtC.QGenericPluginFactory ```
    pub fn New2(other: ?*anyopaque) QtC.QGenericPluginFactory {
        return qtc.QGenericPluginFactory_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QGenericPluginFactory, other: QtC.QGenericPluginFactory ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGenericPluginFactory_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QGenericPluginFactory, other: QtC.QGenericPluginFactory ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGenericPluginFactory_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgenericpluginfactory.html#keys)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Keys(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QGenericPluginFactory_Keys();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qgenericpluginfactory.Keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgenericpluginfactory.Keys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgenericpluginfactory.html#create)
    ///
    /// ``` param1: []const u8, param2: []const u8 ```
    pub fn Create(param1: []const u8, param2: []const u8) QtC.QObject {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.struct_libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return qtc.QGenericPluginFactory_Create(param1_str, param2_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgenericpluginfactory.html#dtor.QGenericPluginFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGenericPluginFactory ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGenericPluginFactory_Delete(@ptrCast(self));
    }
};
