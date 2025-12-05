const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-config.html)
pub const attica__config = struct {
    /// New constructs a new Attica::Config object.
    ///
    pub fn New() QtC.Attica__Config {
        return qtc.Attica__Config_new();
    }

    /// New2 constructs a new Attica::Config object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Attica__Config `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Attica__Config {
        return qtc.Attica__Config_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Config `
    ///
    /// ` other: QtC.Attica__Config `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Config_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#contact)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Config `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contact(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Config_Contact(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::config.Contact: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Config `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Host(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Config_Host(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::config.Host: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Config `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Config_Version(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::config.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#ssl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Config `
    ///
    pub fn Ssl(self: ?*anyopaque) bool {
        return qtc.Attica__Config_Ssl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#website)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Config `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Website(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Config_Website(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::config.Website: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setContact)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Config `
    ///
    /// ` contact: []const u8 `
    ///
    pub fn SetContact(self: ?*anyopaque, contact: []const u8) void {
        const contact_str = qtc.libqt_string{
            .len = contact.len,
            .data = contact.ptr,
        };
        qtc.Attica__Config_SetContact(@ptrCast(self), contact_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Config `
    ///
    /// ` host: []const u8 `
    ///
    pub fn SetHost(self: ?*anyopaque, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.Attica__Config_SetHost(@ptrCast(self), host_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setSsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Config `
    ///
    /// ` ssl: bool `
    ///
    pub fn SetSsl(self: ?*anyopaque, ssl: bool) void {
        qtc.Attica__Config_SetSsl(@ptrCast(self), ssl);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Config `
    ///
    /// ` version: []const u8 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.Attica__Config_SetVersion(@ptrCast(self), version_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setWebsite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Config `
    ///
    /// ` website: []const u8 `
    ///
    pub fn SetWebsite(self: ?*anyopaque, website: []const u8) void {
        const website_str = qtc.libqt_string{
            .len = website.len,
            .data = website.ptr,
        };
        qtc.Attica__Config_SetWebsite(@ptrCast(self), website_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Config `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Config_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Attica__Config `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Config_Delete(@ptrCast(self));
    }
};
