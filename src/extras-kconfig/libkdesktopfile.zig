const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kconfig_enums = @import("libkconfig.zig").enums;
const kconfigbase_enums = @import("libkconfigbase.zig").enums;
const qstandardpaths_enums = @import("../libqstandardpaths.zig").enums;
const std = @import("std");
const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// ### [Upstream resources](https://api.kde.org/kdesktopfile.html)
pub const kdesktopfile = struct {
    /// New constructs a new KDesktopFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` resourceType: qstandardpaths_enums.StandardLocation `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New(resourceType: i32, fileName: []const u8) QtC.KDesktopFile {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.KDesktopFile_new(@intCast(resourceType), fileName_str);
    }

    /// New2 constructs a new KDesktopFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New2(fileName: []const u8) QtC.KDesktopFile {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.KDesktopFile_new2(fileName_str);
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
    /// ` path: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocateLocal(path: []const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn DesktopGroup(self: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KDesktopFile_DesktopGroup(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadIcon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadIcon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadComment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadComment(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadComment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readGenericName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadGenericName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadGenericName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadGenericName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadActions(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_ReadActions(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_ReadMimeTypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn ActionGroup(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KDesktopFile_ActionGroup(@ptrCast(self), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn ActionGroup2(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KDesktopFile_ActionGroup2(@ptrCast(self), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#hasActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn HasActionGroup(self: ?*anyopaque, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KDesktopFile_HasActionGroup(@ptrCast(self), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#hasLinkType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn HasLinkType(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_HasLinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#hasApplicationType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn HasApplicationType(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_HasApplicationType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#hasDeviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn HasDeviceType(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_HasDeviceType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#tryExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn TryExec(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_TryExec(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readDocPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadDocPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadDocPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.ReadDocPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#noDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn NoDisplay(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_NoDisplay(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` file: []const u8 `
    ///
    pub fn CopyTo(self: ?*anyopaque, file: []const u8) QtC.KDesktopFile {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.KDesktopFile_CopyTo(@ptrCast(self), file_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
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
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#locationType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ## Returns:
    ///
    /// ` qstandardpaths_enums.StandardLocation `
    ///
    pub fn LocationType(self: ?*anyopaque) i32 {
        return qtc.KConfig_LocationType(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Name(@ptrCast(self));
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
    /// ` self: QtC.KDesktopFile `
    ///
    /// ## Returns:
    ///
    /// ` flag of kconfig_enums.OpenFlag `
    ///
    pub fn OpenFlags(self: ?*anyopaque) i32 {
        return qtc.KConfig_OpenFlags(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn IsDirty(self: ?*anyopaque) bool {
        return qtc.KConfig_IsDirty(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isConfigWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` warnUser: bool `
    ///
    pub fn IsConfigWritable(self: ?*anyopaque, warnUser: bool) bool {
        return qtc.KConfig_IsConfigWritable(@ptrCast(self), warnUser);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#checkUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` id: []const u8 `
    ///
    /// ` updateFile: []const u8 `
    ///
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
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#reparseConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn ReparseConfiguration(self: ?*anyopaque) void {
        qtc.KConfig_ReparseConfiguration(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#addConfigSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` sources: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
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
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#additionalConfigSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AdditionalConfigSources(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_AdditionalConfigSources(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Locale(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Locale(@ptrCast(self));
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
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` aLocale: []const u8 `
    ///
    pub fn SetLocale(self: ?*anyopaque, aLocale: []const u8) bool {
        const aLocale_str = qtc.libqt_string{
            .len = aLocale.len,
            .data = aLocale.ptr,
        };
        return qtc.KConfig_SetLocale(@ptrCast(self), aLocale_str);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#setReadDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` b: bool `
    ///
    pub fn SetReadDefaults(self: ?*anyopaque, b: bool) void {
        qtc.KConfig_SetReadDefaults(@ptrCast(self), b);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#readDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn ReadDefaults(self: ?*anyopaque) bool {
        return qtc.KConfig_ReadDefaults(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#entryMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryMap(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KConfig_EntryMap(@ptrCast(self));
        var _ret: map_constu8_constu8 = .empty;
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
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` file: []const u8 `
    ///
    /// ` config: QtC.KConfig `
    ///
    pub fn CopyTo2(self: ?*anyopaque, file: []const u8, config: ?*anyopaque) QtC.KConfig {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.KConfig_CopyTo2(@ptrCast(self), file_str, @ptrCast(config));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#entryMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` aGroup: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryMap1(self: ?*anyopaque, aGroup: []const u8, allocator: std.mem.Allocator) map_constu8_constu8 {
        const aGroup_str = qtc.libqt_string{
            .len = aGroup.len,
            .data = aGroup.ptr,
        };
        const _map: qtc.libqt_map = qtc.KConfig_EntryMap1(@ptrCast(self), aGroup_str);
        var _ret: map_constu8_constu8 = .empty;
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
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn HasGroup(self: ?*anyopaque, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_HasGroup(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_Group(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Group2(self: ?*anyopaque, group: []const u8) QtC.KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_Group2(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn DeleteGroup(self: ?*anyopaque, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    pub fn IsGroupImmutable(self: ?*anyopaque, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigBase_IsGroupImmutable(@ptrCast(self), group_str);
    }

    /// Inherited from KConfigBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` group: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteGroup2(self: ?*anyopaque, group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self), group_str, @intCast(flags));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn Sync(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_Sync(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn QBaseSync(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_QBaseSync(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#sync)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KDesktopFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSync(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KDesktopFile_OnSync(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn MarkAsClean(self: ?*anyopaque) void {
        qtc.KDesktopFile_MarkAsClean(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn QBaseMarkAsClean(self: ?*anyopaque) void {
        qtc.KDesktopFile_QBaseMarkAsClean(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KDesktopFile`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnMarkAsClean(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDesktopFile_OnMarkAsClean(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ## Returns:
    ///
    /// ` kconfigbase_enums.AccessMode `
    ///
    pub fn AccessMode(self: ?*anyopaque) i32 {
        return qtc.KDesktopFile_AccessMode(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ## Returns:
    ///
    /// ` kconfigbase_enums.AccessMode `
    ///
    pub fn QBaseAccessMode(self: ?*anyopaque) i32 {
        return qtc.KDesktopFile_QBaseAccessMode(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KDesktopFile`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnAccessMode(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KDesktopFile_OnAccessMode(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn IsImmutable(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_IsImmutable(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn QBaseIsImmutable(self: ?*anyopaque) bool {
        return qtc.KDesktopFile_QBaseIsImmutable(@ptrCast(self));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KDesktopFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsImmutable(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KDesktopFile_OnIsImmutable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GroupList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_GroupList(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseGroupList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_QBaseGroupList(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KDesktopFile`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnGroupList(self: ?*anyopaque, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KDesktopFile_OnGroupList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn HasGroupImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_HasGroupImpl(@ptrCast(self), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn QBaseHasGroupImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_QBaseHasGroupImpl(@ptrCast(self), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KDesktopFile`
    ///
    /// ` callback: *const fn (self: QtC.KDesktopFile, groupName: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnHasGroupImpl(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KDesktopFile_OnHasGroupImpl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn GroupImpl(self: ?*anyopaque, groupName: []const u8) QtC.KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_GroupImpl(@ptrCast(self), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn QBaseGroupImpl(self: ?*anyopaque, groupName: []const u8) QtC.KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_QBaseGroupImpl(@ptrCast(self), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KDesktopFile`
    ///
    /// ` callback: *const fn (self: QtC.KDesktopFile, groupName: [*:0]const u8) callconv(.c) QtC.KConfigGroup `
    ///
    pub fn OnGroupImpl(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.KConfigGroup) void {
        qtc.KDesktopFile_OnGroupImpl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn DeleteGroupImpl(self: ?*anyopaque, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KDesktopFile_DeleteGroupImpl(@ptrCast(self), groupName_str, @intCast(flags));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn QBaseDeleteGroupImpl(self: ?*anyopaque, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KDesktopFile_QBaseDeleteGroupImpl(@ptrCast(self), groupName_str, @intCast(flags));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KDesktopFile`
    ///
    /// ` callback: *const fn (self: QtC.KDesktopFile, groupName: [*:0]const u8, flags: flag of kconfigbase_enums.WriteConfigFlag) callconv(.c) void `
    ///
    pub fn OnDeleteGroupImpl(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KDesktopFile_OnDeleteGroupImpl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn IsGroupImmutableImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_IsGroupImmutableImpl(@ptrCast(self), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn QBaseIsGroupImmutableImpl(self: ?*anyopaque, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_QBaseIsGroupImmutableImpl(@ptrCast(self), groupName_str);
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KDesktopFile`
    ///
    /// ` callback: *const fn (self: QtC.KDesktopFile, groupName: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnIsGroupImmutableImpl(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KDesktopFile_OnIsGroupImmutableImpl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KDesktopFile_VirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KDesktopFile_QBaseVirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
    }

    /// Inherited from KConfig
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KDesktopFile`
    ///
    /// ` callback: *const fn (self: QtC.KDesktopFile, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KDesktopFile_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#dtor.KDesktopFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KDesktopFile `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KDesktopFile_Delete(@ptrCast(self));
    }
};
