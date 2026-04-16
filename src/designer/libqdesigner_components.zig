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

    /// New constructs a new QDesignerComponents object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDesignerComponents `
    ///
    pub fn New(other: anytype) QDesignerComponents {
        comptime _ = @TypeOf(other)._is_QDesignerComponents;
        return .{ .ptr = qtc.QDesignerComponents_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QDesignerComponents object and invalidates the source QDesignerComponents object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDesignerComponents `
    ///
    pub fn New2(other: anytype) QDesignerComponents {
        comptime _ = @TypeOf(other)._is_QDesignerComponents;
        return .{ .ptr = qtc.QDesignerComponents_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerComponents `
    ///
    /// ` other: QDesignerComponents `
    ///
    pub fn CopyAssign(self: QDesignerComponents, other: QDesignerComponents) void {
        qtc.QDesignerComponents_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerComponents `
    ///
    /// ` other: QDesignerComponents `
    ///
    pub fn MoveAssign(self: QDesignerComponents, other: QDesignerComponents) void {
        qtc.QDesignerComponents_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#initializeResources)
    ///
    pub fn InitializeResources() void {
        qtc.QDesignerComponents_InitializeResources();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#initializePlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    pub fn InitializePlugins(core: anytype) void {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        qtc.QDesignerComponents_InitializePlugins(@ptrCast(core.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createFormEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateFormEditor(parent: anytype) QDesignerFormEditorInterface {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerComponents_CreateFormEditor(@ptrCast(parent.ptr)) };
    }

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
    pub fn CreateFormEditorWithPluginPaths(allocator: std.mem.Allocator, pluginPaths: []const []const u8, parent: anytype) QDesignerFormEditorInterface {
        const pluginPaths_arr = allocator.alloc(qtc.libqt_string, pluginPaths.len) catch @panic("qdesignercomponents.CreateFormEditorWithPluginPaths: Memory allocation failed");
        defer allocator.free(pluginPaths_arr);
        for (pluginPaths, 0..pluginPaths.len) |item, i|
            pluginPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const pluginPaths_list = qtc.libqt_list{
            .len = pluginPaths.len,
            .data = pluginPaths_arr.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerComponents_CreateFormEditorWithPluginPaths(pluginPaths_list, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createWidgetBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateWidgetBox(core: anytype, parent: anytype) QDesignerWidgetBoxInterface {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerComponents_CreateWidgetBox(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createPropertyEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreatePropertyEditor(core: anytype, parent: anytype) QDesignerPropertyEditorInterface {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerComponents_CreatePropertyEditor(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createObjectInspector)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateObjectInspector(core: anytype, parent: anytype) QDesignerObjectInspectorInterface {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerComponents_CreateObjectInspector(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createActionEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateActionEditor(core: anytype, parent: anytype) QDesignerActionEditorInterface {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerComponents_CreateActionEditor(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createTaskMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateTaskMenu(core: anytype, parent: anytype) QObject {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerComponents_CreateTaskMenu(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createResourceEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateResourceEditor(core: anytype, parent: anytype) QWidget {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerComponents_CreateResourceEditor(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createSignalSlotEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateSignalSlotEditor(core: anytype, parent: anytype) QWidget {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerComponents_CreateSignalSlotEditor(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#defaultPluginPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultPluginPaths(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerComponents_DefaultPluginPaths();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdesignercomponents.DefaultPluginPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignercomponents.DefaultPluginPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#dtor.QDesignerComponents)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerComponents `
    ///
    pub fn Delete(self: QDesignerComponents) void {
        qtc.QDesignerComponents_Delete(@ptrCast(self.ptr));
    }
};
