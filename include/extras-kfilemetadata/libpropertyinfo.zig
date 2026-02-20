const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const properties_enums = @import("libproperties.zig").enums;
const qmetatype_enums = @import("../libqmetatype.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html)
pub const kfilemetadata__propertyinfo = struct {
    /// New constructs a new KFileMetaData::PropertyInfo object.
    ///
    pub fn New() QtC.KFileMetaData__PropertyInfo {
        return qtc.KFileMetaData__PropertyInfo_new();
    }

    /// New2 constructs a new KFileMetaData::PropertyInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` property: properties_enums.Property `
    ///
    pub fn New2(property: i32) QtC.KFileMetaData__PropertyInfo {
        return qtc.KFileMetaData__PropertyInfo_new2(@bitCast(property));
    }

    /// New3 constructs a new KFileMetaData::PropertyInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pi: QtC.KFileMetaData__PropertyInfo `
    ///
    pub fn New3(pi: ?*anyopaque) QtC.KFileMetaData__PropertyInfo {
        return qtc.KFileMetaData__PropertyInfo_new3(@ptrCast(pi));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__PropertyInfo `
    ///
    /// ` rhs: QtC.KFileMetaData__PropertyInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.KFileMetaData__PropertyInfo_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__PropertyInfo `
    ///
    /// ` rhs: QtC.KFileMetaData__PropertyInfo `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.KFileMetaData__PropertyInfo_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__PropertyInfo `
    ///
    /// ## Returns:
    ///
    /// ` properties_enums.Property `
    ///
    pub fn Property(self: ?*anyopaque) i32 {
        return qtc.KFileMetaData__PropertyInfo_Property(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__PropertyInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__PropertyInfo_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__propertyinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__PropertyInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__PropertyInfo_DisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__propertyinfo.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#valueType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__PropertyInfo `
    ///
    /// ## Returns:
    ///
    /// ` qmetatype_enums.Type `
    ///
    pub fn ValueType(self: ?*anyopaque) i32 {
        return qtc.KFileMetaData__PropertyInfo_ValueType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#shouldBeIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__PropertyInfo `
    ///
    pub fn ShouldBeIndexed(self: ?*anyopaque) bool {
        return qtc.KFileMetaData__PropertyInfo_ShouldBeIndexed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#fromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn FromName(name: []const u8) QtC.KFileMetaData__PropertyInfo {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KFileMetaData__PropertyInfo_FromName(name_str);
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
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KFileMetaData__PropertyInfo `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FormatAsDisplayString(self: ?*anyopaque, value: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__PropertyInfo_FormatAsDisplayString(@ptrCast(self), @ptrCast(value));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__propertyinfo.FormatAsDisplayString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KFileMetaData__PropertyInfo `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFileMetaData__PropertyInfo_Delete(@ptrCast(self));
    }
};
