const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api-staging.kde.org/kpluginmetadata.html
pub const kpluginmetadata = struct {
    /// New constructs a new KPluginMetaData object.
    ///
    ///
    pub fn New() QtC.KPluginMetaData {
        return qtc.KPluginMetaData_new();
    }

    /// New2 constructs a new KPluginMetaData object.
    ///
    /// ``` loader: QtC.QPluginLoader ```
    pub fn New2(loader: ?*anyopaque) QtC.KPluginMetaData {
        return qtc.KPluginMetaData_new2(@ptrCast(loader));
    }

    /// New3 constructs a new KPluginMetaData object.
    ///
    /// ``` pluginFile: []const u8 ```
    pub fn New3(pluginFile: []const u8) QtC.KPluginMetaData {
        const pluginFile_str = qtc.libqt_string{
            .len = pluginFile.len,
            .data = pluginFile.ptr,
        };

        return qtc.KPluginMetaData_new3(pluginFile_str);
    }

    /// New4 constructs a new KPluginMetaData object.
    ///
    /// ``` metaData: QtC.QJsonObject, fileName: []const u8 ```
    pub fn New4(metaData: ?*anyopaque, fileName: []const u8) QtC.KPluginMetaData {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.KPluginMetaData_new4(@ptrCast(metaData), fileName_str);
    }

    /// New5 constructs a new KPluginMetaData object.
    ///
    /// ``` param1: QtC.KPluginMetaData ```
    pub fn New5(param1: ?*anyopaque) QtC.KPluginMetaData {
        return qtc.KPluginMetaData_new5(@ptrCast(param1));
    }

    /// New6 constructs a new KPluginMetaData object.
    ///
    /// ``` loader: QtC.QPluginLoader, options: flag of kpluginmetadata_enums.KPluginMetaDataOption ```
    pub fn New6(loader: ?*anyopaque, options: i64) QtC.KPluginMetaData {
        return qtc.KPluginMetaData_new6(@ptrCast(loader), @intCast(options));
    }

    /// New7 constructs a new KPluginMetaData object.
    ///
    /// ``` pluginFile: []const u8, options: flag of kpluginmetadata_enums.KPluginMetaDataOption ```
    pub fn New7(pluginFile: []const u8, options: i64) QtC.KPluginMetaData {
        const pluginFile_str = qtc.libqt_string{
            .len = pluginFile.len,
            .data = pluginFile.ptr,
        };

        return qtc.KPluginMetaData_new7(pluginFile_str, @intCast(options));
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#operator-eq)
    ///
    /// ``` self: QtC.KPluginMetaData, param1: QtC.KPluginMetaData ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KPluginMetaData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#fromJsonFile)
    ///
    /// ``` jsonFile: []const u8 ```
    pub fn FromJsonFile(jsonFile: []const u8) QtC.KPluginMetaData {
        const jsonFile_str = qtc.libqt_string{
            .len = jsonFile.len,
            .data = jsonFile.ptr,
        };
        return qtc.KPluginMetaData_FromJsonFile(jsonFile_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#findPluginById)
    ///
    /// ``` directory: []const u8, pluginId: []const u8 ```
    pub fn FindPluginById(directory: []const u8, pluginId: []const u8) QtC.KPluginMetaData {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const pluginId_str = qtc.libqt_string{
            .len = pluginId.len,
            .data = pluginId.ptr,
        };
        return qtc.KPluginMetaData_FindPluginById(directory_str, pluginId_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#isValid)
    ///
    /// ``` self: QtC.KPluginMetaData ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KPluginMetaData_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#isHidden)
    ///
    /// ``` self: QtC.KPluginMetaData ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.KPluginMetaData_IsHidden(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#fileName)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPluginMetaData_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#rawData)
    ///
    /// ``` self: QtC.KPluginMetaData ```
    pub fn RawData(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.KPluginMetaData_RawData(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#name)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPluginMetaData_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#description)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPluginMetaData_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#authors)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn Authors(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_Authors(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KAboutPerson, _arr.len) catch @panic("kpluginmetadata.Authors: Memory allocation failed");
        const _data: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#translators)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn Translators(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_Translators(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KAboutPerson, _arr.len) catch @panic("kpluginmetadata.Translators: Memory allocation failed");
        const _data: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#otherContributors)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn OtherContributors(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_OtherContributors(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KAboutPerson, _arr.len) catch @panic("kpluginmetadata.OtherContributors: Memory allocation failed");
        const _data: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#category)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn Category(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPluginMetaData_Category(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#iconName)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPluginMetaData_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#license)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn License(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPluginMetaData_License(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.License: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#licenseText)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn LicenseText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPluginMetaData_LicenseText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.LicenseText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#copyrightText)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn CopyrightText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPluginMetaData_CopyrightText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.CopyrightText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#pluginId)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn PluginId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPluginMetaData_PluginId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.PluginId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#version)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn Version(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPluginMetaData_Version(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#website)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn Website(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPluginMetaData_Website(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Website: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#bugReportUrl)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn BugReportUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPluginMetaData_BugReportUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.BugReportUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#mimeTypes)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_MimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#supportsMimeType)
    ///
    /// ``` self: QtC.KPluginMetaData, mimeType: []const u8 ```
    pub fn SupportsMimeType(self: ?*anyopaque, mimeType: []const u8) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return qtc.KPluginMetaData_SupportsMimeType(@ptrCast(self), mimeType_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#formFactors)
    ///
    /// ``` self: QtC.KPluginMetaData, allocator: std.mem.Allocator ```
    pub fn FormFactors(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_FormFactors(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#isEnabledByDefault)
    ///
    /// ``` self: QtC.KPluginMetaData ```
    pub fn IsEnabledByDefault(self: ?*anyopaque) bool {
        return qtc.KPluginMetaData_IsEnabledByDefault(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#value)
    ///
    /// ``` self: QtC.KPluginMetaData, key: []const u8, allocator: std.mem.Allocator ```
    pub fn Value2(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.KPluginMetaData_Value2(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Value2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#value)
    ///
    /// ``` self: QtC.KPluginMetaData, key: []const u8, defaultValue: bool ```
    pub fn Value4(self: ?*anyopaque, key: []const u8, defaultValue: bool) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KPluginMetaData_Value4(@ptrCast(self), key_str, defaultValue);
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#value)
    ///
    /// ``` self: QtC.KPluginMetaData, key: []const u8, defaultValue: i32 ```
    pub fn Value6(self: ?*anyopaque, key: []const u8, defaultValue: i32) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KPluginMetaData_Value6(@ptrCast(self), key_str, @intCast(defaultValue));
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#value)
    ///
    /// ``` self: QtC.KPluginMetaData, key: []const u8, defaultValue: [][]const u8, allocator: std.mem.Allocator ```
    pub fn Value8(self: ?*anyopaque, key: []const u8, defaultValue: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("kpluginmetadata.Value8: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |item, i| {
            defaultValue_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KPluginMetaData_Value8(@ptrCast(self), key_str, defaultValue_list);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KPluginMetaData, other: QtC.KPluginMetaData ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KPluginMetaData_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#operator-not-eq)
    ///
    /// ``` self: QtC.KPluginMetaData, other: QtC.KPluginMetaData ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KPluginMetaData_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#isStaticPlugin)
    ///
    /// ``` self: QtC.KPluginMetaData ```
    pub fn IsStaticPlugin(self: ?*anyopaque) bool {
        return qtc.KPluginMetaData_IsStaticPlugin(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#findPluginById)
    ///
    /// ``` directory: []const u8, pluginId: []const u8, options: flag of kpluginmetadata_enums.KPluginMetaDataOption ```
    pub fn FindPluginById3(directory: []const u8, pluginId: []const u8, options: i64) QtC.KPluginMetaData {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const pluginId_str = qtc.libqt_string{
            .len = pluginId.len,
            .data = pluginId.ptr,
        };
        return qtc.KPluginMetaData_FindPluginById3(directory_str, pluginId_str, @intCast(options));
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#value)
    ///
    /// ``` self: QtC.KPluginMetaData, key: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator ```
    pub fn Value23(self: ?*anyopaque, key: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const _str = qtc.KPluginMetaData_Value23(@ptrCast(self), key_str, defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluginmetadata.Value23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kpluginmetadata.html#dtor.KPluginMetaData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KPluginMetaData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KPluginMetaData_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kpluginmetadata.html#types
pub const enums = struct {
    pub const KPluginMetaDataOption = enum {
        pub const AllowEmptyMetaData: i32 = 1;
        pub const CacheMetaData: i32 = 2;
    };
};
