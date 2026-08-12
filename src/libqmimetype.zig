const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html)
pub const QMimeType = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMimeType,

    pub const _is_QMimeType = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMimeType object in C++ memory
    ///
    pub fn new() QMimeType {
        return .{ .ptr = qtc.QMimeType_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMimeType object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMimeType `
    ///
    pub fn new2(other: anytype) QMimeType {
        comptime _ = @TypeOf(other)._is_QMimeType;
        return .{ .ptr = qtc.QMimeType_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` other: QMimeType `
    ///
    pub fn operatorAssign(self: QMimeType, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMimeType;
        qtc.QMimeType_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` other: QMimeType `
    ///
    pub fn swap(self: QMimeType, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMimeType;
        qtc.QMimeType_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    pub fn isValid(self: QMimeType) bool {
        return qtc.QMimeType_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDefault` instead
    ///
    pub const IsDefault = isDefault;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    pub fn isDefault(self: QMimeType) bool {
        return qtc.QMimeType_IsDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QMimeType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMimeType_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMimeType.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `comment` instead
    ///
    pub const Comment = comment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn comment(self: QMimeType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMimeType_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMimeType.comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `genericIconName` instead
    ///
    pub const GenericIconName = genericIconName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#genericIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn genericIconName(self: QMimeType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMimeType_GenericIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMimeType.genericIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: QMimeType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMimeType_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMimeType.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `globPatterns` instead
    ///
    pub const GlobPatterns = globPatterns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#globPatterns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn globPatterns(self: QMimeType, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QMimeType_GlobPatterns(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QMimeType.globPatterns: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMimeType.globPatterns: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `parentMimeTypes` instead
    ///
    pub const ParentMimeTypes = parentMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#parentMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn parentMimeTypes(self: QMimeType, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QMimeType_ParentMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QMimeType.parentMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMimeType.parentMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `allAncestors` instead
    ///
    pub const AllAncestors = allAncestors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#allAncestors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allAncestors(self: QMimeType, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QMimeType_AllAncestors(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QMimeType.allAncestors: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMimeType.allAncestors: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `aliases` instead
    ///
    pub const Aliases = aliases;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#aliases)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn aliases(self: QMimeType, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QMimeType_Aliases(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QMimeType.aliases: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMimeType.aliases: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `suffixes` instead
    ///
    pub const Suffixes = suffixes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#suffixes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn suffixes(self: QMimeType, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QMimeType_Suffixes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QMimeType.suffixes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMimeType.suffixes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `preferredSuffix` instead
    ///
    pub const PreferredSuffix = preferredSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#preferredSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn preferredSuffix(self: QMimeType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMimeType_PreferredSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMimeType.preferredSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` mimeTypeName: []const u8 `
    ///
    pub fn inherits(self: QMimeType, mimeTypeName: []const u8) bool {
        const mimeTypeName_str = qtc.libqt_string{
            .len = mimeTypeName.len,
            .data = mimeTypeName.ptr,
        };
        return qtc.QMimeType_Inherits(@ptrCast(self.ptr), mimeTypeName_str);
    }

    /// ### DEPRECATED: Use `filterString` instead
    ///
    pub const FilterString = filterString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#filterString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn filterString(self: QMimeType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMimeType_FilterString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMimeType.filterString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#dtor.QMimeType)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMimeType `
    ///
    pub fn delete(self: QMimeType) void {
        qtc.QMimeType_Delete(@ptrCast(self.ptr));
    }
};
