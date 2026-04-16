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

    /// New constructs a new KFileMetaData::WriteData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    /// ` mimetype: []const u8 `
    ///
    pub fn New(url: []const u8, mimetype: []const u8) KFileMetaData__WriteData {
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

    /// New2 constructs a new KFileMetaData::WriteData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: KFileMetaData__WriteData `
    ///
    pub fn New2(rhs: anytype) KFileMetaData__WriteData {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__WriteData;
        return .{ .ptr = qtc.KFileMetaData__WriteData_new2(@ptrCast(rhs.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    /// ` rhs: KFileMetaData__WriteData `
    ///
    pub fn OperatorAssign(self: KFileMetaData__WriteData, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__WriteData;
        qtc.KFileMetaData__WriteData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    /// ` rhs: KFileMetaData__WriteData `
    ///
    pub fn OperatorEqual(self: KFileMetaData__WriteData, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__WriteData;
        return qtc.KFileMetaData__WriteData_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#inputUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputUrl(self: KFileMetaData__WriteData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__WriteData_InputUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__writedata.InputUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#inputMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputMimetype(self: KFileMetaData__WriteData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__WriteData_InputMimetype(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__writedata.InputMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Add(self: KFileMetaData__WriteData, property: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KFileMetaData__WriteData_Add(@ptrCast(self.ptr), @bitCast(property), @ptrCast(value.ptr));
    }

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
    pub fn AddImageData(self: KFileMetaData__WriteData, allocator: std.mem.Allocator, images: ArrayMap_i32_u8) void {
        const images_count = images.count();
        const images_keys = allocator.alloc(i32, images_count) catch @panic("kfilemetadata__writedata.AddImageData: Memory allocation failed");
        defer allocator.free(images_keys);
        const images_values = allocator.alloc(qtc.libqt_string, images_count) catch @panic("kfilemetadata__writedata.AddImageData: Memory allocation failed");
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
    pub fn Properties(self: KFileMetaData__WriteData, allocator: std.mem.Allocator) ArrayMap_i32_SliceQVariant {
        const _map: qtc.libqt_map = qtc.KFileMetaData__WriteData_Properties(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_SliceQVariant = .empty;
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
            const _value_slice = allocator.alloc(QVariant, _value.len) catch @panic("kfilemetadata__writedata.Properties: Memory allocation failed");
            const _value_data: [*]QtC.QVariant = @ptrCast(@alignCast(_value.data));
            for (0.._value.len) |ii|
                _value_slice[ii] = .{ .ptr = _value_data[ii] };
            _ret.put(allocator, _key, _value_slice) catch @panic("kfilemetadata__writedata.Properties: Memory allocation failed");
        }
        return _ret;
    }

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
    pub fn ImageData(self: KFileMetaData__WriteData, allocator: std.mem.Allocator) ArrayMap_i32_u8 {
        const _map: qtc.libqt_map = qtc.KFileMetaData__WriteData_ImageData(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_u8 = .empty;
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kfilemetadata__writedata.ImageData: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("kfilemetadata__writedata.ImageData: Memory allocation failed");
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileMetaData__WriteData `
    ///
    pub fn Delete(self: KFileMetaData__WriteData) void {
        qtc.KFileMetaData__WriteData_Delete(@ptrCast(self.ptr));
    }
};
