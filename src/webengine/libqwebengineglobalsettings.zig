const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebengineglobalsettings_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html)
pub const QWebEngineGlobalSettings__DnsMode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineGlobalSettings__DnsMode,

    pub const _is_QWebEngineGlobalSettings__DnsMode = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#secureMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineGlobalSettings__DnsMode `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineglobalsettings_enums.SecureDnsMode `
    ///
    pub fn SecureMode(self: QWebEngineGlobalSettings__DnsMode) u8 {
        return qtc.QWebEngineGlobalSettings__DnsMode_SecureMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#secureMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineGlobalSettings__DnsMode `
    ///
    /// ` secureMode: qwebengineglobalsettings_enums.SecureDnsMode `
    ///
    pub fn SetSecureMode(self: QWebEngineGlobalSettings__DnsMode, secureMode: u8) void {
        qtc.QWebEngineGlobalSettings__DnsMode_SetSecureMode(@ptrCast(self.ptr), @bitCast(secureMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#serverTemplates-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineGlobalSettings__DnsMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServerTemplates(self: QWebEngineGlobalSettings__DnsMode, allocator: std.mem.Allocator) []const []const u8 {
        const serverTemplates_arr: qtc.libqt_list = qtc.QWebEngineGlobalSettings__DnsMode_ServerTemplates(@ptrCast(self.ptr));
        var serverTemplates_str: [*]qtc.libqt_string = @ptrCast(@alignCast(serverTemplates_arr.data));
        defer {
            for (0..serverTemplates_arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&serverTemplates_str[i]));
            qtc.libqt_free(serverTemplates_arr.data);
        }
        const serverTemplates_ret = allocator.alloc([]const u8, serverTemplates_arr.len) catch @panic("qwebengineglobalsettings__dnsmode.ServerTemplates: Memory allocation failed");
        for (0..serverTemplates_arr.len) |i| {
            const serverTemplates_data = serverTemplates_str[i];
            const serverTemplates_buf = allocator.alloc(u8, serverTemplates_data.len) catch @panic("qwebengineglobalsettings__dnsmode.ServerTemplates: Memory allocation failed");
            @memcpy(serverTemplates_buf, serverTemplates_data.data[0..serverTemplates_data.len]);
            serverTemplates_ret[i] = serverTemplates_buf;
        }
        return serverTemplates_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#serverTemplates-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineGlobalSettings__DnsMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` serverTemplates: []const []const u8 `
    ///
    pub fn SetServerTemplates(self: QWebEngineGlobalSettings__DnsMode, allocator: std.mem.Allocator, serverTemplates: []const []const u8) void {
        const serverTemplates_arr = allocator.alloc(qtc.libqt_string, serverTemplates.len) catch @panic("qwebengineglobalsettings__dnsmode.SetServerTemplates: Memory allocation failed");
        defer allocator.free(serverTemplates_arr);
        for (serverTemplates, 0..serverTemplates.len) |item, i|
            serverTemplates_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const serverTemplates_list = qtc.libqt_list{
            .len = serverTemplates.len,
            .data = serverTemplates_arr.ptr,
        };
        qtc.QWebEngineGlobalSettings__DnsMode_SetServerTemplates(@ptrCast(self.ptr), serverTemplates_list);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineGlobalSettings__DnsMode `
    ///
    pub fn Delete(self: QWebEngineGlobalSettings__DnsMode) void {
        qtc.QWebEngineGlobalSettings__DnsMode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings.html)
pub const QWebEngineGlobalSettings = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineGlobalSettings,

    pub const _is_QWebEngineGlobalSettings = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings.html#setDnsMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWebEngineGlobalSettings__DnsMode `
    ///
    pub fn SetDnsMode(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWebEngineGlobalSettings__DnsMode;
        return qtc.QWebEngineGlobalSettings_SetDnsMode(@ptrCast(param1.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings.html#public-types)
pub const enums = struct {
    pub const SecureDnsMode = enum(u8) {
        pub const SystemOnly: u8 = 0;
        pub const SecureWithFallback: u8 = 1;
        pub const SecureOnly: u8 = 2;
    };
};
