const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const embeddedimagedata_enums = @import("libembeddedimagedata.zig").enums;
const extractionresult_enums = @import("libextractionresult.zig").enums;
const properties_enums = @import("libproperties.zig").enums;
const std = @import("std");
const types_enums = @import("libtypes.zig").enums;
const map_i32_sliceqtcqvariant = std.AutoHashMapUnmanaged(i32, []QtC.QVariant);
const map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html)
pub const kfilemetadata__simpleextractionresult = struct {
    /// New constructs a new KFileMetaData::SimpleExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    pub fn New(url: []const u8) QtC.KFileMetaData__SimpleExtractionResult {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };

        return qtc.KFileMetaData__SimpleExtractionResult_new(url_str);
    }

    /// New2 constructs a new KFileMetaData::SimpleExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    pub fn New2(rhs: ?*anyopaque) QtC.KFileMetaData__SimpleExtractionResult {
        return qtc.KFileMetaData__SimpleExtractionResult_new2(@ptrCast(rhs));
    }

    /// New3 constructs a new KFileMetaData::SimpleExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    /// ` mimetype: []const u8 `
    ///
    pub fn New3(url: []const u8, mimetype: []const u8) QtC.KFileMetaData__SimpleExtractionResult {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };

        return qtc.KFileMetaData__SimpleExtractionResult_new3(url_str, mimetype_str);
    }

    /// New4 constructs a new KFileMetaData::SimpleExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    /// ` mimetype: []const u8 `
    ///
    /// ` flags: *const flag of extractionresult_enums.Flag `
    ///
    pub fn New4(url: []const u8, mimetype: []const u8, flags: *const i32) QtC.KFileMetaData__SimpleExtractionResult {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };

        return qtc.KFileMetaData__SimpleExtractionResult_new4(url_str, mimetype_str, @ptrCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` rhs: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.KFileMetaData__SimpleExtractionResult_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` rhs: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.KFileMetaData__SimpleExtractionResult_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` property: properties_enums.Property `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn Add(self: ?*anyopaque, property: i32, value: ?*anyopaque) void {
        qtc.KFileMetaData__SimpleExtractionResult_Add(@ptrCast(self), @intCast(property), @ptrCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#add)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` callback: *const fn (self: QtC.KFileMetaData__SimpleExtractionResult, property: properties_enums.Property, value: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnAdd(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KFileMetaData__SimpleExtractionResult_OnAdd(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#add)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` property: properties_enums.Property `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn QBaseAdd(self: ?*anyopaque, property: i32, value: ?*anyopaque) void {
        qtc.KFileMetaData__SimpleExtractionResult_QBaseAdd(@ptrCast(self), @intCast(property), @ptrCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#addType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` typeVal: types_enums.Type `
    ///
    pub fn AddType(self: ?*anyopaque, typeVal: i32) void {
        qtc.KFileMetaData__SimpleExtractionResult_AddType(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#addType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` callback: *const fn (self: QtC.KFileMetaData__SimpleExtractionResult, typeVal: types_enums.Type) callconv(.c) void `
    ///
    pub fn OnAddType(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KFileMetaData__SimpleExtractionResult_OnAddType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#addType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` typeVal: types_enums.Type `
    ///
    pub fn QBaseAddType(self: ?*anyopaque, typeVal: i32) void {
        qtc.KFileMetaData__SimpleExtractionResult_QBaseAddType(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Append(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFileMetaData__SimpleExtractionResult_Append(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#append)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` callback: *const fn (self: QtC.KFileMetaData__SimpleExtractionResult, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAppend(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KFileMetaData__SimpleExtractionResult_OnAppend(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#append)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` text: []const u8 `
    ///
    pub fn QBaseAppend(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFileMetaData__SimpleExtractionResult_QBaseAppend(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` map_i32_sliceqtcqvariant (key: properties_enums.Property) `
    ///
    pub fn Properties(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_sliceqtcqvariant {
        const _map: qtc.libqt_map = qtc.KFileMetaData__SimpleExtractionResult_Properties(@ptrCast(self));
        var _ret: map_i32_sliceqtcqvariant = .empty;
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
            const _value_slice = allocator.alloc(QtC.QVariant, _value.len) catch @panic("kfilemetadata__simpleextractionresult.Properties: Memory allocation failed");
            const _value_data: [*]QtC.QVariant = @ptrCast(@alignCast(_value.data));
            @memcpy(_value_slice, _value_data);
            _ret.put(allocator, _key, @ptrCast(_value_slice)) catch @panic("kfilemetadata__simpleextractionresult.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__SimpleExtractionResult_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__simpleextractionresult.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#types)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []types_enums.Type `
    ///
    pub fn Types(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KFileMetaData__SimpleExtractionResult_Types(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kfilemetadata__simpleextractionresult.Types: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KFileMetaData::ExtractionResult
    ///
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__ExtractionResult_InputUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__simpleextractionresult.InputUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KFileMetaData::ExtractionResult
    ///
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputMimetype(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__ExtractionResult_InputMimetype(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__simpleextractionresult.InputMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KFileMetaData::ExtractionResult
    ///
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ## Returns:
    ///
    /// ` flag of extractionresult_enums.Flag `
    ///
    pub fn InputFlags(self: ?*anyopaque) i32 {
        return qtc.KFileMetaData__ExtractionResult_InputFlags(@ptrCast(self));
    }

    /// Inherited from KFileMetaData::ExtractionResult
    ///
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#imageData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` map_i32_u8 (key: embeddedimagedata_enums.ImageType) `
    ///
    pub fn ImageData(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KFileMetaData__ExtractionResult_ImageData(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kfilemetadata__simpleextractionresult.ImageData: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("kfilemetadata__simpleextractionresult.ImageData: Memory allocation failed");
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KFileMetaData__SimpleExtractionResult `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFileMetaData__SimpleExtractionResult_Delete(@ptrCast(self));
    }
};
