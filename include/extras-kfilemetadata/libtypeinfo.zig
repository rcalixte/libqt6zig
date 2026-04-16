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

    /// New constructs a new KFileMetaData::TypeInfo object.
    ///
    pub fn New() KFileMetaData__TypeInfo {
        return .{ .ptr = qtc.KFileMetaData__TypeInfo_new() };
    }

    /// New2 constructs a new KFileMetaData::TypeInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: types_enums.Type `
    ///
    pub fn New2(typeVal: i32) KFileMetaData__TypeInfo {
        return .{ .ptr = qtc.KFileMetaData__TypeInfo_new2(@bitCast(typeVal)) };
    }

    /// New3 constructs a new KFileMetaData::TypeInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` ti: KFileMetaData__TypeInfo `
    ///
    pub fn New3(ti: anytype) KFileMetaData__TypeInfo {
        comptime _ = @TypeOf(ti)._is_KFileMetaData__TypeInfo;
        return .{ .ptr = qtc.KFileMetaData__TypeInfo_new3(@ptrCast(ti.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__TypeInfo `
    ///
    /// ` rhs: KFileMetaData__TypeInfo `
    ///
    pub fn OperatorAssign(self: KFileMetaData__TypeInfo, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__TypeInfo;
        qtc.KFileMetaData__TypeInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__TypeInfo `
    ///
    /// ` rhs: KFileMetaData__TypeInfo `
    ///
    pub fn OperatorEqual(self: KFileMetaData__TypeInfo, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__TypeInfo;
        return qtc.KFileMetaData__TypeInfo_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

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
    pub fn Type(self: KFileMetaData__TypeInfo) i32 {
        return qtc.KFileMetaData__TypeInfo_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__TypeInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KFileMetaData__TypeInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__TypeInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__typeinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__TypeInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: KFileMetaData__TypeInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__TypeInfo_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__typeinfo.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#fromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn FromName(name: []const u8) KFileMetaData__TypeInfo {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__TypeInfo_FromName(name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#allNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileMetaData__TypeInfo_AllNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfilemetadata__typeinfo.AllNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfilemetadata__typeinfo.AllNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileMetaData__TypeInfo `
    ///
    pub fn Delete(self: KFileMetaData__TypeInfo) void {
        qtc.KFileMetaData__TypeInfo_Delete(@ptrCast(self.ptr));
    }
};
