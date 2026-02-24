const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const embeddedimagedata_enums = @import("libembeddedimagedata.zig").enums;
const properties_enums = @import("libproperties.zig").enums;
const std = @import("std");
const arraymap_i32_sliceqtcqvariant = std.AutoArrayHashMapUnmanaged(i32, []QtC.QVariant);
const arraymap_i32_u8 = std.AutoArrayHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html)
pub const kfilemetadata__writedata = struct {
    /// New constructs a new KFileMetaData::WriteData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    /// ` mimetype: []const u8 `
    ///
    pub fn New(url: []const u8, mimetype: []const u8) QtC.KFileMetaData__WriteData {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };

        return qtc.KFileMetaData__WriteData_new(url_str, mimetype_str);
    }

    /// New2 constructs a new KFileMetaData::WriteData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: QtC.KFileMetaData__WriteData `
    ///
    pub fn New2(rhs: ?*anyopaque) QtC.KFileMetaData__WriteData {
        return qtc.KFileMetaData__WriteData_new2(@ptrCast(rhs));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__WriteData `
    ///
    /// ` rhs: QtC.KFileMetaData__WriteData `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.KFileMetaData__WriteData_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__WriteData `
    ///
    /// ` rhs: QtC.KFileMetaData__WriteData `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.KFileMetaData__WriteData_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#inputUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__WriteData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__WriteData_InputUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__writedata.InputUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#inputMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__WriteData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputMimetype(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__WriteData_InputMimetype(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__writedata.InputMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__WriteData `
    ///
    /// ` property: properties_enums.Property `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn Add(self: ?*anyopaque, property: i32, value: ?*anyopaque) void {
        qtc.KFileMetaData__WriteData_Add(@ptrCast(self), @bitCast(property), @ptrCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#addImageData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__WriteData `
    ///
    /// ` images: arraymap_i32_u8 (key: embeddedimagedata_enums.ImageType) `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AddImageData(self: ?*anyopaque, images: arraymap_i32_u8, allocator: std.mem.Allocator) void {
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
        qtc.KFileMetaData__WriteData_AddImageData(@ptrCast(self), images_map);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__WriteData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` arraymap_i32_sliceqtcqvariant (key: properties_enums.Property) `
    ///
    pub fn Properties(self: ?*anyopaque, allocator: std.mem.Allocator) arraymap_i32_sliceqtcqvariant {
        const _map: qtc.libqt_map = qtc.KFileMetaData__WriteData_Properties(@ptrCast(self));
        var _ret: arraymap_i32_sliceqtcqvariant = .empty;
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
            const _value_slice = allocator.alloc(QtC.QVariant, _value.len) catch @panic("kfilemetadata__writedata.Properties: Memory allocation failed");
            const _value_data: [*]QtC.QVariant = @ptrCast(@alignCast(_value.data));
            @memcpy(_value_slice, _value_data);
            _ret.put(allocator, _key, @ptrCast(_value_slice)) catch @panic("kfilemetadata__writedata.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#imageData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__WriteData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` arraymap_i32_u8 (key: embeddedimagedata_enums.ImageType) `
    ///
    pub fn ImageData(self: ?*anyopaque, allocator: std.mem.Allocator) arraymap_i32_u8 {
        const _map: qtc.libqt_map = qtc.KFileMetaData__WriteData_ImageData(@ptrCast(self));
        var _ret: arraymap_i32_u8 = .empty;
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
    /// ` self: QtC.KFileMetaData__WriteData `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KFileMetaData__WriteData_Delete(@ptrCast(self));
    }
};
