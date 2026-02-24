const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html)
pub const qdesignercomponents = struct {
    /// New constructs a new QDesignerComponents object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QDesignerComponents `
    ///
    pub fn New(other: ?*anyopaque) QtC.QDesignerComponents {
        return qtc.QDesignerComponents_new(@ptrCast(other));
    }

    /// New2 constructs a new QDesignerComponents object and invalidates the source QDesignerComponents object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QDesignerComponents `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QDesignerComponents {
        return qtc.QDesignerComponents_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerComponents `
    ///
    /// ` other: QtC.QDesignerComponents `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDesignerComponents_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerComponents `
    ///
    /// ` other: QtC.QDesignerComponents `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDesignerComponents_MoveAssign(@ptrCast(self), @ptrCast(other));
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
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    pub fn InitializePlugins(core: ?*anyopaque) void {
        qtc.QDesignerComponents_InitializePlugins(@ptrCast(core));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createFormEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn CreateFormEditor(parent: ?*anyopaque) QtC.QDesignerFormEditorInterface {
        return qtc.QDesignerComponents_CreateFormEditor(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createFormEditorWithPluginPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` pluginPaths: []const []const u8 `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CreateFormEditorWithPluginPaths(pluginPaths: []const []const u8, parent: ?*anyopaque, allocator: std.mem.Allocator) QtC.QDesignerFormEditorInterface {
        const pluginPaths_arr = allocator.alloc(qtc.libqt_string, pluginPaths.len) catch @panic("qdesignercomponents.CreateFormEditorWithPluginPaths: Memory allocation failed");
        defer allocator.free(pluginPaths_arr);
        for (pluginPaths, 0..pluginPaths.len) |item, i| {
            pluginPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const pluginPaths_list = qtc.libqt_list{
            .len = pluginPaths.len,
            .data = pluginPaths_arr.ptr,
        };
        return qtc.QDesignerComponents_CreateFormEditorWithPluginPaths(pluginPaths_list, @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createWidgetBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreateWidgetBox(core: ?*anyopaque, parent: ?*anyopaque) QtC.QDesignerWidgetBoxInterface {
        return qtc.QDesignerComponents_CreateWidgetBox(@ptrCast(core), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createPropertyEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreatePropertyEditor(core: ?*anyopaque, parent: ?*anyopaque) QtC.QDesignerPropertyEditorInterface {
        return qtc.QDesignerComponents_CreatePropertyEditor(@ptrCast(core), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createObjectInspector)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreateObjectInspector(core: ?*anyopaque, parent: ?*anyopaque) QtC.QDesignerObjectInspectorInterface {
        return qtc.QDesignerComponents_CreateObjectInspector(@ptrCast(core), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createActionEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreateActionEditor(core: ?*anyopaque, parent: ?*anyopaque) QtC.QDesignerActionEditorInterface {
        return qtc.QDesignerComponents_CreateActionEditor(@ptrCast(core), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createTaskMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn CreateTaskMenu(core: ?*anyopaque, parent: ?*anyopaque) QtC.QObject {
        return qtc.QDesignerComponents_CreateTaskMenu(@ptrCast(core), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createResourceEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreateResourceEditor(core: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerComponents_CreateResourceEditor(@ptrCast(core), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createSignalSlotEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreateSignalSlotEditor(core: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerComponents_CreateSignalSlotEditor(@ptrCast(core), @ptrCast(parent));
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
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QDesignerComponents `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDesignerComponents_Delete(@ptrCast(self));
    }
};
