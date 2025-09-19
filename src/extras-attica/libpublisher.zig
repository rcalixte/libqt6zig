const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-field.html
pub const attica__field = struct {
    /// New constructs a new Attica::Field object.
    ///
    /// ``` param1: QtC.Attica__Field ```
    pub fn New(param1: ?*anyopaque) QtC.Attica__Field {
        return qtc.Attica__Field_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/attica-field.html#type-var)
    ///
    /// ``` self: QtC.Attica__Field, allocator: std.mem.Allocator ```
    pub fn Type(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const type_str = qtc.Attica__Field_Type(@ptrCast(self));
        defer qtc.libqt_string_free(&type_str);
        const type_ret = allocator.alloc(u8, type_str.len) catch @panic("attica::field.Type: Memory allocation failed");
        @memcpy(type_ret, type_str.data[0..type_str.len]);
        return type_ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-field.html#type-var)
    ///
    /// ``` self: QtC.Attica__Field, type: []const u8 ```
    pub fn SetType(self: ?*anyopaque, _type: []const u8) void {
        const type_str = qtc.libqt_string{
            .len = _type.len,
            .data = _type.ptr,
        };
        qtc.Attica__Field_SetType(@ptrCast(self), type_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-field.html#name-var)
    ///
    /// ``` self: QtC.Attica__Field, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.Attica__Field_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("attica::field.Name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-field.html#name-var)
    ///
    /// ``` self: QtC.Attica__Field, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Field_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-field.html#fieldsize-var)
    ///
    /// ``` self: QtC.Attica__Field ```
    pub fn Fieldsize(self: ?*anyopaque) i32 {
        return qtc.Attica__Field_Fieldsize(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-field.html#fieldsize-var)
    ///
    /// ``` self: QtC.Attica__Field, fieldsize: i32 ```
    pub fn SetFieldsize(self: ?*anyopaque, fieldsize: i32) void {
        qtc.Attica__Field_SetFieldsize(@ptrCast(self), @intCast(fieldsize));
    }

    /// [Qt documentation](https://api.kde.org/attica-field.html#required-var)
    ///
    /// ``` self: QtC.Attica__Field ```
    pub fn Required(self: ?*anyopaque) bool {
        return qtc.Attica__Field_Required(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-field.html#required-var)
    ///
    /// ``` self: QtC.Attica__Field, required: bool ```
    pub fn SetRequired(self: ?*anyopaque, required: bool) void {
        qtc.Attica__Field_SetRequired(@ptrCast(self), required);
    }

    /// [Qt documentation](https://api.kde.org/attica-field.html#options-var)
    ///
    /// ``` self: QtC.Attica__Field, allocator: std.mem.Allocator ```
    pub fn Options(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const options_arr: qtc.libqt_list = qtc.Attica__Field_Options(@ptrCast(self));
        const options_str: [*]qtc.libqt_string = @ptrCast(@alignCast(options_arr.data));
        defer {
            for (0..options_arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&options_str[i]));
            }
            qtc.libqt_free(options_arr.data);
        }
        const options_ret = allocator.alloc([]const u8, options_arr.len) catch @panic("attica::field.Options: Memory allocation failed");
        for (0..options_arr.len) |i| {
            const options_data = options_str[i];
            const options_buf = allocator.alloc(u8, options_data.len) catch @panic("attica::field.Options: Memory allocation failed");
            @memcpy(options_buf, options_data.data[0..options_data.len]);
            options_ret[i] = options_buf;
        }
        return options_ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-field.html#options-var)
    ///
    /// ``` self: QtC.Attica__Field, options: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetOptions(self: ?*anyopaque, options: [][]const u8, allocator: std.mem.Allocator) void {
        var options_arr = allocator.alloc(qtc.libqt_string, options.len) catch @panic("attica::field.SetOptions: Memory allocation failed");
        defer allocator.free(options_arr);
        for (options, 0..options.len) |item, i| {
            options_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const options_list = qtc.libqt_list{
            .len = options.len,
            .data = options_arr.ptr,
        };
        qtc.Attica__Field_SetOptions(@ptrCast(self), options_list);
    }

    /// [Qt documentation](https://api.kde.org/attica-field.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Field, param1: QtC.Attica__Field ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Attica__Field_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Field ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Field_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/attica-publisher.html
pub const attica__publisher = struct {
    /// New constructs a new Attica::Publisher object.
    ///
    ///
    pub fn New() QtC.Attica__Publisher {
        return qtc.Attica__Publisher_new();
    }

    /// New2 constructs a new Attica::Publisher object.
    ///
    /// ``` other: QtC.Attica__Publisher ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Publisher {
        return qtc.Attica__Publisher_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-publisher.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Publisher, other: QtC.Attica__Publisher ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Publisher_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-publisher.html#setId)
    ///
    /// ``` self: QtC.Attica__Publisher, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Publisher_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-publisher.html#id)
    ///
    /// ``` self: QtC.Attica__Publisher, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Publisher_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::publisher.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-publisher.html#setName)
    ///
    /// ``` self: QtC.Attica__Publisher, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Publisher_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-publisher.html#name)
    ///
    /// ``` self: QtC.Attica__Publisher, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Publisher_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::publisher.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-publisher.html#setUrl)
    ///
    /// ``` self: QtC.Attica__Publisher, url: []const u8 ```
    pub fn SetUrl(self: ?*anyopaque, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.Attica__Publisher_SetUrl(@ptrCast(self), url_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-publisher.html#url)
    ///
    /// ``` self: QtC.Attica__Publisher, allocator: std.mem.Allocator ```
    pub fn Url(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Publisher_Url(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::publisher.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-publisher.html#addField)
    ///
    /// ``` self: QtC.Attica__Publisher, param1: QtC.Attica__Field ```
    pub fn AddField(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Attica__Publisher_AddField(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/attica-publisher.html#fields)
    ///
    /// ``` self: QtC.Attica__Publisher, allocator: std.mem.Allocator ```
    pub fn Fields(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Attica__Field {
        const _arr: qtc.libqt_list = qtc.Attica__Publisher_Fields(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Attica__Field, _arr.len) catch @panic("attica::publisher.Fields: Memory allocation failed");
        const _data: [*]QtC.Attica__Field = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-publisher.html#addTarget)
    ///
    /// ``` self: QtC.Attica__Publisher, param1: QtC.Attica__Target ```
    pub fn AddTarget(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Attica__Publisher_AddTarget(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/attica-publisher.html#targets)
    ///
    /// ``` self: QtC.Attica__Publisher, allocator: std.mem.Allocator ```
    pub fn Targets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Attica__Target {
        const _arr: qtc.libqt_list = qtc.Attica__Publisher_Targets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Attica__Target, _arr.len) catch @panic("attica::publisher.Targets: Memory allocation failed");
        const _data: [*]QtC.Attica__Target = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-publisher.html#isValid)
    ///
    /// ``` self: QtC.Attica__Publisher ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Publisher_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Publisher ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Publisher_Delete(@ptrCast(self));
    }
};
