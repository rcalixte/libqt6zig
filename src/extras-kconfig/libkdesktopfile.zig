const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kconfig_enums = @import("libkconfig.zig").enums;
const kconfigbase_enums = @import("libkconfigbase.zig").enums;
const qstandardpaths_enums = @import("../libqstandardpaths.zig").enums;
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://api-staging.kde.org/kdesktopfile.html
pub const kdesktopfile = struct {
    /// New constructs a new KDesktopFile object.
    ///
    /// ``` resourceType: qstandardpaths_enums.StandardLocation, fileName: []const u8 ```
    pub fn New(resourceType: i32, fileName: []const u8) QtC.KDesktopFile {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.KDesktopFile_new(@intCast(resourceType), fileName_str);
    }

    /// New2 constructs a new KDesktopFile object.
    ///
    /// ``` fileName: []const u8 ```
    pub fn New2(fileName: []const u8) QtC.KDesktopFile {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.KDesktopFile_new2(fileName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#isDesktopFile)
    ///
    /// ``` path: []const u8 ```
    pub fn IsDesktopFile(path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KDesktopFile_IsDesktopFile(path_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#isAuthorizedDesktopFile)
    ///
    /// ``` path: []const u8 ```
    pub fn IsAuthorizedDesktopFile(path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KDesktopFile_IsAuthorizedDesktopFile(path_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#locateLocal)
    ///
    /// ``` path: []const u8, allocator: std.mem.Allocator ```
    pub fn LocateLocal(path: []const u8, allocator: std.mem.Allocator) []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _str = qtc.KDesktopFile_LocateLocal(path_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.LocateLocal: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#desktopGroup)
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn DesktopGroup(self: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KDesktopFile_DesktopGroup(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#readType)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn ReadType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFile_ReadType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#readIcon)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn ReadIcon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFile_ReadIcon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#readName)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn ReadName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFile_ReadName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#readComment)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn ReadComment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFile_ReadComment(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadComment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#readGenericName)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn ReadGenericName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFile_ReadGenericName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadGenericName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#readPath)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn ReadPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFile_ReadPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#readUrl)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn ReadUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFile_ReadUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#readActions)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn ReadActions(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_ReadActions(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kdesktopfile.ReadActions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdesktopfile.ReadActions: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#readMimeTypes)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn ReadMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_ReadMimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kdesktopfile.ReadMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdesktopfile.ReadMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#actionGroup)
    ///
    /// ``` self: QtC.KDesktopFile, group: []const u8 ```
    pub fn ActionGroup(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KDesktopFile_ActionGroup(@ptrCast(self), group_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#actionGroup)
    ///
    /// ``` self: QtC.KDesktopFile, group: []const u8 ```
    pub fn ActionGroup2(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KDesktopFile_ActionGroup2(@ptrCast(self), group_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#hasActionGroup)
    ///
    /// ``` self: QtC.KDesktopFile, group: []const u8 ```
    pub fn HasActionGroup(self: ?*anyopaque, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KDesktopFile_HasActionGroup(@ptrCast(self), group_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#hasLinkType)
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn HasLinkType(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_HasLinkType(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#hasApplicationType)
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn HasApplicationType(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_HasApplicationType(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#hasDeviceType)
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn HasDeviceType(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_HasDeviceType(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#tryExec)
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn TryExec(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_TryExec(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#readDocPath)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn ReadDocPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFile_ReadDocPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadDocPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#noDisplay)
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn NoDisplay(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_NoDisplay(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#copyTo)
    ///
    /// ``` self: QtC.KDesktopFile, file: []const u8 ```
    pub fn CopyTo(self: ?*anyopaque, file: []const u8) QtC.KDesktopFile {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.KDesktopFile_CopyTo(@ptrCast(self), file_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#fileName)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFile_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#actions)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KDesktopFileAction {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KDesktopFileAction, _arr.len) catch @panic("kdesktopfile.Actions: Memory allocation failed");
        const _data: [*]QtC.KDesktopFileAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#locationType)
    ///
    /// ``` self: QtC.KDesktopFile ```
    ///
    /// Returns: ``` qstandardpaths_enums.StandardLocation ```
    pub fn LocationType(self: ?*anyopaque) i32 {
        return qtc.KConfig_LocationType(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#name)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KConfig_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#openFlags)
    ///
    /// ``` self: QtC.KDesktopFile ```
    ///
    /// Returns: ``` flag of kconfig_enums.OpenFlag ```
    pub fn OpenFlags(self: ?*anyopaque) i32 {
        return qtc.KConfig_OpenFlags(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isDirty)
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn IsDirty(self: ?*anyopaque) bool {
        return qtc.KConfig_IsDirty(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isConfigWritable)
    ///
    /// ``` self: QtC.KDesktopFile, warnUser: bool ```
    pub fn IsConfigWritable(self: ?*anyopaque, warnUser: bool) bool {
        return qtc.KConfig_IsConfigWritable(@ptrCast(self), warnUser);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#checkUpdate)
    ///
    /// ``` self: QtC.KDesktopFile, id: []const u8, updateFile: []const u8 ```
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
    /// ``` self: QtC.KDesktopFile ```
    pub fn ReparseConfiguration(self: ?*anyopaque) void {
        qtc.KConfig_ReparseConfiguration(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#addConfigSources)
    ///
    /// ``` self: QtC.KDesktopFile, sources: [][]const u8, allocator: std.mem.Allocator ```
    pub fn AddConfigSources(self: ?*anyopaque, sources: [][]const u8, allocator: std.mem.Allocator) void {
        var sources_arr = allocator.alloc(qtc.libqt_string, sources.len) catch @panic("kdesktopfile.AddConfigSources: Memory allocation failed");
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
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn AdditionalConfigSources(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_AdditionalConfigSources(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kdesktopfile.AdditionalConfigSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdesktopfile.AdditionalConfigSources: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#locale)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn Locale(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KConfig_Locale(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.Locale: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#setLocale)
    ///
    /// ``` self: QtC.KDesktopFile, aLocale: []const u8 ```
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
    /// ``` self: QtC.KDesktopFile, b: bool ```
    pub fn SetReadDefaults(self: ?*anyopaque, b: bool) void {
        qtc.KConfig_SetReadDefaults(@ptrCast(self), b);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#readDefaults)
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn ReadDefaults(self: ?*anyopaque) bool {
        return qtc.KConfig_ReadDefaults(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#entryMap)
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
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
            _ret.put(allocator, _entry_slice, _value) catch @panic("kdesktopfile.EntryMap: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.MainConfigName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#copyTo)
    ///
    /// ``` self: QtC.KDesktopFile, file: []const u8, config: QtC.KConfig ```
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
    /// ``` self: QtC.KDesktopFile, aGroup: []const u8, allocator: std.mem.Allocator ```
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
            _ret.put(allocator, _entry_slice, _value) catch @panic("kdesktopfile.EntryMap1: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from KConfigBase
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ``` self: QtC.KDesktopFile, group: []const u8 ```
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
    /// ``` self: QtC.KDesktopFile, group: []const u8 ```
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
    /// ``` self: QtC.KDesktopFile, group: []const u8 ```
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
    /// ``` self: QtC.KDesktopFile, group: []const u8 ```
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
    /// ``` self: QtC.KDesktopFile, group: []const u8 ```
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
    /// ``` self: QtC.KDesktopFile, group: []const u8, flags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn DeleteGroup2(self: ?*anyopaque, group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self), group_str, @intCast(flags));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#sync)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn Sync(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_Sync(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#sync)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn QBaseSync(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_QBaseSync(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#sync)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, slot: fn () callconv(.c) bool ```
    pub fn OnSync(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KDesktopFile_OnSync(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#markAsClean)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn MarkAsClean(self: ?*anyopaque) void {
        qtc.KDesktopFile_MarkAsClean(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#markAsClean)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn QBaseMarkAsClean(self: ?*anyopaque) void {
        qtc.KDesktopFile_QBaseMarkAsClean(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#markAsClean)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, slot: fn () callconv(.c) void ```
    pub fn OnMarkAsClean(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KDesktopFile_OnMarkAsClean(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#accessMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile ```
    ///
    /// Returns: ``` kconfigbase_enums.AccessMode ```
    pub fn AccessMode(self: ?*anyopaque) i32 {
        return qtc.KDesktopFile_AccessMode(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#accessMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile ```
    ///
    /// Returns: ``` kconfigbase_enums.AccessMode ```
    pub fn QBaseAccessMode(self: ?*anyopaque) i32 {
        return qtc.KDesktopFile_QBaseAccessMode(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#accessMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, slot: fn () callconv(.c) i32 ```
    pub fn OnAccessMode(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KDesktopFile_OnAccessMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isImmutable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn IsImmutable(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_IsImmutable(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isImmutable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn QBaseIsImmutable(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_QBaseIsImmutable(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isImmutable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, slot: fn () callconv(.c) bool ```
    pub fn OnIsImmutable(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KDesktopFile_OnIsImmutable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn GroupList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_GroupList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kdesktopfile.GroupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdesktopfile.GroupList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, allocator: std.mem.Allocator ```
    pub fn QBaseGroupList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_QBaseGroupList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kdesktopfile.GroupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdesktopfile.GroupList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, slot: fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnGroupList(self: ?*anyopaque, slot: fn () callconv(.c) [*][*:0]const u8) void {
        qtc.KDesktopFile_OnGroupList(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, groupName: []const u8 ```
    pub fn HasGroupImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_HasGroupImpl(@ptrCast(self), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, groupName: []const u8 ```
    pub fn QBaseHasGroupImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_QBaseHasGroupImpl(@ptrCast(self), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, slot: fn (self: QtC.KDesktopFile, groupName: [*:0]const u8) callconv(.c) bool ```
    pub fn OnHasGroupImpl(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KDesktopFile_OnHasGroupImpl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupImpl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, groupName: []const u8 ```
    pub fn GroupImpl(self: ?*anyopaque, groupName: []const u8) QtC.KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_GroupImpl(@ptrCast(self), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupImpl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, groupName: []const u8 ```
    pub fn QBaseGroupImpl(self: ?*anyopaque, groupName: []const u8) QtC.KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_QBaseGroupImpl(@ptrCast(self), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#groupImpl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, slot: fn (self: QtC.KDesktopFile, groupName: [*:0]const u8) callconv(.c) QtC.KConfigGroup ```
    pub fn OnGroupImpl(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.KConfigGroup) void {
        qtc.KDesktopFile_OnGroupImpl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, groupName: []const u8, flags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn DeleteGroupImpl(self: ?*anyopaque, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KDesktopFile_DeleteGroupImpl(@ptrCast(self), groupName_str, @intCast(flags));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, groupName: []const u8, flags: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn QBaseDeleteGroupImpl(self: ?*anyopaque, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KDesktopFile_QBaseDeleteGroupImpl(@ptrCast(self), groupName_str, @intCast(flags));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, slot: fn (self: QtC.KDesktopFile, groupName: [*:0]const u8, flags: flag of kconfigbase_enums.WriteConfigFlag) callconv(.c) void ```
    pub fn OnDeleteGroupImpl(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KDesktopFile_OnDeleteGroupImpl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, groupName: []const u8 ```
    pub fn IsGroupImmutableImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_IsGroupImmutableImpl(@ptrCast(self), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, groupName: []const u8 ```
    pub fn QBaseIsGroupImmutableImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_QBaseIsGroupImmutableImpl(@ptrCast(self), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, slot: fn (self: QtC.KDesktopFile, groupName: [*:0]const u8) callconv(.c) bool ```
    pub fn OnIsGroupImmutableImpl(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KDesktopFile_OnIsGroupImmutableImpl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KDesktopFile_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, id: i32, data: ?*anyopaque ```
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KDesktopFile_QBaseVirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from KConfig
    ///
    /// [Qt documentation](https://api-staging.kde.org/kconfig.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDesktopFile, slot: fn (self: QtC.KDesktopFile, id: i32, data: ?*anyopaque) callconv(.c) void ```
    pub fn OnVirtualHook(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KDesktopFile_OnVirtualHook(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kdesktopfile.html#dtor.KDesktopFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KDesktopFile ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KDesktopFile_Delete(@ptrCast(self));
    }
};
