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

    /// New constructs a new KConfig object.
    ///
    pub fn New() KConfig {
        return .{ .ptr = qtc.KConfig_new() };
    }

    /// New2 constructs a new KConfig object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    /// ` backend: []const u8 `
    ///
    pub fn New2(file: []const u8, backend: []const u8) KConfig {
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

    /// New3 constructs a new KConfig object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn New3(file: []const u8) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KConfig_new3(file_str) };
    }

    /// New4 constructs a new KConfig object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    /// ` mode: flag of kconfig_enums.OpenFlag `
    ///
    pub fn New4(file: []const u8, mode: i32) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KConfig_new4(file_str, @bitCast(mode)) };
    }

    /// New5 constructs a new KConfig object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    /// ` mode: flag of kconfig_enums.OpenFlag `
    ///
    /// ` typeVal: qstandardpaths_enums.StandardLocation `
    ///
    pub fn New5(file: []const u8, mode: i32, typeVal: i32) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KConfig_new5(file_str, @bitCast(mode), @bitCast(typeVal)) };
    }

    /// New6 constructs a new KConfig object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    /// ` backend: []const u8 `
    ///
    /// ` typeVal: qstandardpaths_enums.StandardLocation `
    ///
    pub fn New6(file: []const u8, backend: []const u8, typeVal: i32) KConfig {
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
    pub fn LocationType(self: KConfig) i32 {
        return qtc.KConfig_LocationType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KConfig, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfig.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn OpenFlags(self: KConfig) i32 {
        return qtc.KConfig_OpenFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn Sync(self: KConfig) bool {
        return qtc.KConfig_Sync(@ptrCast(self.ptr));
    }

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
    pub fn OnSync(self: KConfig, callback: *const fn () callconv(.c) bool) void {
        qtc.KConfig_OnSync(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSync` instead
    ///
    pub const QBaseSync = SuperSync;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn SuperSync(self: KConfig) bool {
        return qtc.KConfig_SuperSync(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn IsDirty(self: KConfig) bool {
        return qtc.KConfig_IsDirty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn MarkAsClean(self: KConfig) void {
        qtc.KConfig_MarkAsClean(@ptrCast(self.ptr));
    }

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
    pub fn OnMarkAsClean(self: KConfig, callback: *const fn () callconv(.c) void) void {
        qtc.KConfig_OnMarkAsClean(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMarkAsClean` instead
    ///
    pub const QBaseMarkAsClean = SuperMarkAsClean;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn SuperMarkAsClean(self: KConfig) void {
        qtc.KConfig_SuperMarkAsClean(@ptrCast(self.ptr));
    }

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
    pub fn AccessMode(self: KConfig) i32 {
        return qtc.KConfig_AccessMode(@ptrCast(self.ptr));
    }

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
    pub fn OnAccessMode(self: KConfig, callback: *const fn () callconv(.c) i32) void {
        qtc.KConfig_OnAccessMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAccessMode` instead
    ///
    pub const QBaseAccessMode = SuperAccessMode;

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
    pub fn SuperAccessMode(self: KConfig) i32 {
        return qtc.KConfig_SuperAccessMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isConfigWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` warnUser: bool `
    ///
    pub fn IsConfigWritable(self: KConfig, warnUser: bool) bool {
        return qtc.KConfig_IsConfigWritable(@ptrCast(self.ptr), warnUser);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` file: []const u8 `
    ///
    pub fn CopyTo(self: KConfig, file: []const u8) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KConfig_CopyTo(@ptrCast(self.ptr), file_str) };
    }

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
    pub fn CheckUpdate(self: KConfig, id: []const u8, updateFile: []const u8) void {
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

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#reparseConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn ReparseConfiguration(self: KConfig) void {
        qtc.KConfig_ReparseConfiguration(@ptrCast(self.ptr));
    }

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
    pub fn AddConfigSources(self: KConfig, allocator: std.mem.Allocator, sources: []const []const u8) void {
        const sources_arr = allocator.alloc(qtc.libqt_string, sources.len) catch @panic("kconfig.AddConfigSources: Memory allocation failed");
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

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#additionalConfigSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AdditionalConfigSources(self: KConfig, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_AdditionalConfigSources(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Locale(self: KConfig, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Locale(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfig.Locale: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` aLocale: []const u8 `
    ///
    pub fn SetLocale(self: KConfig, aLocale: []const u8) bool {
        const aLocale_str = qtc.libqt_string{
            .len = aLocale.len,
            .data = aLocale.ptr,
        };
        return qtc.KConfig_SetLocale(@ptrCast(self.ptr), aLocale_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#setReadDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` b: bool `
    ///
    pub fn SetReadDefaults(self: KConfig, b: bool) void {
        qtc.KConfig_SetReadDefaults(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#readDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn ReadDefaults(self: KConfig) bool {
        return qtc.KConfig_ReadDefaults(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn IsImmutable(self: KConfig) bool {
        return qtc.KConfig_IsImmutable(@ptrCast(self.ptr));
    }

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
    pub fn OnIsImmutable(self: KConfig, callback: *const fn () callconv(.c) bool) void {
        qtc.KConfig_OnIsImmutable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsImmutable` instead
    ///
    pub const QBaseIsImmutable = SuperIsImmutable;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    pub fn SuperIsImmutable(self: KConfig) bool {
        return qtc.KConfig_SuperIsImmutable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GroupList(self: KConfig, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_GroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    pub fn OnGroupList(self: KConfig, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KConfig_OnGroupList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGroupList` instead
    ///
    pub const QBaseGroupList = SuperGroupList;

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
    pub fn SuperGroupList(self: KConfig, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_SuperGroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#entryMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryMap(self: KConfig, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("kconfig.EntryMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kconfig.EntryMap: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("kconfig.EntryMap: Memory allocation failed");
        }
        return _ret;
    }

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

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#mainConfigName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MainConfigName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_MainConfigName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfig.MainConfigName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn HasGroupImpl(self: KConfig, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_HasGroupImpl(@ptrCast(self.ptr), groupName_str);
    }

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
    pub fn OnHasGroupImpl(self: KConfig, callback: *const fn (KConfig, [*:0]const u8) callconv(.c) bool) void {
        qtc.KConfig_OnHasGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasGroupImpl` instead
    ///
    pub const QBaseHasGroupImpl = SuperHasGroupImpl;

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
    pub fn SuperHasGroupImpl(self: KConfig, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_SuperHasGroupImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn GroupImpl(self: KConfig, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfig_GroupImpl(@ptrCast(self.ptr), groupName_str) };
    }

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
    pub fn OnGroupImpl(self: KConfig, callback: *const fn (KConfig, [*:0]const u8) callconv(.c) KConfigGroup) void {
        qtc.KConfig_OnGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGroupImpl` instead
    ///
    pub const QBaseGroupImpl = SuperGroupImpl;

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
    pub fn SuperGroupImpl(self: KConfig, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfig_SuperGroupImpl(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn GroupImpl2(self: KConfig, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfig_GroupImpl2(@ptrCast(self.ptr), groupName_str) };
    }

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
    pub fn OnGroupImpl2(self: KConfig, callback: *const fn (KConfig, [*:0]const u8) callconv(.c) KConfigGroup) void {
        qtc.KConfig_OnGroupImpl2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGroupImpl2` instead
    ///
    pub const QBaseGroupImpl2 = SuperGroupImpl2;

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
    pub fn SuperGroupImpl2(self: KConfig, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KConfig_SuperGroupImpl2(@ptrCast(self.ptr), groupName_str) };
    }

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
    pub fn DeleteGroupImpl(self: KConfig, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KConfig_DeleteGroupImpl(@ptrCast(self.ptr), groupName_str, @bitCast(flags));
    }

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
    pub fn OnDeleteGroupImpl(self: KConfig, callback: *const fn (KConfig, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KConfig_OnDeleteGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDeleteGroupImpl` instead
    ///
    pub const QBaseDeleteGroupImpl = SuperDeleteGroupImpl;

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
    pub fn SuperDeleteGroupImpl(self: KConfig, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KConfig_SuperDeleteGroupImpl(@ptrCast(self.ptr), groupName_str, @bitCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn IsGroupImmutableImpl(self: KConfig, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_IsGroupImmutableImpl(@ptrCast(self.ptr), groupName_str);
    }

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
    pub fn OnIsGroupImmutableImpl(self: KConfig, callback: *const fn (KConfig, [*:0]const u8) callconv(.c) bool) void {
        qtc.KConfig_OnIsGroupImmutableImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsGroupImmutableImpl` instead
    ///
    pub const QBaseIsGroupImmutableImpl = SuperIsGroupImmutableImpl;

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
    pub fn SuperIsGroupImmutableImpl(self: KConfig, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KConfig_SuperIsGroupImmutableImpl(@ptrCast(self.ptr), groupName_str);
    }

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
    pub fn VirtualHook(self: KConfig, id: i32, data: ?*anyopaque) void {
        qtc.KConfig_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

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
    pub fn OnVirtualHook(self: KConfig, callback: *const fn (KConfig, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfig_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

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
    pub fn SuperVirtualHook(self: KConfig, id: i32, data: ?*anyopaque) void {
        qtc.KConfig_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

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
    pub fn CopyTo2(self: KConfig, file: []const u8, config: anytype) KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        comptime _ = @TypeOf(config)._is_KConfig;
        return .{ .ptr = qtc.KConfig_CopyTo2(@ptrCast(self.ptr), file_str, @ptrCast(config.ptr)) };
    }

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
    pub fn EntryMap1(self: KConfig, allocator: std.mem.Allocator, aGroup: []const u8) ArrayMap_constu8_constu8 {
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("kconfig.EntryMap1: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kconfig.EntryMap1: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("kconfig.EntryMap1: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfig `
    ///
    /// ` group: []const u8 `
    ///
    pub fn HasGroup(self: KConfig, group: []const u8) bool {
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
    /// ` self: KConfig `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group(self: KConfig, group: []const u8) KConfigGroup {
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
    /// ` self: KConfig `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group2(self: KConfig, group: []const u8) KConfigGroup {
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
    /// ` self: KConfig `
    ///
    /// ` group: []const u8 `
    ///
    pub fn DeleteGroup(self: KConfig, group: []const u8) void {
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
    /// ` self: KConfig `
    ///
    /// ` group: []const u8 `
    ///
    pub fn IsGroupImmutable(self: KConfig, group: []const u8) bool {
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
    /// ` self: KConfig `
    ///
    /// ` group: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteGroup2(self: KConfig, group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self.ptr), group_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kconfig.html#dtor.KConfig)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfig `
    ///
    pub fn Delete(self: KConfig) void {
        qtc.KConfig_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kconfig.html#public-types)
pub const enums = struct {
    pub const OpenFlag = enum(i32) {
        pub const IncludeGlobals: i32 = 1;
        pub const CascadeConfig: i32 = 2;
        pub const SimpleConfig: i32 = 0;
        pub const NoCascade: i32 = 1;
        pub const NoGlobals: i32 = 2;
        pub const FullConfig: i32 = 3;
    };
};
