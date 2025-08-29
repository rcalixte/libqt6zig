const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kconfig_enums = enums;
const kconfigbase_enums = @import("libkconfigbase.zig").enums;
const qstandardpaths_enums = @import("../libqstandardpaths.zig").enums;
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://api-staging.kde.org/kconfig.html
pub const kconfig = struct {
    /// New constructs a new KConfig object.
    ///
    ///
    pub fn New() QtC.KConfig {
        return qtc.KConfig_new();
    }

    /// New2 constructs a new KConfig object.
    ///
    /// ``` file: []const u8, backend: []const u8 ```
    pub fn New2(file: []const u8, backend: []const u8) QtC.KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        const backend_str = qtc.libqt_string{
            .len = backend.len,
            .data = backend.ptr,
        };

        return qtc.KConfig_new2(file_str, backend_str);
    }

    /// New3 constructs a new KConfig object.
    ///
    /// ``` file: []const u8 ```
    pub fn New3(file: []const u8) QtC.KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };

        return qtc.KConfig_new3(file_str);
    }

    /// New4 constructs a new KConfig object.
    ///
    /// ``` file: []const u8, mode: flag of kconfig_enums.OpenFlag ```
    pub fn New4(file: []const u8, mode: i32) QtC.KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };

        return qtc.KConfig_new4(file_str, @intCast(mode));
    }

    /// New5 constructs a new KConfig object.
    ///
    /// ``` file: []const u8, mode: flag of kconfig_enums.OpenFlag, typeVal: qstandardpaths_enums.StandardLocation ```
    pub fn New5(file: []const u8, mode: i32, typeVal: i32) QtC.KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };

        return qtc.KConfig_new5(file_str, @intCast(mode), @intCast(typeVal));
    }

    /// New6 constructs a new KConfig object.
    ///
    /// ``` file: []const u8, backend: []const u8, typeVal: qstandardpaths_enums.StandardLocation ```
    pub fn New6(file: []const u8, backend: []const u8, typeVal: i32) QtC.KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        const backend_str = qtc.libqt_string{
            .len = backend.len,
            .data = backend.ptr,
        };

        return qtc.KConfig_new6(file_str, backend_str, @intCast(typeVal));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#locationType)
    ///
    /// ``` self: QtC.KConfig ```
    ///
    /// Returns: ``` qstandardpaths_enums.StandardLocation ```
    pub fn LocationType(self: ?*anyopaque) i32 {
        return qtc.KConfig_LocationType(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#name)
    ///
    /// ``` self: QtC.KConfig, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KConfig_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfig.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#openFlags)
    ///
    /// ``` self: QtC.KConfig ```
    ///
    /// Returns: ``` flag of kconfig_enums.OpenFlag ```
    pub fn OpenFlags(self: ?*anyopaque) i32 {
        return qtc.KConfig_OpenFlags(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#sync)
    ///
    /// ``` self: QtC.KConfig ```
    pub fn Sync(self: ?*anyopaque) bool {
        return qtc.KConfig_Sync(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#sync)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfig, slot: fn () callconv(.c) bool ```
    pub fn OnSync(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KConfig_OnSync(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#sync)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfig ```
    pub fn QBaseSync(self: ?*anyopaque) bool {
        return qtc.KConfig_QBaseSync(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isDirty)
    ///
    /// ``` self: QtC.KConfig ```
    pub fn IsDirty(self: ?*anyopaque) bool {
        return qtc.KConfig_IsDirty(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#markAsClean)
    ///
    /// ``` self: QtC.KConfig ```
    pub fn MarkAsClean(self: ?*anyopaque) void {
        qtc.KConfig_MarkAsClean(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#markAsClean)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfig, slot: fn () callconv(.c) void ```
    pub fn OnMarkAsClean(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KConfig_OnMarkAsClean(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#markAsClean)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfig ```
    pub fn QBaseMarkAsClean(self: ?*anyopaque) void {
        qtc.KConfig_QBaseMarkAsClean(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#accessMode)
    ///
    /// ``` self: QtC.KConfig ```
    ///
    /// Returns: ``` kconfigbase_enums.AccessMode ```
    pub fn AccessMode(self: ?*anyopaque) i32 {
        return qtc.KConfig_AccessMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#accessMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfig, slot: fn () callconv(.c) i32 ```
    pub fn OnAccessMode(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KConfig_OnAccessMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#accessMode)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfig ```
    ///
    /// Returns: ``` kconfigbase_enums.AccessMode ```
    pub fn QBaseAccessMode(self: ?*anyopaque) i32 {
        return qtc.KConfig_QBaseAccessMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isConfigWritable)
    ///
    /// ``` self: QtC.KConfig, warnUser: bool ```
    pub fn IsConfigWritable(self: ?*anyopaque, warnUser: bool) bool {
        return qtc.KConfig_IsConfigWritable(@ptrCast(self), warnUser);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#copyTo)
    ///
    /// ``` self: QtC.KConfig, file: []const u8 ```
    pub fn CopyTo(self: ?*anyopaque, file: []const u8) QtC.KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.KConfig_CopyTo(@ptrCast(self), file_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#checkUpdate)
    ///
    /// ``` self: QtC.KConfig, id: []const u8, updateFile: []const u8 ```
    pub fn CheckUpdate(self: ?*anyopaque, id: []const u8, updateFile: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        const updateFile_str = qtc.libqt_string{
            .len = updateFile.len,
            .data = updateFile.ptr,
        };
        qtc.KConfig_CheckUpdate(@ptrCast(self), id_str, updateFile_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#reparseConfiguration)
    ///
    /// ``` self: QtC.KConfig ```
    pub fn ReparseConfiguration(self: ?*anyopaque) void {
        qtc.KConfig_ReparseConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#addConfigSources)
    ///
    /// ``` self: QtC.KConfig, sources: [][]const u8, allocator: std.mem.Allocator ```
    pub fn AddConfigSources(self: ?*anyopaque, sources: [][]const u8, allocator: std.mem.Allocator) void {
        var sources_arr = allocator.alloc(qtc.libqt_string, sources.len) catch @panic("kconfig.AddConfigSources: Memory allocation failed");
        defer allocator.free(sources_arr);
        for (sources, 0..sources.len) |item, i| {
            sources_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const sources_list = qtc.libqt_list{
            .len = sources.len,
            .data = sources_arr.ptr,
        };
        qtc.KConfig_AddConfigSources(@ptrCast(self), sources_list);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#additionalConfigSources)
    ///
    /// ``` self: QtC.KConfig, allocator: std.mem.Allocator ```
    pub fn AdditionalConfigSources(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_AdditionalConfigSources(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfig.AdditionalConfigSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfig.AdditionalConfigSources: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#locale)
    ///
    /// ``` self: QtC.KConfig, allocator: std.mem.Allocator ```
    pub fn Locale(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KConfig_Locale(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfig.Locale: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#setLocale)
    ///
    /// ``` self: QtC.KConfig, aLocale: []const u8 ```
    pub fn SetLocale(self: ?*anyopaque, aLocale: []const u8) bool {
        const aLocale_str = qtc.libqt_string{
            .len = aLocale.len,
            .data = aLocale.ptr,
        };
        return qtc.KConfig_SetLocale(@ptrCast(self), aLocale_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#setReadDefaults)
    ///
    /// ``` self: QtC.KConfig, b: bool ```
    pub fn SetReadDefaults(self: ?*anyopaque, b: bool) void {
        qtc.KConfig_SetReadDefaults(@ptrCast(self), b);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#readDefaults)
    ///
    /// ``` self: QtC.KConfig ```
    pub fn ReadDefaults(self: ?*anyopaque) bool {
        return qtc.KConfig_ReadDefaults(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isImmutable)
    ///
    /// ``` self: QtC.KConfig ```
    pub fn IsImmutable(self: ?*anyopaque) bool {
        return qtc.KConfig_IsImmutable(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isImmutable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfig, slot: fn () callconv(.c) bool ```
    pub fn OnIsImmutable(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KConfig_OnIsImmutable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isImmutable)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfig ```
    pub fn QBaseIsImmutable(self: ?*anyopaque) bool {
        return qtc.KConfig_QBaseIsImmutable(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupList)
    ///
    /// ``` self: QtC.KConfig, allocator: std.mem.Allocator ```
    pub fn GroupList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_GroupList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfig.GroupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfig.GroupList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupList)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfig, slot: fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnGroupList(self: ?*anyopaque, slot: fn () callconv(.c) [*][*:0]const u8) void {
        qtc.KConfig_OnGroupList(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupList)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfig, allocator: std.mem.Allocator ```
    pub fn QBaseGroupList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_QBaseGroupList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfig.GroupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfig.GroupList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#entryMap)
    ///
    /// ``` self: QtC.KConfig, allocator: std.mem.Allocator ```
    pub fn EntryMap(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KConfig_EntryMap(@ptrCast(self));
        var _ret: map_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]const u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("kconfig.EntryMap: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#setMainConfigName)
    ///
    /// ``` str: []const u8 ```
    pub fn SetMainConfigName(str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KConfig_SetMainConfigName(str_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#mainConfigName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn MainConfigName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KConfig_MainConfigName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfig.MainConfigName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// ``` self: QtC.KConfig, groupName: []const u8 ```
    pub fn HasGroupImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_HasGroupImpl(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfig, slot: fn (self: QtC.KConfig, groupName: [*:0]const u8) callconv(.c) bool ```
    pub fn OnHasGroupImpl(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KConfig_OnHasGroupImpl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfig, groupName: []const u8 ```
    pub fn QBaseHasGroupImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_QBaseHasGroupImpl(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupImpl)
    ///
    /// ``` self: QtC.KConfig, groupName: []const u8 ```
    pub fn GroupImpl(self: ?*anyopaque, groupName: []const u8) QtC.KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_GroupImpl(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfig, slot: fn (self: QtC.KConfig, groupName: [*:0]const u8) callconv(.c) QtC.KConfigGroup ```
    pub fn OnGroupImpl(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.KConfigGroup) void {
        qtc.KConfig_OnGroupImpl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupImpl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfig, groupName: []const u8 ```
    pub fn QBaseGroupImpl(self: ?*anyopaque, groupName: []const u8) QtC.KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_QBaseGroupImpl(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupImpl)
    ///
    /// ``` self: QtC.KConfig, groupName: []const u8 ```
    pub fn GroupImpl2(self: ?*anyopaque, groupName: []const u8) QtC.KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_GroupImpl2(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfig, slot: fn (self: QtC.KConfig, groupName: [*:0]const u8) callconv(.c) QtC.KConfigGroup ```
    pub fn OnGroupImpl2(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.KConfigGroup) void {
        qtc.KConfig_OnGroupImpl2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupImpl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfig, groupName: []const u8 ```
    pub fn QBaseGroupImpl2(self: ?*anyopaque, groupName: []const u8) QtC.KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_QBaseGroupImpl2(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// ``` self: QtC.KConfig, groupName: []const u8, flags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn DeleteGroupImpl(self: ?*anyopaque, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KConfig_DeleteGroupImpl(@ptrCast(self), groupName_str, @intCast(flags));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfig, slot: fn (self: QtC.KConfig, groupName: [*:0]const u8, flags: flag of kconfigbase_enums.WriteConfigFlag) callconv(.c) void ```
    pub fn OnDeleteGroupImpl(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KConfig_OnDeleteGroupImpl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfig, groupName: []const u8, flags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn QBaseDeleteGroupImpl(self: ?*anyopaque, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KConfig_QBaseDeleteGroupImpl(@ptrCast(self), groupName_str, @intCast(flags));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// ``` self: QtC.KConfig, groupName: []const u8 ```
    pub fn IsGroupImmutableImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_IsGroupImmutableImpl(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfig, slot: fn (self: QtC.KConfig, groupName: [*:0]const u8) callconv(.c) bool ```
    pub fn OnIsGroupImmutableImpl(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KConfig_OnIsGroupImmutableImpl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfig, groupName: []const u8 ```
    pub fn QBaseIsGroupImmutableImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_QBaseIsGroupImmutableImpl(@ptrCast(self), groupName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#virtual_hook)
    ///
    /// ``` self: QtC.KConfig, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KConfig_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfig, slot: fn (self: QtC.KConfig, id: i32, data: ?*anyopaque) callconv(.c) void ```
    pub fn OnVirtualHook(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfig_OnVirtualHook(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfig, id: i32, data: ?*anyopaque ```
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KConfig_QBaseVirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#copyTo)
    ///
    /// ``` self: QtC.KConfig, file: []const u8, config: QtC.KConfig ```
    pub fn CopyTo2(self: ?*anyopaque, file: []const u8, config: ?*anyopaque) QtC.KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.KConfig_CopyTo2(@ptrCast(self), file_str, @ptrCast(config));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#entryMap)
    ///
    /// ``` self: QtC.KConfig, aGroup: []const u8, allocator: std.mem.Allocator ```
    pub fn EntryMap1(self: ?*anyopaque, aGroup: []const u8, allocator: std.mem.Allocator) map_constu8_constu8 {
        const aGroup_str = qtc.libqt_string{
            .len = aGroup.len,
            .data = aGroup.ptr,
        };
        const _map: qtc.libqt_map = qtc.KConfig_EntryMap1(@ptrCast(self), aGroup_str);
        var _ret: map_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]const u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("kconfig.EntryMap1: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ``` self: QtC.KConfig, group: []const u8 ```
    pub fn HasGroup(self: ?*anyopaque, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_HasGroup(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfigbase.html#group)
    ///
    /// ``` self: QtC.KConfig, group: []const u8 ```
    pub fn Group(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_Group(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfigbase.html#group)
    ///
    /// ``` self: QtC.KConfig, group: []const u8 ```
    pub fn Group2(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_Group2(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ``` self: QtC.KConfig, group: []const u8 ```
    pub fn DeleteGroup(self: ?*anyopaque, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfigbase.html#isGroupImmutable)
    ///
    /// ``` self: QtC.KConfig, group: []const u8 ```
    pub fn IsGroupImmutable(self: ?*anyopaque, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_IsGroupImmutable(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ``` self: QtC.KConfig, group: []const u8, flags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn DeleteGroup2(self: ?*anyopaque, group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self), group_str, @intCast(flags));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#dtor.KConfig)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KConfig ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KConfig_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kconfig.html#types
pub const enums = struct {
    pub const OpenFlag = enum {
        pub const IncludeGlobals: i32 = 1;
        pub const CascadeConfig: i32 = 2;
        pub const SimpleConfig: i32 = 0;
        pub const NoCascade: i32 = 1;
        pub const NoGlobals: i32 = 2;
        pub const FullConfig: i32 = 3;
    };
};
