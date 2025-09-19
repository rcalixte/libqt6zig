const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kxmlguibuilder.html
pub const kxmlguibuilder = struct {
    /// New constructs a new KXMLGUIBuilder object.
    ///
    /// ``` widget: QtC.QWidget ```
    pub fn New(widget: ?*anyopaque) QtC.KXMLGUIBuilder {
        return qtc.KXMLGUIBuilder_new(@ptrCast(widget));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#builderClient)
    ///
    /// ``` self: QtC.KXMLGUIBuilder ```
    pub fn BuilderClient(self: ?*anyopaque) QtC.KXMLGUIClient {
        return qtc.KXMLGUIBuilder_BuilderClient(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#setBuilderClient)
    ///
    /// ``` self: QtC.KXMLGUIBuilder, client: QtC.KXMLGUIClient ```
    pub fn SetBuilderClient(self: ?*anyopaque, client: ?*anyopaque) void {
        qtc.KXMLGUIBuilder_SetBuilderClient(@ptrCast(self), @ptrCast(client));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#widget)
    ///
    /// ``` self: QtC.KXMLGUIBuilder ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KXMLGUIBuilder_Widget(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// ``` self: QtC.KXMLGUIBuilder, allocator: std.mem.Allocator ```
    pub fn ContainerTags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KXMLGUIBuilder_ContainerTags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguibuilder.ContainerTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguibuilder.ContainerTags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXMLGUIBuilder, callback: *const fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnContainerTags(self: ?*anyopaque, callback: *const fn () callconv(.c) [*][*:0]const u8) void {
        qtc.KXMLGUIBuilder_OnContainerTags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXMLGUIBuilder, allocator: std.mem.Allocator ```
    pub fn QBaseContainerTags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KXMLGUIBuilder_QBaseContainerTags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguibuilder.ContainerTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguibuilder.ContainerTags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// ``` self: QtC.KXMLGUIBuilder, parent: QtC.QWidget, index: i32, element: QtC.QDomElement, containerAction: QtC.QAction ```
    pub fn CreateContainer(self: ?*anyopaque, parent: ?*anyopaque, index: i32, element: ?*anyopaque, containerAction: ?**anyopaque) QtC.QWidget {
        return qtc.KXMLGUIBuilder_CreateContainer(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(element), @ptrCast(containerAction));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXMLGUIBuilder, callback: *const fn (self: QtC.KXMLGUIBuilder, parent: QtC.QWidget, index: i32, element: QtC.QDomElement, containerAction: QtC.QAction) callconv(.c) QtC.QWidget ```
    pub fn OnCreateContainer(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, ?**anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.KXMLGUIBuilder_OnCreateContainer(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXMLGUIBuilder, parent: QtC.QWidget, index: i32, element: QtC.QDomElement, containerAction: QtC.QAction ```
    pub fn QBaseCreateContainer(self: ?*anyopaque, parent: ?*anyopaque, index: i32, element: ?*anyopaque, containerAction: ?**anyopaque) QtC.QWidget {
        return qtc.KXMLGUIBuilder_QBaseCreateContainer(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(element), @ptrCast(containerAction));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// ``` self: QtC.KXMLGUIBuilder, container: QtC.QWidget, parent: QtC.QWidget, element: QtC.QDomElement, containerAction: QtC.QAction ```
    pub fn RemoveContainer(self: ?*anyopaque, container: ?*anyopaque, parent: ?*anyopaque, element: ?*anyopaque, containerAction: ?*anyopaque) void {
        qtc.KXMLGUIBuilder_RemoveContainer(@ptrCast(self), @ptrCast(container), @ptrCast(parent), @ptrCast(element), @ptrCast(containerAction));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXMLGUIBuilder, callback: *const fn (self: QtC.KXMLGUIBuilder, container: QtC.QWidget, parent: QtC.QWidget, element: QtC.QDomElement, containerAction: QtC.QAction) callconv(.c) void ```
    pub fn OnRemoveContainer(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXMLGUIBuilder_OnRemoveContainer(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXMLGUIBuilder, container: QtC.QWidget, parent: QtC.QWidget, element: QtC.QDomElement, containerAction: QtC.QAction ```
    pub fn QBaseRemoveContainer(self: ?*anyopaque, container: ?*anyopaque, parent: ?*anyopaque, element: ?*anyopaque, containerAction: ?*anyopaque) void {
        qtc.KXMLGUIBuilder_QBaseRemoveContainer(@ptrCast(self), @ptrCast(container), @ptrCast(parent), @ptrCast(element), @ptrCast(containerAction));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// ``` self: QtC.KXMLGUIBuilder, allocator: std.mem.Allocator ```
    pub fn CustomTags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KXMLGUIBuilder_CustomTags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguibuilder.CustomTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguibuilder.CustomTags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXMLGUIBuilder, callback: *const fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnCustomTags(self: ?*anyopaque, callback: *const fn () callconv(.c) [*][*:0]const u8) void {
        qtc.KXMLGUIBuilder_OnCustomTags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXMLGUIBuilder, allocator: std.mem.Allocator ```
    pub fn QBaseCustomTags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KXMLGUIBuilder_QBaseCustomTags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguibuilder.CustomTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguibuilder.CustomTags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// ``` self: QtC.KXMLGUIBuilder, parent: QtC.QWidget, index: i32, element: QtC.QDomElement ```
    pub fn CreateCustomElement(self: ?*anyopaque, parent: ?*anyopaque, index: i32, element: ?*anyopaque) QtC.QAction {
        return qtc.KXMLGUIBuilder_CreateCustomElement(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(element));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXMLGUIBuilder, callback: *const fn (self: QtC.KXMLGUIBuilder, parent: QtC.QWidget, index: i32, element: QtC.QDomElement) callconv(.c) QtC.QAction ```
    pub fn OnCreateCustomElement(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QAction) void {
        qtc.KXMLGUIBuilder_OnCreateCustomElement(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXMLGUIBuilder, parent: QtC.QWidget, index: i32, element: QtC.QDomElement ```
    pub fn QBaseCreateCustomElement(self: ?*anyopaque, parent: ?*anyopaque, index: i32, element: ?*anyopaque) QtC.QAction {
        return qtc.KXMLGUIBuilder_QBaseCreateCustomElement(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(element));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
    ///
    /// ``` self: QtC.KXMLGUIBuilder, client: QtC.KXMLGUIClient ```
    pub fn FinalizeGUI(self: ?*anyopaque, client: ?*anyopaque) void {
        qtc.KXMLGUIBuilder_FinalizeGUI(@ptrCast(self), @ptrCast(client));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXMLGUIBuilder, callback: *const fn (self: QtC.KXMLGUIBuilder, client: QtC.KXMLGUIClient) callconv(.c) void ```
    pub fn OnFinalizeGUI(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXMLGUIBuilder_OnFinalizeGUI(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXMLGUIBuilder, client: QtC.KXMLGUIClient ```
    pub fn QBaseFinalizeGUI(self: ?*anyopaque, client: ?*anyopaque) void {
        qtc.KXMLGUIBuilder_QBaseFinalizeGUI(@ptrCast(self), @ptrCast(client));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#virtual_hook)
    ///
    /// ``` self: QtC.KXMLGUIBuilder, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KXMLGUIBuilder_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXMLGUIBuilder, callback: *const fn (self: QtC.KXMLGUIBuilder, id: i32, data: ?*anyopaque) callconv(.c) void ```
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KXMLGUIBuilder_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXMLGUIBuilder, id: i32, data: ?*anyopaque ```
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KXMLGUIBuilder_QBaseVirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#dtor.KXMLGUIBuilder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KXMLGUIBuilder ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KXMLGUIBuilder_Delete(@ptrCast(self));
    }
};
