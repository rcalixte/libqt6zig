const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kconfig_enums = @import("libkconfig.zig").enums;
const kconfigbase_enums = @import("libkconfigbase.zig").enums;
const qstandardpaths_enums = @import("../libqstandardpaths.zig").enums;
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://api-staging.kde.org/ksharedconfig.html
pub const ksharedconfig = struct {
    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#locationType)
    ///
    /// ``` self: QtC.KSharedConfig ```
    ///
    /// Returns: ``` qstandardpaths_enums.StandardLocation ```
    pub fn LocationType(self: ?*anyopaque) i32 {
        return qtc.KConfig_LocationType(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#name)
    ///
    /// ``` self: QtC.KSharedConfig, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KConfig_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksharedconfig.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#openFlags)
    ///
    /// ``` self: QtC.KSharedConfig ```
    ///
    /// Returns: ``` flag of kconfig_enums.OpenFlag ```
    pub fn OpenFlags(self: ?*anyopaque) i32 {
        return qtc.KConfig_OpenFlags(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#sync)
    ///
    /// ``` self: QtC.KSharedConfig ```
    pub fn Sync(self: ?*anyopaque) bool {
        return qtc.KConfig_Sync(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isDirty)
    ///
    /// ``` self: QtC.KSharedConfig ```
    pub fn IsDirty(self: ?*anyopaque) bool {
        return qtc.KConfig_IsDirty(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#markAsClean)
    ///
    /// ``` self: QtC.KSharedConfig ```
    pub fn MarkAsClean(self: ?*anyopaque) void {
        qtc.KConfig_MarkAsClean(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#accessMode)
    ///
    /// ``` self: QtC.KSharedConfig ```
    ///
    /// Returns: ``` kconfigbase_enums.AccessMode ```
    pub fn AccessMode(self: ?*anyopaque) i32 {
        return qtc.KConfig_AccessMode(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isConfigWritable)
    ///
    /// ``` self: QtC.KSharedConfig, warnUser: bool ```
    pub fn IsConfigWritable(self: ?*anyopaque, warnUser: bool) bool {
        return qtc.KConfig_IsConfigWritable(@ptrCast(self), warnUser);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#copyTo)
    ///
    /// ``` self: QtC.KSharedConfig, file: []const u8 ```
    pub fn CopyTo(self: ?*anyopaque, file: []const u8) QtC.KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.KConfig_CopyTo(@ptrCast(self), file_str);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#checkUpdate)
    ///
    /// ``` self: QtC.KSharedConfig, id: []const u8, updateFile: []const u8 ```
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

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#reparseConfiguration)
    ///
    /// ``` self: QtC.KSharedConfig ```
    pub fn ReparseConfiguration(self: ?*anyopaque) void {
        qtc.KConfig_ReparseConfiguration(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#addConfigSources)
    ///
    /// ``` self: QtC.KSharedConfig, sources: [][]const u8, allocator: std.mem.Allocator ```
    pub fn AddConfigSources(self: ?*anyopaque, sources: [][]const u8, allocator: std.mem.Allocator) void {
        var sources_arr = allocator.alloc(qtc.libqt_string, sources.len) catch @panic("ksharedconfig.AddConfigSources: Memory allocation failed");
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

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#additionalConfigSources)
    ///
    /// ``` self: QtC.KSharedConfig, allocator: std.mem.Allocator ```
    pub fn AdditionalConfigSources(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_AdditionalConfigSources(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksharedconfig.AdditionalConfigSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksharedconfig.AdditionalConfigSources: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#locale)
    ///
    /// ``` self: QtC.KSharedConfig, allocator: std.mem.Allocator ```
    pub fn Locale(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KConfig_Locale(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksharedconfig.Locale: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#setLocale)
    ///
    /// ``` self: QtC.KSharedConfig, aLocale: []const u8 ```
    pub fn SetLocale(self: ?*anyopaque, aLocale: []const u8) bool {
        const aLocale_str = qtc.libqt_string{
            .len = aLocale.len,
            .data = aLocale.ptr,
        };
        return qtc.KConfig_SetLocale(@ptrCast(self), aLocale_str);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#setReadDefaults)
    ///
    /// ``` self: QtC.KSharedConfig, b: bool ```
    pub fn SetReadDefaults(self: ?*anyopaque, b: bool) void {
        qtc.KConfig_SetReadDefaults(@ptrCast(self), b);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#readDefaults)
    ///
    /// ``` self: QtC.KSharedConfig ```
    pub fn ReadDefaults(self: ?*anyopaque) bool {
        return qtc.KConfig_ReadDefaults(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isImmutable)
    ///
    /// ``` self: QtC.KSharedConfig ```
    pub fn IsImmutable(self: ?*anyopaque) bool {
        return qtc.KConfig_IsImmutable(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupList)
    ///
    /// ``` self: QtC.KSharedConfig, allocator: std.mem.Allocator ```
    pub fn GroupList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_GroupList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksharedconfig.GroupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksharedconfig.GroupList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#entryMap)
    ///
    /// ``` self: QtC.KSharedConfig, allocator: std.mem.Allocator ```
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
            _ret.put(allocator, _entry_slice, _value) catch @panic("ksharedconfig.EntryMap: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from KConfig
    ///
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

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#mainConfigName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn MainConfigName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KConfig_MainConfigName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksharedconfig.MainConfigName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#copyTo)
    ///
    /// ``` self: QtC.KSharedConfig, file: []const u8, config: QtC.KConfig ```
    pub fn CopyTo2(self: ?*anyopaque, file: []const u8, config: ?*anyopaque) QtC.KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.KConfig_CopyTo2(@ptrCast(self), file_str, @ptrCast(config));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#entryMap)
    ///
    /// ``` self: QtC.KSharedConfig, aGroup: []const u8, allocator: std.mem.Allocator ```
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
            _ret.put(allocator, _entry_slice, _value) catch @panic("ksharedconfig.EntryMap1: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ``` self: QtC.KSharedConfig, group: []const u8 ```
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
    /// ``` self: QtC.KSharedConfig, group: []const u8 ```
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
    /// ``` self: QtC.KSharedConfig, group: []const u8 ```
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
    /// ``` self: QtC.KSharedConfig, group: []const u8 ```
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
    /// ``` self: QtC.KSharedConfig, group: []const u8 ```
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
    /// ``` self: QtC.KSharedConfig, group: []const u8, flags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn DeleteGroup2(self: ?*anyopaque, group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self), group_str, @intCast(flags));
    }
};
