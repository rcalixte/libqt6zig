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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineGlobalSettings::DnsMode object in C++ memory
    ///
    pub fn new() QWebEngineGlobalSettings__DnsMode {
        return .{ .ptr = qtc.QWebEngineGlobalSettings__DnsMode_new() };
    }

    /// ### DEPRECATED: Use `secureMode` instead
    ///
    pub const SecureMode = secureMode;

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
    pub fn secureMode(self: QWebEngineGlobalSettings__DnsMode) u8 {
        return qtc.QWebEngineGlobalSettings__DnsMode_SecureMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSecureMode` instead
    ///
    pub const SetSecureMode = setSecureMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#secureMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineGlobalSettings__DnsMode `
    ///
    /// ` _secureMode: qwebengineglobalsettings_enums.SecureDnsMode `
    ///
    pub fn setSecureMode(self: QWebEngineGlobalSettings__DnsMode, _secureMode: u8) void {
        qtc.QWebEngineGlobalSettings__DnsMode_SetSecureMode(@ptrCast(self.ptr), @bitCast(_secureMode));
    }

    /// ### DEPRECATED: Use `serverTemplates` instead
    ///
    pub const ServerTemplates = serverTemplates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#serverTemplates-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineGlobalSettings__DnsMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serverTemplates(self: QWebEngineGlobalSettings__DnsMode, allocator: std.mem.Allocator) []const []const u8 {
        const serverTemplates_arr: qtc.libqt_list = qtc.QWebEngineGlobalSettings__DnsMode_ServerTemplates(@ptrCast(self.ptr));
        var serverTemplates_str: [*]qtc.libqt_string = @ptrCast(@alignCast(serverTemplates_arr.data));
        defer {
            for (0..serverTemplates_arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&serverTemplates_str[i]));
            qtc.libqt_free(serverTemplates_arr.data);
        }
        const serverTemplates_ret = allocator.alloc([]const u8, serverTemplates_arr.len) catch @panic("QWebEngineGlobalSettings__DnsMode.serverTemplates: Memory allocation failed");
        for (0..serverTemplates_arr.len) |i| {
            const serverTemplates_data_val = serverTemplates_str[i];
            const serverTemplates_buf = allocator.alloc(u8, serverTemplates_data_val.len) catch @panic("QWebEngineGlobalSettings__DnsMode.serverTemplates: Memory allocation failed");
            @memcpy(serverTemplates_buf, serverTemplates_data_val.data[0..serverTemplates_data_val.len]);
            serverTemplates_ret[i] = serverTemplates_buf;
        }
        return serverTemplates_ret;
    }

    /// ### DEPRECATED: Use `setServerTemplates` instead
    ///
    pub const SetServerTemplates = setServerTemplates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#serverTemplates-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineGlobalSettings__DnsMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _serverTemplates: []const []const u8 `
    ///
    pub fn setServerTemplates(self: QWebEngineGlobalSettings__DnsMode, allocator: std.mem.Allocator, _serverTemplates: []const []const u8) void {
        const serverTemplates_arr = allocator.alloc(qtc.libqt_string, _serverTemplates.len) catch @panic("QWebEngineGlobalSettings__DnsMode.setServerTemplates: Memory allocation failed");
        defer allocator.free(serverTemplates_arr);
        for (_serverTemplates, 0.._serverTemplates.len) |str_item, i|
            serverTemplates_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const serverTemplates_list = qtc.libqt_list{
            .len = _serverTemplates.len,
            .data = serverTemplates_arr.ptr,
        };
        qtc.QWebEngineGlobalSettings__DnsMode_SetServerTemplates(@ptrCast(self.ptr), serverTemplates_list);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineGlobalSettings__DnsMode `
    ///
    pub fn delete(self: QWebEngineGlobalSettings__DnsMode) void {
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

    /// ### DEPRECATED: Use `setDnsMode` instead
    ///
    pub const SetDnsMode = setDnsMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineglobalsettings.html#setDnsMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` dnsMode: QWebEngineGlobalSettings__DnsMode `
    ///
    pub fn setDnsMode(dnsMode: anytype) bool {
        comptime _ = @TypeOf(dnsMode)._is_QWebEngineGlobalSettings__DnsMode;
        return qtc.QWebEngineGlobalSettings_SetDnsMode(@ptrCast(dnsMode.ptr));
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
