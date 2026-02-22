const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const embeddedimagedata_enums = @import("libembeddedimagedata.zig").enums;
const extractionresult_enums = enums;
const properties_enums = @import("libproperties.zig").enums;
const std = @import("std");
const types_enums = @import("libtypes.zig").enums;
const arraymap_i32_u8 = std.AutoArrayHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html)
pub const kfilemetadata__extractionresult = struct {
    /// New constructs a new KFileMetaData::ExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    pub fn New(url: []const u8) QtC.KFileMetaData__ExtractionResult {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };

        return qtc.KFileMetaData__ExtractionResult_new(url_str);
    }

    /// New2 constructs a new KFileMetaData::ExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: QtC.KFileMetaData__ExtractionResult `
    ///
    pub fn New2(rhs: ?*anyopaque) QtC.KFileMetaData__ExtractionResult {
        return qtc.KFileMetaData__ExtractionResult_new2(@ptrCast(rhs));
    }

    /// New3 constructs a new KFileMetaData::ExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    /// ` mimetype: []const u8 `
    ///
    pub fn New3(url: []const u8, mimetype: []const u8) QtC.KFileMetaData__ExtractionResult {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };

        return qtc.KFileMetaData__ExtractionResult_new3(url_str, mimetype_str);
    }

    /// New4 constructs a new KFileMetaData::ExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    /// ` mimetype: []const u8 `
    ///
    /// ` flags: *const flag of extractionresult_enums.Flag `
    ///
    pub fn New4(url: []const u8, mimetype: []const u8, flags: *const i32) QtC.KFileMetaData__ExtractionResult {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };

        return qtc.KFileMetaData__ExtractionResult_new4(url_str, mimetype_str, @ptrCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__ExtractionResult_InputUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__extractionresult.InputUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputMimetype(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__ExtractionResult_InputMimetype(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__extractionresult.InputMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ## Returns:
    ///
    /// ` flag of extractionresult_enums.Flag `
    ///
    pub fn InputFlags(self: ?*anyopaque) i32 {
        return qtc.KFileMetaData__ExtractionResult_InputFlags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Append(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFileMetaData__ExtractionResult_Append(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#append)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ` callback: *const fn (self: QtC.KFileMetaData__ExtractionResult, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAppend(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KFileMetaData__ExtractionResult_OnAppend(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#append)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ` text: []const u8 `
    ///
    pub fn QBaseAppend(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFileMetaData__ExtractionResult_QBaseAppend(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ` property: properties_enums.Property `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn Add(self: ?*anyopaque, property: i32, value: ?*anyopaque) void {
        qtc.KFileMetaData__ExtractionResult_Add(@ptrCast(self), @bitCast(property), @ptrCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#add)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ` callback: *const fn (self: QtC.KFileMetaData__ExtractionResult, property: properties_enums.Property, value: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnAdd(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KFileMetaData__ExtractionResult_OnAdd(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#add)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ` property: properties_enums.Property `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn QBaseAdd(self: ?*anyopaque, property: i32, value: ?*anyopaque) void {
        qtc.KFileMetaData__ExtractionResult_QBaseAdd(@ptrCast(self), @bitCast(property), @ptrCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#addType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ` typeVal: types_enums.Type `
    ///
    pub fn AddType(self: ?*anyopaque, typeVal: i32) void {
        qtc.KFileMetaData__ExtractionResult_AddType(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#addType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ` callback: *const fn (self: QtC.KFileMetaData__ExtractionResult, typeVal: types_enums.Type) callconv(.c) void `
    ///
    pub fn OnAddType(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KFileMetaData__ExtractionResult_OnAddType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#addType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ` typeVal: types_enums.Type `
    ///
    pub fn QBaseAddType(self: ?*anyopaque, typeVal: i32) void {
        qtc.KFileMetaData__ExtractionResult_QBaseAddType(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#imageData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` arraymap_i32_u8 (key: embeddedimagedata_enums.ImageType) `
    ///
    pub fn ImageData(self: ?*anyopaque, allocator: std.mem.Allocator) arraymap_i32_u8 {
        const _map: qtc.libqt_map = qtc.KFileMetaData__ExtractionResult_ImageData(@ptrCast(self));
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kfilemetadata__extractionresult.ImageData: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("kfilemetadata__extractionresult.ImageData: Memory allocation failed");
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KFileMetaData__ExtractionResult `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFileMetaData__ExtractionResult_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#public-types)
pub const enums = struct {
    pub const Flag = enum(i32) {
        pub const ExtractNothing: i32 = 0;
        pub const ExtractMetaData: i32 = 1;
        pub const ExtractPlainText: i32 = 2;
        pub const ExtractImageData: i32 = 4;
    };
};
