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

    /// New constructs a new SignOn::SecurityContext object.
    ///
    pub fn New() SignOn__SecurityContext {
        return .{ .ptr = qtc.SignOn__SecurityContext_new() };
    }

    /// New2 constructs a new SignOn::SecurityContext object.
    ///
    /// ## Parameter(s):
    ///
    /// ` systemContext: []const u8 `
    ///
    /// ` applicationContext: []const u8 `
    ///
    pub fn New2(systemContext: []const u8, applicationContext: []const u8) SignOn__SecurityContext {
        const systemContext_str = qtc.libqt_string{
            .len = systemContext.len,
            .data = systemContext.ptr,
        };
        const applicationContext_str = qtc.libqt_string{
            .len = applicationContext.len,
            .data = applicationContext.ptr,
        };
        return .{ .ptr = qtc.SignOn__SecurityContext_new2(systemContext_str, applicationContext_str) };
    }

    /// New3 constructs a new SignOn::SecurityContext object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: SignOn__SecurityContext `
    ///
    pub fn New3(param1: anytype) SignOn__SecurityContext {
        comptime _ = @TypeOf(param1)._is_SignOn__SecurityContext;
        return .{ .ptr = qtc.SignOn__SecurityContext_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SecurityContext `
    ///
    /// ` systemContext: []const u8 `
    ///
    pub fn SetSystemContext(self: SignOn__SecurityContext, systemContext: []const u8) void {
        const systemContext_str = qtc.libqt_string{
            .len = systemContext.len,
            .data = systemContext.ptr,
        };
        qtc.SignOn__SecurityContext_SetSystemContext(@ptrCast(self.ptr), systemContext_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SecurityContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemContext(self: SignOn__SecurityContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SecurityContext_SystemContext(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__securitycontext.SystemContext: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SecurityContext `
    ///
    /// ` applicationContext: []const u8 `
    ///
    pub fn SetApplicationContext(self: SignOn__SecurityContext, applicationContext: []const u8) void {
        const applicationContext_str = qtc.libqt_string{
            .len = applicationContext.len,
            .data = applicationContext.ptr,
        };
        qtc.SignOn__SecurityContext_SetApplicationContext(@ptrCast(self.ptr), applicationContext_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SecurityContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationContext(self: SignOn__SecurityContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SecurityContext_ApplicationContext(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__securitycontext.ApplicationContext: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: SignOn__SecurityContext `
    ///
    pub fn Delete(self: SignOn__SecurityContext) void {
        qtc.SignOn__SecurityContext_Delete(@ptrCast(self.ptr));
    }
};
