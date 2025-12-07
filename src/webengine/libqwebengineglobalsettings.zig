const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebengineglobalsettings_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html)
pub const qwebengineglobalsettings__dnsmode = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#secureMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineGlobalSettings__DnsMode `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineglobalsettings_enums.SecureDnsMode `
    ///
    pub fn SecureMode(self: ?*anyopaque) u8 {
        return qtc.QWebEngineGlobalSettings__DnsMode_SecureMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#secureMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineGlobalSettings__DnsMode `
    ///
    /// ` secureMode: qwebengineglobalsettings_enums.SecureDnsMode `
    ///
    pub fn SetSecureMode(self: ?*anyopaque, secureMode: u8) void {
        qtc.QWebEngineGlobalSettings__DnsMode_SetSecureMode(@ptrCast(self), @intCast(secureMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#serverTemplates-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineGlobalSettings__DnsMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServerTemplates(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const serverTemplates_arr: qtc.libqt_list = qtc.QWebEngineGlobalSettings__DnsMode_ServerTemplates(@ptrCast(self));
        var serverTemplates_str: [*]qtc.libqt_string = @ptrCast(@alignCast(serverTemplates_arr.data));
        defer {
            for (0..serverTemplates_arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&serverTemplates_str[i]));
            }
            qtc.libqt_free(serverTemplates_arr.data);
        }
        const serverTemplates_ret = allocator.alloc([]const u8, serverTemplates_arr.len) catch @panic("qwebengineglobalsettings::dnsmode.ServerTemplates: Memory allocation failed");
        for (0..serverTemplates_arr.len) |i| {
            const serverTemplates_data = serverTemplates_str[i];
            const serverTemplates_buf = allocator.alloc(u8, serverTemplates_data.len) catch @panic("qwebengineglobalsettings::dnsmode.ServerTemplates: Memory allocation failed");
            @memcpy(serverTemplates_buf, serverTemplates_data.data[0..serverTemplates_data.len]);
            serverTemplates_ret[i] = serverTemplates_buf;
        }
        return serverTemplates_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#serverTemplates-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineGlobalSettings__DnsMode `
    ///
    /// ` serverTemplates: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetServerTemplates(self: ?*anyopaque, serverTemplates: [][]const u8, allocator: std.mem.Allocator) void {
        var serverTemplates_arr = allocator.alloc(qtc.libqt_string, serverTemplates.len) catch @panic("qwebengineglobalsettings::dnsmode.SetServerTemplates: Memory allocation failed");
        defer allocator.free(serverTemplates_arr);
        for (serverTemplates, 0..serverTemplates.len) |item, i| {
            serverTemplates_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const serverTemplates_list = qtc.libqt_list{
            .len = serverTemplates.len,
            .data = serverTemplates_arr.ptr,
        };
        qtc.QWebEngineGlobalSettings__DnsMode_SetServerTemplates(@ptrCast(self), serverTemplates_list);
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebEngineGlobalSettings__DnsMode `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineGlobalSettings__DnsMode_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings.html)
pub const qwebengineglobalsettings = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings.html#setDnsMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWebEngineGlobalSettings__DnsMode `
    ///
    pub fn SetDnsMode(param1: QtC.QWebEngineGlobalSettings__DnsMode) bool {
        return qtc.QWebEngineGlobalSettings_SetDnsMode(@ptrCast(param1));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings.html#public-types)
pub const enums = struct {
    pub const SecureDnsMode = enum {
        pub const SystemOnly: u8 = 0;
        pub const SecureWithFallback: u8 = 1;
        pub const SecureOnly: u8 = 2;
    };
};
