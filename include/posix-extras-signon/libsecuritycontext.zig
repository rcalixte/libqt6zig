const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
pub const SignOn__SecurityContext = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.SignOn__SecurityContext,

    pub const _is_SignOn__SecurityContext = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new SignOn::SecurityContext object in C++ memory
    ///
    pub fn new() SignOn__SecurityContext {
        return .{ .ptr = qtc.SignOn__SecurityContext_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new SignOn::SecurityContext object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _systemContext: []const u8 `
    ///
    /// ` _applicationContext: []const u8 `
    ///
    pub fn new2(_systemContext: []const u8, _applicationContext: []const u8) SignOn__SecurityContext {
        const systemContext_str = qtc.libqt_string{
            .len = _systemContext.len,
            .data = _systemContext.ptr,
        };
        const applicationContext_str = qtc.libqt_string{
            .len = _applicationContext.len,
            .data = _applicationContext.ptr,
        };
        return .{ .ptr = qtc.SignOn__SecurityContext_new2(systemContext_str, applicationContext_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new SignOn::SecurityContext object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: SignOn__SecurityContext `
    ///
    pub fn new3(param1: anytype) SignOn__SecurityContext {
        comptime _ = @TypeOf(param1)._is_SignOn__SecurityContext;
        return .{ .ptr = qtc.SignOn__SecurityContext_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `setSystemContext` instead
    ///
    pub const SetSystemContext = setSystemContext;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SecurityContext `
    ///
    /// ` _systemContext: []const u8 `
    ///
    pub fn setSystemContext(self: SignOn__SecurityContext, _systemContext: []const u8) void {
        const systemContext_str = qtc.libqt_string{
            .len = _systemContext.len,
            .data = _systemContext.ptr,
        };
        qtc.SignOn__SecurityContext_SetSystemContext(@ptrCast(self.ptr), systemContext_str);
    }

    /// ### DEPRECATED: Use `systemContext` instead
    ///
    pub const SystemContext = systemContext;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SecurityContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn systemContext(self: SignOn__SecurityContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SecurityContext_SystemContext(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__SecurityContext.systemContext: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setApplicationContext` instead
    ///
    pub const SetApplicationContext = setApplicationContext;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SecurityContext `
    ///
    /// ` _applicationContext: []const u8 `
    ///
    pub fn setApplicationContext(self: SignOn__SecurityContext, _applicationContext: []const u8) void {
        const applicationContext_str = qtc.libqt_string{
            .len = _applicationContext.len,
            .data = _applicationContext.ptr,
        };
        qtc.SignOn__SecurityContext_SetApplicationContext(@ptrCast(self.ptr), applicationContext_str);
    }

    /// ### DEPRECATED: Use `applicationContext` instead
    ///
    pub const ApplicationContext = applicationContext;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SecurityContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationContext(self: SignOn__SecurityContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SecurityContext_ApplicationContext(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__SecurityContext.applicationContext: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: SignOn__SecurityContext `
    ///
    pub fn delete(self: SignOn__SecurityContext) void {
        qtc.SignOn__SecurityContext_Delete(@ptrCast(self.ptr));
    }
};
