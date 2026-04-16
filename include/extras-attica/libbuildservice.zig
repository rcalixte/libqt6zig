const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-target.html)
pub const Attica__Target = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-target.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Target,

    pub const _is_Attica__Target = {};

    /// New constructs a new Attica::Target object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Attica__Target `
    ///
    pub fn New(param1: anytype) Attica__Target {
        comptime _ = @TypeOf(param1)._is_Attica__Target;
        return .{ .ptr = qtc.Attica__Target_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-target.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Target `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Target, allocator: std.mem.Allocator) []const u8 {
        var id_str = qtc.Attica__Target_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&id_str);
        const id_ret = allocator.alloc(u8, id_str.len) catch @panic("attica__target.Id: Memory allocation failed");
        @memcpy(id_ret, id_str.data[0..id_str.len]);
        return id_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-target.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Target `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Target, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Target_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-target.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Target `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__Target, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.Attica__Target_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("attica__target.Name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-target.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Target `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__Target, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Target_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-target.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Target `
    ///
    /// ` param1: Attica__Target `
    ///
    pub fn OperatorAssign(self: Attica__Target, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Attica__Target;
        qtc.Attica__Target_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Target `
    ///
    pub fn Delete(self: Attica__Target) void {
        qtc.Attica__Target_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-buildservice.html)
pub const Attica__BuildService = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__BuildService,

    pub const _is_Attica__BuildService = {};

    /// New constructs a new Attica::BuildService object.
    ///
    pub fn New() Attica__BuildService {
        return .{ .ptr = qtc.Attica__BuildService_new() };
    }

    /// New2 constructs a new Attica::BuildService object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__BuildService `
    ///
    pub fn New2(other: anytype) Attica__BuildService {
        comptime _ = @TypeOf(other)._is_Attica__BuildService;
        return .{ .ptr = qtc.Attica__BuildService_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` other: Attica__BuildService `
    ///
    pub fn OperatorAssign(self: Attica__BuildService, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__BuildService;
        qtc.Attica__BuildService_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__BuildService, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__BuildService_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__BuildService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildService_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__buildservice.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__BuildService, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__BuildService_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__BuildService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildService_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__buildservice.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` url: []const u8 `
    ///
    pub fn SetUrl(self: Attica__BuildService, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.Attica__BuildService_SetUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: Attica__BuildService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildService_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__buildservice.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#addTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` param1: Attica__Target `
    ///
    pub fn AddTarget(self: Attica__BuildService, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Attica__Target;
        qtc.Attica__BuildService_AddTarget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#targets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Targets(self: Attica__BuildService, allocator: std.mem.Allocator) []Attica__Target {
        const _arr: qtc.libqt_list = qtc.Attica__BuildService_Targets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Target, _arr.len) catch @panic("attica__buildservice.Targets: Memory allocation failed");
        const _data: [*]QtC.Attica__Target = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    pub fn IsValid(self: Attica__BuildService) bool {
        return qtc.Attica__BuildService_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__BuildService `
    ///
    pub fn Delete(self: Attica__BuildService) void {
        qtc.Attica__BuildService_Delete(@ptrCast(self.ptr));
    }
};
