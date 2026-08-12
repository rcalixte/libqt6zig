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

    /// ### DEPRECATED: Use `locationType` instead
    ///
    pub const LocationType = locationType;

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
    pub fn locationType(self: KSharedConfig) i32 {
        return qtc.KConfig_LocationType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

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
    pub fn name(self: KSharedConfig, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSharedConfig.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `openFlags` instead
    ///
    pub const OpenFlags = openFlags;

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
    pub fn openFlags(self: KSharedConfig) i32 {
        return qtc.KConfig_OpenFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sync` instead
    ///
    pub const Sync = sync;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    pub fn sync(self: KSharedConfig) bool {
        return qtc.KConfig_Sync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDirty` instead
    ///
    pub const IsDirty = isDirty;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    pub fn isDirty(self: KSharedConfig) bool {
        return qtc.KConfig_IsDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `markAsClean` instead
    ///
    pub const MarkAsClean = markAsClean;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    pub fn markAsClean(self: KSharedConfig) void {
        qtc.KConfig_MarkAsClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessMode` instead
    ///
    pub const AccessMode = accessMode;

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
    pub fn accessMode(self: KSharedConfig) i32 {
        return qtc.KConfig_AccessMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isConfigWritable` instead
    ///
    pub const IsConfigWritable = isConfigWritable;

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
    pub fn isConfigWritable(self: KSharedConfig, warnUser: bool) bool {
        return qtc.KConfig_IsConfigWritable(@ptrCast(self.ptr), warnUser);
    }

    /// ### DEPRECATED: Use `copyTo` instead
    ///
    pub const CopyTo = copyTo;

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
    pub fn copyTo(self: KSharedConfig, file: []const u8) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KConfig_CopyTo(@ptrCast(self.ptr), file_str) };
    }

    /// ### DEPRECATED: Use `checkUpdate` instead
    ///
    pub const CheckUpdate = checkUpdate;

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
    pub fn checkUpdate(self: KSharedConfig, id: []const u8, updateFile: []const u8) void {
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

    /// ### DEPRECATED: Use `reparseConfiguration` instead
    ///
    pub const ReparseConfiguration = reparseConfiguration;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#reparseConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    pub fn reparseConfiguration(self: KSharedConfig) void {
        qtc.KConfig_ReparseConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addConfigSources` instead
    ///
    pub const AddConfigSources = addConfigSources;

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
    pub fn addConfigSources(self: KSharedConfig, allocator: std.mem.Allocator, sources: []const []const u8) void {
        const sources_arr = allocator.alloc(qtc.libqt_string, sources.len) catch @panic("KSharedConfig.addConfigSources: Memory allocation failed");
        defer allocator.free(sources_arr);
        for (sources, 0..sources.len) |str_item, i|
            sources_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const sources_list = qtc.libqt_list{
            .len = sources.len,
            .data = sources_arr.ptr,
        };
        qtc.KConfig_AddConfigSources(@ptrCast(self.ptr), sources_list);
    }

    /// ### DEPRECATED: Use `additionalConfigSources` instead
    ///
    pub const AdditionalConfigSources = additionalConfigSources;

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
    pub fn additionalConfigSources(self: KSharedConfig, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_AdditionalConfigSources(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KSharedConfig.additionalConfigSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSharedConfig.additionalConfigSources: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

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
    pub fn locale(self: KSharedConfig, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Locale(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSharedConfig.locale: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

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
    pub fn setLocale(self: KSharedConfig, aLocale: []const u8) bool {
        const aLocale_str = qtc.libqt_string{
            .len = aLocale.len,
            .data = aLocale.ptr,
        };
        return qtc.KConfig_SetLocale(@ptrCast(self.ptr), aLocale_str);
    }

    /// ### DEPRECATED: Use `setReadDefaults` instead
    ///
    pub const SetReadDefaults = setReadDefaults;

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
    pub fn setReadDefaults(self: KSharedConfig, b: bool) void {
        qtc.KConfig_SetReadDefaults(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `readDefaults` instead
    ///
    pub const ReadDefaults = readDefaults;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#readDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    pub fn readDefaults(self: KSharedConfig) bool {
        return qtc.KConfig_ReadDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImmutable` instead
    ///
    pub const IsImmutable = isImmutable;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    pub fn isImmutable(self: KSharedConfig) bool {
        return qtc.KConfig_IsImmutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `groupList` instead
    ///
    pub const GroupList = groupList;

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
    pub fn groupList(self: KSharedConfig, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_GroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KSharedConfig.groupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSharedConfig.groupList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `entryMap` instead
    ///
    pub const EntryMap = entryMap;

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
    pub fn entryMap(self: KSharedConfig, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KConfig_EntryMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KSharedConfig.entryMap: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KSharedConfig.entryMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KSharedConfig.entryMap: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setMainConfigName` instead
    ///
    pub const SetMainConfigName = setMainConfigName;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#setMainConfigName)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn setMainConfigName(str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KConfig_SetMainConfigName(str_str);
    }

    /// ### DEPRECATED: Use `mainConfigName` instead
    ///
    pub const MainConfigName = mainConfigName;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#mainConfigName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mainConfigName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_MainConfigName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSharedConfig.mainConfigName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `copyTo2` instead
    ///
    pub const CopyTo2 = copyTo2;

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
    pub fn copyTo2(self: KSharedConfig, file: []const u8, config: anytype) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        comptime _ = @TypeOf(config)._is_KConfig;
        return .{ .ptr = qtc.KConfig_CopyTo2(@ptrCast(self.ptr), file_str, @ptrCast(config.ptr)) };
    }

    /// ### DEPRECATED: Use `entryMap1` instead
    ///
    pub const EntryMap1 = entryMap1;

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
    pub fn entryMap1(self: KSharedConfig, allocator: std.mem.Allocator, aGroup: []const u8) ArrayMap_constu8_constu8 {
        const aGroup_str = qtc.libqt_string{
            .len = aGroup.len,
            .data = aGroup.ptr,
        };
        const _map: qtc.libqt_map = qtc.KConfig_EntryMap1(@ptrCast(self.ptr), aGroup_str);
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KSharedConfig.entryMap1: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KSharedConfig.entryMap1: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KSharedConfig.entryMap1: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `hasGroup` instead
    ///
    pub const HasGroup = hasGroup;

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn hasGroup(self: KSharedConfig, _group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return qtc.KConfigBase_HasGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn group(self: KSharedConfig, _group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return .{ .ptr = qtc.KConfigBase_Group(@ptrCast(self.ptr), group_str) };
    }

    /// ### DEPRECATED: Use `group2` instead
    ///
    pub const Group2 = group2;

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn group2(self: KSharedConfig, _group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return .{ .ptr = qtc.KConfigBase_Group2(@ptrCast(self.ptr), group_str) };
    }

    /// ### DEPRECATED: Use `deleteGroup` instead
    ///
    pub const DeleteGroup = deleteGroup;

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn deleteGroup(self: KSharedConfig, _group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigBase_DeleteGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `isGroupImmutable` instead
    ///
    pub const IsGroupImmutable = isGroupImmutable;

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn isGroupImmutable(self: KSharedConfig, _group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return qtc.KConfigBase_IsGroupImmutable(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `deleteGroup2` instead
    ///
    pub const DeleteGroup2 = deleteGroup2;

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedConfig `
    ///
    /// ` _group: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn deleteGroup2(self: KSharedConfig, _group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self.ptr), group_str, @bitCast(flags));
    }
};
