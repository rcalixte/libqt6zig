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

    /// ### DEPRECATED: Use `createWidget` instead
    ///
    pub const CreateWidget = createWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemEditorCreatorBase `
    ///
    /// ` parent: QWidget `
    ///
    pub fn createWidget(self: QItemEditorCreatorBase, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QItemEditorCreatorBase_CreateWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `valuePropertyName` instead
    ///
    pub const ValuePropertyName = valuePropertyName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#valuePropertyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemEditorCreatorBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn valuePropertyName(self: QItemEditorCreatorBase, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QItemEditorCreatorBase_ValuePropertyName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QItemEditorCreatorBase.valuePropertyName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemEditorCreatorBase `
    ///
    /// ` param1: QItemEditorCreatorBase `
    ///
    pub fn operatorAssign(self: QItemEditorCreatorBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QItemEditorCreatorBase;
        qtc.QItemEditorCreatorBase_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#dtor.QItemEditorCreatorBase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QItemEditorCreatorBase `
    ///
    pub fn delete(self: QItemEditorCreatorBase) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QItemEditorFactory object in C++ memory
    ///
    pub fn new() QItemEditorFactory {
        return .{ .ptr = qtc.QItemEditorFactory_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QItemEditorFactory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QItemEditorFactory `
    ///
    pub fn new2(param1: anytype) QItemEditorFactory {
        comptime _ = @TypeOf(param1)._is_QItemEditorFactory;
        return .{ .ptr = qtc.QItemEditorFactory_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `createEditor` instead
    ///
    pub const CreateEditor = createEditor;

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
    pub fn createEditor(self: QItemEditorFactory, userType: i32, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QItemEditorFactory_CreateEditor(@ptrCast(self.ptr), @bitCast(userType), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateEditor` instead
    ///
    pub const OnCreateEditor = onCreateEditor;

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
    pub fn onCreateEditor(self: QItemEditorFactory, callback: *const fn (QItemEditorFactory, i32, QWidget) callconv(.c) QWidget) void {
        qtc.QItemEditorFactory_OnCreateEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateEditor` instead
    ///
    pub const SuperCreateEditor = superCreateEditor;

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
    pub fn superCreateEditor(self: QItemEditorFactory, userType: i32, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QItemEditorFactory_SuperCreateEditor(@ptrCast(self.ptr), @bitCast(userType), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `valuePropertyName` instead
    ///
    pub const ValuePropertyName = valuePropertyName;

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
    pub fn valuePropertyName(self: QItemEditorFactory, allocator: std.mem.Allocator, userType: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QItemEditorFactory_ValuePropertyName(@ptrCast(self.ptr), @bitCast(userType));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QItemEditorFactory.valuePropertyName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onValuePropertyName` instead
    ///
    pub const OnValuePropertyName = onValuePropertyName;

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
    pub fn onValuePropertyName(self: QItemEditorFactory, callback: *const fn (QItemEditorFactory, i32) callconv(.c) qtc.libqt_string) void {
        qtc.QItemEditorFactory_OnValuePropertyName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superValuePropertyName` instead
    ///
    pub const SuperValuePropertyName = superValuePropertyName;

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
    pub fn superValuePropertyName(self: QItemEditorFactory, allocator: std.mem.Allocator, userType: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QItemEditorFactory_SuperValuePropertyName(@ptrCast(self.ptr), @bitCast(userType));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QItemEditorFactory.valuePropertyName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `registerEditor` instead
    ///
    pub const RegisterEditor = registerEditor;

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
    pub fn registerEditor(self: QItemEditorFactory, userType: i32, creator: anytype) void {
        comptime _ = @TypeOf(creator)._is_QItemEditorCreatorBase;
        qtc.QItemEditorFactory_RegisterEditor(@ptrCast(self.ptr), @bitCast(userType), @ptrCast(creator.ptr));
    }

    /// ### DEPRECATED: Use `defaultFactory` instead
    ///
    pub const DefaultFactory = defaultFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#defaultFactory)
    ///
    pub fn defaultFactory() QItemEditorFactory {
        return .{ .ptr = qtc.QItemEditorFactory_DefaultFactory() };
    }

    /// ### DEPRECATED: Use `setDefaultFactory` instead
    ///
    pub const SetDefaultFactory = setDefaultFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#setDefaultFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` factory: QItemEditorFactory `
    ///
    pub fn setDefaultFactory(factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_QItemEditorFactory;
        qtc.QItemEditorFactory_SetDefaultFactory(@ptrCast(factory.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#dtor.QItemEditorFactory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QItemEditorFactory `
    ///
    pub fn delete(self: QItemEditorFactory) void {
        qtc.QItemEditorFactory_Delete(@ptrCast(self.ptr));
    }
};
