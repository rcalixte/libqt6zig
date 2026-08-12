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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Target object in C++ memory
    ///
    pub fn new() Attica__Target {
        return .{ .ptr = qtc.Attica__Target_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Target object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Attica__Target `
    ///
    pub fn new2(param1: anytype) Attica__Target {
        comptime _ = @TypeOf(param1)._is_Attica__Target;
        return .{ .ptr = qtc.Attica__Target_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-target.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Target `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Target, allocator: std.mem.Allocator) []const u8 {
        var id_str = qtc.Attica__Target_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&id_str);
        const id_ret = allocator.alloc(u8, id_str.len) catch @panic("Attica__Target.id: Memory allocation failed");
        @memcpy(id_ret, id_str.data[0..id_str.len]);
        return id_ret;
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-target.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Target `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Target, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Target_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-target.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Target `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__Target, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.Attica__Target_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("Attica__Target.name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-target.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Target `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__Target, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__Target_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-target.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Target `
    ///
    /// ` param1: Attica__Target `
    ///
    pub fn operatorAssign(self: Attica__Target, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Attica__Target;
        qtc.Attica__Target_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Target `
    ///
    pub fn delete(self: Attica__Target) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::BuildService object in C++ memory
    ///
    pub fn new() Attica__BuildService {
        return .{ .ptr = qtc.Attica__BuildService_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::BuildService object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__BuildService `
    ///
    pub fn new2(other: anytype) Attica__BuildService {
        comptime _ = @TypeOf(other)._is_Attica__BuildService;
        return .{ .ptr = qtc.Attica__BuildService_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` other: Attica__BuildService `
    ///
    pub fn operatorAssign(self: Attica__BuildService, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__BuildService;
        qtc.Attica__BuildService_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__BuildService, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__BuildService_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__BuildService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildService_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__BuildService.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__BuildService, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__BuildService_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__BuildService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildService_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__BuildService.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` _url: []const u8 `
    ///
    pub fn setUrl(self: Attica__BuildService, _url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        qtc.Attica__BuildService_SetUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn url(self: Attica__BuildService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildService_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__BuildService.url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addTarget` instead
    ///
    pub const AddTarget = addTarget;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#addTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` param1: Attica__Target `
    ///
    pub fn addTarget(self: Attica__BuildService, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Attica__Target;
        qtc.Attica__BuildService_AddTarget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `targets` instead
    ///
    pub const Targets = targets;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#targets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn targets(self: Attica__BuildService, allocator: std.mem.Allocator) []Attica__Target {
        const _arr: qtc.libqt_list = qtc.Attica__BuildService_Targets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Target, _arr.len) catch @panic("Attica__BuildService.targets: Memory allocation failed");
        const _data_val: [*]QtC.Attica__Target = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservice.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildService `
    ///
    pub fn isValid(self: Attica__BuildService) bool {
        return qtc.Attica__BuildService_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__BuildService `
    ///
    pub fn delete(self: Attica__BuildService) void {
        qtc.Attica__BuildService_Delete(@ptrCast(self.ptr));
    }
};
