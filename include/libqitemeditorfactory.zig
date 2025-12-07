const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html)
pub const qitemeditorcreatorbase = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemEditorCreatorBase `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreateWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QItemEditorCreatorBase_CreateWidget(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#valuePropertyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemEditorCreatorBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ValuePropertyName(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QItemEditorCreatorBase_ValuePropertyName(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qitemeditorcreatorbase.ValuePropertyName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemEditorCreatorBase `
    ///
    /// ` param1: QtC.QItemEditorCreatorBase `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QItemEditorCreatorBase_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#dtor.QItemEditorCreatorBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QItemEditorCreatorBase `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemEditorCreatorBase_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html)
pub const qitemeditorfactory = struct {
    /// New constructs a new QItemEditorFactory object.
    ///
    pub fn New() QtC.QItemEditorFactory {
        return qtc.QItemEditorFactory_new();
    }

    /// New2 constructs a new QItemEditorFactory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QItemEditorFactory `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QItemEditorFactory {
        return qtc.QItemEditorFactory_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemEditorFactory `
    ///
    /// ` userType: i32 `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreateEditor(self: ?*anyopaque, userType: i32, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QItemEditorFactory_CreateEditor(@ptrCast(self), @intCast(userType), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemEditorFactory `
    ///
    /// ` callback: *const fn (self: QtC.QItemEditorFactory, userType: i32, parent: QtC.QWidget) callconv(.c) QtC.QWidget `
    ///
    pub fn OnCreateEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QItemEditorFactory_OnCreateEditor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemEditorFactory `
    ///
    /// ` userType: i32 `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn QBaseCreateEditor(self: ?*anyopaque, userType: i32, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QItemEditorFactory_QBaseCreateEditor(@ptrCast(self), @intCast(userType), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemEditorFactory `
    ///
    /// ` userType: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ValuePropertyName(self: ?*anyopaque, userType: i32, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QItemEditorFactory_ValuePropertyName(@ptrCast(self), @intCast(userType));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qitemeditorfactory.ValuePropertyName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemEditorFactory `
    ///
    /// ` callback: *const fn (self: QtC.QItemEditorFactory, userType: i32) callconv(.c) [*:0]u8 `
    ///
    pub fn OnValuePropertyName(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]u8) void {
        qtc.QItemEditorFactory_OnValuePropertyName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemEditorFactory `
    ///
    /// ` userType: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseValuePropertyName(self: ?*anyopaque, userType: i32, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QItemEditorFactory_QBaseValuePropertyName(@ptrCast(self), @intCast(userType));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qitemeditorfactory.ValuePropertyName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#registerEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemEditorFactory `
    ///
    /// ` userType: i32 `
    ///
    /// ` creator: QtC.QItemEditorCreatorBase `
    ///
    pub fn RegisterEditor(self: ?*anyopaque, userType: i32, creator: ?*anyopaque) void {
        qtc.QItemEditorFactory_RegisterEditor(@ptrCast(self), @intCast(userType), @ptrCast(creator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#defaultFactory)
    ///
    pub fn DefaultFactory() QtC.QItemEditorFactory {
        return qtc.QItemEditorFactory_DefaultFactory();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#setDefaultFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` factory: QtC.QItemEditorFactory `
    ///
    pub fn SetDefaultFactory(factory: ?*anyopaque) void {
        qtc.QItemEditorFactory_SetDefaultFactory(@ptrCast(factory));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#dtor.QItemEditorFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QItemEditorFactory `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemEditorFactory_Delete(@ptrCast(self));
    }
};
