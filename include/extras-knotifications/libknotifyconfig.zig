const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knotifyconfig.html)
pub const KNotifyConfig = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNotifyConfig,

    pub const _is_KNotifyConfig = {};

    /// New constructs a new KNotifyConfig object.
    ///
    /// ## Parameter(s):
    ///
    /// ` applicationName: []const u8 `
    ///
    /// ` eventId: []const u8 `
    ///
    pub fn New(applicationName: []const u8, eventId: []const u8) KNotifyConfig {
        const applicationName_str = qtc.libqt_string{
            .len = applicationName.len,
            .data = applicationName.ptr,
        };
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        return .{ .ptr = qtc.KNotifyConfig_new(applicationName_str, eventId_str) };
    }

    /// New2 constructs a new KNotifyConfig object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KNotifyConfig `
    ///
    pub fn New2(other: anytype) KNotifyConfig {
        comptime _ = @TypeOf(other)._is_KNotifyConfig;
        return .{ .ptr = qtc.KNotifyConfig_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotifyConfig `
    ///
    /// ` other: KNotifyConfig `
    ///
    pub fn OperatorAssign(self: KNotifyConfig, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KNotifyConfig;
        qtc.KNotifyConfig_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#applicationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotifyConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationName(self: KNotifyConfig, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotifyConfig_ApplicationName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotifyconfig.ApplicationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#eventId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotifyConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EventId(self: KNotifyConfig, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotifyConfig_EventId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotifyconfig.EventId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotifyConfig `
    ///
    pub fn IsValid(self: KNotifyConfig) bool {
        return qtc.KNotifyConfig_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#readGlobalEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotifyConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ReadGlobalEntry(self: KNotifyConfig, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KNotifyConfig_ReadGlobalEntry(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotifyconfig.ReadGlobalEntry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#readEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotifyConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ReadEntry(self: KNotifyConfig, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KNotifyConfig_ReadEntry(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotifyconfig.ReadEntry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#readPathEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotifyConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ReadPathEntry(self: KNotifyConfig, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KNotifyConfig_ReadPathEntry(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotifyconfig.ReadPathEntry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#reparseConfiguration)
    ///
    pub fn ReparseConfiguration() void {
        qtc.KNotifyConfig_ReparseConfiguration();
    }

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#reparseSingleConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` app: []const u8 `
    ///
    pub fn ReparseSingleConfiguration(app: []const u8) void {
        const app_str = qtc.libqt_string{
            .len = app.len,
            .data = app.ptr,
        };
        qtc.KNotifyConfig_ReparseSingleConfiguration(app_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#dtor.KNotifyConfig)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNotifyConfig `
    ///
    pub fn Delete(self: KNotifyConfig) void {
        qtc.KNotifyConfig_Delete(@ptrCast(self.ptr));
    }
};
