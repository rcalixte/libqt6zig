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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KXMLGUIBuilder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _widget: QWidget `
    ///
    pub fn new(_widget: anytype) KXMLGUIBuilder {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        return .{ .ptr = qtc.KXMLGUIBuilder_new(@ptrCast(_widget.ptr)) };
    }

    /// ### DEPRECATED: Use `builderClient` instead
    ///
    pub const BuilderClient = builderClient;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#builderClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    pub fn builderClient(self: KXMLGUIBuilder) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIBuilder_BuilderClient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBuilderClient` instead
    ///
    pub const SetBuilderClient = setBuilderClient;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#setBuilderClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn setBuilderClient(self: KXMLGUIBuilder, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        qtc.KXMLGUIBuilder_SetBuilderClient(@ptrCast(self.ptr), @ptrCast(client.ptr));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    pub fn widget(self: KXMLGUIBuilder) QWidget {
        return .{ .ptr = qtc.KXMLGUIBuilder_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `containerTags` instead
    ///
    pub const ContainerTags = containerTags;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn containerTags(self: KXMLGUIBuilder, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXMLGUIBuilder_ContainerTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KXMLGUIBuilder.containerTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KXMLGUIBuilder.containerTags: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onContainerTags` instead
    ///
    pub const OnContainerTags = onContainerTags;

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
    pub fn onContainerTags(self: KXMLGUIBuilder, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KXMLGUIBuilder_OnContainerTags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContainerTags` instead
    ///
    pub const SuperContainerTags = superContainerTags;

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
    pub fn superContainerTags(self: KXMLGUIBuilder, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXMLGUIBuilder_SuperContainerTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KXMLGUIBuilder.containerTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KXMLGUIBuilder.containerTags: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `createContainer` instead
    ///
    pub const CreateContainer = createContainer;

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
    pub fn createContainer(self: KXMLGUIBuilder, parent: anytype, index: i32, element: anytype, containerAction: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        return .{ .ptr = qtc.KXMLGUIBuilder_CreateContainer(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(element.ptr), @ptrCast(containerAction.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateContainer` instead
    ///
    pub const OnCreateContainer = onCreateContainer;

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
    pub fn onCreateContainer(self: KXMLGUIBuilder, callback: *const fn (KXMLGUIBuilder, QWidget, i32, QDomElement, QAction) callconv(.c) QWidget) void {
        qtc.KXMLGUIBuilder_OnCreateContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateContainer` instead
    ///
    pub const SuperCreateContainer = superCreateContainer;

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
    pub fn superCreateContainer(self: KXMLGUIBuilder, parent: anytype, index: i32, element: anytype, containerAction: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        return .{ .ptr = qtc.KXMLGUIBuilder_SuperCreateContainer(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(element.ptr), @ptrCast(containerAction.ptr)) };
    }

    /// ### DEPRECATED: Use `removeContainer` instead
    ///
    pub const RemoveContainer = removeContainer;

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
    pub fn removeContainer(self: KXMLGUIBuilder, container: anytype, parent: anytype, element: anytype, containerAction: anytype) void {
        comptime _ = @TypeOf(container)._is_QWidget;
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        qtc.KXMLGUIBuilder_RemoveContainer(@ptrCast(self.ptr), @ptrCast(container.ptr), @ptrCast(parent.ptr), @ptrCast(element.ptr), @ptrCast(containerAction.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveContainer` instead
    ///
    pub const OnRemoveContainer = onRemoveContainer;

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
    pub fn onRemoveContainer(self: KXMLGUIBuilder, callback: *const fn (KXMLGUIBuilder, QWidget, QWidget, QDomElement, QAction) callconv(.c) void) void {
        qtc.KXMLGUIBuilder_OnRemoveContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveContainer` instead
    ///
    pub const SuperRemoveContainer = superRemoveContainer;

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
    pub fn superRemoveContainer(self: KXMLGUIBuilder, container: anytype, parent: anytype, element: anytype, containerAction: anytype) void {
        comptime _ = @TypeOf(container)._is_QWidget;
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        qtc.KXMLGUIBuilder_SuperRemoveContainer(@ptrCast(self.ptr), @ptrCast(container.ptr), @ptrCast(parent.ptr), @ptrCast(element.ptr), @ptrCast(containerAction.ptr));
    }

    /// ### DEPRECATED: Use `customTags` instead
    ///
    pub const CustomTags = customTags;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customTags(self: KXMLGUIBuilder, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXMLGUIBuilder_CustomTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KXMLGUIBuilder.customTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KXMLGUIBuilder.customTags: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onCustomTags` instead
    ///
    pub const OnCustomTags = onCustomTags;

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
    pub fn onCustomTags(self: KXMLGUIBuilder, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KXMLGUIBuilder_OnCustomTags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCustomTags` instead
    ///
    pub const SuperCustomTags = superCustomTags;

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
    pub fn superCustomTags(self: KXMLGUIBuilder, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXMLGUIBuilder_SuperCustomTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KXMLGUIBuilder.customTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KXMLGUIBuilder.customTags: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `createCustomElement` instead
    ///
    pub const CreateCustomElement = createCustomElement;

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
    pub fn createCustomElement(self: KXMLGUIBuilder, parent: anytype, index: i32, element: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXMLGUIBuilder_CreateCustomElement(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateCustomElement` instead
    ///
    pub const OnCreateCustomElement = onCreateCustomElement;

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
    pub fn onCreateCustomElement(self: KXMLGUIBuilder, callback: *const fn (KXMLGUIBuilder, QWidget, i32, QDomElement) callconv(.c) QAction) void {
        qtc.KXMLGUIBuilder_OnCreateCustomElement(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateCustomElement` instead
    ///
    pub const SuperCreateCustomElement = superCreateCustomElement;

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
    pub fn superCreateCustomElement(self: KXMLGUIBuilder, parent: anytype, index: i32, element: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXMLGUIBuilder_SuperCreateCustomElement(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `finalizeGUI` instead
    ///
    pub const FinalizeGUI = finalizeGUI;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn finalizeGUI(self: KXMLGUIBuilder, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        qtc.KXMLGUIBuilder_FinalizeGUI(@ptrCast(self.ptr), @ptrCast(client.ptr));
    }

    /// ### DEPRECATED: Use `onFinalizeGUI` instead
    ///
    pub const OnFinalizeGUI = onFinalizeGUI;

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
    pub fn onFinalizeGUI(self: KXMLGUIBuilder, callback: *const fn (KXMLGUIBuilder, KXMLGUIClient) callconv(.c) void) void {
        qtc.KXMLGUIBuilder_OnFinalizeGUI(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFinalizeGUI` instead
    ///
    pub const SuperFinalizeGUI = superFinalizeGUI;

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
    pub fn superFinalizeGUI(self: KXMLGUIBuilder, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        qtc.KXMLGUIBuilder_SuperFinalizeGUI(@ptrCast(self.ptr), @ptrCast(client.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#dtor.KXMLGUIBuilder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KXMLGUIBuilder `
    ///
    pub fn delete(self: KXMLGUIBuilder) void {
        qtc.KXMLGUIBuilder_Delete(@ptrCast(self.ptr));
    }
};
