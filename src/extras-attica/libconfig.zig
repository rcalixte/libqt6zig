const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-config.html)
pub const Attica__Config = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-config.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Config,

    pub const _is_Attica__Config = {};

    /// New constructs a new Attica::Config object.
    ///
    pub fn New() Attica__Config {
        return .{ .ptr = qtc.Attica__Config_new() };
    }

    /// New2 constructs a new Attica::Config object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Config `
    ///
    pub fn New2(other: anytype) Attica__Config {
        comptime _ = @TypeOf(other)._is_Attica__Config;
        return .{ .ptr = qtc.Attica__Config_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` other: Attica__Config `
    ///
    pub fn OperatorAssign(self: Attica__Config, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Config;
        qtc.Attica__Config_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#contact)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contact(self: Attica__Config, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Config_Contact(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__config.Contact: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Host(self: Attica__Config, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Config_Host(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__config.Host: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: Attica__Config, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Config_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__config.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#ssl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    pub fn Ssl(self: Attica__Config) bool {
        return qtc.Attica__Config_Ssl(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#website)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Website(self: Attica__Config, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Config_Website(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__config.Website: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setContact)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` contact: []const u8 `
    ///
    pub fn SetContact(self: Attica__Config, contact: []const u8) void {
        const contact_str = qtc.libqt_string{
            .len = contact.len,
            .data = contact.ptr,
        };
        qtc.Attica__Config_SetContact(@ptrCast(self.ptr), contact_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` host: []const u8 `
    ///
    pub fn SetHost(self: Attica__Config, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.Attica__Config_SetHost(@ptrCast(self.ptr), host_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setSsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` ssl: bool `
    ///
    pub fn SetSsl(self: Attica__Config, ssl: bool) void {
        qtc.Attica__Config_SetSsl(@ptrCast(self.ptr), ssl);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` version: []const u8 `
    ///
    pub fn SetVersion(self: Attica__Config, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.Attica__Config_SetVersion(@ptrCast(self.ptr), version_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setWebsite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` website: []const u8 `
    ///
    pub fn SetWebsite(self: Attica__Config, website: []const u8) void {
        const website_str = qtc.libqt_string{
            .len = website.len,
            .data = website.ptr,
        };
        qtc.Attica__Config_SetWebsite(@ptrCast(self.ptr), website_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    pub fn IsValid(self: Attica__Config) bool {
        return qtc.Attica__Config_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Config `
    ///
    pub fn Delete(self: Attica__Config) void {
        qtc.Attica__Config_Delete(@ptrCast(self.ptr));
    }
};
