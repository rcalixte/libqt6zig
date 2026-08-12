const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const types_enums = @import("libtypes.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html)
pub const KFileMetaData__TypeInfo = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileMetaData__TypeInfo,

    pub const _is_KFileMetaData__TypeInfo = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFileMetaData::TypeInfo object in C++ memory
    ///
    pub fn new() KFileMetaData__TypeInfo {
        return .{ .ptr = qtc.KFileMetaData__TypeInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFileMetaData::TypeInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: types_enums.Type `
    ///
    pub fn new2(typeVal: i32) KFileMetaData__TypeInfo {
        return .{ .ptr = qtc.KFileMetaData__TypeInfo_new2(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KFileMetaData::TypeInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ti: KFileMetaData__TypeInfo `
    ///
    pub fn new3(ti: anytype) KFileMetaData__TypeInfo {
        comptime _ = @TypeOf(ti)._is_KFileMetaData__TypeInfo;
        return .{ .ptr = qtc.KFileMetaData__TypeInfo_new3(@ptrCast(ti.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__TypeInfo `
    ///
    /// ` rhs: KFileMetaData__TypeInfo `
    ///
    pub fn operatorAssign(self: KFileMetaData__TypeInfo, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__TypeInfo;
        qtc.KFileMetaData__TypeInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__TypeInfo `
    ///
    /// ` rhs: KFileMetaData__TypeInfo `
    ///
    pub fn operatorEqual(self: KFileMetaData__TypeInfo, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__TypeInfo;
        return qtc.KFileMetaData__TypeInfo_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__TypeInfo `
    ///
    /// ## Returns:
    ///
    /// ` types_enums.Type `
    ///
    pub fn type0(self: KFileMetaData__TypeInfo) i32 {
        return qtc.KFileMetaData__TypeInfo_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__TypeInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KFileMetaData__TypeInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__TypeInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__TypeInfo.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__TypeInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: KFileMetaData__TypeInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__TypeInfo_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__TypeInfo.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromName` instead
    ///
    pub const FromName = fromName;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#fromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn fromName(_name: []const u8) KFileMetaData__TypeInfo {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__TypeInfo_FromName(name_str) };
    }

    /// ### DEPRECATED: Use `allNames` instead
    ///
    pub const AllNames = allNames;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#allNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileMetaData__TypeInfo_AllNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KFileMetaData__TypeInfo.allNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KFileMetaData__TypeInfo.allNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileMetaData__TypeInfo `
    ///
    pub fn delete(self: KFileMetaData__TypeInfo) void {
        qtc.KFileMetaData__TypeInfo_Delete(@ptrCast(self.ptr));
    }
};
