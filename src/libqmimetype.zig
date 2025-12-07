const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html)
pub const qmimetype = struct {
    /// New constructs a new QMimeType object.
    ///
    pub fn New() QtC.QMimeType {
        return qtc.QMimeType_new();
    }

    /// New2 constructs a new QMimeType object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QMimeType `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QMimeType {
        return qtc.QMimeType_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` other: QtC.QMimeType `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMimeType_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` other: QtC.QMimeType `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMimeType_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QMimeType_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    pub fn IsDefault(self: ?*anyopaque) bool {
        return qtc.QMimeType_IsDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMimeType_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Comment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMimeType_Comment(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#genericIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GenericIconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMimeType_GenericIconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.GenericIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMimeType_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#globPatterns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GlobPatterns(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QMimeType_GlobPatterns(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qmimetype.GlobPatterns: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmimetype.GlobPatterns: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#parentMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ParentMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QMimeType_ParentMimeTypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qmimetype.ParentMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmimetype.ParentMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#allAncestors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllAncestors(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QMimeType_AllAncestors(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qmimetype.AllAncestors: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmimetype.AllAncestors: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#aliases)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Aliases(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QMimeType_Aliases(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qmimetype.Aliases: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmimetype.Aliases: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#suffixes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Suffixes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QMimeType_Suffixes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qmimetype.Suffixes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmimetype.Suffixes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#preferredSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreferredSuffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMimeType_PreferredSuffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.PreferredSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` mimeTypeName: []const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, mimeTypeName: []const u8) bool {
        const mimeTypeName_str = qtc.libqt_string{
            .len = mimeTypeName.len,
            .data = mimeTypeName.ptr,
        };
        return qtc.QMimeType_Inherits(@ptrCast(self), mimeTypeName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#filterString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilterString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMimeType_FilterString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.FilterString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#dtor.QMimeType)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QMimeType `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMimeType_Delete(@ptrCast(self));
    }
};
