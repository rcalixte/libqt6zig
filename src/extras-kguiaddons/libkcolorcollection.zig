const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const kcolorcollection_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcolorcollection.html)
pub const KColorCollection = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KColorCollection,

    pub const _is_KColorCollection = {};

    /// New constructs a new KColorCollection object.
    ///
    pub fn New() KColorCollection {
        return .{ .ptr = qtc.KColorCollection_new() };
    }

    /// New2 constructs a new KColorCollection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KColorCollection `
    ///
    pub fn New2(param1: anytype) KColorCollection {
        comptime _ = @TypeOf(param1)._is_KColorCollection;
        return .{ .ptr = qtc.KColorCollection_new2(@ptrCast(param1.ptr)) };
    }

    /// New3 constructs a new KColorCollection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New3(name: []const u8) KColorCollection {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KColorCollection_new3(name_str) };
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
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: KColorCollection `
    ///
    /// ` param1: KColorCollection `
    ///
    pub fn OperatorAssign(self: KColorCollection, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KColorCollection;
        qtc.KColorCollection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    pub fn Save(self: KColorCollection) bool {
        return qtc.KColorCollection_Save(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: KColorCollection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KColorCollection_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorcollection.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` desc: []const u8 `
    ///
    pub fn SetDescription(self: KColorCollection, desc: []const u8) void {
        const desc_str = qtc.libqt_string{
            .len = desc.len,
            .data = desc.ptr,
        };
        qtc.KColorCollection_SetDescription(@ptrCast(self.ptr), desc_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KColorCollection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KColorCollection_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorcollection.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: KColorCollection, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KColorCollection_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#editable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ## Returns:
    ///
    /// ` kcolorcollection_enums.Editable `
    ///
    pub fn Editable(self: KColorCollection) i32 {
        return qtc.KColorCollection_Editable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#setEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` editable: kcolorcollection_enums.Editable `
    ///
    pub fn SetEditable(self: KColorCollection, editable: i32) void {
        qtc.KColorCollection_SetEditable(@ptrCast(self.ptr), @bitCast(editable));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    pub fn Count(self: KColorCollection) i32 {
        return qtc.KColorCollection_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` index: i32 `
    ///
    pub fn Color(self: KColorCollection, index: i32) QColor {
        return .{ .ptr = qtc.KColorCollection_Color(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#findColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` color: QColor `
    ///
    pub fn FindColor(self: KColorCollection, color: anytype) i32 {
        comptime _ = @TypeOf(color)._is_QColor;
        return qtc.KColorCollection_FindColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn Name2(self: KColorCollection, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.KColorCollection_Name2(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorcollection.Name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` color: QColor `
    ///
    pub fn Name3(self: KColorCollection, allocator: std.mem.Allocator, color: anytype) []const u8 {
        comptime _ = @TypeOf(color)._is_QColor;
        var _str = qtc.KColorCollection_Name3(@ptrCast(self.ptr), @ptrCast(color.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorcollection.Name3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#addColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` newColor: QColor `
    ///
    pub fn AddColor(self: KColorCollection, newColor: anytype) i32 {
        comptime _ = @TypeOf(newColor)._is_QColor;
        return qtc.KColorCollection_AddColor(@ptrCast(self.ptr), @ptrCast(newColor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` index: i32 `
    ///
    /// ` newColor: QColor `
    ///
    pub fn ChangeColor(self: KColorCollection, index: i32, newColor: anytype) i32 {
        comptime _ = @TypeOf(newColor)._is_QColor;
        return qtc.KColorCollection_ChangeColor(@ptrCast(self.ptr), @bitCast(index), @ptrCast(newColor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` oldColor: QColor `
    ///
    /// ` newColor: QColor `
    ///
    pub fn ChangeColor2(self: KColorCollection, oldColor: anytype, newColor: anytype) i32 {
        comptime _ = @TypeOf(oldColor)._is_QColor;
        comptime _ = @TypeOf(newColor)._is_QColor;
        return qtc.KColorCollection_ChangeColor2(@ptrCast(self.ptr), @ptrCast(oldColor.ptr), @ptrCast(newColor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#addColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` newColor: QColor `
    ///
    /// ` newColorName: []const u8 `
    ///
    pub fn AddColor2(self: KColorCollection, newColor: anytype, newColorName: []const u8) i32 {
        comptime _ = @TypeOf(newColor)._is_QColor;
        const newColorName_str = qtc.libqt_string{
            .len = newColorName.len,
            .data = newColorName.ptr,
        };
        return qtc.KColorCollection_AddColor2(@ptrCast(self.ptr), @ptrCast(newColor.ptr), newColorName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` index: i32 `
    ///
    /// ` newColor: QColor `
    ///
    /// ` newColorName: []const u8 `
    ///
    pub fn ChangeColor3(self: KColorCollection, index: i32, newColor: anytype, newColorName: []const u8) i32 {
        comptime _ = @TypeOf(newColor)._is_QColor;
        const newColorName_str = qtc.libqt_string{
            .len = newColorName.len,
            .data = newColorName.ptr,
        };
        return qtc.KColorCollection_ChangeColor3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(newColor.ptr), newColorName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` oldColor: QColor `
    ///
    /// ` newColor: QColor `
    ///
    /// ` newColorName: []const u8 `
    ///
    pub fn ChangeColor32(self: KColorCollection, oldColor: anytype, newColor: anytype, newColorName: []const u8) i32 {
        comptime _ = @TypeOf(oldColor)._is_QColor;
        comptime _ = @TypeOf(newColor)._is_QColor;
        const newColorName_str = qtc.libqt_string{
            .len = newColorName.len,
            .data = newColorName.ptr,
        };
        return qtc.KColorCollection_ChangeColor32(@ptrCast(self.ptr), @ptrCast(oldColor.ptr), @ptrCast(newColor.ptr), newColorName_str);
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
    /// ` self: KColorCollection `
    ///
    pub fn Delete(self: KColorCollection) void {
        qtc.KColorCollection_Delete(@ptrCast(self.ptr));
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
