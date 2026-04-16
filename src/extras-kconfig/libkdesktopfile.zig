const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfig = @import("libqt6").KConfig;
const KConfigGroup = @import("libqt6").KConfigGroup;
const KDesktopFileAction = @import("libqt6").KDesktopFileAction;
const kconfig_enums = @import("libkconfig.zig").enums;
const kconfigbase_enums = @import("libkconfigbase.zig").enums;
const qstandardpaths_enums = @import("../libqstandardpaths.zig").enums;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/kdesktopfile.html)
pub const KDesktopFile = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KDesktopFile,

    pub const _is_KDesktopFile = {};
    pub const _is_KConfig = {};
    pub const _is_KConfigBase = {};

    /// New constructs a new KDesktopFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` resourceType: qstandardpaths_enums.StandardLocation `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New(resourceType: i32, fileName: []const u8) KDesktopFile {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_new(@bitCast(resourceType), fileName_str) };
    }

    /// New2 constructs a new KDesktopFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New2(fileName: []const u8) KDesktopFile {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_new2(fileName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#isDesktopFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn IsDesktopFile(path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KDesktopFile_IsDesktopFile(path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#isAuthorizedDesktopFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn IsAuthorizedDesktopFile(path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KDesktopFile_IsAuthorizedDesktopFile(path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#locateLocal)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    pub fn LocateLocal(allocator: std.mem.Allocator, path: []const u8) []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        var _str = qtc.KDesktopFile_LocateLocal(path_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.LocateLocal: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#desktopGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn DesktopGroup(self: KDesktopFile) KConfigGroup {
        return .{ .ptr = qtc.KDesktopFile_DesktopGroup(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadType(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadIcon(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadIcon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadName(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadComment(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadComment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadComment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readGenericName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadGenericName(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadGenericName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadGenericName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadPath(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadUrl(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadActions(self: KDesktopFile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_ReadActions(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadMimeTypes(self: KDesktopFile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_ReadMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn ActionGroup(self: KDesktopFile, group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_ActionGroup(@ptrCast(self.ptr), group_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn ActionGroup2(self: KDesktopFile, group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_ActionGroup2(@ptrCast(self.ptr), group_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#hasActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn HasActionGroup(self: KDesktopFile, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KDesktopFile_HasActionGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#hasLinkType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn HasLinkType(self: KDesktopFile) bool {
        return qtc.KDesktopFile_HasLinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#hasApplicationType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn HasApplicationType(self: KDesktopFile) bool {
        return qtc.KDesktopFile_HasApplicationType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#hasDeviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn HasDeviceType(self: KDesktopFile) bool {
        return qtc.KDesktopFile_HasDeviceType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#tryExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn TryExec(self: KDesktopFile) bool {
        return qtc.KDesktopFile_TryExec(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readDocPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadDocPath(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadDocPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadDocPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#noDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn NoDisplay(self: KDesktopFile) bool {
        return qtc.KDesktopFile_NoDisplay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` file: []const u8 `
    ///
    pub fn CopyTo(self: KDesktopFile, file: []const u8) KDesktopFile {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_CopyTo(@ptrCast(self.ptr), file_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KDesktopFile, allocator: std.mem.Allocator) []KDesktopFileAction {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KDesktopFileAction, _arr.len) catch @panic("kdesktopfile.Actions: Memory allocation failed");
        const _data: [*]QtC.KDesktopFileAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#locationType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ## Returns:
    ///
    /// ` qstandardpaths_enums.StandardLocation `
    ///
    pub fn LocationType(self: KDesktopFile) i32 {
        return qtc.KConfig_LocationType(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#openFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ## Returns:
    ///
    /// ` flag of kconfig_enums.OpenFlag `
    ///
    pub fn OpenFlags(self: KDesktopFile) i32 {
        return qtc.KConfig_OpenFlags(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn IsDirty(self: KDesktopFile) bool {
        return qtc.KConfig_IsDirty(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isConfigWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` warnUser: bool `
    ///
    pub fn IsConfigWritable(self: KDesktopFile, warnUser: bool) bool {
        return qtc.KConfig_IsConfigWritable(@ptrCast(self.ptr), warnUser);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#checkUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` id: []const u8 `
    ///
    /// ` updateFile: []const u8 `
    ///
    pub fn CheckUpdate(self: KDesktopFile, id: []const u8, updateFile: []const u8) void {
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
    /// ` self: KDesktopFile `
    ///
    pub fn ReparseConfiguration(self: KDesktopFile) void {
        qtc.KConfig_ReparseConfiguration(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#addConfigSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sources: []const []const u8 `
    ///
    pub fn AddConfigSources(self: KDesktopFile, allocator: std.mem.Allocator, sources: []const []const u8) void {
        const sources_arr = allocator.alloc(qtc.libqt_string, sources.len) catch @panic("kdesktopfile.AddConfigSources: Memory allocation failed");
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
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AdditionalConfigSources(self: KDesktopFile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_AdditionalConfigSources(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Locale(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Locale(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.Locale: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` aLocale: []const u8 `
    ///
    pub fn SetLocale(self: KDesktopFile, aLocale: []const u8) bool {
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
    /// ` self: KDesktopFile `
    ///
    /// ` b: bool `
    ///
    pub fn SetReadDefaults(self: KDesktopFile, b: bool) void {
        qtc.KConfig_SetReadDefaults(@ptrCast(self.ptr), b);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#readDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn ReadDefaults(self: KDesktopFile) bool {
        return qtc.KConfig_ReadDefaults(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#entryMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryMap(self: KDesktopFile, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("kdesktopfile.EntryMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kdesktopfile.EntryMap: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("kdesktopfile.EntryMap: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.MainConfigName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` file: []const u8 `
    ///
    /// ` config: KConfig `
    ///
    pub fn CopyTo2(self: KDesktopFile, file: []const u8, config: anytype) KConfig {
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
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` aGroup: []const u8 `
    ///
    pub fn EntryMap1(self: KDesktopFile, allocator: std.mem.Allocator, aGroup: []const u8) ArrayMap_constu8_constu8 {
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("kdesktopfile.EntryMap1: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kdesktopfile.EntryMap1: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("kdesktopfile.EntryMap1: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn HasGroup(self: KDesktopFile, group: []const u8) bool {
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
    /// ` self: KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group(self: KDesktopFile, group: []const u8) KConfigGroup {
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
    /// ` self: KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group2(self: KDesktopFile, group: []const u8) KConfigGroup {
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
    /// ` self: KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn DeleteGroup(self: KDesktopFile, group: []const u8) void {
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
    /// ` self: KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn IsGroupImmutable(self: KDesktopFile, group: []const u8) bool {
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
    /// ` self: KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteGroup2(self: KDesktopFile, group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self.ptr), group_str, @bitCast(flags));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn Sync(self: KDesktopFile) bool {
        return qtc.KDesktopFile_Sync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSync` instead
    ///
    pub const QBaseSync = SuperSync;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn SuperSync(self: KDesktopFile) bool {
        return qtc.KDesktopFile_SuperSync(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDesktopFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSync(self: KDesktopFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KDesktopFile_OnSync(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn MarkAsClean(self: KDesktopFile) void {
        qtc.KDesktopFile_MarkAsClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperMarkAsClean` instead
    ///
    pub const QBaseMarkAsClean = SuperMarkAsClean;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn SuperMarkAsClean(self: KDesktopFile) void {
        qtc.KDesktopFile_SuperMarkAsClean(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDesktopFile`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnMarkAsClean(self: KDesktopFile, callback: *const fn () callconv(.c) void) void {
        qtc.KDesktopFile_OnMarkAsClean(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ## Returns:
    ///
    /// ` kconfigbase_enums.AccessMode `
    ///
    pub fn AccessMode(self: KDesktopFile) i32 {
        return qtc.KDesktopFile_AccessMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperAccessMode` instead
    ///
    pub const QBaseAccessMode = SuperAccessMode;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ## Returns:
    ///
    /// ` kconfigbase_enums.AccessMode `
    ///
    pub fn SuperAccessMode(self: KDesktopFile) i32 {
        return qtc.KDesktopFile_SuperAccessMode(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDesktopFile`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnAccessMode(self: KDesktopFile, callback: *const fn () callconv(.c) i32) void {
        qtc.KDesktopFile_OnAccessMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn IsImmutable(self: KDesktopFile) bool {
        return qtc.KDesktopFile_IsImmutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsImmutable` instead
    ///
    pub const QBaseIsImmutable = SuperIsImmutable;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn SuperIsImmutable(self: KDesktopFile) bool {
        return qtc.KDesktopFile_SuperIsImmutable(@ptrCast(self.ptr));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDesktopFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsImmutable(self: KDesktopFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KDesktopFile_OnIsImmutable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GroupList(self: KDesktopFile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_GroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### DEPRECATED: Use `SuperGroupList` instead
    ///
    pub const QBaseGroupList = SuperGroupList;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperGroupList(self: KDesktopFile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_SuperGroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KDesktopFile`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnGroupList(self: KDesktopFile, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KDesktopFile_OnGroupList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn HasGroupImpl(self: KDesktopFile, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_HasGroupImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `SuperHasGroupImpl` instead
    ///
    pub const QBaseHasGroupImpl = SuperHasGroupImpl;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn SuperHasGroupImpl(self: KDesktopFile, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_SuperHasGroupImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDesktopFile`
    ///
    /// ` callback: *const fn (self: KDesktopFile, groupName: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnHasGroupImpl(self: KDesktopFile, callback: *const fn (KDesktopFile, [*:0]const u8) callconv(.c) bool) void {
        qtc.KDesktopFile_OnHasGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn GroupImpl(self: KDesktopFile, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_GroupImpl(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### DEPRECATED: Use `SuperGroupImpl` instead
    ///
    pub const QBaseGroupImpl = SuperGroupImpl;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn SuperGroupImpl(self: KDesktopFile, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_SuperGroupImpl(@ptrCast(self.ptr), groupName_str) };
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDesktopFile`
    ///
    /// ` callback: *const fn (self: KDesktopFile, groupName: [*:0]const u8) callconv(.c) KConfigGroup `
    ///
    pub fn OnGroupImpl(self: KDesktopFile, callback: *const fn (KDesktopFile, [*:0]const u8) callconv(.c) KConfigGroup) void {
        qtc.KDesktopFile_OnGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteGroupImpl(self: KDesktopFile, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KDesktopFile_DeleteGroupImpl(@ptrCast(self.ptr), groupName_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `SuperDeleteGroupImpl` instead
    ///
    pub const QBaseDeleteGroupImpl = SuperDeleteGroupImpl;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SuperDeleteGroupImpl(self: KDesktopFile, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KDesktopFile_SuperDeleteGroupImpl(@ptrCast(self.ptr), groupName_str, @bitCast(flags));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDesktopFile`
    ///
    /// ` callback: *const fn (self: KDesktopFile, groupName: [*:0]const u8, flags: flag of kconfigbase_enums.WriteConfigFlag) callconv(.c) void `
    ///
    pub fn OnDeleteGroupImpl(self: KDesktopFile, callback: *const fn (KDesktopFile, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KDesktopFile_OnDeleteGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn IsGroupImmutableImpl(self: KDesktopFile, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_IsGroupImmutableImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `SuperIsGroupImmutableImpl` instead
    ///
    pub const QBaseIsGroupImmutableImpl = SuperIsGroupImmutableImpl;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn SuperIsGroupImmutableImpl(self: KDesktopFile, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_SuperIsGroupImmutableImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDesktopFile`
    ///
    /// ` callback: *const fn (self: KDesktopFile, groupName: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnIsGroupImmutableImpl(self: KDesktopFile, callback: *const fn (KDesktopFile, [*:0]const u8) callconv(.c) bool) void {
        qtc.KDesktopFile_OnIsGroupImmutableImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: KDesktopFile, id: i32, data: ?*anyopaque) void {
        qtc.KDesktopFile_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KDesktopFile, id: i32, data: ?*anyopaque) void {
        qtc.KDesktopFile_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDesktopFile`
    ///
    /// ` callback: *const fn (self: KDesktopFile, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: KDesktopFile, callback: *const fn (KDesktopFile, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KDesktopFile_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#dtor.KDesktopFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn Delete(self: KDesktopFile) void {
        qtc.KDesktopFile_Delete(@ptrCast(self.ptr));
    }
};
