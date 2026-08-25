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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KColorCollection object in C++ memory
    ///
    pub fn new() KColorCollection {
        return .{ .ptr = qtc.KColorCollection_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KColorCollection object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KColorCollection `
    ///
    pub fn new2(param1: anytype) KColorCollection {
        comptime _ = @TypeOf(param1)._is_KColorCollection;
        return .{ .ptr = qtc.KColorCollection_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KColorCollection object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new3(_name: []const u8) KColorCollection {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KColorCollection_new3(name_str) };
    }

    /// ### DEPRECATED: Use `installedCollections` instead
    ///
    pub const InstalledCollections = installedCollections;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#installedCollections)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn installedCollections(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KColorCollection_InstalledCollections();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KColorCollection.installedCollections: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KColorCollection.installedCollections: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` param1: KColorCollection `
    ///
    pub fn operatorAssign(self: KColorCollection, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KColorCollection;
        qtc.KColorCollection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    pub fn save(self: KColorCollection) bool {
        return qtc.KColorCollection_Save(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: KColorCollection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KColorCollection_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KColorCollection.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` desc: []const u8 `
    ///
    pub fn setDescription(self: KColorCollection, desc: []const u8) void {
        const desc_str = qtc.libqt_string{
            .len = desc.len,
            .data = desc.ptr,
        };
        qtc.KColorCollection_SetDescription(@ptrCast(self.ptr), desc_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KColorCollection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KColorCollection_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KColorCollection.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KColorCollection, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KColorCollection_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `editable` instead
    ///
    pub const Editable = editable;

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
    pub fn editable(self: KColorCollection) i32 {
        return qtc.KColorCollection_Editable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEditable` instead
    ///
    pub const SetEditable = setEditable;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#setEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` _editable: kcolorcollection_enums.Editable `
    ///
    pub fn setEditable(self: KColorCollection, _editable: i32) void {
        qtc.KColorCollection_SetEditable(@ptrCast(self.ptr), @bitCast(_editable));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    pub fn count(self: KColorCollection) i32 {
        return qtc.KColorCollection_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` index: i32 `
    ///
    pub fn color(self: KColorCollection, index: i32) QColor {
        return .{ .ptr = qtc.KColorCollection_Color(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `findColor` instead
    ///
    pub const FindColor = findColor;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#findColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` _color: QColor `
    ///
    pub fn findColor(self: KColorCollection, _color: anytype) i32 {
        comptime _ = @TypeOf(_color)._is_QColor;
        return qtc.KColorCollection_FindColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `name2` instead
    ///
    pub const Name2 = name2;

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
    pub fn name2(self: KColorCollection, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.KColorCollection_Name2(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KColorCollection.name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name3` instead
    ///
    pub const Name3 = name3;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _color: QColor `
    ///
    pub fn name3(self: KColorCollection, allocator: std.mem.Allocator, _color: anytype) []const u8 {
        comptime _ = @TypeOf(_color)._is_QColor;
        var _str = qtc.KColorCollection_Name3(@ptrCast(self.ptr), @ptrCast(_color.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KColorCollection.name3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addColor` instead
    ///
    pub const AddColor = addColor;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#addColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorCollection `
    ///
    /// ` newColor: QColor `
    ///
    pub fn addColor(self: KColorCollection, newColor: anytype) i32 {
        comptime _ = @TypeOf(newColor)._is_QColor;
        return qtc.KColorCollection_AddColor(@ptrCast(self.ptr), @ptrCast(newColor.ptr));
    }

    /// ### DEPRECATED: Use `changeColor` instead
    ///
    pub const ChangeColor = changeColor;

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
    pub fn changeColor(self: KColorCollection, index: i32, newColor: anytype) i32 {
        comptime _ = @TypeOf(newColor)._is_QColor;
        return qtc.KColorCollection_ChangeColor(@ptrCast(self.ptr), @bitCast(index), @ptrCast(newColor.ptr));
    }

    /// ### DEPRECATED: Use `changeColor2` instead
    ///
    pub const ChangeColor2 = changeColor2;

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
    pub fn changeColor2(self: KColorCollection, oldColor: anytype, newColor: anytype) i32 {
        comptime _ = @TypeOf(oldColor)._is_QColor;
        comptime _ = @TypeOf(newColor)._is_QColor;
        return qtc.KColorCollection_ChangeColor2(@ptrCast(self.ptr), @ptrCast(oldColor.ptr), @ptrCast(newColor.ptr));
    }

    /// ### DEPRECATED: Use `addColor2` instead
    ///
    pub const AddColor2 = addColor2;

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
    pub fn addColor2(self: KColorCollection, newColor: anytype, newColorName: []const u8) i32 {
        comptime _ = @TypeOf(newColor)._is_QColor;
        const newColorName_str = qtc.libqt_string{
            .len = newColorName.len,
            .data = newColorName.ptr,
        };
        return qtc.KColorCollection_AddColor2(@ptrCast(self.ptr), @ptrCast(newColor.ptr), newColorName_str);
    }

    /// ### DEPRECATED: Use `changeColor3` instead
    ///
    pub const ChangeColor3 = changeColor3;

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
    pub fn changeColor3(self: KColorCollection, index: i32, newColor: anytype, newColorName: []const u8) i32 {
        comptime _ = @TypeOf(newColor)._is_QColor;
        const newColorName_str = qtc.libqt_string{
            .len = newColorName.len,
            .data = newColorName.ptr,
        };
        return qtc.KColorCollection_ChangeColor3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(newColor.ptr), newColorName_str);
    }

    /// ### DEPRECATED: Use `changeColor32` instead
    ///
    pub const ChangeColor32 = changeColor32;

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
    pub fn changeColor32(self: KColorCollection, oldColor: anytype, newColor: anytype, newColorName: []const u8) i32 {
        comptime _ = @TypeOf(oldColor)._is_QColor;
        comptime _ = @TypeOf(newColor)._is_QColor;
        const newColorName_str = qtc.libqt_string{
            .len = newColorName.len,
            .data = newColorName.ptr,
        };
        return qtc.KColorCollection_ChangeColor32(@ptrCast(self.ptr), @ptrCast(oldColor.ptr), @ptrCast(newColor.ptr), newColorName_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#dtor.KColorCollection)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KColorCollection `
    ///
    pub fn delete(self: KColorCollection) void {
        qtc.KColorCollection_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcolorcollection.html#public-types)
pub const enums = struct {
    pub const Editable = enum {
        pub const Yes: i32 = 0;
        pub const No: i32 = 1;
        pub const Ask: i32 = 2;
    };
};
