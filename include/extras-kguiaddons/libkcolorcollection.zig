const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcolorcollection_enums = enums;
const std = @import("std");

/// https://api-staging.kde.org/kcolorcollection.html
pub const kcolorcollection = struct {
    /// New constructs a new KColorCollection object.
    ///
    ///
    pub fn New() QtC.KColorCollection {
        return qtc.KColorCollection_new();
    }

    /// New2 constructs a new KColorCollection object.
    ///
    /// ``` param1: QtC.KColorCollection ```
    pub fn New2(param1: ?*anyopaque) QtC.KColorCollection {
        return qtc.KColorCollection_new2(@ptrCast(param1));
    }

    /// New3 constructs a new KColorCollection object.
    ///
    /// ``` name: []const u8 ```
    pub fn New3(name: []const u8) QtC.KColorCollection {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.KColorCollection_new3(name_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#installedCollections)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn InstalledCollections(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KColorCollection_InstalledCollections();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kcolorcollection.InstalledCollections: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcolorcollection.InstalledCollections: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#operator-eq)
    ///
    /// ``` self: QtC.KColorCollection, param1: QtC.KColorCollection ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KColorCollection_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#save)
    ///
    /// ``` self: QtC.KColorCollection ```
    pub fn Save(self: ?*anyopaque) bool {
        return qtc.KColorCollection_Save(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#description)
    ///
    /// ``` self: QtC.KColorCollection, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KColorCollection_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorcollection.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#setDescription)
    ///
    /// ``` self: QtC.KColorCollection, desc: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, desc: []const u8) void {
        const desc_str = qtc.libqt_string{
            .len = desc.len,
            .data = desc.ptr,
        };
        qtc.KColorCollection_SetDescription(@ptrCast(self), desc_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#name)
    ///
    /// ``` self: QtC.KColorCollection, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KColorCollection_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorcollection.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#setName)
    ///
    /// ``` self: QtC.KColorCollection, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KColorCollection_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#editable)
    ///
    /// ``` self: QtC.KColorCollection ```
    ///
    /// Returns: ``` kcolorcollection_enums.Editable ```
    pub fn Editable(self: ?*anyopaque) i32 {
        return qtc.KColorCollection_Editable(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#setEditable)
    ///
    /// ``` self: QtC.KColorCollection, editable: kcolorcollection_enums.Editable ```
    pub fn SetEditable(self: ?*anyopaque, editable: i32) void {
        qtc.KColorCollection_SetEditable(@ptrCast(self), @intCast(editable));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#count)
    ///
    /// ``` self: QtC.KColorCollection ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.KColorCollection_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#color)
    ///
    /// ``` self: QtC.KColorCollection, index: i32 ```
    pub fn Color(self: ?*anyopaque, index: i32) QtC.QColor {
        return qtc.KColorCollection_Color(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#findColor)
    ///
    /// ``` self: QtC.KColorCollection, color: QtC.QColor ```
    pub fn FindColor(self: ?*anyopaque, color: ?*anyopaque) i32 {
        return qtc.KColorCollection_FindColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#name)
    ///
    /// ``` self: QtC.KColorCollection, index: i32, allocator: std.mem.Allocator ```
    pub fn Name2(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KColorCollection_Name2(@ptrCast(self), @intCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorcollection.Name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#name)
    ///
    /// ``` self: QtC.KColorCollection, color: QtC.QColor, allocator: std.mem.Allocator ```
    pub fn Name3(self: ?*anyopaque, color: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KColorCollection_Name3(@ptrCast(self), @ptrCast(color));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorcollection.Name3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#addColor)
    ///
    /// ``` self: QtC.KColorCollection, newColor: QtC.QColor ```
    pub fn AddColor(self: ?*anyopaque, newColor: ?*anyopaque) i32 {
        return qtc.KColorCollection_AddColor(@ptrCast(self), @ptrCast(newColor));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#changeColor)
    ///
    /// ``` self: QtC.KColorCollection, index: i32, newColor: QtC.QColor ```
    pub fn ChangeColor(self: ?*anyopaque, index: i32, newColor: ?*anyopaque) i32 {
        return qtc.KColorCollection_ChangeColor(@ptrCast(self), @intCast(index), @ptrCast(newColor));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#changeColor)
    ///
    /// ``` self: QtC.KColorCollection, oldColor: QtC.QColor, newColor: QtC.QColor ```
    pub fn ChangeColor2(self: ?*anyopaque, oldColor: ?*anyopaque, newColor: ?*anyopaque) i32 {
        return qtc.KColorCollection_ChangeColor2(@ptrCast(self), @ptrCast(oldColor), @ptrCast(newColor));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#addColor)
    ///
    /// ``` self: QtC.KColorCollection, newColor: QtC.QColor, newColorName: []const u8 ```
    pub fn AddColor2(self: ?*anyopaque, newColor: ?*anyopaque, newColorName: []const u8) i32 {
        const newColorName_str = qtc.libqt_string{
            .len = newColorName.len,
            .data = newColorName.ptr,
        };
        return qtc.KColorCollection_AddColor2(@ptrCast(self), @ptrCast(newColor), newColorName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#changeColor)
    ///
    /// ``` self: QtC.KColorCollection, index: i32, newColor: QtC.QColor, newColorName: []const u8 ```
    pub fn ChangeColor3(self: ?*anyopaque, index: i32, newColor: ?*anyopaque, newColorName: []const u8) i32 {
        const newColorName_str = qtc.libqt_string{
            .len = newColorName.len,
            .data = newColorName.ptr,
        };
        return qtc.KColorCollection_ChangeColor3(@ptrCast(self), @intCast(index), @ptrCast(newColor), newColorName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#changeColor)
    ///
    /// ``` self: QtC.KColorCollection, oldColor: QtC.QColor, newColor: QtC.QColor, newColorName: []const u8 ```
    pub fn ChangeColor32(self: ?*anyopaque, oldColor: ?*anyopaque, newColor: ?*anyopaque, newColorName: []const u8) i32 {
        const newColorName_str = qtc.libqt_string{
            .len = newColorName.len,
            .data = newColorName.ptr,
        };
        return qtc.KColorCollection_ChangeColor32(@ptrCast(self), @ptrCast(oldColor), @ptrCast(newColor), newColorName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kcolorcollection.html#dtor.KColorCollection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KColorCollection ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KColorCollection_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kcolorcollection.html#types
pub const enums = struct {
    pub const Editable = enum {
        pub const Yes: i32 = 0;
        pub const No: i32 = 1;
        pub const Ask: i32 = 2;
    };
};
