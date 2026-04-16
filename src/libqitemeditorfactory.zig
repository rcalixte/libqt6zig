const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QWidget = @import("libqt6").QWidget;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html)
pub const QItemEditorCreatorBase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QItemEditorCreatorBase,

    pub const _is_QItemEditorCreatorBase = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemEditorCreatorBase `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateWidget(self: QItemEditorCreatorBase, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QItemEditorCreatorBase_CreateWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#valuePropertyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemEditorCreatorBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ValuePropertyName(self: QItemEditorCreatorBase, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QItemEditorCreatorBase_ValuePropertyName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qitemeditorcreatorbase.ValuePropertyName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemEditorCreatorBase `
    ///
    /// ` param1: QItemEditorCreatorBase `
    ///
    pub fn OperatorAssign(self: QItemEditorCreatorBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QItemEditorCreatorBase;
        qtc.QItemEditorCreatorBase_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#dtor.QItemEditorCreatorBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QItemEditorCreatorBase `
    ///
    pub fn Delete(self: QItemEditorCreatorBase) void {
        qtc.QItemEditorCreatorBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html)
pub const QItemEditorFactory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QItemEditorFactory,

    pub const _is_QItemEditorFactory = {};

    /// New constructs a new QItemEditorFactory object.
    ///
    pub fn New() QItemEditorFactory {
        return .{ .ptr = qtc.QItemEditorFactory_new() };
    }

    /// New2 constructs a new QItemEditorFactory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QItemEditorFactory `
    ///
    pub fn New2(param1: anytype) QItemEditorFactory {
        comptime _ = @TypeOf(param1)._is_QItemEditorFactory;
        return .{ .ptr = qtc.QItemEditorFactory_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemEditorFactory `
    ///
    /// ` userType: i32 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateEditor(self: QItemEditorFactory, userType: i32, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QItemEditorFactory_CreateEditor(@ptrCast(self.ptr), @bitCast(userType), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemEditorFactory `
    ///
    /// ` callback: *const fn (self: QItemEditorFactory, userType: i32, parent: QWidget) callconv(.c) QWidget `
    ///
    pub fn OnCreateEditor(self: QItemEditorFactory, callback: *const fn (QItemEditorFactory, i32, QWidget) callconv(.c) QWidget) void {
        qtc.QItemEditorFactory_OnCreateEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateEditor` instead
    ///
    pub const QBaseCreateEditor = SuperCreateEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemEditorFactory `
    ///
    /// ` userType: i32 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SuperCreateEditor(self: QItemEditorFactory, userType: i32, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QItemEditorFactory_SuperCreateEditor(@ptrCast(self.ptr), @bitCast(userType), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemEditorFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` userType: i32 `
    ///
    pub fn ValuePropertyName(self: QItemEditorFactory, allocator: std.mem.Allocator, userType: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QItemEditorFactory_ValuePropertyName(@ptrCast(self.ptr), @bitCast(userType));
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
    /// ` self: QItemEditorFactory `
    ///
    /// ` callback: *const fn (self: QItemEditorFactory, userType: i32) callconv(.c) qtc.libqt_string `
    ///
    pub fn OnValuePropertyName(self: QItemEditorFactory, callback: *const fn (QItemEditorFactory, i32) callconv(.c) qtc.libqt_string) void {
        qtc.QItemEditorFactory_OnValuePropertyName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperValuePropertyName` instead
    ///
    pub const QBaseValuePropertyName = SuperValuePropertyName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemEditorFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` userType: i32 `
    ///
    pub fn SuperValuePropertyName(self: QItemEditorFactory, allocator: std.mem.Allocator, userType: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QItemEditorFactory_SuperValuePropertyName(@ptrCast(self.ptr), @bitCast(userType));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qitemeditorfactory.ValuePropertyName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#registerEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemEditorFactory `
    ///
    /// ` userType: i32 `
    ///
    /// ` creator: QItemEditorCreatorBase `
    ///
    pub fn RegisterEditor(self: QItemEditorFactory, userType: i32, creator: anytype) void {
        comptime _ = @TypeOf(creator)._is_QItemEditorCreatorBase;
        qtc.QItemEditorFactory_RegisterEditor(@ptrCast(self.ptr), @bitCast(userType), @ptrCast(creator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#defaultFactory)
    ///
    pub fn DefaultFactory() QItemEditorFactory {
        return .{ .ptr = qtc.QItemEditorFactory_DefaultFactory() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#setDefaultFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` factory: QItemEditorFactory `
    ///
    pub fn SetDefaultFactory(factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_QItemEditorFactory;
        qtc.QItemEditorFactory_SetDefaultFactory(@ptrCast(factory.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#dtor.QItemEditorFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QItemEditorFactory `
    ///
    pub fn Delete(self: QItemEditorFactory) void {
        qtc.QItemEditorFactory_Delete(@ptrCast(self.ptr));
    }
};
