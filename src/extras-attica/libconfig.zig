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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Config object in C++ memory
    ///
    pub fn new() Attica__Config {
        return .{ .ptr = qtc.Attica__Config_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Config object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Config `
    ///
    pub fn new2(other: anytype) Attica__Config {
        comptime _ = @TypeOf(other)._is_Attica__Config;
        return .{ .ptr = qtc.Attica__Config_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` other: Attica__Config `
    ///
    pub fn operatorAssign(self: Attica__Config, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Config;
        qtc.Attica__Config_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `contact` instead
    ///
    pub const Contact = contact;

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#contact)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contact(self: Attica__Config, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Config_Contact(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Config.contact: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `host` instead
    ///
    pub const Host = host;

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn host(self: Attica__Config, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Config_Host(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Config.host: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn version(self: Attica__Config, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Config_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Config.version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `ssl` instead
    ///
    pub const Ssl = ssl;

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#ssl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    pub fn ssl(self: Attica__Config) bool {
        return qtc.Attica__Config_Ssl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `website` instead
    ///
    pub const Website = website;

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#website)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn website(self: Attica__Config, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Config_Website(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Config.website: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContact` instead
    ///
    pub const SetContact = setContact;

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setContact)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` _contact: []const u8 `
    ///
    pub fn setContact(self: Attica__Config, _contact: []const u8) void {
        const contact_str = qtc.libqt_string{
            .len = _contact.len,
            .data = _contact.ptr,
        };
        qtc.Attica__Config_SetContact(@ptrCast(self.ptr), contact_str);
    }

    /// ### DEPRECATED: Use `setHost` instead
    ///
    pub const SetHost = setHost;

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` _host: []const u8 `
    ///
    pub fn setHost(self: Attica__Config, _host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = _host.len,
            .data = _host.ptr,
        };
        qtc.Attica__Config_SetHost(@ptrCast(self.ptr), host_str);
    }

    /// ### DEPRECATED: Use `setSsl` instead
    ///
    pub const SetSsl = setSsl;

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setSsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` _ssl: bool `
    ///
    pub fn setSsl(self: Attica__Config, _ssl: bool) void {
        qtc.Attica__Config_SetSsl(@ptrCast(self.ptr), _ssl);
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` _version: []const u8 `
    ///
    pub fn setVersion(self: Attica__Config, _version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        qtc.Attica__Config_SetVersion(@ptrCast(self.ptr), version_str);
    }

    /// ### DEPRECATED: Use `setWebsite` instead
    ///
    pub const SetWebsite = setWebsite;

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#setWebsite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    /// ` _website: []const u8 `
    ///
    pub fn setWebsite(self: Attica__Config, _website: []const u8) void {
        const website_str = qtc.libqt_string{
            .len = _website.len,
            .data = _website.ptr,
        };
        qtc.Attica__Config_SetWebsite(@ptrCast(self.ptr), website_str);
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-config.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Config `
    ///
    pub fn isValid(self: Attica__Config) bool {
        return qtc.Attica__Config_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Config `
    ///
    pub fn delete(self: Attica__Config) void {
        qtc.Attica__Config_Delete(@ptrCast(self.ptr));
    }
};
