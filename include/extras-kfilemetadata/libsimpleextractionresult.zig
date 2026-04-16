const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const embeddedimagedata_enums = @import("libembeddedimagedata.zig").enums;
const extractionresult_enums = @import("libextractionresult.zig").enums;
const properties_enums = @import("libproperties.zig").enums;
const std = @import("std");
const types_enums = @import("libtypes.zig").enums;
const ArrayMap_i32_SliceQVariant = std.array_hash_map.Auto(i32, []QVariant);
const ArrayMap_i32_u8 = std.array_hash_map.Auto(i32, []u8);

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html)
pub const KFileMetaData__SimpleExtractionResult = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileMetaData__SimpleExtractionResult,

    pub const _is_KFileMetaData__SimpleExtractionResult = {};
    pub const _is_KFileMetaData__ExtractionResult = {};

    /// New constructs a new KFileMetaData::SimpleExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    pub fn New(url: []const u8) KFileMetaData__SimpleExtractionResult {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__SimpleExtractionResult_new(url_str) };
    }

    /// New2 constructs a new KFileMetaData::SimpleExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: KFileMetaData__SimpleExtractionResult `
    ///
    pub fn New2(rhs: anytype) KFileMetaData__SimpleExtractionResult {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__SimpleExtractionResult;
        return .{ .ptr = qtc.KFileMetaData__SimpleExtractionResult_new2(@ptrCast(rhs.ptr)) };
    }

    /// New3 constructs a new KFileMetaData::SimpleExtractionResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    /// ` mimetype: []const u8 `
    ///
    pub fn New3(url: []const u8, mimetype: []const u8) KFileMetaData__SimpleExtractionResult {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__SimpleExtractionResult_new3(url_str, mimetype_str) };
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
    pub fn New4(url: []const u8, mimetype: []const u8, flags: *const i32) KFileMetaData__SimpleExtractionResult {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__SimpleExtractionResult_new4(url_str, mimetype_str, @ptrCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` rhs: KFileMetaData__SimpleExtractionResult `
    ///
    pub fn OperatorAssign(self: KFileMetaData__SimpleExtractionResult, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__SimpleExtractionResult;
        qtc.KFileMetaData__SimpleExtractionResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` rhs: KFileMetaData__SimpleExtractionResult `
    ///
    pub fn OperatorEqual(self: KFileMetaData__SimpleExtractionResult, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__SimpleExtractionResult;
        return qtc.KFileMetaData__SimpleExtractionResult_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` property: properties_enums.Property `
    ///
    /// ` value: QVariant `
    ///
    pub fn Add(self: KFileMetaData__SimpleExtractionResult, property: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KFileMetaData__SimpleExtractionResult_Add(@ptrCast(self.ptr), @bitCast(property), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#add)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` callback: *const fn (self: KFileMetaData__SimpleExtractionResult, property: properties_enums.Property, value: QVariant) callconv(.c) void `
    ///
    pub fn OnAdd(self: KFileMetaData__SimpleExtractionResult, callback: *const fn (KFileMetaData__SimpleExtractionResult, i32, QVariant) callconv(.c) void) void {
        qtc.KFileMetaData__SimpleExtractionResult_OnAdd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAdd` instead
    ///
    pub const QBaseAdd = SuperAdd;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#add)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` property: properties_enums.Property `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperAdd(self: KFileMetaData__SimpleExtractionResult, property: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KFileMetaData__SimpleExtractionResult_SuperAdd(@ptrCast(self.ptr), @bitCast(property), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#addType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` typeVal: types_enums.Type `
    ///
    pub fn AddType(self: KFileMetaData__SimpleExtractionResult, typeVal: i32) void {
        qtc.KFileMetaData__SimpleExtractionResult_AddType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#addType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` callback: *const fn (self: KFileMetaData__SimpleExtractionResult, typeVal: types_enums.Type) callconv(.c) void `
    ///
    pub fn OnAddType(self: KFileMetaData__SimpleExtractionResult, callback: *const fn (KFileMetaData__SimpleExtractionResult, i32) callconv(.c) void) void {
        qtc.KFileMetaData__SimpleExtractionResult_OnAddType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddType` instead
    ///
    pub const QBaseAddType = SuperAddType;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#addType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` typeVal: types_enums.Type `
    ///
    pub fn SuperAddType(self: KFileMetaData__SimpleExtractionResult, typeVal: i32) void {
        qtc.KFileMetaData__SimpleExtractionResult_SuperAddType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Append(self: KFileMetaData__SimpleExtractionResult, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFileMetaData__SimpleExtractionResult_Append(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#append)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` callback: *const fn (self: KFileMetaData__SimpleExtractionResult, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAppend(self: KFileMetaData__SimpleExtractionResult, callback: *const fn (KFileMetaData__SimpleExtractionResult, [*:0]const u8) callconv(.c) void) void {
        qtc.KFileMetaData__SimpleExtractionResult_OnAppend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAppend` instead
    ///
    pub const QBaseAppend = SuperAppend;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#append)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperAppend(self: KFileMetaData__SimpleExtractionResult, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFileMetaData__SimpleExtractionResult_SuperAppend(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_SliceQVariant (key: properties_enums.Property) `
    ///
    pub fn Properties(self: KFileMetaData__SimpleExtractionResult, allocator: std.mem.Allocator) ArrayMap_i32_SliceQVariant {
        const _map: qtc.libqt_map = qtc.KFileMetaData__SimpleExtractionResult_Properties(@ptrCast(self.ptr));
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
            const _value_slice = allocator.alloc(QVariant, _value.len) catch @panic("kfilemetadata__simpleextractionresult.Properties: Memory allocation failed");
            const _value_data: [*]QtC.QVariant = @ptrCast(@alignCast(_value.data));
            for (0.._value.len) |ii|
                _value_slice[ii] = .{ .ptr = _value_data[ii] };
            _ret.put(allocator, _key, _value_slice) catch @panic("kfilemetadata__simpleextractionresult.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KFileMetaData__SimpleExtractionResult, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__SimpleExtractionResult_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__simpleextractionresult.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#types)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []types_enums.Type `
    ///
    pub fn Types(self: KFileMetaData__SimpleExtractionResult, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KFileMetaData__SimpleExtractionResult_Types(@ptrCast(self.ptr));
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
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputUrl(self: KFileMetaData__SimpleExtractionResult, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__ExtractionResult_InputUrl(@ptrCast(self.ptr));
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
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputMimetype(self: KFileMetaData__SimpleExtractionResult, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__ExtractionResult_InputMimetype(@ptrCast(self.ptr));
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
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ## Returns:
    ///
    /// ` flag of extractionresult_enums.Flag `
    ///
    pub fn InputFlags(self: KFileMetaData__SimpleExtractionResult) i32 {
        return qtc.KFileMetaData__ExtractionResult_InputFlags(@ptrCast(self.ptr));
    }

    /// Inherited from KFileMetaData::ExtractionResult
    ///
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#imageData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_u8 (key: embeddedimagedata_enums.ImageType) `
    ///
    pub fn ImageData(self: KFileMetaData__SimpleExtractionResult, allocator: std.mem.Allocator) ArrayMap_i32_u8 {
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kfilemetadata__simpleextractionresult.ImageData: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("kfilemetadata__simpleextractionresult.ImageData: Memory allocation failed");
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
    /// ` self: KFileMetaData__SimpleExtractionResult `
    ///
    pub fn Delete(self: KFileMetaData__SimpleExtractionResult) void {
        qtc.KFileMetaData__SimpleExtractionResult_Delete(@ptrCast(self.ptr));
    }
};
