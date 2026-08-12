const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html)
pub const QDesignerTaskMenuExtension = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerTaskMenuExtension,

    pub const _is_QDesignerTaskMenuExtension = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerTaskMenuExtension object in C++ memory
    ///
    pub fn new() QDesignerTaskMenuExtension {
        return .{ .ptr = qtc.QDesignerTaskMenuExtension_new() };
    }

    /// ### DEPRECATED: Use `preferredEditAction` instead
    ///
    pub const PreferredEditAction = preferredEditAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerTaskMenuExtension `
    ///
    pub fn preferredEditAction(self: QDesignerTaskMenuExtension) QAction {
        return .{ .ptr = qtc.QDesignerTaskMenuExtension_PreferredEditAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPreferredEditAction` instead
    ///
    pub const OnPreferredEditAction = onPreferredEditAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerTaskMenuExtension `
    ///
    /// ` callback: *const fn () callconv(.c) QAction `
    ///
    pub fn onPreferredEditAction(self: QDesignerTaskMenuExtension, callback: *const fn () callconv(.c) QAction) void {
        qtc.QDesignerTaskMenuExtension_OnPreferredEditAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPreferredEditAction` instead
    ///
    pub const SuperPreferredEditAction = superPreferredEditAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerTaskMenuExtension `
    ///
    pub fn superPreferredEditAction(self: QDesignerTaskMenuExtension) QAction {
        return .{ .ptr = qtc.QDesignerTaskMenuExtension_SuperPreferredEditAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `taskActions` instead
    ///
    pub const TaskActions = taskActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#taskActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerTaskMenuExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn taskActions(self: QDesignerTaskMenuExtension, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QDesignerTaskMenuExtension_TaskActions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QDesignerTaskMenuExtension.taskActions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onTaskActions` instead
    ///
    pub const OnTaskActions = onTaskActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#taskActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerTaskMenuExtension `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QAction `
    ///
    pub fn onTaskActions(self: QDesignerTaskMenuExtension, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QDesignerTaskMenuExtension_OnTaskActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTaskActions` instead
    ///
    pub const SuperTaskActions = superTaskActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#taskActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerTaskMenuExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superTaskActions(self: QDesignerTaskMenuExtension, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QDesignerTaskMenuExtension_SuperTaskActions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QDesignerTaskMenuExtension.taskActions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#dtor.QDesignerTaskMenuExtension)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerTaskMenuExtension `
    ///
    pub fn delete(self: QDesignerTaskMenuExtension) void {
        qtc.QDesignerTaskMenuExtension_Delete(@ptrCast(self.ptr));
    }
};
