const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-target.html
pub const attica__target = struct {
    /// New constructs a new Attica::Target object.
    ///
    /// ``` param1: QtC.Attica__Target ```
    pub fn New(param1: ?*anyopaque) QtC.Attica__Target {
        return qtc.Attica__Target_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/attica-target.html#id-var)
    ///
    /// ``` self: QtC.Attica__Target, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const id_str = qtc.Attica__Target_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&id_str);
        const id_ret = allocator.alloc(u8, id_str.len) catch @panic("attica::target.Id: Memory allocation failed");
        @memcpy(id_ret, id_str.data[0..id_str.len]);
        return id_ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-target.html#id-var)
    ///
    /// ``` self: QtC.Attica__Target, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Target_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-target.html#name-var)
    ///
    /// ``` self: QtC.Attica__Target, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.Attica__Target_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("attica::target.Name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-target.html#name-var)
    ///
    /// ``` self: QtC.Attica__Target, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Target_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-target.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Target, param1: QtC.Attica__Target ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Attica__Target_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Target ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Target_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/attica-buildservice.html
pub const attica__buildservice = struct {
    /// New constructs a new Attica::BuildService object.
    ///
    ///
    pub fn New() QtC.Attica__BuildService {
        return qtc.Attica__BuildService_new();
    }

    /// New2 constructs a new Attica::BuildService object.
    ///
    /// ``` other: QtC.Attica__BuildService ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__BuildService {
        return qtc.Attica__BuildService_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservice.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__BuildService, other: QtC.Attica__BuildService ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__BuildService_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservice.html#setId)
    ///
    /// ``` self: QtC.Attica__BuildService, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__BuildService_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservice.html#id)
    ///
    /// ``` self: QtC.Attica__BuildService, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__BuildService_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::buildservice.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservice.html#setName)
    ///
    /// ``` self: QtC.Attica__BuildService, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__BuildService_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservice.html#name)
    ///
    /// ``` self: QtC.Attica__BuildService, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__BuildService_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::buildservice.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservice.html#setUrl)
    ///
    /// ``` self: QtC.Attica__BuildService, url: []const u8 ```
    pub fn SetUrl(self: ?*anyopaque, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.Attica__BuildService_SetUrl(@ptrCast(self), url_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservice.html#url)
    ///
    /// ``` self: QtC.Attica__BuildService, allocator: std.mem.Allocator ```
    pub fn Url(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__BuildService_Url(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::buildservice.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservice.html#addTarget)
    ///
    /// ``` self: QtC.Attica__BuildService, param1: QtC.Attica__Target ```
    pub fn AddTarget(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Attica__BuildService_AddTarget(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservice.html#targets)
    ///
    /// ``` self: QtC.Attica__BuildService, allocator: std.mem.Allocator ```
    pub fn Targets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Attica__Target {
        const _arr: qtc.libqt_list = qtc.Attica__BuildService_Targets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Attica__Target, _arr.len) catch @panic("attica::buildservice.Targets: Memory allocation failed");
        const _data: [*]QtC.Attica__Target = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservice.html#isValid)
    ///
    /// ``` self: QtC.Attica__BuildService ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__BuildService_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__BuildService ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__BuildService_Delete(@ptrCast(self));
    }
};
