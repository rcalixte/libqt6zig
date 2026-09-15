const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlmoduleregistration.html)
pub const QQmlModuleRegistration = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlmoduleregistration.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlModuleRegistration,

    pub const _is_QQmlModuleRegistration = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlModuleRegistration object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` registerFunction: *const fn () callconv(.c) void `
    ///
    pub fn new(uri: [:0]const u8, registerFunction: *const fn () callconv(.c) void) QQmlModuleRegistration {
        const uri_Cstring = uri.ptr;
        return .{ .ptr = qtc.QQmlModuleRegistration_new(uri_Cstring, @bitCast(@intFromPtr(registerFunction))) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQmlModuleRegistration object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` majorVersion: i32 `
    ///
    /// ` registerFunction: *const fn () callconv(.c) void `
    ///
    pub fn new2(uri: [:0]const u8, majorVersion: i32, registerFunction: *const fn () callconv(.c) void) QQmlModuleRegistration {
        const uri_Cstring = uri.ptr;
        return .{ .ptr = qtc.QQmlModuleRegistration_new2(uri_Cstring, @bitCast(majorVersion), @bitCast(@intFromPtr(registerFunction))) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlmoduleregistration.html#dtor.QQmlModuleRegistration)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlModuleRegistration `
    ///
    pub fn delete(self: QQmlModuleRegistration) void {
        qtc.QQmlModuleRegistration_Delete(@ptrCast(self.ptr));
    }
};
