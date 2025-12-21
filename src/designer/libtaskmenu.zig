const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html)
pub const qdesignertaskmenuextension = struct {
    /// New constructs a new QDesignerTaskMenuExtension object.
    ///
    pub fn New() QtC.QDesignerTaskMenuExtension {
        return qtc.QDesignerTaskMenuExtension_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerTaskMenuExtension `
    ///
    pub fn PreferredEditAction(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerTaskMenuExtension_PreferredEditAction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerTaskMenuExtension `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAction `
    ///
    pub fn OnPreferredEditAction(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAction) void {
        qtc.QDesignerTaskMenuExtension_OnPreferredEditAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerTaskMenuExtension `
    ///
    pub fn QBasePreferredEditAction(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerTaskMenuExtension_QBasePreferredEditAction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#taskActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerTaskMenuExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TaskActions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QDesignerTaskMenuExtension_TaskActions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qdesignertaskmenuextension.TaskActions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#taskActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerTaskMenuExtension `
    ///
    /// ` callback: *const fn () callconv(.c) [*:null]QtC.QAction `
    ///
    pub fn OnTaskActions(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.QAction) void {
        qtc.QDesignerTaskMenuExtension_OnTaskActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#taskActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerTaskMenuExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseTaskActions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QDesignerTaskMenuExtension_QBaseTaskActions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qdesignertaskmenuextension.TaskActions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#dtor.QDesignerTaskMenuExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerTaskMenuExtension `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerTaskMenuExtension_Delete(@ptrCast(self));
    }
};
