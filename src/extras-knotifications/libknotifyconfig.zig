const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/knotifyconfig.html
pub const knotifyconfig = struct {
    /// New constructs a new KNotifyConfig object.
    ///
    /// ``` applicationName: []const u8, eventId: []const u8 ```
    pub fn New(applicationName: []const u8, eventId: []const u8) QtC.KNotifyConfig {
        const applicationName_str = qtc.libqt_string{
            .len = applicationName.len,
            .data = applicationName.ptr,
        };
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };

        return qtc.KNotifyConfig_new(applicationName_str, eventId_str);
    }

    /// New2 constructs a new KNotifyConfig object.
    ///
    /// ``` other: QtC.KNotifyConfig ```
    pub fn New2(other: ?*anyopaque) QtC.KNotifyConfig {
        return qtc.KNotifyConfig_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/knotifyconfig.html#operator-eq)
    ///
    /// ``` self: QtC.KNotifyConfig, other: QtC.KNotifyConfig ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KNotifyConfig_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/knotifyconfig.html#applicationName)
    ///
    /// ``` self: QtC.KNotifyConfig, allocator: std.mem.Allocator ```
    pub fn ApplicationName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNotifyConfig_ApplicationName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotifyconfig.ApplicationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotifyconfig.html#eventId)
    ///
    /// ``` self: QtC.KNotifyConfig, allocator: std.mem.Allocator ```
    pub fn EventId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNotifyConfig_EventId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotifyconfig.EventId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotifyconfig.html#isValid)
    ///
    /// ``` self: QtC.KNotifyConfig ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KNotifyConfig_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotifyconfig.html#readGlobalEntry)
    ///
    /// ``` self: QtC.KNotifyConfig, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadGlobalEntry(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.KNotifyConfig_ReadGlobalEntry(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotifyconfig.ReadGlobalEntry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotifyconfig.html#readEntry)
    ///
    /// ``` self: QtC.KNotifyConfig, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadEntry(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.KNotifyConfig_ReadEntry(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotifyconfig.ReadEntry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotifyconfig.html#readPathEntry)
    ///
    /// ``` self: QtC.KNotifyConfig, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadPathEntry(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.KNotifyConfig_ReadPathEntry(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotifyconfig.ReadPathEntry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotifyconfig.html#reparseConfiguration)
    ///
    ///
    pub fn ReparseConfiguration() void {
        qtc.KNotifyConfig_ReparseConfiguration();
    }

    /// [Qt documentation](https://api.kde.org/knotifyconfig.html#reparseSingleConfiguration)
    ///
    /// ``` app: []const u8 ```
    pub fn ReparseSingleConfiguration(app: []const u8) void {
        const app_str = qtc.libqt_string{
            .len = app.len,
            .data = app.ptr,
        };
        qtc.KNotifyConfig_ReparseSingleConfiguration(app_str);
    }

    /// [Qt documentation](https://api.kde.org/knotifyconfig.html#dtor.KNotifyConfig)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KNotifyConfig ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KNotifyConfig_Delete(@ptrCast(self));
    }
};
