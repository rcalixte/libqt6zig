const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://api.kde.org/attica-project.html
pub const attica__project = struct {
    /// New constructs a new Attica::Project object.
    ///
    ///
    pub fn New() QtC.Attica__Project {
        return qtc.Attica__Project_new();
    }

    /// New2 constructs a new Attica::Project object.
    ///
    /// ``` other: QtC.Attica__Project ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Project {
        return qtc.Attica__Project_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Project, other: QtC.Attica__Project ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Project_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#setId)
    ///
    /// ``` self: QtC.Attica__Project, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Project_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#id)
    ///
    /// ``` self: QtC.Attica__Project, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Project_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::project.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#setName)
    ///
    /// ``` self: QtC.Attica__Project, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Project_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#name)
    ///
    /// ``` self: QtC.Attica__Project, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Project_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::project.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#setVersion)
    ///
    /// ``` self: QtC.Attica__Project, version: []const u8 ```
    pub fn SetVersion(self: ?*anyopaque, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.Attica__Project_SetVersion(@ptrCast(self), version_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#version)
    ///
    /// ``` self: QtC.Attica__Project, allocator: std.mem.Allocator ```
    pub fn Version(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Project_Version(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::project.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#setUrl)
    ///
    /// ``` self: QtC.Attica__Project, url: []const u8 ```
    pub fn SetUrl(self: ?*anyopaque, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.Attica__Project_SetUrl(@ptrCast(self), url_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#url)
    ///
    /// ``` self: QtC.Attica__Project, allocator: std.mem.Allocator ```
    pub fn Url(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Project_Url(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::project.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#setLicense)
    ///
    /// ``` self: QtC.Attica__Project, license: []const u8 ```
    pub fn SetLicense(self: ?*anyopaque, license: []const u8) void {
        const license_str = qtc.libqt_string{
            .len = license.len,
            .data = license.ptr,
        };
        qtc.Attica__Project_SetLicense(@ptrCast(self), license_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#license)
    ///
    /// ``` self: QtC.Attica__Project, allocator: std.mem.Allocator ```
    pub fn License(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Project_License(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::project.License: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#setSummary)
    ///
    /// ``` self: QtC.Attica__Project, summary: []const u8 ```
    pub fn SetSummary(self: ?*anyopaque, summary: []const u8) void {
        const summary_str = qtc.libqt_string{
            .len = summary.len,
            .data = summary.ptr,
        };
        qtc.Attica__Project_SetSummary(@ptrCast(self), summary_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#summary)
    ///
    /// ``` self: QtC.Attica__Project, allocator: std.mem.Allocator ```
    pub fn Summary(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Project_Summary(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::project.Summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#setDescription)
    ///
    /// ``` self: QtC.Attica__Project, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Attica__Project_SetDescription(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#description)
    ///
    /// ``` self: QtC.Attica__Project, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Project_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::project.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#setDevelopers)
    ///
    /// ``` self: QtC.Attica__Project, developers: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetDevelopers(self: ?*anyopaque, developers: [][]const u8, allocator: std.mem.Allocator) void {
        var developers_arr = allocator.alloc(qtc.libqt_string, developers.len) catch @panic("attica::project.SetDevelopers: Memory allocation failed");
        defer allocator.free(developers_arr);
        for (developers, 0..developers.len) |item, i| {
            developers_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const developers_list = qtc.libqt_list{
            .len = developers.len,
            .data = developers_arr.ptr,
        };
        qtc.Attica__Project_SetDevelopers(@ptrCast(self), developers_list);
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#developers)
    ///
    /// ``` self: QtC.Attica__Project, allocator: std.mem.Allocator ```
    pub fn Developers(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Project_Developers(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("attica::project.Developers: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica::project.Developers: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#setRequirements)
    ///
    /// ``` self: QtC.Attica__Project, requirements: []const u8 ```
    pub fn SetRequirements(self: ?*anyopaque, requirements: []const u8) void {
        const requirements_str = qtc.libqt_string{
            .len = requirements.len,
            .data = requirements.ptr,
        };
        qtc.Attica__Project_SetRequirements(@ptrCast(self), requirements_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#requirements)
    ///
    /// ``` self: QtC.Attica__Project, allocator: std.mem.Allocator ```
    pub fn Requirements(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Project_Requirements(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::project.Requirements: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#setSpecFile)
    ///
    /// ``` self: QtC.Attica__Project, specFile: []const u8 ```
    pub fn SetSpecFile(self: ?*anyopaque, specFile: []const u8) void {
        const specFile_str = qtc.libqt_string{
            .len = specFile.len,
            .data = specFile.ptr,
        };
        qtc.Attica__Project_SetSpecFile(@ptrCast(self), specFile_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#specFile)
    ///
    /// ``` self: QtC.Attica__Project, allocator: std.mem.Allocator ```
    pub fn SpecFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Project_SpecFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::project.SpecFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#addExtendedAttribute)
    ///
    /// ``` self: QtC.Attica__Project, key: []const u8, value: []const u8 ```
    pub fn AddExtendedAttribute(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__Project_AddExtendedAttribute(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#extendedAttribute)
    ///
    /// ``` self: QtC.Attica__Project, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ExtendedAttribute(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.Attica__Project_ExtendedAttribute(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::project.ExtendedAttribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#extendedAttributes)
    ///
    /// ``` self: QtC.Attica__Project, allocator: std.mem.Allocator ```
    pub fn ExtendedAttributes(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__Project_ExtendedAttributes(@ptrCast(self));
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
            _ret.put(allocator, _entry_slice, _value) catch @panic("attica::project.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-project.html#isValid)
    ///
    /// ``` self: QtC.Attica__Project ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Project_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Project ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Project_Delete(@ptrCast(self));
    }
};
