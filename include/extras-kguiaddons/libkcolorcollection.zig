const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcolorcollection_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcolorcollection.html)
pub const kcolorcollection = struct {
    /// New constructs a new KColorCollection object.
    ///
    pub fn New() QtC.KColorCollection {
        return qtc.KColorCollection_new();
    }

    /// New2 constructs a new KColorCollection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KColorCollection `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.KColorCollection {
        return qtc.KColorCollection_new2(@ptrCast(param1));
    }

    /// New3 constructs a new KColorCollection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New3(name: []const u8) QtC.KColorCollection {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.KColorCollection_new3(name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#installedCollections)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InstalledCollections(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KColorCollection_InstalledCollections();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` param1: QtC.KColorCollection `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KColorCollection_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    pub fn Save(self: ?*anyopaque) bool {
        return qtc.KColorCollection_Save(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KColorCollection_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorcollection.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` desc: []const u8 `
    ///
    pub fn SetDescription(self: ?*anyopaque, desc: []const u8) void {
        const desc_str = qtc.libqt_string{
            .len = desc.len,
            .data = desc.ptr,
        };
        qtc.KColorCollection_SetDescription(@ptrCast(self), desc_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KColorCollection_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorcollection.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KColorCollection_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#editable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ## Returns:
    ///
    /// ` kcolorcollection_enums.Editable `
    ///
    pub fn Editable(self: ?*anyopaque) i32 {
        return qtc.KColorCollection_Editable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#setEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` editable: kcolorcollection_enums.Editable `
    ///
    pub fn SetEditable(self: ?*anyopaque, editable: i32) void {
        qtc.KColorCollection_SetEditable(@ptrCast(self), @bitCast(editable));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.KColorCollection_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` index: i32 `
    ///
    pub fn Color(self: ?*anyopaque, index: i32) QtC.QColor {
        return qtc.KColorCollection_Color(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#findColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn FindColor(self: ?*anyopaque, color: ?*anyopaque) i32 {
        return qtc.KColorCollection_FindColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name2(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KColorCollection_Name2(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorcollection.Name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` color: QtC.QColor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name3(self: ?*anyopaque, color: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KColorCollection_Name3(@ptrCast(self), @ptrCast(color));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorcollection.Name3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#addColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` newColor: QtC.QColor `
    ///
    pub fn AddColor(self: ?*anyopaque, newColor: ?*anyopaque) i32 {
        return qtc.KColorCollection_AddColor(@ptrCast(self), @ptrCast(newColor));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` index: i32 `
    ///
    /// ` newColor: QtC.QColor `
    ///
    pub fn ChangeColor(self: ?*anyopaque, index: i32, newColor: ?*anyopaque) i32 {
        return qtc.KColorCollection_ChangeColor(@ptrCast(self), @bitCast(index), @ptrCast(newColor));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` oldColor: QtC.QColor `
    ///
    /// ` newColor: QtC.QColor `
    ///
    pub fn ChangeColor2(self: ?*anyopaque, oldColor: ?*anyopaque, newColor: ?*anyopaque) i32 {
        return qtc.KColorCollection_ChangeColor2(@ptrCast(self), @ptrCast(oldColor), @ptrCast(newColor));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#addColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` newColor: QtC.QColor `
    ///
    /// ` newColorName: []const u8 `
    ///
    pub fn AddColor2(self: ?*anyopaque, newColor: ?*anyopaque, newColorName: []const u8) i32 {
        const newColorName_str = qtc.libqt_string{
            .len = newColorName.len,
            .data = newColorName.ptr,
        };
        return qtc.KColorCollection_AddColor2(@ptrCast(self), @ptrCast(newColor), newColorName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` index: i32 `
    ///
    /// ` newColor: QtC.QColor `
    ///
    /// ` newColorName: []const u8 `
    ///
    pub fn ChangeColor3(self: ?*anyopaque, index: i32, newColor: ?*anyopaque, newColorName: []const u8) i32 {
        const newColorName_str = qtc.libqt_string{
            .len = newColorName.len,
            .data = newColorName.ptr,
        };
        return qtc.KColorCollection_ChangeColor3(@ptrCast(self), @bitCast(index), @ptrCast(newColor), newColorName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorCollection `
    ///
    /// ` oldColor: QtC.QColor `
    ///
    /// ` newColor: QtC.QColor `
    ///
    /// ` newColorName: []const u8 `
    ///
    pub fn ChangeColor32(self: ?*anyopaque, oldColor: ?*anyopaque, newColor: ?*anyopaque, newColorName: []const u8) i32 {
        const newColorName_str = qtc.libqt_string{
            .len = newColorName.len,
            .data = newColorName.ptr,
        };
        return qtc.KColorCollection_ChangeColor32(@ptrCast(self), @ptrCast(oldColor), @ptrCast(newColor), newColorName_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#dtor.KColorCollection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KColorCollection `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KColorCollection_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#public-types)
pub const enums = struct {
    pub const Editable = enum(i32) {
        pub const Yes: i32 = 0;
        pub const No: i32 = 1;
        pub const Ask: i32 = 2;
    };
};
