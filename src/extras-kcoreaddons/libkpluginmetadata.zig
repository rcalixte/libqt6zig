const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KAboutPerson = @import("libqt6").KAboutPerson;
const QJsonObject = @import("libqt6").QJsonObject;
const QPluginLoader = @import("libqt6").QPluginLoader;
const kpluginmetadata_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html)
pub const KPluginMetaData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KPluginMetaData,

    pub const _is_KPluginMetaData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KPluginMetaData object in C++ memory
    ///
    pub fn new() KPluginMetaData {
        return .{ .ptr = qtc.KPluginMetaData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KPluginMetaData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` loader: QPluginLoader `
    ///
    pub fn new2(loader: anytype) KPluginMetaData {
        comptime _ = @TypeOf(loader)._is_QPluginLoader;
        return .{ .ptr = qtc.KPluginMetaData_new2(@ptrCast(loader.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KPluginMetaData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pluginFile: []const u8 `
    ///
    pub fn new3(pluginFile: []const u8) KPluginMetaData {
        const pluginFile_str = qtc.libqt_string{
            .len = pluginFile.len,
            .data = pluginFile.ptr,
        };
        return .{ .ptr = qtc.KPluginMetaData_new3(pluginFile_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KPluginMetaData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` metaData: QJsonObject `
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn new4(metaData: anytype, _fileName: []const u8) KPluginMetaData {
        comptime _ = @TypeOf(metaData)._is_QJsonObject;
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        return .{ .ptr = qtc.KPluginMetaData_new4(@ptrCast(metaData.ptr), fileName_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KPluginMetaData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KPluginMetaData `
    ///
    pub fn new5(param1: anytype) KPluginMetaData {
        comptime _ = @TypeOf(param1)._is_KPluginMetaData;
        return .{ .ptr = qtc.KPluginMetaData_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KPluginMetaData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` loader: QPluginLoader `
    ///
    /// ` options: flag of kpluginmetadata_enums.KPluginMetaDataOption `
    ///
    pub fn new6(loader: anytype, options: i32) KPluginMetaData {
        comptime _ = @TypeOf(loader)._is_QPluginLoader;
        return .{ .ptr = qtc.KPluginMetaData_new6(@ptrCast(loader.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new KPluginMetaData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pluginFile: []const u8 `
    ///
    /// ` options: flag of kpluginmetadata_enums.KPluginMetaDataOption `
    ///
    pub fn new7(pluginFile: []const u8, options: i32) KPluginMetaData {
        const pluginFile_str = qtc.libqt_string{
            .len = pluginFile.len,
            .data = pluginFile.ptr,
        };
        return .{ .ptr = qtc.KPluginMetaData_new7(pluginFile_str, @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` param1: KPluginMetaData `
    ///
    pub fn operatorAssign(self: KPluginMetaData, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KPluginMetaData;
        qtc.KPluginMetaData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `fromJsonFile` instead
    ///
    pub const FromJsonFile = fromJsonFile;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#fromJsonFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonFile: []const u8 `
    ///
    pub fn fromJsonFile(jsonFile: []const u8) KPluginMetaData {
        const jsonFile_str = qtc.libqt_string{
            .len = jsonFile.len,
            .data = jsonFile.ptr,
        };
        return .{ .ptr = qtc.KPluginMetaData_FromJsonFile(jsonFile_str) };
    }

    /// ### DEPRECATED: Use `findPluginById` instead
    ///
    pub const FindPluginById = findPluginById;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#findPluginById)
    ///
    /// ## Parameter(s):
    ///
    /// ` directory: []const u8 `
    ///
    /// ` _pluginId: []const u8 `
    ///
    pub fn findPluginById(directory: []const u8, _pluginId: []const u8) KPluginMetaData {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const pluginId_str = qtc.libqt_string{
            .len = _pluginId.len,
            .data = _pluginId.ptr,
        };
        return .{ .ptr = qtc.KPluginMetaData_FindPluginById(directory_str, pluginId_str) };
    }

    /// ### DEPRECATED: Use `findPlugins` instead
    ///
    pub const FindPlugins = findPlugins;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#findPlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` directory: []const u8 `
    ///
    pub fn findPlugins(allocator: std.mem.Allocator, directory: []const u8) []KPluginMetaData {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_FindPlugins(directory_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KPluginMetaData, _arr.len) catch @panic("KPluginMetaData.findPlugins: Memory allocation failed");
        const _data_val: [*]QtC.KPluginMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    pub fn isValid(self: KPluginMetaData) bool {
        return qtc.KPluginMetaData_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isHidden` instead
    ///
    pub const IsHidden = isHidden;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    pub fn isHidden(self: KPluginMetaData) bool {
        return qtc.KPluginMetaData_IsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `rawData` instead
    ///
    pub const RawData = rawData;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#rawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    pub fn rawData(self: KPluginMetaData) QJsonObject {
        return .{ .ptr = qtc.KPluginMetaData_RawData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `authors` instead
    ///
    pub const Authors = authors;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#authors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn authors(self: KPluginMetaData, allocator: std.mem.Allocator) []KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_Authors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutPerson, _arr.len) catch @panic("KPluginMetaData.authors: Memory allocation failed");
        const _data_val: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `translators` instead
    ///
    pub const Translators = translators;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#translators)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn translators(self: KPluginMetaData, allocator: std.mem.Allocator) []KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_Translators(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutPerson, _arr.len) catch @panic("KPluginMetaData.translators: Memory allocation failed");
        const _data_val: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `otherContributors` instead
    ///
    pub const OtherContributors = otherContributors;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#otherContributors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn otherContributors(self: KPluginMetaData, allocator: std.mem.Allocator) []KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_OtherContributors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutPerson, _arr.len) catch @panic("KPluginMetaData.otherContributors: Memory allocation failed");
        const _data_val: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn category(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `license` instead
    ///
    pub const License = license;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#license)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn license(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_License(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.license: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `licenseText` instead
    ///
    pub const LicenseText = licenseText;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#licenseText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn licenseText(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_LicenseText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.licenseText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `copyrightText` instead
    ///
    pub const CopyrightText = copyrightText;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#copyrightText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn copyrightText(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_CopyrightText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.copyrightText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pluginId` instead
    ///
    pub const PluginId = pluginId;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#pluginId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pluginId(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_PluginId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.pluginId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn version(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `website` instead
    ///
    pub const Website = website;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#website)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn website(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_Website(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.website: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `bugReportUrl` instead
    ///
    pub const BugReportUrl = bugReportUrl;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#bugReportUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn bugReportUrl(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_BugReportUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.bugReportUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: KPluginMetaData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KPluginMetaData.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KPluginMetaData.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `supportsMimeType` instead
    ///
    pub const SupportsMimeType = supportsMimeType;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#supportsMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn supportsMimeType(self: KPluginMetaData, mimeType: []const u8) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return qtc.KPluginMetaData_SupportsMimeType(@ptrCast(self.ptr), mimeType_str);
    }

    /// ### DEPRECATED: Use `formFactors` instead
    ///
    pub const FormFactors = formFactors;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#formFactors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn formFactors(self: KPluginMetaData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_FormFactors(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KPluginMetaData.formFactors: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KPluginMetaData.formFactors: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isEnabledByDefault` instead
    ///
    pub const IsEnabledByDefault = isEnabledByDefault;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#isEnabledByDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    pub fn isEnabledByDefault(self: KPluginMetaData) bool {
        return qtc.KPluginMetaData_IsEnabledByDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn value(self: KPluginMetaData, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KPluginMetaData_Value(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value2` instead
    ///
    pub const Value2 = value2;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn value2(self: KPluginMetaData, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KPluginMetaData_Value2(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.value2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value3` instead
    ///
    pub const Value3 = value3;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn value3(self: KPluginMetaData, key: []const u8, defaultValue: bool) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KPluginMetaData_Value3(@ptrCast(self.ptr), key_str, defaultValue);
    }

    /// ### DEPRECATED: Use `value4` instead
    ///
    pub const Value4 = value4;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn value4(self: KPluginMetaData, key: []const u8, defaultValue: bool) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KPluginMetaData_Value4(@ptrCast(self.ptr), key_str, defaultValue);
    }

    /// ### DEPRECATED: Use `value5` instead
    ///
    pub const Value5 = value5;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn value5(self: KPluginMetaData, key: []const u8, defaultValue: i32) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KPluginMetaData_Value5(@ptrCast(self.ptr), key_str, @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `value6` instead
    ///
    pub const Value6 = value6;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn value6(self: KPluginMetaData, key: []const u8, defaultValue: i32) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KPluginMetaData_Value6(@ptrCast(self.ptr), key_str, @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `value7` instead
    ///
    pub const Value7 = value7;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    pub fn value7(self: KPluginMetaData, allocator: std.mem.Allocator, key: []const u8, defaultValue: []const []const u8) []const []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("KPluginMetaData.value7: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |str_item, i|
            defaultValue_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_Value7(@ptrCast(self.ptr), key_str, defaultValue_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KPluginMetaData.value7: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KPluginMetaData.value7: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `value8` instead
    ///
    pub const Value8 = value8;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    pub fn value8(self: KPluginMetaData, allocator: std.mem.Allocator, key: []const u8, defaultValue: []const []const u8) []const []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("KPluginMetaData.value8: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |str_item, i|
            defaultValue_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_Value8(@ptrCast(self.ptr), key_str, defaultValue_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KPluginMetaData.value8: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KPluginMetaData.value8: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` other: KPluginMetaData `
    ///
    pub fn operatorEqual(self: KPluginMetaData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KPluginMetaData;
        return qtc.KPluginMetaData_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` other: KPluginMetaData `
    ///
    pub fn operatorNotEqual(self: KPluginMetaData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KPluginMetaData;
        return qtc.KPluginMetaData_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isStaticPlugin` instead
    ///
    pub const IsStaticPlugin = isStaticPlugin;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#isStaticPlugin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    pub fn isStaticPlugin(self: KPluginMetaData) bool {
        return qtc.KPluginMetaData_IsStaticPlugin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `findPluginById3` instead
    ///
    pub const FindPluginById3 = findPluginById3;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#findPluginById)
    ///
    /// ## Parameter(s):
    ///
    /// ` directory: []const u8 `
    ///
    /// ` _pluginId: []const u8 `
    ///
    /// ` options: flag of kpluginmetadata_enums.KPluginMetaDataOption `
    ///
    pub fn findPluginById3(directory: []const u8, _pluginId: []const u8, options: i32) KPluginMetaData {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const pluginId_str = qtc.libqt_string{
            .len = _pluginId.len,
            .data = _pluginId.ptr,
        };
        return .{ .ptr = qtc.KPluginMetaData_FindPluginById3(directory_str, pluginId_str, @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `findPlugins2` instead
    ///
    pub const FindPlugins2 = findPlugins2;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#findPlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` directory: []const u8 `
    ///
    /// ` filter: *const fn (funcparam1: KPluginMetaData) callconv(.c) bool `
    ///
    pub fn findPlugins2(allocator: std.mem.Allocator, directory: []const u8, filter: *const fn (KPluginMetaData) callconv(.c) bool) []KPluginMetaData {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_FindPlugins2(directory_str, @bitCast(@intFromPtr(filter)));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KPluginMetaData, _arr.len) catch @panic("KPluginMetaData.findPlugins2: Memory allocation failed");
        const _data_val: [*]QtC.KPluginMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `findPlugins3` instead
    ///
    pub const FindPlugins3 = findPlugins3;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#findPlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` directory: []const u8 `
    ///
    /// ` filter: *const fn (funcparam1: KPluginMetaData) callconv(.c) bool `
    ///
    /// ` options: flag of kpluginmetadata_enums.KPluginMetaDataOption `
    ///
    pub fn findPlugins3(allocator: std.mem.Allocator, directory: []const u8, filter: *const fn (KPluginMetaData) callconv(.c) bool, options: i32) []KPluginMetaData {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_FindPlugins3(directory_str, @bitCast(@intFromPtr(filter)), @bitCast(options));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KPluginMetaData, _arr.len) catch @panic("KPluginMetaData.findPlugins3: Memory allocation failed");
        const _data_val: [*]QtC.KPluginMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `value22` instead
    ///
    pub const Value22 = value22;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn value22(self: KPluginMetaData, allocator: std.mem.Allocator, key: []const u8, defaultValue: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.KPluginMetaData_Value22(@ptrCast(self.ptr), key_str, defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.value22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value23` instead
    ///
    pub const Value23 = value23;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn value23(self: KPluginMetaData, allocator: std.mem.Allocator, key: []const u8, defaultValue: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.KPluginMetaData_Value23(@ptrCast(self.ptr), key_str, defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPluginMetaData.value23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#dtor.KPluginMetaData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KPluginMetaData `
    ///
    pub fn delete(self: KPluginMetaData) void {
        qtc.KPluginMetaData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#public-types)
pub const enums = struct {
    pub const KPluginMetaDataOption = enum {
        pub const AllowEmptyMetaData: i32 = 1;
        pub const CacheMetaData: i32 = 2;
    };
};
