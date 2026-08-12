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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerOptionsPageInterface object in C++ memory
    ///
    pub fn new() QDesignerOptionsPageInterface {
        return .{ .ptr = qtc.QDesignerOptionsPageInterface_new() };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDesignerOptionsPageInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerOptionsPageInterface_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerOptionsPageInterface.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onName` instead
    ///
    pub const OnName = onName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onName(self: QDesignerOptionsPageInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerOptionsPageInterface_OnName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superName` instead
    ///
    pub const SuperName = superName;

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
    pub fn superName(self: QDesignerOptionsPageInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerOptionsPageInterface_SuperName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerOptionsPageInterface.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createPage` instead
    ///
    pub const CreatePage = createPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#createPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn createPage(self: QDesignerOptionsPageInterface, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerOptionsPageInterface_CreatePage(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreatePage` instead
    ///
    pub const OnCreatePage = onCreatePage;

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
    pub fn onCreatePage(self: QDesignerOptionsPageInterface, callback: *const fn (QDesignerOptionsPageInterface, QWidget) callconv(.c) QWidget) void {
        qtc.QDesignerOptionsPageInterface_OnCreatePage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreatePage` instead
    ///
    pub const SuperCreatePage = superCreatePage;

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
    pub fn superCreatePage(self: QDesignerOptionsPageInterface, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerOptionsPageInterface_SuperCreatePage(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `apply` instead
    ///
    pub const Apply = apply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    pub fn apply(self: QDesignerOptionsPageInterface) void {
        qtc.QDesignerOptionsPageInterface_Apply(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onApply` instead
    ///
    pub const OnApply = onApply;

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
    pub fn onApply(self: QDesignerOptionsPageInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerOptionsPageInterface_OnApply(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superApply` instead
    ///
    pub const SuperApply = superApply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    pub fn superApply(self: QDesignerOptionsPageInterface) void {
        qtc.QDesignerOptionsPageInterface_SuperApply(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `finish` instead
    ///
    pub const Finish = finish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    pub fn finish(self: QDesignerOptionsPageInterface) void {
        qtc.QDesignerOptionsPageInterface_Finish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinish` instead
    ///
    pub const OnFinish = onFinish;

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
    pub fn onFinish(self: QDesignerOptionsPageInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerOptionsPageInterface_OnFinish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFinish` instead
    ///
    pub const SuperFinish = superFinish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    pub fn superFinish(self: QDesignerOptionsPageInterface) void {
        qtc.QDesignerOptionsPageInterface_SuperFinish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#dtor.QDesignerOptionsPageInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerOptionsPageInterface `
    ///
    pub fn delete(self: QDesignerOptionsPageInterface) void {
        qtc.QDesignerOptionsPageInterface_Delete(@ptrCast(self.ptr));
    }
};
