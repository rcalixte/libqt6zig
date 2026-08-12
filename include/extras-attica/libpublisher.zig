const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Attica__Target = @import("libqt6").Attica__Target;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-field.html)
pub const Attica__Field = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-field.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Field,

    pub const _is_Attica__Field = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Field object in C++ memory
    ///
    pub fn new() Attica__Field {
        return .{ .ptr = qtc.Attica__Field_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Field object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Attica__Field `
    ///
    pub fn new2(param1: anytype) Attica__Field {
        comptime _ = @TypeOf(param1)._is_Attica__Field;
        return .{ .ptr = qtc.Attica__Field_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/attica-field.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Field `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn type0(self: Attica__Field, allocator: std.mem.Allocator) []const u8 {
        var type_str = qtc.Attica__Field_Type(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&type_str);
        const type_ret = allocator.alloc(u8, type_str.len) catch @panic("Attica__Field.type0: Memory allocation failed");
        @memcpy(type_ret, type_str.data[0..type_str.len]);
        return type_ret;
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://api.kde.org/attica-field.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Field `
    ///
    /// ` _type: []const u8 `
    ///
    pub fn setType(self: Attica__Field, _type: []const u8) void {
        const type_str = qtc.libqt_string{
            .len = _type.len,
            .data = _type.ptr,
        };
        qtc.Attica__Field_SetType(@ptrCast(self.ptr), type_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-field.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Field `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__Field, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.Attica__Field_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("Attica__Field.name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-field.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Field `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__Field, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__Field_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `fieldsize` instead
    ///
    pub const Fieldsize = fieldsize;

    /// ### [Upstream resources](https://api.kde.org/attica-field.html#fieldsize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Field `
    ///
    pub fn fieldsize(self: Attica__Field) i32 {
        return qtc.Attica__Field_Fieldsize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFieldsize` instead
    ///
    pub const SetFieldsize = setFieldsize;

    /// ### [Upstream resources](https://api.kde.org/attica-field.html#fieldsize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Field `
    ///
    /// ` _fieldsize: i32 `
    ///
    pub fn setFieldsize(self: Attica__Field, _fieldsize: i32) void {
        qtc.Attica__Field_SetFieldsize(@ptrCast(self.ptr), @bitCast(_fieldsize));
    }

    /// ### DEPRECATED: Use `required` instead
    ///
    pub const Required = required;

    /// ### [Upstream resources](https://api.kde.org/attica-field.html#required-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Field `
    ///
    pub fn required(self: Attica__Field) bool {
        return qtc.Attica__Field_Required(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRequired` instead
    ///
    pub const SetRequired = setRequired;

    /// ### [Upstream resources](https://api.kde.org/attica-field.html#required-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Field `
    ///
    /// ` _required: bool `
    ///
    pub fn setRequired(self: Attica__Field, _required: bool) void {
        qtc.Attica__Field_SetRequired(@ptrCast(self.ptr), _required);
    }

    /// ### DEPRECATED: Use `options` instead
    ///
    pub const Options = options;

    /// ### [Upstream resources](https://api.kde.org/attica-field.html#options-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Field `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn options(self: Attica__Field, allocator: std.mem.Allocator) []const []const u8 {
        const options_arr: qtc.libqt_list = qtc.Attica__Field_Options(@ptrCast(self.ptr));
        var options_str: [*]qtc.libqt_string = @ptrCast(@alignCast(options_arr.data));
        defer {
            for (0..options_arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&options_str[i]));
            qtc.libqt_free(options_arr.data);
        }
        const options_ret = allocator.alloc([]const u8, options_arr.len) catch @panic("Attica__Field.options: Memory allocation failed");
        for (0..options_arr.len) |i| {
            const options_data_val = options_str[i];
            const options_buf = allocator.alloc(u8, options_data_val.len) catch @panic("Attica__Field.options: Memory allocation failed");
            @memcpy(options_buf, options_data_val.data[0..options_data_val.len]);
            options_ret[i] = options_buf;
        }
        return options_ret;
    }

    /// ### DEPRECATED: Use `setOptions` instead
    ///
    pub const SetOptions = setOptions;

    /// ### [Upstream resources](https://api.kde.org/attica-field.html#options-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Field `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _options: []const []const u8 `
    ///
    pub fn setOptions(self: Attica__Field, allocator: std.mem.Allocator, _options: []const []const u8) void {
        const options_arr = allocator.alloc(qtc.libqt_string, _options.len) catch @panic("Attica__Field.setOptions: Memory allocation failed");
        defer allocator.free(options_arr);
        for (_options, 0.._options.len) |str_item, i|
            options_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const options_list = qtc.libqt_list{
            .len = _options.len,
            .data = options_arr.ptr,
        };
        qtc.Attica__Field_SetOptions(@ptrCast(self.ptr), options_list);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-field.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Field `
    ///
    /// ` param1: Attica__Field `
    ///
    pub fn operatorAssign(self: Attica__Field, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Attica__Field;
        qtc.Attica__Field_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Field `
    ///
    pub fn delete(self: Attica__Field) void {
        qtc.Attica__Field_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-publisher.html)
pub const Attica__Publisher = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Publisher,

    pub const _is_Attica__Publisher = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Publisher object in C++ memory
    ///
    pub fn new() Attica__Publisher {
        return .{ .ptr = qtc.Attica__Publisher_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Publisher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Publisher `
    ///
    pub fn new2(other: anytype) Attica__Publisher {
        comptime _ = @TypeOf(other)._is_Attica__Publisher;
        return .{ .ptr = qtc.Attica__Publisher_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Publisher `
    ///
    /// ` other: Attica__Publisher `
    ///
    pub fn operatorAssign(self: Attica__Publisher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Publisher;
        qtc.Attica__Publisher_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Publisher `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Publisher, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Publisher_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Publisher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Publisher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Publisher_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Publisher.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Publisher `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__Publisher, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__Publisher_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Publisher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__Publisher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Publisher_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Publisher.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Publisher `
    ///
    /// ` _url: []const u8 `
    ///
    pub fn setUrl(self: Attica__Publisher, _url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        qtc.Attica__Publisher_SetUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Publisher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn url(self: Attica__Publisher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Publisher_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Publisher.url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addField` instead
    ///
    pub const AddField = addField;

    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html#addField)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Publisher `
    ///
    /// ` param1: Attica__Field `
    ///
    pub fn addField(self: Attica__Publisher, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Attica__Field;
        qtc.Attica__Publisher_AddField(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `fields` instead
    ///
    pub const Fields = fields;

    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html#fields)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Publisher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fields(self: Attica__Publisher, allocator: std.mem.Allocator) []Attica__Field {
        const _arr: qtc.libqt_list = qtc.Attica__Publisher_Fields(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Field, _arr.len) catch @panic("Attica__Publisher.fields: Memory allocation failed");
        const _data_val: [*]QtC.Attica__Field = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addTarget` instead
    ///
    pub const AddTarget = addTarget;

    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html#addTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Publisher `
    ///
    /// ` param1: Attica__Target `
    ///
    pub fn addTarget(self: Attica__Publisher, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Attica__Target;
        qtc.Attica__Publisher_AddTarget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `targets` instead
    ///
    pub const Targets = targets;

    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html#targets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Publisher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn targets(self: Attica__Publisher, allocator: std.mem.Allocator) []Attica__Target {
        const _arr: qtc.libqt_list = qtc.Attica__Publisher_Targets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Target, _arr.len) catch @panic("Attica__Publisher.targets: Memory allocation failed");
        const _data_val: [*]QtC.Attica__Target = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-publisher.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Publisher `
    ///
    pub fn isValid(self: Attica__Publisher) bool {
        return qtc.Attica__Publisher_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Publisher `
    ///
    pub fn delete(self: Attica__Publisher) void {
        qtc.Attica__Publisher_Delete(@ptrCast(self.ptr));
    }
};
