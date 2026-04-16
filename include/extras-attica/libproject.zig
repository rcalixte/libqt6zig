const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/attica-project.html)
pub const Attica__Project = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-project.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Project,

    pub const _is_Attica__Project = {};

    /// New constructs a new Attica::Project object.
    ///
    pub fn New() Attica__Project {
        return .{ .ptr = qtc.Attica__Project_new() };
    }

    /// New2 constructs a new Attica::Project object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Project `
    ///
    pub fn New2(other: anytype) Attica__Project {
        comptime _ = @TypeOf(other)._is_Attica__Project;
        return .{ .ptr = qtc.Attica__Project_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` other: Attica__Project `
    ///
    pub fn OperatorAssign(self: Attica__Project, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Project;
        qtc.Attica__Project_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Project, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Project_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__project.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__Project, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Project_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__project.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` version: []const u8 `
    ///
    pub fn SetVersion(self: Attica__Project, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.Attica__Project_SetVersion(@ptrCast(self.ptr), version_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__project.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` url: []const u8 `
    ///
    pub fn SetUrl(self: Attica__Project, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.Attica__Project_SetUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__project.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setLicense)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` license: []const u8 `
    ///
    pub fn SetLicense(self: Attica__Project, license: []const u8) void {
        const license_str = qtc.libqt_string{
            .len = license.len,
            .data = license.ptr,
        };
        qtc.Attica__Project_SetLicense(@ptrCast(self.ptr), license_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#license)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn License(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_License(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__project.License: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setSummary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` summary: []const u8 `
    ///
    pub fn SetSummary(self: Attica__Project, summary: []const u8) void {
        const summary_str = qtc.libqt_string{
            .len = summary.len,
            .data = summary.ptr,
        };
        qtc.Attica__Project_SetSummary(@ptrCast(self.ptr), summary_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#summary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Summary(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Summary(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__project.Summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: Attica__Project, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Attica__Project_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__project.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setDevelopers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` developers: []const []const u8 `
    ///
    pub fn SetDevelopers(self: Attica__Project, allocator: std.mem.Allocator, developers: []const []const u8) void {
        const developers_arr = allocator.alloc(qtc.libqt_string, developers.len) catch @panic("attica__project.SetDevelopers: Memory allocation failed");
        defer allocator.free(developers_arr);
        for (developers, 0..developers.len) |item, i|
            developers_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const developers_list = qtc.libqt_list{
            .len = developers.len,
            .data = developers_arr.ptr,
        };
        qtc.Attica__Project_SetDevelopers(@ptrCast(self.ptr), developers_list);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#developers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Developers(self: Attica__Project, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Project_Developers(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("attica__project.Developers: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica__project.Developers: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setRequirements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` requirements: []const u8 `
    ///
    pub fn SetRequirements(self: Attica__Project, requirements: []const u8) void {
        const requirements_str = qtc.libqt_string{
            .len = requirements.len,
            .data = requirements.ptr,
        };
        qtc.Attica__Project_SetRequirements(@ptrCast(self.ptr), requirements_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#requirements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Requirements(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Requirements(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__project.Requirements: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setSpecFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` specFile: []const u8 `
    ///
    pub fn SetSpecFile(self: Attica__Project, specFile: []const u8) void {
        const specFile_str = qtc.libqt_string{
            .len = specFile.len,
            .data = specFile.ptr,
        };
        qtc.Attica__Project_SetSpecFile(@ptrCast(self.ptr), specFile_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#specFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SpecFile(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_SpecFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__project.SpecFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#addExtendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn AddExtendedAttribute(self: Attica__Project, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__Project_AddExtendedAttribute(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#extendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ExtendedAttribute(self: Attica__Project, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.Attica__Project_ExtendedAttribute(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__project.ExtendedAttribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtendedAttributes(self: Attica__Project, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__Project_ExtendedAttributes(@ptrCast(self.ptr));
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("attica__project.ExtendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("attica__project.ExtendedAttributes: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("attica__project.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    pub fn IsValid(self: Attica__Project) bool {
        return qtc.Attica__Project_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Project `
    ///
    pub fn Delete(self: Attica__Project) void {
        qtc.Attica__Project_Delete(@ptrCast(self.ptr));
    }
};
