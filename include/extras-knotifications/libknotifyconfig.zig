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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNotifyConfig object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _applicationName: []const u8 `
    ///
    /// ` _eventId: []const u8 `
    ///
    pub fn new(_applicationName: []const u8, _eventId: []const u8) KNotifyConfig {
        const applicationName_str = qtc.libqt_string{
            .len = _applicationName.len,
            .data = _applicationName.ptr,
        };
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        return .{ .ptr = qtc.KNotifyConfig_new(applicationName_str, eventId_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KNotifyConfig object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KNotifyConfig `
    ///
    pub fn new2(other: anytype) KNotifyConfig {
        comptime _ = @TypeOf(other)._is_KNotifyConfig;
        return .{ .ptr = qtc.KNotifyConfig_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotifyConfig `
    ///
    /// ` other: KNotifyConfig `
    ///
    pub fn operatorAssign(self: KNotifyConfig, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KNotifyConfig;
        qtc.KNotifyConfig_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `applicationName` instead
    ///
    pub const ApplicationName = applicationName;

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#applicationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotifyConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationName(self: KNotifyConfig, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotifyConfig_ApplicationName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotifyConfig.applicationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `eventId` instead
    ///
    pub const EventId = eventId;

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#eventId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotifyConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn eventId(self: KNotifyConfig, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotifyConfig_EventId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotifyConfig.eventId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotifyConfig `
    ///
    pub fn isValid(self: KNotifyConfig) bool {
        return qtc.KNotifyConfig_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readGlobalEntry` instead
    ///
    pub const ReadGlobalEntry = readGlobalEntry;

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
    pub fn readGlobalEntry(self: KNotifyConfig, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KNotifyConfig_ReadGlobalEntry(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotifyConfig.readGlobalEntry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readEntry` instead
    ///
    pub const ReadEntry = readEntry;

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
    pub fn readEntry(self: KNotifyConfig, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KNotifyConfig_ReadEntry(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotifyConfig.readEntry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readPathEntry` instead
    ///
    pub const ReadPathEntry = readPathEntry;

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
    pub fn readPathEntry(self: KNotifyConfig, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KNotifyConfig_ReadPathEntry(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotifyConfig.readPathEntry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `reparseConfiguration` instead
    ///
    pub const ReparseConfiguration = reparseConfiguration;

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#reparseConfiguration)
    ///
    pub fn reparseConfiguration() void {
        qtc.KNotifyConfig_ReparseConfiguration();
    }

    /// ### DEPRECATED: Use `reparseSingleConfiguration` instead
    ///
    pub const ReparseSingleConfiguration = reparseSingleConfiguration;

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#reparseSingleConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` app: []const u8 `
    ///
    pub fn reparseSingleConfiguration(app: []const u8) void {
        const app_str = qtc.libqt_string{
            .len = app.len,
            .data = app.ptr,
        };
        qtc.KNotifyConfig_ReparseSingleConfiguration(app_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/knotifyconfig.html#dtor.KNotifyConfig)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNotifyConfig `
    ///
    pub fn delete(self: KNotifyConfig) void {
        qtc.KNotifyConfig_Delete(@ptrCast(self.ptr));
    }
};
