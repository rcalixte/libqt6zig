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

    /// New constructs a new QDesignerTaskMenuExtension object.
    ///
    pub fn New() QDesignerTaskMenuExtension {
        return .{ .ptr = qtc.QDesignerTaskMenuExtension_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerTaskMenuExtension `
    ///
    pub fn PreferredEditAction(self: QDesignerTaskMenuExtension) QAction {
        return .{ .ptr = qtc.QDesignerTaskMenuExtension_PreferredEditAction(@ptrCast(self.ptr)) };
    }

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
    pub fn OnPreferredEditAction(self: QDesignerTaskMenuExtension, callback: *const fn () callconv(.c) QAction) void {
        qtc.QDesignerTaskMenuExtension_OnPreferredEditAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPreferredEditAction` instead
    ///
    pub const QBasePreferredEditAction = SuperPreferredEditAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerTaskMenuExtension `
    ///
    pub fn SuperPreferredEditAction(self: QDesignerTaskMenuExtension) QAction {
        return .{ .ptr = qtc.QDesignerTaskMenuExtension_SuperPreferredEditAction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#taskActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerTaskMenuExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TaskActions(self: QDesignerTaskMenuExtension, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QDesignerTaskMenuExtension_TaskActions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qdesignertaskmenuextension.TaskActions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn OnTaskActions(self: QDesignerTaskMenuExtension, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QDesignerTaskMenuExtension_OnTaskActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTaskActions` instead
    ///
    pub const QBaseTaskActions = SuperTaskActions;

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
    pub fn SuperTaskActions(self: QDesignerTaskMenuExtension, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QDesignerTaskMenuExtension_SuperTaskActions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qdesignertaskmenuextension.TaskActions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#dtor.QDesignerTaskMenuExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerTaskMenuExtension `
    ///
    pub fn Delete(self: QDesignerTaskMenuExtension) void {
        qtc.QDesignerTaskMenuExtension_Delete(@ptrCast(self.ptr));
    }
};
