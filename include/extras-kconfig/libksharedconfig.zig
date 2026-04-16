const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfig = @import("libqt6").KConfig;
const KConfigGroup = @import("libqt6").KConfigGroup;
const kconfig_enums = @import("libkconfig.zig").enums;
const kconfigbase_enums = @import("libkconfigbase.zig").enums;
const qstandardpaths_enums = @import("../libqstandardpaths.zig").enums;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/ksharedconfig.html)
pub const KSharedConfig = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksharedconfig.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSharedConfig,

    pub const _is_KSharedConfig = {};
    pub const _is_KConfig = {};
    pub const _is_KConfigBase = {};
    pub const _is_QSharedData = {};

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#locationType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ## Returns:
    ///
    /// ` qstandardpaths_enums.StandardLocation `
    ///
    pub fn LocationType(self: KSharedConfig) i32 {
        return qtc.KConfig_LocationType(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KSharedConfig, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksharedconfig.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#openFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ## Returns:
    ///
    /// ` flag of kconfig_enums.OpenFlag `
    ///
    pub fn OpenFlags(self: KSharedConfig) i32 {
        return qtc.KConfig_OpenFlags(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    pub fn Sync(self: KSharedConfig) bool {
        return qtc.KConfig_Sync(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    pub fn IsDirty(self: KSharedConfig) bool {
        return qtc.KConfig_IsDirty(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    pub fn MarkAsClean(self: KSharedConfig) void {
        qtc.KConfig_MarkAsClean(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ## Returns:
    ///
    /// ` kconfigbase_enums.AccessMode `
    ///
    pub fn AccessMode(self: KSharedConfig) i32 {
        return qtc.KConfig_AccessMode(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isConfigWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` warnUser: bool `
    ///
    pub fn IsConfigWritable(self: KSharedConfig, warnUser: bool) bool {
        return qtc.KConfig_IsConfigWritable(@ptrCast(self.ptr), warnUser);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` file: []const u8 `
    ///
    pub fn CopyTo(self: KSharedConfig, file: []const u8) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KConfig_CopyTo(@ptrCast(self.ptr), file_str) };
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#checkUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` id: []const u8 `
    ///
    /// ` updateFile: []const u8 `
    ///
    pub fn CheckUpdate(self: KSharedConfig, id: []const u8, updateFile: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        const updateFile_str = qtc.libqt_string{
            .len = updateFile.len,
            .data = updateFile.ptr,
        };
        qtc.KConfig_CheckUpdate(@ptrCast(self.ptr), id_str, updateFile_str);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#reparseConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    pub fn ReparseConfiguration(self: KSharedConfig) void {
        qtc.KConfig_ReparseConfiguration(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#addConfigSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sources: []const []const u8 `
    ///
    pub fn AddConfigSources(self: KSharedConfig, allocator: std.mem.Allocator, sources: []const []const u8) void {
        const sources_arr = allocator.alloc(qtc.libqt_string, sources.len) catch @panic("ksharedconfig.AddConfigSources: Memory allocation failed");
        defer allocator.free(sources_arr);
        for (sources, 0..sources.len) |item, i|
            sources_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const sources_list = qtc.libqt_list{
            .len = sources.len,
            .data = sources_arr.ptr,
        };
        qtc.KConfig_AddConfigSources(@ptrCast(self.ptr), sources_list);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#additionalConfigSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AdditionalConfigSources(self: KSharedConfig, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_AdditionalConfigSources(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Locale(self: KSharedConfig, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Locale(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksharedconfig.Locale: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` aLocale: []const u8 `
    ///
    pub fn SetLocale(self: KSharedConfig, aLocale: []const u8) bool {
        const aLocale_str = qtc.libqt_string{
            .len = aLocale.len,
            .data = aLocale.ptr,
        };
        return qtc.KConfig_SetLocale(@ptrCast(self.ptr), aLocale_str);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#setReadDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` b: bool `
    ///
    pub fn SetReadDefaults(self: KSharedConfig, b: bool) void {
        qtc.KConfig_SetReadDefaults(@ptrCast(self.ptr), b);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#readDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    pub fn ReadDefaults(self: KSharedConfig) bool {
        return qtc.KConfig_ReadDefaults(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    pub fn IsImmutable(self: KSharedConfig) bool {
        return qtc.KConfig_IsImmutable(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GroupList(self: KSharedConfig, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_GroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#entryMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryMap(self: KSharedConfig, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KConfig_EntryMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("ksharedconfig.EntryMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("ksharedconfig.EntryMap: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("ksharedconfig.EntryMap: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#setMainConfigName)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn SetMainConfigName(str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KConfig_SetMainConfigName(str_str);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#mainConfigName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MainConfigName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_MainConfigName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksharedconfig.MainConfigName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` file: []const u8 `
    ///
    /// ` config: KConfig `
    ///
    pub fn CopyTo2(self: KSharedConfig, file: []const u8, config: anytype) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        comptime _ = @TypeOf(config)._is_KConfig;
        return .{ .ptr = qtc.KConfig_CopyTo2(@ptrCast(self.ptr), file_str, @ptrCast(config.ptr)) };
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#entryMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` aGroup: []const u8 `
    ///
    pub fn EntryMap1(self: KSharedConfig, allocator: std.mem.Allocator, aGroup: []const u8) ArrayMap_constu8_constu8 {
        const aGroup_str = qtc.libqt_string{
            .len = aGroup.len,
            .data = aGroup.ptr,
        };
        const _map: qtc.libqt_map = qtc.KConfig_EntryMap1(@ptrCast(self.ptr), aGroup_str);
        var _ret: ArrayMap_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("ksharedconfig.EntryMap1: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("ksharedconfig.EntryMap1: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("ksharedconfig.EntryMap1: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` group: []const u8 `
    ///
    pub fn HasGroup(self: KSharedConfig, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_HasGroup(@ptrCast(self.ptr), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group(self: KSharedConfig, group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KConfigBase_Group(@ptrCast(self.ptr), group_str) };
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group2(self: KSharedConfig, group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KConfigBase_Group2(@ptrCast(self.ptr), group_str) };
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` group: []const u8 `
    ///
    pub fn DeleteGroup(self: KSharedConfig, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup(@ptrCast(self.ptr), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` group: []const u8 `
    ///
    pub fn IsGroupImmutable(self: KSharedConfig, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_IsGroupImmutable(@ptrCast(self.ptr), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` group: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteGroup2(self: KSharedConfig, group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self.ptr), group_str, @bitCast(flags));
    }
};
