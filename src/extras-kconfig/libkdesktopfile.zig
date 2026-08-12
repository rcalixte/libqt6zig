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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KDesktopFile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` resourceType: qstandardpaths_enums.StandardLocation `
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn new(resourceType: i32, _fileName: []const u8) KDesktopFile {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_new(@bitCast(resourceType), fileName_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KDesktopFile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn new2(_fileName: []const u8) KDesktopFile {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_new2(fileName_str) };
    }

    /// ### DEPRECATED: Use `isDesktopFile` instead
    ///
    pub const IsDesktopFile = isDesktopFile;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#isDesktopFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn isDesktopFile(path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KDesktopFile_IsDesktopFile(path_str);
    }

    /// ### DEPRECATED: Use `isAuthorizedDesktopFile` instead
    ///
    pub const IsAuthorizedDesktopFile = isAuthorizedDesktopFile;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#isAuthorizedDesktopFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn isAuthorizedDesktopFile(path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KDesktopFile_IsAuthorizedDesktopFile(path_str);
    }

    /// ### DEPRECATED: Use `locateLocal` instead
    ///
    pub const LocateLocal = locateLocal;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#locateLocal)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    pub fn locateLocal(allocator: std.mem.Allocator, path: []const u8) []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        var _str = qtc.KDesktopFile_LocateLocal(path_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.locateLocal: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `desktopGroup` instead
    ///
    pub const DesktopGroup = desktopGroup;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#desktopGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn desktopGroup(self: KDesktopFile) KConfigGroup {
        return .{ .ptr = qtc.KDesktopFile_DesktopGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `readType` instead
    ///
    pub const ReadType = readType;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readType(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.readType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readIcon` instead
    ///
    pub const ReadIcon = readIcon;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readIcon(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadIcon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.readIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readName` instead
    ///
    pub const ReadName = readName;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readName(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.readName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readComment` instead
    ///
    pub const ReadComment = readComment;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readComment(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadComment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.readComment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readGenericName` instead
    ///
    pub const ReadGenericName = readGenericName;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readGenericName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readGenericName(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadGenericName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.readGenericName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readPath` instead
    ///
    pub const ReadPath = readPath;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readPath(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.readPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readUrl` instead
    ///
    pub const ReadUrl = readUrl;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readUrl(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.readUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readActions` instead
    ///
    pub const ReadActions = readActions;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readActions(self: KDesktopFile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_ReadActions(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KDesktopFile.readActions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KDesktopFile.readActions: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `readMimeTypes` instead
    ///
    pub const ReadMimeTypes = readMimeTypes;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readMimeTypes(self: KDesktopFile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_ReadMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KDesktopFile.readMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KDesktopFile.readMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `actionGroup` instead
    ///
    pub const ActionGroup = actionGroup;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn actionGroup(self: KDesktopFile, _group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_ActionGroup(@ptrCast(self.ptr), group_str) };
    }

    /// ### DEPRECATED: Use `actionGroup2` instead
    ///
    pub const ActionGroup2 = actionGroup2;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn actionGroup2(self: KDesktopFile, _group: []const u8) KConfigGroup {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_ActionGroup2(@ptrCast(self.ptr), group_str) };
    }

    /// ### DEPRECATED: Use `hasActionGroup` instead
    ///
    pub const HasActionGroup = hasActionGroup;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#hasActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn hasActionGroup(self: KDesktopFile, _group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        return qtc.KDesktopFile_HasActionGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `hasLinkType` instead
    ///
    pub const HasLinkType = hasLinkType;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#hasLinkType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn hasLinkType(self: KDesktopFile) bool {
        return qtc.KDesktopFile_HasLinkType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasApplicationType` instead
    ///
    pub const HasApplicationType = hasApplicationType;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#hasApplicationType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn hasApplicationType(self: KDesktopFile) bool {
        return qtc.KDesktopFile_HasApplicationType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasDeviceType` instead
    ///
    pub const HasDeviceType = hasDeviceType;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#hasDeviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn hasDeviceType(self: KDesktopFile) bool {
        return qtc.KDesktopFile_HasDeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryExec` instead
    ///
    pub const TryExec = tryExec;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#tryExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn tryExec(self: KDesktopFile) bool {
        return qtc.KDesktopFile_TryExec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readDocPath` instead
    ///
    pub const ReadDocPath = readDocPath;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#readDocPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readDocPath(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_ReadDocPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.readDocPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `noDisplay` instead
    ///
    pub const NoDisplay = noDisplay;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#noDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn noDisplay(self: KDesktopFile) bool {
        return qtc.KDesktopFile_NoDisplay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copyTo` instead
    ///
    pub const CopyTo = copyTo;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` file: []const u8 `
    ///
    pub fn copyTo(self: KDesktopFile, file: []const u8) KDesktopFile {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_CopyTo(@ptrCast(self.ptr), file_str) };
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFile_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: KDesktopFile, allocator: std.mem.Allocator) []KDesktopFileAction {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KDesktopFileAction, _arr.len) catch @panic("KDesktopFile.actions: Memory allocation failed");
        const _data_val: [*]QtC.KDesktopFileAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `locationType` instead
    ///
    pub const LocationType = locationType;

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
    pub fn locationType(self: KDesktopFile) i32 {
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
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.name: Memory allocation failed");
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
    /// ` self: KDesktopFile `
    ///
    /// ## Returns:
    ///
    /// ` flag of kconfig_enums.OpenFlag `
    ///
    pub fn openFlags(self: KDesktopFile) i32 {
        return qtc.KConfig_OpenFlags(@ptrCast(self.ptr));
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
    /// ` self: KDesktopFile `
    ///
    pub fn isDirty(self: KDesktopFile) bool {
        return qtc.KConfig_IsDirty(@ptrCast(self.ptr));
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
    /// ` self: KDesktopFile `
    ///
    /// ` warnUser: bool `
    ///
    pub fn isConfigWritable(self: KDesktopFile, warnUser: bool) bool {
        return qtc.KConfig_IsConfigWritable(@ptrCast(self.ptr), warnUser);
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
    /// ` self: KDesktopFile `
    ///
    /// ` id: []const u8 `
    ///
    /// ` updateFile: []const u8 `
    ///
    pub fn checkUpdate(self: KDesktopFile, id: []const u8, updateFile: []const u8) void {
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
    /// ` self: KDesktopFile `
    ///
    pub fn reparseConfiguration(self: KDesktopFile) void {
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
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sources: []const []const u8 `
    ///
    pub fn addConfigSources(self: KDesktopFile, allocator: std.mem.Allocator, sources: []const []const u8) void {
        const sources_arr = allocator.alloc(qtc.libqt_string, sources.len) catch @panic("KDesktopFile.addConfigSources: Memory allocation failed");
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
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn additionalConfigSources(self: KDesktopFile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfig_AdditionalConfigSources(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KDesktopFile.additionalConfigSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KDesktopFile.additionalConfigSources: Memory allocation failed");
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
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn locale(self: KDesktopFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KConfig_Locale(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.locale: Memory allocation failed");
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
    /// ` self: KDesktopFile `
    ///
    /// ` aLocale: []const u8 `
    ///
    pub fn setLocale(self: KDesktopFile, aLocale: []const u8) bool {
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
    /// ` self: KDesktopFile `
    ///
    /// ` b: bool `
    ///
    pub fn setReadDefaults(self: KDesktopFile, b: bool) void {
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
    /// ` self: KDesktopFile `
    ///
    pub fn readDefaults(self: KDesktopFile) bool {
        return qtc.KConfig_ReadDefaults(@ptrCast(self.ptr));
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
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn entryMap(self: KDesktopFile, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KConfig_EntryMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KDesktopFile.entryMap: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KDesktopFile.entryMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KDesktopFile.entryMap: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFile.mainConfigName: Memory allocation failed");
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
    /// ` self: KDesktopFile `
    ///
    /// ` file: []const u8 `
    ///
    /// ` config: KConfig `
    ///
    pub fn copyTo2(self: KDesktopFile, file: []const u8, config: anytype) KConfig {
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
    /// ` self: KDesktopFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` aGroup: []const u8 `
    ///
    pub fn entryMap1(self: KDesktopFile, allocator: std.mem.Allocator, aGroup: []const u8) ArrayMap_constu8_constu8 {
        const aGroup_str = qtc.libqt_string{
            .len = aGroup.len,
            .data = aGroup.ptr,
        };
        const _map: qtc.libqt_map = qtc.KConfig_EntryMap1(@ptrCast(self.ptr), aGroup_str);
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KDesktopFile.entryMap1: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KDesktopFile.entryMap1: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KDesktopFile.entryMap1: Memory allocation failed");
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
    /// ` self: KDesktopFile `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn hasGroup(self: KDesktopFile, _group: []const u8) bool {
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
    /// ` self: KDesktopFile `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn group(self: KDesktopFile, _group: []const u8) KConfigGroup {
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
    /// ` self: KDesktopFile `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn group2(self: KDesktopFile, _group: []const u8) KConfigGroup {
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
    /// ` self: KDesktopFile `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn deleteGroup(self: KDesktopFile, _group: []const u8) void {
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
    /// ` self: KDesktopFile `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn isGroupImmutable(self: KDesktopFile, _group: []const u8) bool {
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
    /// ` self: KDesktopFile `
    ///
    /// ` _group: []const u8 `
    ///
    /// ` flags: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn deleteGroup2(self: KDesktopFile, _group: []const u8, flags: i32) void {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.KConfigBase_DeleteGroup2(@ptrCast(self.ptr), group_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `sync` instead
    ///
    pub const Sync = sync;

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
    pub fn sync(self: KDesktopFile) bool {
        return qtc.KDesktopFile_Sync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSync` instead
    ///
    pub const SuperSync = superSync;

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
    pub fn superSync(self: KDesktopFile) bool {
        return qtc.KDesktopFile_SuperSync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSync` instead
    ///
    pub const OnSync = onSync;

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
    pub fn onSync(self: KDesktopFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KDesktopFile_OnSync(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markAsClean` instead
    ///
    pub const MarkAsClean = markAsClean;

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
    pub fn markAsClean(self: KDesktopFile) void {
        qtc.KDesktopFile_MarkAsClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superMarkAsClean` instead
    ///
    pub const SuperMarkAsClean = superMarkAsClean;

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
    pub fn superMarkAsClean(self: KDesktopFile) void {
        qtc.KDesktopFile_SuperMarkAsClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMarkAsClean` instead
    ///
    pub const OnMarkAsClean = onMarkAsClean;

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
    pub fn onMarkAsClean(self: KDesktopFile, callback: *const fn () callconv(.c) void) void {
        qtc.KDesktopFile_OnMarkAsClean(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `accessMode` instead
    ///
    pub const AccessMode = accessMode;

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
    pub fn accessMode(self: KDesktopFile) i32 {
        return qtc.KDesktopFile_AccessMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superAccessMode` instead
    ///
    pub const SuperAccessMode = superAccessMode;

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
    pub fn superAccessMode(self: KDesktopFile) i32 {
        return qtc.KDesktopFile_SuperAccessMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAccessMode` instead
    ///
    pub const OnAccessMode = onAccessMode;

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
    pub fn onAccessMode(self: KDesktopFile, callback: *const fn () callconv(.c) i32) void {
        qtc.KDesktopFile_OnAccessMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isImmutable` instead
    ///
    pub const IsImmutable = isImmutable;

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
    pub fn isImmutable(self: KDesktopFile) bool {
        return qtc.KDesktopFile_IsImmutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsImmutable` instead
    ///
    pub const SuperIsImmutable = superIsImmutable;

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
    pub fn superIsImmutable(self: KDesktopFile) bool {
        return qtc.KDesktopFile_SuperIsImmutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsImmutable` instead
    ///
    pub const OnIsImmutable = onIsImmutable;

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
    pub fn onIsImmutable(self: KDesktopFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KDesktopFile_OnIsImmutable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `groupList` instead
    ///
    pub const GroupList = groupList;

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
    pub fn groupList(self: KDesktopFile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_GroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KDesktopFile.groupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KDesktopFile.groupList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superGroupList` instead
    ///
    pub const SuperGroupList = superGroupList;

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
    pub fn superGroupList(self: KDesktopFile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDesktopFile_SuperGroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KDesktopFile.groupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KDesktopFile.groupList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onGroupList` instead
    ///
    pub const OnGroupList = onGroupList;

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
    pub fn onGroupList(self: KDesktopFile, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KDesktopFile_OnGroupList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasGroupImpl` instead
    ///
    pub const HasGroupImpl = hasGroupImpl;

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
    pub fn hasGroupImpl(self: KDesktopFile, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_HasGroupImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `superHasGroupImpl` instead
    ///
    pub const SuperHasGroupImpl = superHasGroupImpl;

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
    pub fn superHasGroupImpl(self: KDesktopFile, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_SuperHasGroupImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `onHasGroupImpl` instead
    ///
    pub const OnHasGroupImpl = onHasGroupImpl;

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
    pub fn onHasGroupImpl(self: KDesktopFile, callback: *const fn (KDesktopFile, [*:0]const u8) callconv(.c) bool) void {
        qtc.KDesktopFile_OnHasGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `groupImpl` instead
    ///
    pub const GroupImpl = groupImpl;

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
    pub fn groupImpl(self: KDesktopFile, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_GroupImpl(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### DEPRECATED: Use `superGroupImpl` instead
    ///
    pub const SuperGroupImpl = superGroupImpl;

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
    pub fn superGroupImpl(self: KDesktopFile, groupName: []const u8) KConfigGroup {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return .{ .ptr = qtc.KDesktopFile_SuperGroupImpl(@ptrCast(self.ptr), groupName_str) };
    }

    /// ### DEPRECATED: Use `onGroupImpl` instead
    ///
    pub const OnGroupImpl = onGroupImpl;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGroupImpl(self: KDesktopFile, callback: *const fn (KDesktopFile, [*:0]const u8) callconv(.c) KConfigGroup) void {
        qtc.KDesktopFile_OnGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `deleteGroupImpl` instead
    ///
    pub const DeleteGroupImpl = deleteGroupImpl;

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
    pub fn deleteGroupImpl(self: KDesktopFile, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KDesktopFile_DeleteGroupImpl(@ptrCast(self.ptr), groupName_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `superDeleteGroupImpl` instead
    ///
    pub const SuperDeleteGroupImpl = superDeleteGroupImpl;

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
    pub fn superDeleteGroupImpl(self: KDesktopFile, groupName: []const u8, flags: i32) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KDesktopFile_SuperDeleteGroupImpl(@ptrCast(self.ptr), groupName_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `onDeleteGroupImpl` instead
    ///
    pub const OnDeleteGroupImpl = onDeleteGroupImpl;

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
    pub fn onDeleteGroupImpl(self: KDesktopFile, callback: *const fn (KDesktopFile, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KDesktopFile_OnDeleteGroupImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isGroupImmutableImpl` instead
    ///
    pub const IsGroupImmutableImpl = isGroupImmutableImpl;

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
    pub fn isGroupImmutableImpl(self: KDesktopFile, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_IsGroupImmutableImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `superIsGroupImmutableImpl` instead
    ///
    pub const SuperIsGroupImmutableImpl = superIsGroupImmutableImpl;

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
    pub fn superIsGroupImmutableImpl(self: KDesktopFile, groupName: []const u8) bool {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        return qtc.KDesktopFile_SuperIsGroupImmutableImpl(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `onIsGroupImmutableImpl` instead
    ///
    pub const OnIsGroupImmutableImpl = onIsGroupImmutableImpl;

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
    pub fn onIsGroupImmutableImpl(self: KDesktopFile, callback: *const fn (KDesktopFile, [*:0]const u8) callconv(.c) bool) void {
        qtc.KDesktopFile_OnIsGroupImmutableImpl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

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
    pub fn virtualHook(self: KDesktopFile, id: i32, data: ?*anyopaque) void {
        qtc.KDesktopFile_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

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
    pub fn superVirtualHook(self: KDesktopFile, id: i32, data: ?*anyopaque) void {
        qtc.KDesktopFile_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

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
    pub fn onVirtualHook(self: KDesktopFile, callback: *const fn (KDesktopFile, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KDesktopFile_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfile.html#dtor.KDesktopFile)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KDesktopFile `
    ///
    pub fn delete(self: KDesktopFile) void {
        qtc.KDesktopFile_Delete(@ptrCast(self.ptr));
    }
};
