const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDesignerActionEditorInterface = @import("libqt6").QDesignerActionEditorInterface;
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;
const QDesignerObjectInspectorInterface = @import("libqt6").QDesignerObjectInspectorInterface;
const QDesignerPropertyEditorInterface = @import("libqt6").QDesignerPropertyEditorInterface;
const QDesignerWidgetBoxInterface = @import("libqt6").QDesignerWidgetBoxInterface;
const QObject = @import("libqt6").QObject;
const QWidget = @import("libqt6").QWidget;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html)
pub const QDesignerComponents = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerComponents,

    pub const _is_QDesignerComponents = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerComponents object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDesignerComponents `
    ///
    pub fn new(other: anytype) QDesignerComponents {
        comptime _ = @TypeOf(other)._is_QDesignerComponents;
        return .{ .ptr = qtc.QDesignerComponents_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDesignerComponents object and invalidate the source QDesignerComponents object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDesignerComponents `
    ///
    pub fn new2(other: anytype) QDesignerComponents {
        comptime _ = @TypeOf(other)._is_QDesignerComponents;
        return .{ .ptr = qtc.QDesignerComponents_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerComponents `
    ///
    /// ` other: QDesignerComponents `
    ///
    pub fn copyAssign(self: QDesignerComponents, other: QDesignerComponents) void {
        qtc.QDesignerComponents_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerComponents `
    ///
    /// ` other: QDesignerComponents `
    ///
    pub fn moveAssign(self: QDesignerComponents, other: QDesignerComponents) void {
        qtc.QDesignerComponents_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `initializeResources` instead
    ///
    pub const InitializeResources = initializeResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#initializeResources)
    ///
    pub fn initializeResources() void {
        qtc.QDesignerComponents_InitializeResources();
    }

    /// ### DEPRECATED: Use `initializePlugins` instead
    ///
    pub const InitializePlugins = initializePlugins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#initializePlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    pub fn initializePlugins(core: anytype) void {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        qtc.QDesignerComponents_InitializePlugins(@ptrCast(core.ptr));
    }

    /// ### DEPRECATED: Use `createFormEditor` instead
    ///
    pub const CreateFormEditor = createFormEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createFormEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn createFormEditor(parent: anytype) QDesignerFormEditorInterface {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerComponents_CreateFormEditor(@ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createFormEditorWithPluginPaths` instead
    ///
    pub const CreateFormEditorWithPluginPaths = createFormEditorWithPluginPaths;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createFormEditorWithPluginPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pluginPaths: []const []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn createFormEditorWithPluginPaths(allocator: std.mem.Allocator, pluginPaths: []const []const u8, parent: anytype) QDesignerFormEditorInterface {
        const pluginPaths_arr = allocator.alloc(qtc.libqt_string, pluginPaths.len) catch @panic("QDesignerComponents.createFormEditorWithPluginPaths: Memory allocation failed");
        defer allocator.free(pluginPaths_arr);
        for (pluginPaths, 0..pluginPaths.len) |str_item, i|
            pluginPaths_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const pluginPaths_list = qtc.libqt_list{
            .len = pluginPaths.len,
            .data = pluginPaths_arr.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerComponents_CreateFormEditorWithPluginPaths(pluginPaths_list, @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createWidgetBox` instead
    ///
    pub const CreateWidgetBox = createWidgetBox;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createWidgetBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn createWidgetBox(core: anytype, parent: anytype) QDesignerWidgetBoxInterface {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerComponents_CreateWidgetBox(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createPropertyEditor` instead
    ///
    pub const CreatePropertyEditor = createPropertyEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createPropertyEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn createPropertyEditor(core: anytype, parent: anytype) QDesignerPropertyEditorInterface {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerComponents_CreatePropertyEditor(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createObjectInspector` instead
    ///
    pub const CreateObjectInspector = createObjectInspector;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createObjectInspector)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn createObjectInspector(core: anytype, parent: anytype) QDesignerObjectInspectorInterface {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerComponents_CreateObjectInspector(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createActionEditor` instead
    ///
    pub const CreateActionEditor = createActionEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createActionEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn createActionEditor(core: anytype, parent: anytype) QDesignerActionEditorInterface {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerComponents_CreateActionEditor(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createTaskMenu` instead
    ///
    pub const CreateTaskMenu = createTaskMenu;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createTaskMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QObject `
    ///
    pub fn createTaskMenu(core: anytype, parent: anytype) QObject {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerComponents_CreateTaskMenu(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createResourceEditor` instead
    ///
    pub const CreateResourceEditor = createResourceEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createResourceEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn createResourceEditor(core: anytype, parent: anytype) QWidget {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerComponents_CreateResourceEditor(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createSignalSlotEditor` instead
    ///
    pub const CreateSignalSlotEditor = createSignalSlotEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createSignalSlotEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn createSignalSlotEditor(core: anytype, parent: anytype) QWidget {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerComponents_CreateSignalSlotEditor(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `defaultPluginPaths` instead
    ///
    pub const DefaultPluginPaths = defaultPluginPaths;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#defaultPluginPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultPluginPaths(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerComponents_DefaultPluginPaths();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QDesignerComponents.defaultPluginPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDesignerComponents.defaultPluginPaths: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#dtor.QDesignerComponents)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerComponents `
    ///
    pub fn delete(self: QDesignerComponents) void {
        qtc.QDesignerComponents_Delete(@ptrCast(self.ptr));
    }
};
