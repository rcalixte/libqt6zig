const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfigGroup = @import("libqt6").KConfigGroup;
const kconfig_enums = enums;
const kconfigbase_enums = @import("libkconfigbase.zig").enums;
const qstandardpaths_enums = @import("../libqstandardpaths.zig").enums;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/kconfig.html)
pub const KConfig = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfig.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfig,

    pub const _is_KConfig = {};
    pub const _is_KConfigBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KConfig object in C++ memory
    ///
    pub fn new() KConfig {
        return .{ .ptr = qtc.KConfig_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KConfig object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    /// ` backend: []const u8 `
    ///
    pub fn new2(file: []const u8, backend: []const u8) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        const backend_str = qtc.libqt_string{
            .len = backend.len,
            .data = backend.ptr,
        };
        return .{ .ptr = qtc.KConfig_new2(file_str, backend_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KConfig object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn new3(file: []const u8) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KConfig_new3(file_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KConfig object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    /// ` mode: flag of kconfig_enums.OpenFlag `
    ///
    pub fn new4(file: []const u8, mode: i32) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KConfig_new4(file_str, @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KConfig object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    /// ` mode: flag of kconfig_enums.OpenFlag `
    ///
    /// ` typeVal: qstandardpaths_enums.StandardLocation `
    ///
    pub fn new5(file: []const u8, mode: i32, typeVal: i32) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KConfig_new5(file_str, @bitCast(mode), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KConfig object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    /// ` backend: []const u8 `
    ///
    /// ` typeVal: qstandardpaths_enums.StandardLocation `
    ///
    pub fn new6(file: []const u8, backend: []const u8, typeVal: i32) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        const backend_str = qtc.libqt_string{
            .len = backend.len,
            .data = backend.ptr,
        };
        return .{ .ptr = qtc.KConfig_new6(file_str, backend_str, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `locationType` instead
    ///
    pub const LocationType = locationType;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#locationType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ## Returns:
    ///
    /// ` qstandardpaths_enums.StandardLocation `
    ///
    pub fn locationType(self: KConfig) i32 {
        return qtc.KConfig_LocationType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KConfig, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfig.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `openFlags` instead
    ///
    pub const OpenFlags = openFlags;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#openFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ## Returns:
    ///
    /// ` flag of kconfig_enums.OpenFlag `
    ///
    pub fn openFlags(self: KConfig) i32 {
        return qtc.KConfig_OpenFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sync` instead
    ///
    pub const Sync = sync;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn sync(self: KConfig) bool {
        return qtc.KConfig_Sync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSync` instead
    ///
    pub const OnSync = onSync;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfig `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSync(self: KConfig, callback: *const fn () callconv(.c) bool) void {
        qtc.KConfig_OnSync(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSync` instead
    ///
    pub const SuperSync = superSync;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn superSync(self: KConfig) bool {
        return qtc.KConfig_SuperSync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDirty` instead
    ///
    pub const IsDirty = isDirty;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn isDirty(self: KConfig) bool {
        return qtc.KConfig_IsDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `markAsClean` instead
    ///
    pub const MarkAsClean = markAsClean;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn markAsClean(self: KConfig) void {
        qtc.KConfig_MarkAsClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMarkAsClean` instead
    ///
    pub const OnMarkAsClean = onMarkAsClean;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfig `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onMarkAsClean(self: KConfig, callback: *const fn () callconv(.c) void) void {
        qtc.KConfig_OnMarkAsClean(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMarkAsClean` instead
    ///
    pub const SuperMarkAsClean = superMarkAsClean;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn superMarkAsClean(self: KConfig) void {
        qtc.KConfig_SuperMarkAsClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessMode` instead
    ///
    pub const AccessMode = accessMode;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ## Returns:
    ///
    /// ` kconfigbase_enums.AccessMode `
    ///
    pub fn accessMode(self: KConfig) i32 {
        return qtc.KConfig_AccessMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAccessMode` instead
    ///
    pub const OnAccessMode = onAccessMode;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfig `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onAccessMode(self: KConfig, callback: *const fn () callconv(.c) i32) void {
        qtc.KConfig_OnAccessMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAccessMode` instead
    ///
    pub const SuperAccessMode = superAccessMode;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ## Returns:
    ///
    /// ` kconfigbase_enums.AccessMode `
    ///
    pub fn superAccessMode(self: KConfig) i32 {
        return qtc.KConfig_SuperAccessMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isConfigWritable` instead
    ///
    pub const IsConfigWritable = isConfigWritable;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isConfigWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` warnUser: bool `
    ///
    pub fn isConfigWritable(self: KConfig, warnUser: bool) bool {
        return qtc.KConfig_IsConfigWritable(@ptrCast(self.ptr), warnUser);
    }

    /// ### DEPRECATED: Use `copyTo` instead
    ///
    pub const CopyTo = copyTo;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` file: []const u8 `
    ///
    pub fn copyTo(self: KConfig, file: []const u8) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KConfig_CopyTo(@ptrCast(self.ptr), file_str) };
    }

    /// ### DEPRECATED: Use `checkUpdate` instead
    ///
    pub const CheckUpdate = checkUpdate;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#checkUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` id: []const u8 `
    ///
    /// ` updateFile: []const u8 `
    ///
    pub fn checkUpdate(self: KConfig, id: []const u8, updateFile: []const u8) void {
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

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#reparseConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn reparseConfiguration(self: KConfig) void {
        qtc.KConfig_ReparseConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addConfigSources` instead
    ///
    pub const AddConfigSources = addConfigSources;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#addConfigSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sources: []const []const u8 `
    ///
    pub fn addConfigSources(self: KConfig, allocator: std.mem.Allocator, sources: []const []const u8) void {
        const sources_arr = allocator.alloc(qtc.libqt_string, sources.len) catch @panic("KConfig.addConfigSources: Memory allocation failed");
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

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#additionalConfigSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn additionalConfigSources(self: KConfig, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_AdditionalConfigSources(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfig.additionalConfigSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfig.additionalConfigSources: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn locale(self: KConfig, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Locale(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfig.locale: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` aLocale: []const u8 `
    ///
    pub fn setLocale(self: KConfig, aLocale: []const u8) bool {
        const aLocale_str = qtc.libqt_string{
            .len = aLocale.len,
            .data = aLocale.ptr,
        };
        return qtc.KConfig_SetLocale(@ptrCast(self.ptr), aLocale_str);
    }

    /// ### DEPRECATED: Use `setReadDefaults` instead
    ///
    pub const SetReadDefaults = setReadDefaults;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#setReadDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` b: bool `
    ///
    pub fn setReadDefaults(self: KConfig, b: bool) void {
        qtc.KConfig_SetReadDefaults(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `readDefaults` instead
    ///
    pub const ReadDefaults = readDefaults;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#readDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn readDefaults(self: KConfig) bool {
        return qtc.KConfig_ReadDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImmutable` instead
    ///
    pub const IsImmutable = isImmutable;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn isImmutable(self: KConfig) bool {
        return qtc.KConfig_IsImmutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsImmutable` instead
    ///
    pub const OnIsImmutable = onIsImmutable;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfig `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsImmutable(self: KConfig, callback: *const fn () callconv(.c) bool) void {
        qtc.KConfig_OnIsImmutable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsImmutable` instead
    ///
    pub const SuperIsImmutable = superIsImmutable;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn superIsImmutable(self: KConfig) bool {
        return qtc.KConfig_SuperIsImmutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `groupList` instead
    ///
    pub const GroupList = groupList;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn groupList(self: KConfig, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_GroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfig.groupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfig.groupList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onGroupList` instead
    ///
    pub const OnGroupList = onGroupList;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupList)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfig `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onGroupList(self: KConfig, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KConfig_OnGroupList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGroupList` instead
    ///
    pub const SuperGroupList = superGroupList;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupList)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superGroupList(self: KConfig, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_SuperGroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfig.groupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfig.groupList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `entryMap` instead
    ///
    pub const EntryMap = entryMap;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#entryMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn entryMap(self: KConfig, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KConfig_EntryMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KConfig.entryMap: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KConfig.entryMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KConfig.entryMap: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setMainConfigName` instead
    ///
    pub const SetMainConfigName = setMainConfigName;

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

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#mainConfigName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mainConfigName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_MainConfigName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfig.mainConfigName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasGroupImpl` instead
    ///
    pub const HasGroupImpl = hasGroupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn hasGroupImpl(self: KConfig, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_HasGroupImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `onHasGroupImpl` instead
    ///
    pub const OnHasGroupImpl = onHasGroupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfig `
    ///
    /// ` callback: *const fn (self: KConfig, groupName: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onHasGroupImpl(self: KConfig, callback: *const fn (KConfig, [*:0]const u8) callconv(.c) bool) void {
        qtc.KConfig_OnHasGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasGroupImpl` instead
    ///
    pub const SuperHasGroupImpl = superHasGroupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn superHasGroupImpl(self: KConfig, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_SuperHasGroupImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `groupImpl` instead
    ///
    pub const GroupImpl = groupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn groupImpl(self: KConfig, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfig_GroupImpl(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### DEPRECATED: Use `onGroupImpl` instead
    ///
    pub const OnGroupImpl = onGroupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfig `
    ///
    /// ` callback: *const fn (self: KConfig, groupName: [*:0]const u8) callconv(.c) KConfigGroup `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGroupImpl(self: KConfig, callback: *const fn (KConfig, [*:0]const u8) callconv(.c) KConfigGroup) void {
        qtc.KConfig_OnGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGroupImpl` instead
    ///
    pub const SuperGroupImpl = superGroupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn superGroupImpl(self: KConfig, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfig_SuperGroupImpl(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### DEPRECATED: Use `groupImpl2` instead
    ///
    pub const GroupImpl2 = groupImpl2;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn groupImpl2(self: KConfig, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfig_GroupImpl2(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### DEPRECATED: Use `onGroupImpl2` instead
    ///
    pub const OnGroupImpl2 = onGroupImpl2;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfig `
    ///
    /// ` callback: *const fn (self: KConfig, groupName: [*:0]const u8) callconv(.c) KConfigGroup `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGroupImpl2(self: KConfig, callback: *const fn (KConfig, [*:0]const u8) callconv(.c) KConfigGroup) void {
        qtc.KConfig_OnGroupImpl2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGroupImpl2` instead
    ///
    pub const SuperGroupImpl2 = superGroupImpl2;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn superGroupImpl2(self: KConfig, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfig_SuperGroupImpl2(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### DEPRECATED: Use `deleteGroupImpl` instead
    ///
    pub const DeleteGroupImpl = deleteGroupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn deleteGroupImpl(self: KConfig, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KConfig_DeleteGroupImpl(@ptrCast(self.ptr), groupName_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `onDeleteGroupImpl` instead
    ///
    pub const OnDeleteGroupImpl = onDeleteGroupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfig `
    ///
    /// ` callback: *const fn (self: KConfig, groupName: [*:0]const u8, flags: flag of kconfigbase_enums.WriteConfigFlag) callconv(.c) void `
    ///
    pub fn onDeleteGroupImpl(self: KConfig, callback: *const fn (KConfig, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KConfig_OnDeleteGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDeleteGroupImpl` instead
    ///
    pub const SuperDeleteGroupImpl = superDeleteGroupImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn superDeleteGroupImpl(self: KConfig, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KConfig_SuperDeleteGroupImpl(@ptrCast(self.ptr), groupName_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `isGroupImmutableImpl` instead
    ///
    pub const IsGroupImmutableImpl = isGroupImmutableImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn isGroupImmutableImpl(self: KConfig, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_IsGroupImmutableImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `onIsGroupImmutableImpl` instead
    ///
    pub const OnIsGroupImmutableImpl = onIsGroupImmutableImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfig `
    ///
    /// ` callback: *const fn (self: KConfig, groupName: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onIsGroupImmutableImpl(self: KConfig, callback: *const fn (KConfig, [*:0]const u8) callconv(.c) bool) void {
        qtc.KConfig_OnIsGroupImmutableImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsGroupImmutableImpl` instead
    ///
    pub const SuperIsGroupImmutableImpl = superIsGroupImmutableImpl;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn superIsGroupImmutableImpl(self: KConfig, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_SuperIsGroupImmutableImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn virtualHook(self: KConfig, id: i32, data: ?*anyopaque) void {
        qtc.KConfig_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfig `
    ///
    /// ` callback: *const fn (self: KConfig, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn onVirtualHook(self: KConfig, callback: *const fn (KConfig, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfig_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: KConfig, id: i32, data: ?*anyopaque) void {
        qtc.KConfig_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `copyTo2` instead
    ///
    pub const CopyTo2 = copyTo2;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` file: []const u8 `
    ///
    /// ` config: KConfig `
    ///
    pub fn copyTo2(self: KConfig, file: []const u8, config: anytype) KConfig {
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

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#entryMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` aGroup: []const u8 `
    ///
    pub fn entryMap1(self: KConfig, allocator: std.mem.Allocator, aGroup: []const u8) ArrayMap_constu8_constu8 {
        const aGroup_str = qtc.libqt_string{
            .len = aGroup.len,
            .data = aGroup.ptr,
        };
        const _map: qtc.libqt_map = qtc.KConfig_EntryMap1(@ptrCast(self.ptr), aGroup_str);
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KConfig.entryMap1: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KConfig.entryMap1: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KConfig.entryMap1: Memory allocation failed");
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
    /// ` self: KConfig `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn hasGroup(self: KConfig, _group: []const u8) bool {
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
    /// ` self: KConfig `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn group(self: KConfig, _group: []const u8) KConfigGroup {
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
    /// ` self: KConfig `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn group2(self: KConfig, _group: []const u8) KConfigGroup {
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
    /// ` self: KConfig `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn deleteGroup(self: KConfig, _group: []const u8) void {
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
    /// ` self: KConfig `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn isGroupImmutable(self: KConfig, _group: []const u8) bool {
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
    /// ` self: KConfig `
    ///
    /// ` _group: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn deleteGroup2(self: KConfig, _group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self.ptr), group_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#dtor.KConfig)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfig `
    ///
    pub fn delete(self: KConfig) void {
        qtc.KConfig_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kconfig.html#public-types)
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
