const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QWidget = @import("libqt6").QWidget;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html)
pub const QDesignerOptionsPageInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerOptionsPageInterface,

    pub const _is_QDesignerOptionsPageInterface = {};

    /// New constructs a new QDesignerOptionsPageInterface object.
    ///
    pub fn New() QDesignerOptionsPageInterface {
        return .{ .ptr = qtc.QDesignerOptionsPageInterface_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QDesignerOptionsPageInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerOptionsPageInterface_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesigneroptionspageinterface.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnName(self: QDesignerOptionsPageInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerOptionsPageInterface_OnName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperName` instead
    ///
    pub const QBaseName = SuperName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperName(self: QDesignerOptionsPageInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerOptionsPageInterface_SuperName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesigneroptionspageinterface.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#createPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreatePage(self: QDesignerOptionsPageInterface, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerOptionsPageInterface_CreatePage(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#createPage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    /// ` callback: *const fn (self: QDesignerOptionsPageInterface, parent: QWidget) callconv(.c) QWidget `
    ///
    pub fn OnCreatePage(self: QDesignerOptionsPageInterface, callback: *const fn (QDesignerOptionsPageInterface, QWidget) callconv(.c) QWidget) void {
        qtc.QDesignerOptionsPageInterface_OnCreatePage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreatePage` instead
    ///
    pub const QBaseCreatePage = SuperCreatePage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#createPage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SuperCreatePage(self: QDesignerOptionsPageInterface, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerOptionsPageInterface_SuperCreatePage(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    pub fn Apply(self: QDesignerOptionsPageInterface) void {
        qtc.QDesignerOptionsPageInterface_Apply(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnApply(self: QDesignerOptionsPageInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerOptionsPageInterface_OnApply(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperApply` instead
    ///
    pub const QBaseApply = SuperApply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    pub fn SuperApply(self: QDesignerOptionsPageInterface) void {
        qtc.QDesignerOptionsPageInterface_SuperApply(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    pub fn Finish(self: QDesignerOptionsPageInterface) void {
        qtc.QDesignerOptionsPageInterface_Finish(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnFinish(self: QDesignerOptionsPageInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerOptionsPageInterface_OnFinish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFinish` instead
    ///
    pub const QBaseFinish = SuperFinish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    pub fn SuperFinish(self: QDesignerOptionsPageInterface) void {
        qtc.QDesignerOptionsPageInterface_SuperFinish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#dtor.QDesignerOptionsPageInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    pub fn Delete(self: QDesignerOptionsPageInterface) void {
        qtc.QDesignerOptionsPageInterface_Delete(@ptrCast(self.ptr));
    }
};
