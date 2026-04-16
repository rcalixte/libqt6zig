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

    /// New constructs a new KPluginMetaData object.
    ///
    pub fn New() KPluginMetaData {
        return .{ .ptr = qtc.KPluginMetaData_new() };
    }

    /// New2 constructs a new KPluginMetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` loader: QPluginLoader `
    ///
    pub fn New2(loader: anytype) KPluginMetaData {
        comptime _ = @TypeOf(loader)._is_QPluginLoader;
        return .{ .ptr = qtc.KPluginMetaData_new2(@ptrCast(loader.ptr)) };
    }

    /// New3 constructs a new KPluginMetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pluginFile: []const u8 `
    ///
    pub fn New3(pluginFile: []const u8) KPluginMetaData {
        const pluginFile_str = qtc.libqt_string{
            .len = pluginFile.len,
            .data = pluginFile.ptr,
        };
        return .{ .ptr = qtc.KPluginMetaData_new3(pluginFile_str) };
    }

    /// New4 constructs a new KPluginMetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` metaData: QJsonObject `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New4(metaData: anytype, fileName: []const u8) KPluginMetaData {
        comptime _ = @TypeOf(metaData)._is_QJsonObject;
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.KPluginMetaData_new4(@ptrCast(metaData.ptr), fileName_str) };
    }

    /// New5 constructs a new KPluginMetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KPluginMetaData `
    ///
    pub fn New5(param1: anytype) KPluginMetaData {
        comptime _ = @TypeOf(param1)._is_KPluginMetaData;
        return .{ .ptr = qtc.KPluginMetaData_new5(@ptrCast(param1.ptr)) };
    }

    /// New6 constructs a new KPluginMetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` loader: QPluginLoader `
    ///
    /// ` options: flag of kpluginmetadata_enums.KPluginMetaDataOption `
    ///
    pub fn New6(loader: anytype, options: i32) KPluginMetaData {
        comptime _ = @TypeOf(loader)._is_QPluginLoader;
        return .{ .ptr = qtc.KPluginMetaData_new6(@ptrCast(loader.ptr), @bitCast(options)) };
    }

    /// New7 constructs a new KPluginMetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pluginFile: []const u8 `
    ///
    /// ` options: flag of kpluginmetadata_enums.KPluginMetaDataOption `
    ///
    pub fn New7(pluginFile: []const u8, options: i32) KPluginMetaData {
        const pluginFile_str = qtc.libqt_string{
            .len = pluginFile.len,
            .data = pluginFile.ptr,
        };
        return .{ .ptr = qtc.KPluginMetaData_new7(pluginFile_str, @bitCast(options)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` param1: KPluginMetaData `
    ///
    pub fn OperatorAssign(self: KPluginMetaData, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KPluginMetaData;
        qtc.KPluginMetaData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#fromJsonFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonFile: []const u8 `
    ///
    pub fn FromJsonFile(jsonFile: []const u8) KPluginMetaData {
        const jsonFile_str = qtc.libqt_string{
            .len = jsonFile.len,
            .data = jsonFile.ptr,
        };
        return .{ .ptr = qtc.KPluginMetaData_FromJsonFile(jsonFile_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#findPluginById)
    ///
    /// ## Parameter(s):
    ///
    /// ` directory: []const u8 `
    ///
    /// ` pluginId: []const u8 `
    ///
    pub fn FindPluginById(directory: []const u8, pluginId: []const u8) KPluginMetaData {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const pluginId_str = qtc.libqt_string{
            .len = pluginId.len,
            .data = pluginId.ptr,
        };
        return .{ .ptr = qtc.KPluginMetaData_FindPluginById(directory_str, pluginId_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#findPlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` directory: []const u8 `
    ///
    pub fn FindPlugins(allocator: std.mem.Allocator, directory: []const u8) []KPluginMetaData {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_FindPlugins(directory_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KPluginMetaData, _arr.len) catch @panic("kpluginmetadata.FindPlugins: Memory allocation failed");
        const _data: [*]QtC.KPluginMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    pub fn IsValid(self: KPluginMetaData) bool {
        return qtc.KPluginMetaData_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    pub fn IsHidden(self: KPluginMetaData) bool {
        return qtc.KPluginMetaData_IsHidden(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#rawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    pub fn RawData(self: KPluginMetaData) QJsonObject {
        return .{ .ptr = qtc.KPluginMetaData_RawData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#authors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Authors(self: KPluginMetaData, allocator: std.mem.Allocator) []KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_Authors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutPerson, _arr.len) catch @panic("kpluginmetadata.Authors: Memory allocation failed");
        const _data: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#translators)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Translators(self: KPluginMetaData, allocator: std.mem.Allocator) []KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_Translators(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutPerson, _arr.len) catch @panic("kpluginmetadata.Translators: Memory allocation failed");
        const _data: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#otherContributors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OtherContributors(self: KPluginMetaData, allocator: std.mem.Allocator) []KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_OtherContributors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutPerson, _arr.len) catch @panic("kpluginmetadata.OtherContributors: Memory allocation failed");
        const _data: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Category(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#license)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn License(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_License(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.License: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#licenseText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LicenseText(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_LicenseText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.LicenseText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#copyrightText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CopyrightText(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_CopyrightText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.CopyrightText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#pluginId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PluginId(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_PluginId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.PluginId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#website)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Website(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_Website(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Website: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#bugReportUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BugReportUrl(self: KPluginMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPluginMetaData_BugReportUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.BugReportUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(self: KPluginMetaData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kpluginmetadata.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kpluginmetadata.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#supportsMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn SupportsMimeType(self: KPluginMetaData, mimeType: []const u8) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return qtc.KPluginMetaData_SupportsMimeType(@ptrCast(self.ptr), mimeType_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#formFactors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FormFactors(self: KPluginMetaData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_FormFactors(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kpluginmetadata.FormFactors: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kpluginmetadata.FormFactors: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#isEnabledByDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    pub fn IsEnabledByDefault(self: KPluginMetaData) bool {
        return qtc.KPluginMetaData_IsEnabledByDefault(@ptrCast(self.ptr));
    }

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
    pub fn Value2(self: KPluginMetaData, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KPluginMetaData_Value2(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Value2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Value4(self: KPluginMetaData, key: []const u8, defaultValue: bool) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KPluginMetaData_Value4(@ptrCast(self.ptr), key_str, defaultValue);
    }

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
    pub fn Value6(self: KPluginMetaData, key: []const u8, defaultValue: i32) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KPluginMetaData_Value6(@ptrCast(self.ptr), key_str, @bitCast(defaultValue));
    }

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
    pub fn Value8(self: KPluginMetaData, allocator: std.mem.Allocator, key: []const u8, defaultValue: []const []const u8) []const []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("kpluginmetadata.Value8: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |item, i|
            defaultValue_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kpluginmetadata.Value8: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kpluginmetadata.Value8: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` other: KPluginMetaData `
    ///
    pub fn OperatorEqual(self: KPluginMetaData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KPluginMetaData;
        return qtc.KPluginMetaData_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    /// ` other: KPluginMetaData `
    ///
    pub fn OperatorNotEqual(self: KPluginMetaData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KPluginMetaData;
        return qtc.KPluginMetaData_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#isStaticPlugin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluginMetaData `
    ///
    pub fn IsStaticPlugin(self: KPluginMetaData) bool {
        return qtc.KPluginMetaData_IsStaticPlugin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#findPluginById)
    ///
    /// ## Parameter(s):
    ///
    /// ` directory: []const u8 `
    ///
    /// ` pluginId: []const u8 `
    ///
    /// ` options: flag of kpluginmetadata_enums.KPluginMetaDataOption `
    ///
    pub fn FindPluginById3(directory: []const u8, pluginId: []const u8, options: i32) KPluginMetaData {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const pluginId_str = qtc.libqt_string{
            .len = pluginId.len,
            .data = pluginId.ptr,
        };
        return .{ .ptr = qtc.KPluginMetaData_FindPluginById3(directory_str, pluginId_str, @bitCast(options)) };
    }

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
    pub fn FindPlugins2(allocator: std.mem.Allocator, directory: []const u8, filter: *const fn (KPluginMetaData) callconv(.c) bool) []KPluginMetaData {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_FindPlugins2(directory_str, @bitCast(@intFromPtr(filter)));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KPluginMetaData, _arr.len) catch @panic("kpluginmetadata.FindPlugins2: Memory allocation failed");
        const _data: [*]QtC.KPluginMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn FindPlugins3(allocator: std.mem.Allocator, directory: []const u8, filter: *const fn (KPluginMetaData) callconv(.c) bool, options: i32) []KPluginMetaData {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_FindPlugins3(directory_str, @bitCast(@intFromPtr(filter)), @bitCast(options));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KPluginMetaData, _arr.len) catch @panic("kpluginmetadata.FindPlugins3: Memory allocation failed");
        const _data: [*]QtC.KPluginMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn Value23(self: KPluginMetaData, allocator: std.mem.Allocator, key: []const u8, defaultValue: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Value23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#dtor.KPluginMetaData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KPluginMetaData `
    ///
    pub fn Delete(self: KPluginMetaData) void {
        qtc.KPluginMetaData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kpluginmetadata.html#public-types)
pub const enums = struct {
    pub const KPluginMetaDataOption = enum(i32) {
        pub const AllowEmptyMetaData: i32 = 1;
        pub const CacheMetaData: i32 = 2;
    };
};
