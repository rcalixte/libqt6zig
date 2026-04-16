const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const properties_enums = @import("libproperties.zig").enums;
const qmetatype_enums = @import("../libqmetatype.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html)
pub const KFileMetaData__PropertyInfo = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileMetaData__PropertyInfo,

    pub const _is_KFileMetaData__PropertyInfo = {};

    /// New constructs a new KFileMetaData::PropertyInfo object.
    ///
    pub fn New() KFileMetaData__PropertyInfo {
        return .{ .ptr = qtc.KFileMetaData__PropertyInfo_new() };
    }

    /// New2 constructs a new KFileMetaData::PropertyInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` property: properties_enums.Property `
    ///
    pub fn New2(property: i32) KFileMetaData__PropertyInfo {
        return .{ .ptr = qtc.KFileMetaData__PropertyInfo_new2(@bitCast(property)) };
    }

    /// New3 constructs a new KFileMetaData::PropertyInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pi: KFileMetaData__PropertyInfo `
    ///
    pub fn New3(pi: anytype) KFileMetaData__PropertyInfo {
        comptime _ = @TypeOf(pi)._is_KFileMetaData__PropertyInfo;
        return .{ .ptr = qtc.KFileMetaData__PropertyInfo_new3(@ptrCast(pi.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    /// ` rhs: KFileMetaData__PropertyInfo `
    ///
    pub fn OperatorAssign(self: KFileMetaData__PropertyInfo, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__PropertyInfo;
        qtc.KFileMetaData__PropertyInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    /// ` rhs: KFileMetaData__PropertyInfo `
    ///
    pub fn OperatorEqual(self: KFileMetaData__PropertyInfo, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__PropertyInfo;
        return qtc.KFileMetaData__PropertyInfo_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    /// ## Returns:
    ///
    /// ` properties_enums.Property `
    ///
    pub fn Property(self: KFileMetaData__PropertyInfo) i32 {
        return qtc.KFileMetaData__PropertyInfo_Property(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KFileMetaData__PropertyInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__PropertyInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__propertyinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: KFileMetaData__PropertyInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__PropertyInfo_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__propertyinfo.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#valueType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    /// ## Returns:
    ///
    /// ` qmetatype_enums.Type `
    ///
    pub fn ValueType(self: KFileMetaData__PropertyInfo) i32 {
        return qtc.KFileMetaData__PropertyInfo_ValueType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#shouldBeIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    pub fn ShouldBeIndexed(self: KFileMetaData__PropertyInfo) bool {
        return qtc.KFileMetaData__PropertyInfo_ShouldBeIndexed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#fromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn FromName(name: []const u8) KFileMetaData__PropertyInfo {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__PropertyInfo_FromName(name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#allNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileMetaData__PropertyInfo_AllNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfilemetadata__propertyinfo.AllNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfilemetadata__propertyinfo.AllNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#formatAsDisplayString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: QVariant `
    ///
    pub fn FormatAsDisplayString(self: KFileMetaData__PropertyInfo, allocator: std.mem.Allocator, value: anytype) []const u8 {
        comptime _ = @TypeOf(value)._is_QVariant;
        var _str = qtc.KFileMetaData__PropertyInfo_FormatAsDisplayString(@ptrCast(self.ptr), @ptrCast(value.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__propertyinfo.FormatAsDisplayString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    pub fn Delete(self: KFileMetaData__PropertyInfo) void {
        qtc.KFileMetaData__PropertyInfo_Delete(@ptrCast(self.ptr));
    }
};
