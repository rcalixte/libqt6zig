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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Project object in C++ memory
    ///
    pub fn new() Attica__Project {
        return .{ .ptr = qtc.Attica__Project_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Project object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Project `
    ///
    pub fn new2(other: anytype) Attica__Project {
        comptime _ = @TypeOf(other)._is_Attica__Project;
        return .{ .ptr = qtc.Attica__Project_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` other: Attica__Project `
    ///
    pub fn operatorAssign(self: Attica__Project, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Project;
        qtc.Attica__Project_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Project, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Project_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Project.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__Project, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__Project_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Project.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` _version: []const u8 `
    ///
    pub fn setVersion(self: Attica__Project, _version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        qtc.Attica__Project_SetVersion(@ptrCast(self.ptr), version_str);
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn version(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Project.version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` _url: []const u8 `
    ///
    pub fn setUrl(self: Attica__Project, _url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        qtc.Attica__Project_SetUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn url(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Project.url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLicense` instead
    ///
    pub const SetLicense = setLicense;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setLicense)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` _license: []const u8 `
    ///
    pub fn setLicense(self: Attica__Project, _license: []const u8) void {
        const license_str = qtc.libqt_string{
            .len = _license.len,
            .data = _license.ptr,
        };
        qtc.Attica__Project_SetLicense(@ptrCast(self.ptr), license_str);
    }

    /// ### DEPRECATED: Use `license` instead
    ///
    pub const License = license;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#license)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn license(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_License(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Project.license: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSummary` instead
    ///
    pub const SetSummary = setSummary;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setSummary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` _summary: []const u8 `
    ///
    pub fn setSummary(self: Attica__Project, _summary: []const u8) void {
        const summary_str = qtc.libqt_string{
            .len = _summary.len,
            .data = _summary.ptr,
        };
        qtc.Attica__Project_SetSummary(@ptrCast(self.ptr), summary_str);
    }

    /// ### DEPRECATED: Use `summary` instead
    ///
    pub const Summary = summary;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#summary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn summary(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Summary(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Project.summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: Attica__Project, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.Attica__Project_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Project.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDevelopers` instead
    ///
    pub const SetDevelopers = setDevelopers;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setDevelopers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _developers: []const []const u8 `
    ///
    pub fn setDevelopers(self: Attica__Project, allocator: std.mem.Allocator, _developers: []const []const u8) void {
        const developers_arr = allocator.alloc(qtc.libqt_string, _developers.len) catch @panic("Attica__Project.setDevelopers: Memory allocation failed");
        defer allocator.free(developers_arr);
        for (_developers, 0.._developers.len) |str_item, i|
            developers_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const developers_list = qtc.libqt_list{
            .len = _developers.len,
            .data = developers_arr.ptr,
        };
        qtc.Attica__Project_SetDevelopers(@ptrCast(self.ptr), developers_list);
    }

    /// ### DEPRECATED: Use `developers` instead
    ///
    pub const Developers = developers;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#developers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn developers(self: Attica__Project, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Project_Developers(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Attica__Project.developers: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Attica__Project.developers: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setRequirements` instead
    ///
    pub const SetRequirements = setRequirements;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setRequirements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` _requirements: []const u8 `
    ///
    pub fn setRequirements(self: Attica__Project, _requirements: []const u8) void {
        const requirements_str = qtc.libqt_string{
            .len = _requirements.len,
            .data = _requirements.ptr,
        };
        qtc.Attica__Project_SetRequirements(@ptrCast(self.ptr), requirements_str);
    }

    /// ### DEPRECATED: Use `requirements` instead
    ///
    pub const Requirements = requirements;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#requirements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn requirements(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_Requirements(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Project.requirements: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSpecFile` instead
    ///
    pub const SetSpecFile = setSpecFile;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#setSpecFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` _specFile: []const u8 `
    ///
    pub fn setSpecFile(self: Attica__Project, _specFile: []const u8) void {
        const specFile_str = qtc.libqt_string{
            .len = _specFile.len,
            .data = _specFile.ptr,
        };
        qtc.Attica__Project_SetSpecFile(@ptrCast(self.ptr), specFile_str);
    }

    /// ### DEPRECATED: Use `specFile` instead
    ///
    pub const SpecFile = specFile;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#specFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn specFile(self: Attica__Project, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Project_SpecFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Project.specFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addExtendedAttribute` instead
    ///
    pub const AddExtendedAttribute = addExtendedAttribute;

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
    pub fn addExtendedAttribute(self: Attica__Project, key: []const u8, value: []const u8) void {
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

    /// ### DEPRECATED: Use `extendedAttribute` instead
    ///
    pub const ExtendedAttribute = extendedAttribute;

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
    pub fn extendedAttribute(self: Attica__Project, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.Attica__Project_ExtendedAttribute(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Project.extendedAttribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `extendedAttributes` instead
    ///
    pub const ExtendedAttributes = extendedAttributes;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extendedAttributes(self: Attica__Project, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__Project_ExtendedAttributes(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("Attica__Project.extendedAttributes: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("Attica__Project.extendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("Attica__Project.extendedAttributes: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-project.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Project `
    ///
    pub fn isValid(self: Attica__Project) bool {
        return qtc.Attica__Project_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Project `
    ///
    pub fn delete(self: Attica__Project) void {
        qtc.Attica__Project_Delete(@ptrCast(self.ptr));
    }
};
