const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qitemeditorcreatorbase.html
pub const qitemeditorcreatorbase = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#createWidget)
    ///
    /// ``` self: QtC.QItemEditorCreatorBase, parent: QtC.QWidget ```
    pub fn CreateWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QItemEditorCreatorBase_CreateWidget(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#valuePropertyName)
    ///
    /// ``` self: QtC.QItemEditorCreatorBase, allocator: std.mem.Allocator ```
    pub fn ValuePropertyName(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QItemEditorCreatorBase_ValuePropertyName(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qitemeditorcreatorbase.ValuePropertyName: Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#operator=)
    ///
    /// ``` self: QtC.QItemEditorCreatorBase, param1: QtC.QItemEditorCreatorBase ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QItemEditorCreatorBase_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#dtor.QItemEditorCreatorBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QItemEditorCreatorBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemEditorCreatorBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qitemeditorfactory.html
pub const qitemeditorfactory = struct {
    /// New constructs a new QItemEditorFactory object.
    ///
    ///
    pub fn New() QtC.QItemEditorFactory {
        return qtc.QItemEditorFactory_new();
    }

    /// New2 constructs a new QItemEditorFactory object.
    ///
    /// ``` param1: QtC.QItemEditorFactory ```
    pub fn New2(param1: ?*anyopaque) QtC.QItemEditorFactory {
        return qtc.QItemEditorFactory_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
    ///
    /// ``` self: QtC.QItemEditorFactory, userType: i32, parent: QtC.QWidget ```
    pub fn CreateEditor(self: ?*anyopaque, userType: i32, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QItemEditorFactory_CreateEditor(@ptrCast(self), @intCast(userType), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QItemEditorFactory, slot: fn (self: QtC.QItemEditorFactory, userType: i32, parent: QtC.QWidget) callconv(.c) QtC.QWidget ```
    pub fn OnCreateEditor(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QItemEditorFactory_OnCreateEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QItemEditorFactory, userType: i32, parent: QtC.QWidget ```
    pub fn QBaseCreateEditor(self: ?*anyopaque, userType: i32, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QItemEditorFactory_QBaseCreateEditor(@ptrCast(self), @intCast(userType), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
    ///
    /// ``` self: QtC.QItemEditorFactory, userType: i32, allocator: std.mem.Allocator ```
    pub fn ValuePropertyName(self: ?*anyopaque, userType: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QItemEditorFactory_ValuePropertyName(@ptrCast(self), @intCast(userType));
        defer qtc.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qitemeditorfactory.ValuePropertyName: Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QItemEditorFactory, slot: fn (self: QtC.QItemEditorFactory, userType: i32) callconv(.c) []u8 ```
    pub fn OnValuePropertyName(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) []u8) void {
        qtc.QItemEditorFactory_OnValuePropertyName(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QItemEditorFactory, userType: i32, allocator: std.mem.Allocator ```
    pub fn QBaseValuePropertyName(self: ?*anyopaque, userType: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QItemEditorFactory_QBaseValuePropertyName(@ptrCast(self), @intCast(userType));
        defer qtc.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qitemeditorfactory.ValuePropertyName: Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#registerEditor)
    ///
    /// ``` self: QtC.QItemEditorFactory, userType: i32, creator: QtC.QItemEditorCreatorBase ```
    pub fn RegisterEditor(self: ?*anyopaque, userType: i32, creator: ?*anyopaque) void {
        qtc.QItemEditorFactory_RegisterEditor(@ptrCast(self), @intCast(userType), @ptrCast(creator));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#defaultFactory)
    ///
    ///
    pub fn DefaultFactory() QtC.QItemEditorFactory {
        return qtc.QItemEditorFactory_DefaultFactory();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#setDefaultFactory)
    ///
    /// ``` factory: QtC.QItemEditorFactory ```
    pub fn SetDefaultFactory(factory: ?*anyopaque) void {
        qtc.QItemEditorFactory_SetDefaultFactory(@ptrCast(factory));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#dtor.QItemEditorFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QItemEditorFactory ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemEditorFactory_Delete(@ptrCast(self));
    }
};
