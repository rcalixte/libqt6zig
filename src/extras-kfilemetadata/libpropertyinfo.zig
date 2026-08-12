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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFileMetaData::PropertyInfo object in C++ memory
    ///
    pub fn new() KFileMetaData__PropertyInfo {
        return .{ .ptr = qtc.KFileMetaData__PropertyInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFileMetaData::PropertyInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _property: properties_enums.Property `
    ///
    pub fn new2(_property: i32) KFileMetaData__PropertyInfo {
        return .{ .ptr = qtc.KFileMetaData__PropertyInfo_new2(@bitCast(_property)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KFileMetaData::PropertyInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pi: KFileMetaData__PropertyInfo `
    ///
    pub fn new3(pi: anytype) KFileMetaData__PropertyInfo {
        comptime _ = @TypeOf(pi)._is_KFileMetaData__PropertyInfo;
        return .{ .ptr = qtc.KFileMetaData__PropertyInfo_new3(@ptrCast(pi.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    /// ` rhs: KFileMetaData__PropertyInfo `
    ///
    pub fn operatorAssign(self: KFileMetaData__PropertyInfo, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__PropertyInfo;
        qtc.KFileMetaData__PropertyInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    /// ` rhs: KFileMetaData__PropertyInfo `
    ///
    pub fn operatorEqual(self: KFileMetaData__PropertyInfo, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__PropertyInfo;
        return qtc.KFileMetaData__PropertyInfo_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: KFileMetaData__PropertyInfo) i32 {
        return qtc.KFileMetaData__PropertyInfo_Property(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KFileMetaData__PropertyInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__PropertyInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__PropertyInfo.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: KFileMetaData__PropertyInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__PropertyInfo_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__PropertyInfo.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `valueType` instead
    ///
    pub const ValueType = valueType;

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
    pub fn valueType(self: KFileMetaData__PropertyInfo) i32 {
        return qtc.KFileMetaData__PropertyInfo_ValueType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `shouldBeIndexed` instead
    ///
    pub const ShouldBeIndexed = shouldBeIndexed;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#shouldBeIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    pub fn shouldBeIndexed(self: KFileMetaData__PropertyInfo) bool {
        return qtc.KFileMetaData__PropertyInfo_ShouldBeIndexed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromName` instead
    ///
    pub const FromName = fromName;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#fromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn fromName(_name: []const u8) KFileMetaData__PropertyInfo {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__PropertyInfo_FromName(name_str) };
    }

    /// ### DEPRECATED: Use `allNames` instead
    ///
    pub const AllNames = allNames;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#allNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileMetaData__PropertyInfo_AllNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KFileMetaData__PropertyInfo.allNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KFileMetaData__PropertyInfo.allNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `formatAsDisplayString` instead
    ///
    pub const FormatAsDisplayString = formatAsDisplayString;

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
    pub fn formatAsDisplayString(self: KFileMetaData__PropertyInfo, allocator: std.mem.Allocator, value: anytype) []const u8 {
        comptime _ = @TypeOf(value)._is_QVariant;
        var _str = qtc.KFileMetaData__PropertyInfo_FormatAsDisplayString(@ptrCast(self.ptr), @ptrCast(value.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__PropertyInfo.formatAsDisplayString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileMetaData__PropertyInfo `
    ///
    pub fn delete(self: KFileMetaData__PropertyInfo) void {
        qtc.KFileMetaData__PropertyInfo_Delete(@ptrCast(self.ptr));
    }
};
