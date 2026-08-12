const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const embeddedimagedata_enums = @import("libembeddedimagedata.zig").enums;
const properties_enums = @import("libproperties.zig").enums;
const std = @import("std");
const ArrayMap_i32_SliceQVariant = std.array_hash_map.Auto(i32, []QVariant);
const ArrayMap_i32_u8 = std.array_hash_map.Auto(i32, []u8);

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html)
pub const KFileMetaData__WriteData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileMetaData__WriteData,

    pub const _is_KFileMetaData__WriteData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFileMetaData::WriteData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    /// ` mimetype: []const u8 `
    ///
    pub fn new(url: []const u8, mimetype: []const u8) KFileMetaData__WriteData {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__WriteData_new(url_str, mimetype_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFileMetaData::WriteData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: KFileMetaData__WriteData `
    ///
    pub fn new2(rhs: anytype) KFileMetaData__WriteData {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__WriteData;
        return .{ .ptr = qtc.KFileMetaData__WriteData_new2(@ptrCast(rhs.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    /// ` rhs: KFileMetaData__WriteData `
    ///
    pub fn operatorAssign(self: KFileMetaData__WriteData, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__WriteData;
        qtc.KFileMetaData__WriteData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    /// ` rhs: KFileMetaData__WriteData `
    ///
    pub fn operatorEqual(self: KFileMetaData__WriteData, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__WriteData;
        return qtc.KFileMetaData__WriteData_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `inputUrl` instead
    ///
    pub const InputUrl = inputUrl;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#inputUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn inputUrl(self: KFileMetaData__WriteData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__WriteData_InputUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__WriteData.inputUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `inputMimetype` instead
    ///
    pub const InputMimetype = inputMimetype;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#inputMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn inputMimetype(self: KFileMetaData__WriteData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__WriteData_InputMimetype(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__WriteData.inputMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `add` instead
    ///
    pub const Add = add;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    /// ` property: properties_enums.Property `
    ///
    /// ` value: QVariant `
    ///
    pub fn add(self: KFileMetaData__WriteData, property: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KFileMetaData__WriteData_Add(@ptrCast(self.ptr), @bitCast(property), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `addImageData` instead
    ///
    pub const AddImageData = addImageData;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#addImageData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` images: ArrayMap_i32_u8 (key: embeddedimagedata_enums.ImageType) `
    ///
    pub fn addImageData(self: KFileMetaData__WriteData, allocator: std.mem.Allocator, images: ArrayMap_i32_u8) void {
        const images_count = images.count();
        const images_keys = allocator.alloc(i32, images_count) catch @panic("KFileMetaData__WriteData.addImageData: Memory allocation failed");
        defer allocator.free(images_keys);
        const images_values = allocator.alloc(qtc.libqt_string, images_count) catch @panic("KFileMetaData__WriteData.addImageData: Memory allocation failed");
        defer allocator.free(images_values);
        var i: usize = 0;
        var images_it = images.iterator();
        while (images_it.next()) |it_entry| : (i += 1) {
            const images_key = it_entry.key_ptr.*;
            images_keys[i] = @bitCast(images_key);
            const value = it_entry.value_ptr.*;
            images_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const images_map = qtc.libqt_map{
            .len = images_count,
            .keys = @ptrCast(images_keys.ptr),
            .values = @ptrCast(images_values.ptr),
        };
        qtc.KFileMetaData__WriteData_AddImageData(@ptrCast(self.ptr), images_map);
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_SliceQVariant (key: properties_enums.Property) `
    ///
    pub fn properties(self: KFileMetaData__WriteData, allocator: std.mem.Allocator) ArrayMap_i32_SliceQVariant {
        const _map: qtc.libqt_map = qtc.KFileMetaData__WriteData_Properties(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_SliceQVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KFileMetaData__WriteData.properties: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(QVariant, _value.len) catch @panic("KFileMetaData__WriteData.properties: Memory allocation failed");
            const _value_data: [*]QtC.QVariant = @ptrCast(@alignCast(_value.data));
            for (0.._value.len) |j|
                _value_slice[j] = .{ .ptr = _value_data[j] };
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `imageData` instead
    ///
    pub const ImageData = imageData;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#imageData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_u8 (key: embeddedimagedata_enums.ImageType) `
    ///
    pub fn imageData(self: KFileMetaData__WriteData, allocator: std.mem.Allocator) ArrayMap_i32_u8 {
        const _map: qtc.libqt_map = qtc.KFileMetaData__WriteData_ImageData(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KFileMetaData__WriteData.imageData: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KFileMetaData__WriteData.imageData: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    pub fn delete(self: KFileMetaData__WriteData) void {
        qtc.KFileMetaData__WriteData_Delete(@ptrCast(self.ptr));
    }
};
