const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KXMLGUIClient = @import("libqt6").KXMLGUIClient;
const QAction = @import("libqt6").QAction;
const QDomElement = @import("libqt6").QDomElement;
const QWidget = @import("libqt6").QWidget;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html)
pub const KXMLGUIBuilder = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KXMLGUIBuilder,

    pub const _is_KXMLGUIBuilder = {};

    /// New constructs a new KXMLGUIBuilder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QWidget `
    ///
    pub fn New(widget: anytype) KXMLGUIBuilder {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.KXMLGUIBuilder_new(@ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#builderClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    pub fn BuilderClient(self: KXMLGUIBuilder) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIBuilder_BuilderClient(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#setBuilderClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn SetBuilderClient(self: KXMLGUIBuilder, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        qtc.KXMLGUIBuilder_SetBuilderClient(@ptrCast(self.ptr), @ptrCast(client.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    pub fn Widget(self: KXMLGUIBuilder) QWidget {
        return .{ .ptr = qtc.KXMLGUIBuilder_Widget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContainerTags(self: KXMLGUIBuilder, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXMLGUIBuilder_ContainerTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnContainerTags(self: KXMLGUIBuilder, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KXMLGUIBuilder_OnContainerTags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContainerTags` instead
    ///
    pub const QBaseContainerTags = SuperContainerTags;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperContainerTags(self: KXMLGUIBuilder, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXMLGUIBuilder_SuperContainerTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` parent: QWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` element: QDomElement `
    ///
    /// ` containerAction: QAction `
    ///
    pub fn CreateContainer(self: KXMLGUIBuilder, parent: anytype, index: i32, element: anytype, containerAction: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        return .{ .ptr = qtc.KXMLGUIBuilder_CreateContainer(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(element.ptr), @ptrCast(containerAction.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` callback: *const fn (self: KXMLGUIBuilder, parent: QWidget, index: i32, element: QDomElement, containerAction: QAction) callconv(.c) QWidget `
    ///
    pub fn OnCreateContainer(self: KXMLGUIBuilder, callback: *const fn (KXMLGUIBuilder, QWidget, i32, QDomElement, QAction) callconv(.c) QWidget) void {
        qtc.KXMLGUIBuilder_OnCreateContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateContainer` instead
    ///
    pub const QBaseCreateContainer = SuperCreateContainer;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` parent: QWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` element: QDomElement `
    ///
    /// ` containerAction: QAction `
    ///
    pub fn SuperCreateContainer(self: KXMLGUIBuilder, parent: anytype, index: i32, element: anytype, containerAction: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        return .{ .ptr = qtc.KXMLGUIBuilder_SuperCreateContainer(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(element.ptr), @ptrCast(containerAction.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` container: QWidget `
    ///
    /// ` parent: QWidget `
    ///
    /// ` element: QDomElement `
    ///
    /// ` containerAction: QAction `
    ///
    pub fn RemoveContainer(self: KXMLGUIBuilder, container: anytype, parent: anytype, element: anytype, containerAction: anytype) void {
        comptime _ = @TypeOf(container)._is_QWidget;
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        qtc.KXMLGUIBuilder_RemoveContainer(@ptrCast(self.ptr), @ptrCast(container.ptr), @ptrCast(parent.ptr), @ptrCast(element.ptr), @ptrCast(containerAction.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` callback: *const fn (self: KXMLGUIBuilder, container: QWidget, parent: QWidget, element: QDomElement, containerAction: QAction) callconv(.c) void `
    ///
    pub fn OnRemoveContainer(self: KXMLGUIBuilder, callback: *const fn (KXMLGUIBuilder, QWidget, QWidget, QDomElement, QAction) callconv(.c) void) void {
        qtc.KXMLGUIBuilder_OnRemoveContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveContainer` instead
    ///
    pub const QBaseRemoveContainer = SuperRemoveContainer;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` container: QWidget `
    ///
    /// ` parent: QWidget `
    ///
    /// ` element: QDomElement `
    ///
    /// ` containerAction: QAction `
    ///
    pub fn SuperRemoveContainer(self: KXMLGUIBuilder, container: anytype, parent: anytype, element: anytype, containerAction: anytype) void {
        comptime _ = @TypeOf(container)._is_QWidget;
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        qtc.KXMLGUIBuilder_SuperRemoveContainer(@ptrCast(self.ptr), @ptrCast(container.ptr), @ptrCast(parent.ptr), @ptrCast(element.ptr), @ptrCast(containerAction.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomTags(self: KXMLGUIBuilder, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXMLGUIBuilder_CustomTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnCustomTags(self: KXMLGUIBuilder, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KXMLGUIBuilder_OnCustomTags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCustomTags` instead
    ///
    pub const QBaseCustomTags = SuperCustomTags;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperCustomTags(self: KXMLGUIBuilder, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXMLGUIBuilder_SuperCustomTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` parent: QWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` element: QDomElement `
    ///
    pub fn CreateCustomElement(self: KXMLGUIBuilder, parent: anytype, index: i32, element: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXMLGUIBuilder_CreateCustomElement(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(element.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` callback: *const fn (self: KXMLGUIBuilder, parent: QWidget, index: i32, element: QDomElement) callconv(.c) QAction `
    ///
    pub fn OnCreateCustomElement(self: KXMLGUIBuilder, callback: *const fn (KXMLGUIBuilder, QWidget, i32, QDomElement) callconv(.c) QAction) void {
        qtc.KXMLGUIBuilder_OnCreateCustomElement(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateCustomElement` instead
    ///
    pub const QBaseCreateCustomElement = SuperCreateCustomElement;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` parent: QWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` element: QDomElement `
    ///
    pub fn SuperCreateCustomElement(self: KXMLGUIBuilder, parent: anytype, index: i32, element: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXMLGUIBuilder_SuperCreateCustomElement(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(element.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn FinalizeGUI(self: KXMLGUIBuilder, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        qtc.KXMLGUIBuilder_FinalizeGUI(@ptrCast(self.ptr), @ptrCast(client.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` callback: *const fn (self: KXMLGUIBuilder, client: KXMLGUIClient) callconv(.c) void `
    ///
    pub fn OnFinalizeGUI(self: KXMLGUIBuilder, callback: *const fn (KXMLGUIBuilder, KXMLGUIClient) callconv(.c) void) void {
        qtc.KXMLGUIBuilder_OnFinalizeGUI(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFinalizeGUI` instead
    ///
    pub const QBaseFinalizeGUI = SuperFinalizeGUI;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn SuperFinalizeGUI(self: KXMLGUIBuilder, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        qtc.KXMLGUIBuilder_SuperFinalizeGUI(@ptrCast(self.ptr), @ptrCast(client.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#dtor.KXMLGUIBuilder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    pub fn Delete(self: KXMLGUIBuilder) void {
        qtc.KXMLGUIBuilder_Delete(@ptrCast(self.ptr));
    }
};
