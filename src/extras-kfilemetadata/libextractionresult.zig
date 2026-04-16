const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const embeddedimagedata_enums = @import("libembeddedimagedata.zig").enums;
const extractionresult_enums = enums;
const properties_enums = @import("libproperties.zig").enums;
const std = @import("std");
const types_enums = @import("libtypes.zig").enums;
const ArrayMap_i32_u8 = std.array_hash_map.Auto(i32, []u8);

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html)
pub const KFileMetaData__ExtractionResult = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileMetaData__ExtractionResult,

    pub const _is_KFileMetaData__ExtractionResult = {};

    /// New constructs a new KFileMetaData::ExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    pub fn New(url: []const u8) KFileMetaData__ExtractionResult {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__ExtractionResult_new(url_str) };
    }

    /// New2 constructs a new KFileMetaData::ExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: KFileMetaData__ExtractionResult `
    ///
    pub fn New2(rhs: anytype) KFileMetaData__ExtractionResult {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__ExtractionResult;
        return .{ .ptr = qtc.KFileMetaData__ExtractionResult_new2(@ptrCast(rhs.ptr)) };
    }

    /// New3 constructs a new KFileMetaData::ExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    /// ` mimetype: []const u8 `
    ///
    pub fn New3(url: []const u8, mimetype: []const u8) KFileMetaData__ExtractionResult {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__ExtractionResult_new3(url_str, mimetype_str) };
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
    pub fn New4(url: []const u8, mimetype: []const u8, flags: *const i32) KFileMetaData__ExtractionResult {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__ExtractionResult_new4(url_str, mimetype_str, @ptrCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputUrl(self: KFileMetaData__ExtractionResult, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__ExtractionResult_InputUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__extractionresult.InputUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputMimetype(self: KFileMetaData__ExtractionResult, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__ExtractionResult_InputMimetype(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__extractionresult.InputMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ## Returns:
    ///
    /// ` flag of extractionresult_enums.Flag `
    ///
    pub fn InputFlags(self: KFileMetaData__ExtractionResult) i32 {
        return qtc.KFileMetaData__ExtractionResult_InputFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Append(self: KFileMetaData__ExtractionResult, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFileMetaData__ExtractionResult_Append(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#append)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ` callback: *const fn (self: KFileMetaData__ExtractionResult, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAppend(self: KFileMetaData__ExtractionResult, callback: *const fn (KFileMetaData__ExtractionResult, [*:0]const u8) callconv(.c) void) void {
        qtc.KFileMetaData__ExtractionResult_OnAppend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAppend` instead
    ///
    pub const QBaseAppend = SuperAppend;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#append)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperAppend(self: KFileMetaData__ExtractionResult, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFileMetaData__ExtractionResult_SuperAppend(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ` property: properties_enums.Property `
    ///
    /// ` value: QVariant `
    ///
    pub fn Add(self: KFileMetaData__ExtractionResult, property: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KFileMetaData__ExtractionResult_Add(@ptrCast(self.ptr), @bitCast(property), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#add)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ` callback: *const fn (self: KFileMetaData__ExtractionResult, property: properties_enums.Property, value: QVariant) callconv(.c) void `
    ///
    pub fn OnAdd(self: KFileMetaData__ExtractionResult, callback: *const fn (KFileMetaData__ExtractionResult, i32, QVariant) callconv(.c) void) void {
        qtc.KFileMetaData__ExtractionResult_OnAdd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAdd` instead
    ///
    pub const QBaseAdd = SuperAdd;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#add)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ` property: properties_enums.Property `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperAdd(self: KFileMetaData__ExtractionResult, property: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KFileMetaData__ExtractionResult_SuperAdd(@ptrCast(self.ptr), @bitCast(property), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#addType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ` typeVal: types_enums.Type `
    ///
    pub fn AddType(self: KFileMetaData__ExtractionResult, typeVal: i32) void {
        qtc.KFileMetaData__ExtractionResult_AddType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#addType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ` callback: *const fn (self: KFileMetaData__ExtractionResult, typeVal: types_enums.Type) callconv(.c) void `
    ///
    pub fn OnAddType(self: KFileMetaData__ExtractionResult, callback: *const fn (KFileMetaData__ExtractionResult, i32) callconv(.c) void) void {
        qtc.KFileMetaData__ExtractionResult_OnAddType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddType` instead
    ///
    pub const QBaseAddType = SuperAddType;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#addType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ` typeVal: types_enums.Type `
    ///
    pub fn SuperAddType(self: KFileMetaData__ExtractionResult, typeVal: i32) void {
        qtc.KFileMetaData__ExtractionResult_SuperAddType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#imageData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_u8 (key: embeddedimagedata_enums.ImageType) `
    ///
    pub fn ImageData(self: KFileMetaData__ExtractionResult, allocator: std.mem.Allocator) ArrayMap_i32_u8 {
        const _map: qtc.libqt_map = qtc.KFileMetaData__ExtractionResult_ImageData(@ptrCast(self.ptr));
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kfilemetadata__extractionresult.ImageData: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("kfilemetadata__extractionresult.ImageData: Memory allocation failed");
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
    /// ` self: KFileMetaData__ExtractionResult `
    ///
    pub fn Delete(self: KFileMetaData__ExtractionResult) void {
        qtc.KFileMetaData__ExtractionResult_Delete(@ptrCast(self.ptr));
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
