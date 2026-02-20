const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html)
pub const qdesigneroptionspageinterface = struct {
    /// New constructs a new QDesignerOptionsPageInterface object.
    ///
    pub fn New() QtC.QDesignerOptionsPageInterface {
        return qtc.QDesignerOptionsPageInterface_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerOptionsPageInterface_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesigneroptionspageinterface.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerOptionsPageInterface_OnName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerOptionsPageInterface_QBaseName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesigneroptionspageinterface.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#createPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreatePage(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerOptionsPageInterface_CreatePage(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#createPage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerOptionsPageInterface, parent: QtC.QWidget) callconv(.c) QtC.QWidget `
    ///
    pub fn OnCreatePage(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QDesignerOptionsPageInterface_OnCreatePage(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#createPage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn QBaseCreatePage(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerOptionsPageInterface_QBaseCreatePage(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    pub fn Apply(self: ?*anyopaque) void {
        qtc.QDesignerOptionsPageInterface_Apply(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnApply(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerOptionsPageInterface_OnApply(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    pub fn QBaseApply(self: ?*anyopaque) void {
        qtc.QDesignerOptionsPageInterface_QBaseApply(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    pub fn Finish(self: ?*anyopaque) void {
        qtc.QDesignerOptionsPageInterface_Finish(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnFinish(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerOptionsPageInterface_OnFinish(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    pub fn QBaseFinish(self: ?*anyopaque) void {
        qtc.QDesignerOptionsPageInterface_QBaseFinish(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#dtor.QDesignerOptionsPageInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerOptionsPageInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerOptionsPageInterface_Delete(@ptrCast(self));
    }
};
