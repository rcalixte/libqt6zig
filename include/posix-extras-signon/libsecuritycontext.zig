const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
pub const signon__securitycontext = struct {
    /// New constructs a new SignOn::SecurityContext object.
    ///
    pub fn New() QtC.SignOn__SecurityContext {
        return qtc.SignOn__SecurityContext_new();
    }

    /// New2 constructs a new SignOn::SecurityContext object.
    ///
    /// ## Parameter(s):
    ///
    /// ` systemContext: []const u8 `
    ///
    /// ` applicationContext: []const u8 `
    ///
    pub fn New2(systemContext: []const u8, applicationContext: []const u8) QtC.SignOn__SecurityContext {
        const systemContext_str = qtc.libqt_string{
            .len = systemContext.len,
            .data = systemContext.ptr,
        };
        const applicationContext_str = qtc.libqt_string{
            .len = applicationContext.len,
            .data = applicationContext.ptr,
        };

        return qtc.SignOn__SecurityContext_new2(systemContext_str, applicationContext_str);
    }

    /// New3 constructs a new SignOn::SecurityContext object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.SignOn__SecurityContext `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.SignOn__SecurityContext {
        return qtc.SignOn__SecurityContext_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SecurityContext `
    ///
    /// ` systemContext: []const u8 `
    ///
    pub fn SetSystemContext(self: ?*anyopaque, systemContext: []const u8) void {
        const systemContext_str = qtc.libqt_string{
            .len = systemContext.len,
            .data = systemContext.ptr,
        };
        qtc.SignOn__SecurityContext_SetSystemContext(@ptrCast(self), systemContext_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SecurityContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemContext(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SecurityContext_SystemContext(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::securitycontext.SystemContext: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SecurityContext `
    ///
    /// ` applicationContext: []const u8 `
    ///
    pub fn SetApplicationContext(self: ?*anyopaque, applicationContext: []const u8) void {
        const applicationContext_str = qtc.libqt_string{
            .len = applicationContext.len,
            .data = applicationContext.ptr,
        };
        qtc.SignOn__SecurityContext_SetApplicationContext(@ptrCast(self), applicationContext_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SecurityContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationContext(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SecurityContext_ApplicationContext(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::securitycontext.ApplicationContext: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.SignOn__SecurityContext `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.SignOn__SecurityContext_Delete(@ptrCast(self));
    }
};
