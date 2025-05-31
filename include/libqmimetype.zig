const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qmimetype.html
pub const qmimetype = struct {
    /// New constructs a new QMimeType object.
    ///
    ///
    pub fn New() QtC.QMimeType {
        return qtc.QMimeType_new();
    }

    /// New2 constructs a new QMimeType object.
    ///
    /// ``` other: QtC.QMimeType ```
    pub fn New2(other: ?*anyopaque) QtC.QMimeType {
        return qtc.QMimeType_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#operator=)
    ///
    /// ``` self: QtC.QMimeType, other: QtC.QMimeType ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMimeType_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#swap)
    ///
    /// ``` self: QtC.QMimeType, other: QtC.QMimeType ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMimeType_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#operator==)
    ///
    /// ``` self: QtC.QMimeType, other: QtC.QMimeType ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMimeType_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#operator!=)
    ///
    /// ``` self: QtC.QMimeType, other: QtC.QMimeType ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMimeType_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#isValid)
    ///
    /// ``` self: QtC.QMimeType ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QMimeType_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#isDefault)
    ///
    /// ``` self: QtC.QMimeType ```
    pub fn IsDefault(self: ?*anyopaque) bool {
        return qtc.QMimeType_IsDefault(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#name)
    ///
    /// ``` self: QtC.QMimeType, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeType_Name(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.Name: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#comment)
    ///
    /// ``` self: QtC.QMimeType, allocator: std.mem.Allocator ```
    pub fn Comment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeType_Comment(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.Comment: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#genericIconName)
    ///
    /// ``` self: QtC.QMimeType, allocator: std.mem.Allocator ```
    pub fn GenericIconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeType_GenericIconName(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.GenericIconName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#iconName)
    ///
    /// ``` self: QtC.QMimeType, allocator: std.mem.Allocator ```
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeType_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.IconName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#globPatterns)
    ///
    /// ``` self: QtC.QMimeType, allocator: std.mem.Allocator ```
    pub fn GlobPatterns(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QMimeType_GlobPatterns(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qmimetype.GlobPatterns: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmimetype.GlobPatterns: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#parentMimeTypes)
    ///
    /// ``` self: QtC.QMimeType, allocator: std.mem.Allocator ```
    pub fn ParentMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QMimeType_ParentMimeTypes(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qmimetype.ParentMimeTypes: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmimetype.ParentMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#allAncestors)
    ///
    /// ``` self: QtC.QMimeType, allocator: std.mem.Allocator ```
    pub fn AllAncestors(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QMimeType_AllAncestors(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qmimetype.AllAncestors: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmimetype.AllAncestors: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#aliases)
    ///
    /// ``` self: QtC.QMimeType, allocator: std.mem.Allocator ```
    pub fn Aliases(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QMimeType_Aliases(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qmimetype.Aliases: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmimetype.Aliases: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#suffixes)
    ///
    /// ``` self: QtC.QMimeType, allocator: std.mem.Allocator ```
    pub fn Suffixes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QMimeType_Suffixes(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qmimetype.Suffixes: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmimetype.Suffixes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#preferredSuffix)
    ///
    /// ``` self: QtC.QMimeType, allocator: std.mem.Allocator ```
    pub fn PreferredSuffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeType_PreferredSuffix(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.PreferredSuffix: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#inherits)
    ///
    /// ``` self: QtC.QMimeType, mimeTypeName: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, mimeTypeName: []const u8) bool {
        const mimeTypeName_str = qtc.struct_libqt_string{
            .len = mimeTypeName.len,
            .data = @constCast(mimeTypeName.ptr),
        };
        return qtc.QMimeType_Inherits(@ptrCast(self), mimeTypeName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#filterString)
    ///
    /// ``` self: QtC.QMimeType, allocator: std.mem.Allocator ```
    pub fn FilterString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeType_FilterString(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.FilterString: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#dtor.QMimeType)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMimeType ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMimeType_Delete(@ptrCast(self));
    }
};
