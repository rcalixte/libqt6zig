const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qhttpheaders_enums = enums;
const std = @import("std");
const ArrayMap_u8_Sliceu8 = std.array_hash_map.String([][]u8);
const Map_u8_Sliceu8 = std.StringHashMapUnmanaged([][]u8);
const Struct_u8_u8 = struct { first: []u8, second: []u8 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html)
pub const QHttpHeaders = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHttpHeaders,

    pub const _is_QHttpHeaders = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHttpHeaders object in C++ memory
    ///
    pub fn new() QHttpHeaders {
        return .{ .ptr = qtc.QHttpHeaders_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHttpHeaders object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QHttpHeaders `
    ///
    pub fn new2(other: anytype) QHttpHeaders {
        comptime _ = @TypeOf(other)._is_QHttpHeaders;
        return .{ .ptr = qtc.QHttpHeaders_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` other: QHttpHeaders `
    ///
    pub fn operatorAssign(self: QHttpHeaders, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHttpHeaders;
        qtc.QHttpHeaders_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` other: QHttpHeaders `
    ///
    pub fn swap(self: QHttpHeaders, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHttpHeaders;
        qtc.QHttpHeaders_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn append(self: QHttpHeaders, name: []const u8, _value: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        return qtc.QHttpHeaders_Append(@ptrCast(self.ptr), name_str, value_str);
    }

    /// ### DEPRECATED: Use `append2` instead
    ///
    pub const Append2 = append2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` name: qhttpheaders_enums.WellKnownHeader `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn append2(self: QHttpHeaders, name: i32, _value: []const u8) bool {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        return qtc.QHttpHeaders_Append2(@ptrCast(self.ptr), @bitCast(name), value_str);
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` i: isize `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn insert(self: QHttpHeaders, i: isize, name: []const u8, _value: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        return qtc.QHttpHeaders_Insert(@ptrCast(self.ptr), @bitCast(i), name_str, value_str);
    }

    /// ### DEPRECATED: Use `insert2` instead
    ///
    pub const Insert2 = insert2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` i: isize `
    ///
    /// ` name: qhttpheaders_enums.WellKnownHeader `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn insert2(self: QHttpHeaders, i: isize, name: i32, _value: []const u8) bool {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        return qtc.QHttpHeaders_Insert2(@ptrCast(self.ptr), @bitCast(i), @bitCast(name), value_str);
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` i: isize `
    ///
    /// ` name: []const u8 `
    ///
    /// ` newValue: []const u8 `
    ///
    pub fn replace(self: QHttpHeaders, i: isize, name: []const u8, newValue: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        return qtc.QHttpHeaders_Replace(@ptrCast(self.ptr), @bitCast(i), name_str, newValue_str);
    }

    /// ### DEPRECATED: Use `replace2` instead
    ///
    pub const Replace2 = replace2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` i: isize `
    ///
    /// ` name: qhttpheaders_enums.WellKnownHeader `
    ///
    /// ` newValue: []const u8 `
    ///
    pub fn replace2(self: QHttpHeaders, i: isize, name: i32, newValue: []const u8) bool {
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        return qtc.QHttpHeaders_Replace2(@ptrCast(self.ptr), @bitCast(i), @bitCast(name), newValue_str);
    }

    /// ### DEPRECATED: Use `replaceOrAppend` instead
    ///
    pub const ReplaceOrAppend = replaceOrAppend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#replaceOrAppend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` name: []const u8 `
    ///
    /// ` newValue: []const u8 `
    ///
    pub fn replaceOrAppend(self: QHttpHeaders, name: []const u8, newValue: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        return qtc.QHttpHeaders_ReplaceOrAppend(@ptrCast(self.ptr), name_str, newValue_str);
    }

    /// ### DEPRECATED: Use `replaceOrAppend2` instead
    ///
    pub const ReplaceOrAppend2 = replaceOrAppend2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#replaceOrAppend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` name: qhttpheaders_enums.WellKnownHeader `
    ///
    /// ` newValue: []const u8 `
    ///
    pub fn replaceOrAppend2(self: QHttpHeaders, name: i32, newValue: []const u8) bool {
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        return qtc.QHttpHeaders_ReplaceOrAppend2(@ptrCast(self.ptr), @bitCast(name), newValue_str);
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` name: []const u8 `
    ///
    pub fn contains(self: QHttpHeaders, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QHttpHeaders_Contains(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `contains2` instead
    ///
    pub const Contains2 = contains2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` name: qhttpheaders_enums.WellKnownHeader `
    ///
    pub fn contains2(self: QHttpHeaders, name: i32) bool {
        return qtc.QHttpHeaders_Contains2(@ptrCast(self.ptr), @bitCast(name));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    pub fn clear(self: QHttpHeaders) void {
        qtc.QHttpHeaders_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeAll` instead
    ///
    pub const RemoveAll = removeAll;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#removeAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` name: []const u8 `
    ///
    pub fn removeAll(self: QHttpHeaders, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QHttpHeaders_RemoveAll(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `removeAll2` instead
    ///
    pub const RemoveAll2 = removeAll2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#removeAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` name: qhttpheaders_enums.WellKnownHeader `
    ///
    pub fn removeAll2(self: QHttpHeaders, name: i32) void {
        qtc.QHttpHeaders_RemoveAll2(@ptrCast(self.ptr), @bitCast(name));
    }

    /// ### DEPRECATED: Use `removeAt` instead
    ///
    pub const RemoveAt = removeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` i: isize `
    ///
    pub fn removeAt(self: QHttpHeaders, i: isize) void {
        qtc.QHttpHeaders_RemoveAt(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn value(self: QHttpHeaders, allocator: std.mem.Allocator, name: []const u8) []u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QHttpHeaders_Value(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QHttpHeaders.value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value2` instead
    ///
    pub const Value2 = value2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: qhttpheaders_enums.WellKnownHeader `
    ///
    pub fn value2(self: QHttpHeaders, allocator: std.mem.Allocator, name: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QHttpHeaders_Value2(@ptrCast(self.ptr), @bitCast(name));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QHttpHeaders.value2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `values` instead
    ///
    pub const Values = values;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#values)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn values(self: QHttpHeaders, allocator: std.mem.Allocator, name: []const u8) [][]u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QHttpHeaders_Values(@ptrCast(self.ptr), name_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QHttpHeaders.values: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QHttpHeaders.values: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `values2` instead
    ///
    pub const Values2 = values2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#values)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: qhttpheaders_enums.WellKnownHeader `
    ///
    pub fn values2(self: QHttpHeaders, allocator: std.mem.Allocator, name: i32) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QHttpHeaders_Values2(@ptrCast(self.ptr), @bitCast(name));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QHttpHeaders.values2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QHttpHeaders.values2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `valueAt` instead
    ///
    pub const ValueAt = valueAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#valueAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` i: isize `
    ///
    pub fn valueAt(self: QHttpHeaders, allocator: std.mem.Allocator, i: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QHttpHeaders_ValueAt(@ptrCast(self.ptr), @bitCast(i));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QHttpHeaders.valueAt: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nameAt` instead
    ///
    pub const NameAt = nameAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#nameAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` i: isize `
    ///
    pub fn nameAt(self: QHttpHeaders, allocator: std.mem.Allocator, i: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QHttpHeaders_NameAt(@ptrCast(self.ptr), @bitCast(i));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QHttpHeaders.nameAt: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `combinedValue` instead
    ///
    pub const CombinedValue = combinedValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#combinedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn combinedValue(self: QHttpHeaders, allocator: std.mem.Allocator, name: []const u8) []u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QHttpHeaders_CombinedValue(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QHttpHeaders.combinedValue: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `combinedValue2` instead
    ///
    pub const CombinedValue2 = combinedValue2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#combinedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: qhttpheaders_enums.WellKnownHeader `
    ///
    pub fn combinedValue2(self: QHttpHeaders, allocator: std.mem.Allocator, name: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QHttpHeaders_CombinedValue2(@ptrCast(self.ptr), @bitCast(name));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QHttpHeaders.combinedValue2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    pub fn size(self: QHttpHeaders) isize {
        return qtc.QHttpHeaders_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reserve` instead
    ///
    pub const Reserve = reserve;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#reserve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` _size: isize `
    ///
    pub fn reserve(self: QHttpHeaders, _size: isize) void {
        qtc.QHttpHeaders_Reserve(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    pub fn isEmpty(self: QHttpHeaders) bool {
        return qtc.QHttpHeaders_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `wellKnownHeaderName` instead
    ///
    pub const WellKnownHeaderName = wellKnownHeaderName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#wellKnownHeaderName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: qhttpheaders_enums.WellKnownHeader `
    ///
    pub fn wellKnownHeaderName(allocator: std.mem.Allocator, name: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QHttpHeaders_WellKnownHeaderName(@bitCast(name));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QHttpHeaders.wellKnownHeaderName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromListOfPairs` instead
    ///
    pub const FromListOfPairs = fromListOfPairs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#fromListOfPairs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` headers: []Struct_u8_u8 `
    ///
    pub fn fromListOfPairs(allocator: std.mem.Allocator, headers: []Struct_u8_u8) QHttpHeaders {
        const headers_pairs = allocator.alloc(qtc.libqt_pair, headers.len) catch @panic("QHttpHeaders.fromListOfPairs: Memory allocation failed");
        defer allocator.free(headers_pairs);
        const headers_str = allocator.alloc(qtc.libqt_string, headers.len * 2) catch @panic("QHttpHeaders.fromListOfPairs: Memory allocation failed");
        defer allocator.free(headers_str);
        for (headers, 0..) |headers_item, i| {
            headers_str[i * 2] = qtc.libqt_string{
                .len = headers_item.first.len,
                .data = headers_item.first.ptr,
            };
            headers_str[i * 2 + 1] = qtc.libqt_string{
                .len = headers_item.second.len,
                .data = headers_item.second.ptr,
            };
            headers_pairs[i] = qtc.libqt_pair{
                .first = @ptrCast(&headers_str[i * 2]),
                .second = @ptrCast(&headers_str[i * 2 + 1]),
            };
        }
        const headers_list = qtc.libqt_list{
            .len = headers.len,
            .data = @ptrCast(headers_pairs.ptr),
        };
        return .{ .ptr = qtc.QHttpHeaders_FromListOfPairs(headers_list) };
    }

    /// ### DEPRECATED: Use `fromMultiMap` instead
    ///
    pub const FromMultiMap = fromMultiMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#fromMultiMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` headers: ArrayMap_u8_Sliceu8 `
    ///
    pub fn fromMultiMap(allocator: std.mem.Allocator, headers: ArrayMap_u8_Sliceu8) QHttpHeaders {
        const headers_count = headers.count();
        const headers_keys = allocator.alloc(qtc.libqt_string, headers_count) catch @panic("QHttpHeaders.fromMultiMap: Memory allocation failed");
        defer allocator.free(headers_keys);
        const headers_values = allocator.alloc(qtc.libqt_list, headers_count) catch @panic("QHttpHeaders.fromMultiMap: Memory allocation failed");
        defer allocator.free(headers_values);
        const headers_inners = allocator.alloc([]qtc.libqt_string, headers_count) catch @panic("QHttpHeaders.fromMultiMap: Memory allocation failed");
        defer {
            for (headers_inners) |headers_inner|
                allocator.free(headers_inner);
            allocator.free(headers_inners);
        }
        var i: usize = 0;
        var headers_it = headers.iterator();
        while (headers_it.next()) |it_entry| : (i += 1) {
            const headers_key = it_entry.key_ptr.*;
            headers_keys[i] = qtc.libqt_string{
                .len = headers_key.len,
                .data = headers_key.ptr,
            };
            headers_values[i].len = it_entry.value_ptr.*.len;
            const headers_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("QHttpHeaders.fromMultiMap: Memory allocation failed");
            headers_inners[i] = headers_val;
            for (it_entry.value_ptr.*, 0..) |str_item, j|
                headers_val[j] = qtc.libqt_string{
                    .len = str_item.len,
                    .data = str_item.ptr,
                };
            headers_values[i].data = @ptrCast(headers_val.ptr);
        }
        const headers_map = qtc.libqt_map{
            .len = headers_count,
            .keys = @ptrCast(headers_keys.ptr),
            .values = @ptrCast(headers_values.ptr),
        };
        return .{ .ptr = qtc.QHttpHeaders_FromMultiMap(headers_map) };
    }

    /// ### DEPRECATED: Use `fromMultiHash` instead
    ///
    pub const FromMultiHash = fromMultiHash;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#fromMultiHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` headers: Map_u8_Sliceu8 `
    ///
    pub fn fromMultiHash(allocator: std.mem.Allocator, headers: Map_u8_Sliceu8) QHttpHeaders {
        const headers_count = headers.count();
        const headers_keys = allocator.alloc(qtc.libqt_string, headers_count) catch @panic("QHttpHeaders.fromMultiHash: Memory allocation failed");
        defer allocator.free(headers_keys);
        const headers_values = allocator.alloc(qtc.libqt_list, headers_count) catch @panic("QHttpHeaders.fromMultiHash: Memory allocation failed");
        defer allocator.free(headers_values);
        const headers_inners = allocator.alloc([]qtc.libqt_string, headers_count) catch @panic("QHttpHeaders.fromMultiHash: Memory allocation failed");
        defer {
            for (headers_inners) |headers_inner|
                allocator.free(headers_inner);
            allocator.free(headers_inners);
        }
        var i: usize = 0;
        var headers_it = headers.iterator();
        while (headers_it.next()) |it_entry| : (i += 1) {
            const headers_key = it_entry.key_ptr.*;
            headers_keys[i] = qtc.libqt_string{
                .len = headers_key.len,
                .data = headers_key.ptr,
            };
            headers_values[i].len = it_entry.value_ptr.*.len;
            const headers_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("QHttpHeaders.fromMultiHash: Memory allocation failed");
            headers_inners[i] = headers_val;
            for (it_entry.value_ptr.*, 0..) |str_item, j|
                headers_val[j] = qtc.libqt_string{
                    .len = str_item.len,
                    .data = str_item.ptr,
                };
            headers_values[i].data = @ptrCast(headers_val.ptr);
        }
        const headers_map = qtc.libqt_map{
            .len = headers_count,
            .keys = @ptrCast(headers_keys.ptr),
            .values = @ptrCast(headers_values.ptr),
        };
        return .{ .ptr = qtc.QHttpHeaders_FromMultiHash(headers_map) };
    }

    /// ### DEPRECATED: Use `toListOfPairs` instead
    ///
    pub const ToListOfPairs = toListOfPairs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#toListOfPairs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toListOfPairs(self: QHttpHeaders, allocator: std.mem.Allocator) []Struct_u8_u8 {
        const _arr: qtc.libqt_list = qtc.QHttpHeaders_ToListOfPairs(@ptrCast(self.ptr));
        const _data_val: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_u8_u8, _arr.len) catch @panic("QHttpHeaders.toListOfPairs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("QHttpHeaders.toListOfPairs: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("QHttpHeaders.toListOfPairs: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_u8_u8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `toMultiMap` instead
    ///
    pub const ToMultiMap = toMultiMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#toMultiMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toMultiMap(self: QHttpHeaders, allocator: std.mem.Allocator) ArrayMap_u8_Sliceu8 {
        const _map: qtc.libqt_map = qtc.QHttpHeaders_ToMultiMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_u8_Sliceu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QHttpHeaders.toMultiMap: Total capacity allocation failed");
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                const _value_list = _values[i];
                const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value_list.data));
                for (0.._value_list.len) |j|
                    qtc.libqt_free(_value_strings[j].data);
                qtc.libqt_free(_value_list.data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QHttpHeaders.toMultiMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value.data));
            const _value_slice = allocator.alloc([]u8, _value.len) catch @panic("QHttpHeaders.toMultiMap: Memory allocation failed");
            for (0.._value.len) |j| {
                const _vslice = allocator.alloc(u8, _value_strings[j].len) catch @panic("QHttpHeaders.toMultiMap: Memory allocation failed");
                @memcpy(_vslice, _value_strings[j].data);
                _value_slice[j] = _vslice;
            }
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `toMultiHash` instead
    ///
    pub const ToMultiHash = toMultiHash;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#toMultiHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toMultiHash(self: QHttpHeaders, allocator: std.mem.Allocator) Map_u8_Sliceu8 {
        const _map: qtc.libqt_map = qtc.QHttpHeaders_ToMultiHash(@ptrCast(self.ptr));
        var _ret: Map_u8_Sliceu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QHttpHeaders.toMultiHash: Total capacity allocation failed");
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                const _value_list = _values[i];
                const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value_list.data));
                for (0.._value_list.len) |j|
                    qtc.libqt_free(_value_strings[j].data);
                qtc.libqt_free(_value_list.data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QHttpHeaders.toMultiHash: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value.data));
            const _value_slice = allocator.alloc([]u8, _value.len) catch @panic("QHttpHeaders.toMultiHash: Memory allocation failed");
            for (0.._value.len) |j| {
                const _vslice = allocator.alloc(u8, _value_strings[j].len) catch @panic("QHttpHeaders.toMultiHash: Memory allocation failed");
                @memcpy(_vslice, _value_strings[j].data);
                _value_slice[j] = _vslice;
            }
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `value22` instead
    ///
    pub const Value22 = value22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` defaultValue: []u8 `
    ///
    pub fn value22(self: QHttpHeaders, allocator: std.mem.Allocator, name: []const u8, defaultValue: []u8) []u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QHttpHeaders_Value22(@ptrCast(self.ptr), name_str, defaultValue_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QHttpHeaders.value22: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value23` instead
    ///
    pub const Value23 = value23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttpHeaders `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: qhttpheaders_enums.WellKnownHeader `
    ///
    /// ` defaultValue: []u8 `
    ///
    pub fn value23(self: QHttpHeaders, allocator: std.mem.Allocator, name: i32, defaultValue: []u8) []u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QHttpHeaders_Value23(@ptrCast(self.ptr), @bitCast(name), defaultValue_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QHttpHeaders.value23: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#dtor.QHttpHeaders)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHttpHeaders `
    ///
    pub fn delete(self: QHttpHeaders) void {
        qtc.QHttpHeaders_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#public-types)
pub const enums = struct {
    pub const WellKnownHeader = enum {
        pub const AIM: i32 = 0;
        pub const Accept: i32 = 1;
        pub const AcceptAdditions: i32 = 2;
        pub const AcceptCH: i32 = 3;
        pub const AcceptDatetime: i32 = 4;
        pub const AcceptEncoding: i32 = 5;
        pub const AcceptFeatures: i32 = 6;
        pub const AcceptLanguage: i32 = 7;
        pub const AcceptPatch: i32 = 8;
        pub const AcceptPost: i32 = 9;
        pub const AcceptRanges: i32 = 10;
        pub const AcceptSignature: i32 = 11;
        pub const AccessControlAllowCredentials: i32 = 12;
        pub const AccessControlAllowHeaders: i32 = 13;
        pub const AccessControlAllowMethods: i32 = 14;
        pub const AccessControlAllowOrigin: i32 = 15;
        pub const AccessControlExposeHeaders: i32 = 16;
        pub const AccessControlMaxAge: i32 = 17;
        pub const AccessControlRequestHeaders: i32 = 18;
        pub const AccessControlRequestMethod: i32 = 19;
        pub const Age: i32 = 20;
        pub const Allow: i32 = 21;
        pub const ALPN: i32 = 22;
        pub const AltSvc: i32 = 23;
        pub const AltUsed: i32 = 24;
        pub const Alternates: i32 = 25;
        pub const ApplyToRedirectRef: i32 = 26;
        pub const AuthenticationControl: i32 = 27;
        pub const AuthenticationInfo: i32 = 28;
        pub const Authorization: i32 = 29;
        pub const CacheControl: i32 = 30;
        pub const CacheStatus: i32 = 31;
        pub const CalManagedID: i32 = 32;
        pub const CalDAVTimezones: i32 = 33;
        pub const CapsuleProtocol: i32 = 34;
        pub const CDNCacheControl: i32 = 35;
        pub const CDNLoop: i32 = 36;
        pub const CertNotAfter: i32 = 37;
        pub const CertNotBefore: i32 = 38;
        pub const ClearSiteData: i32 = 39;
        pub const ClientCert: i32 = 40;
        pub const ClientCertChain: i32 = 41;
        pub const Close: i32 = 42;
        pub const Connection: i32 = 43;
        pub const ContentDigest: i32 = 44;
        pub const ContentDisposition: i32 = 45;
        pub const ContentEncoding: i32 = 46;
        pub const ContentID: i32 = 47;
        pub const ContentLanguage: i32 = 48;
        pub const ContentLength: i32 = 49;
        pub const ContentLocation: i32 = 50;
        pub const ContentRange: i32 = 51;
        pub const ContentSecurityPolicy: i32 = 52;
        pub const ContentSecurityPolicyReportOnly: i32 = 53;
        pub const ContentType: i32 = 54;
        pub const Cookie: i32 = 55;
        pub const CrossOriginEmbedderPolicy: i32 = 56;
        pub const CrossOriginEmbedderPolicyReportOnly: i32 = 57;
        pub const CrossOriginOpenerPolicy: i32 = 58;
        pub const CrossOriginOpenerPolicyReportOnly: i32 = 59;
        pub const CrossOriginResourcePolicy: i32 = 60;
        pub const DASL: i32 = 61;
        pub const Date: i32 = 62;
        pub const DAV: i32 = 63;
        pub const DeltaBase: i32 = 64;
        pub const Depth: i32 = 65;
        pub const Destination: i32 = 66;
        pub const DifferentialID: i32 = 67;
        pub const DPoP: i32 = 68;
        pub const DPoPNonce: i32 = 69;
        pub const EarlyData: i32 = 70;
        pub const ETag: i32 = 71;
        pub const Expect: i32 = 72;
        pub const ExpectCT: i32 = 73;
        pub const Expires: i32 = 74;
        pub const Forwarded: i32 = 75;
        pub const From: i32 = 76;
        pub const Hobareg: i32 = 77;
        pub const Host: i32 = 78;
        pub const If: i32 = 79;
        pub const IfMatch: i32 = 80;
        pub const IfModifiedSince: i32 = 81;
        pub const IfNoneMatch: i32 = 82;
        pub const IfRange: i32 = 83;
        pub const IfScheduleTagMatch: i32 = 84;
        pub const IfUnmodifiedSince: i32 = 85;
        pub const IM: i32 = 86;
        pub const IncludeReferredTokenBindingID: i32 = 87;
        pub const KeepAlive: i32 = 88;
        pub const Label: i32 = 89;
        pub const LastEventID: i32 = 90;
        pub const LastModified: i32 = 91;
        pub const Link: i32 = 92;
        pub const Location: i32 = 93;
        pub const LockToken: i32 = 94;
        pub const MaxForwards: i32 = 95;
        pub const MementoDatetime: i32 = 96;
        pub const Meter: i32 = 97;
        pub const MIMEVersion: i32 = 98;
        pub const Negotiate: i32 = 99;
        pub const NEL: i32 = 100;
        pub const ODataEntityId: i32 = 101;
        pub const ODataIsolation: i32 = 102;
        pub const ODataMaxVersion: i32 = 103;
        pub const ODataVersion: i32 = 104;
        pub const OptionalWWWAuthenticate: i32 = 105;
        pub const OrderingType: i32 = 106;
        pub const Origin: i32 = 107;
        pub const OriginAgentCluster: i32 = 108;
        pub const OSCORE: i32 = 109;
        pub const OSLCCoreVersion: i32 = 110;
        pub const Overwrite: i32 = 111;
        pub const PingFrom: i32 = 112;
        pub const PingTo: i32 = 113;
        pub const Position: i32 = 114;
        pub const Prefer: i32 = 115;
        pub const PreferenceApplied: i32 = 116;
        pub const Priority: i32 = 117;
        pub const ProxyAuthenticate: i32 = 118;
        pub const ProxyAuthenticationInfo: i32 = 119;
        pub const ProxyAuthorization: i32 = 120;
        pub const ProxyStatus: i32 = 121;
        pub const PublicKeyPins: i32 = 122;
        pub const PublicKeyPinsReportOnly: i32 = 123;
        pub const Range: i32 = 124;
        pub const RedirectRef: i32 = 125;
        pub const Referer: i32 = 126;
        pub const Refresh: i32 = 127;
        pub const ReplayNonce: i32 = 128;
        pub const ReprDigest: i32 = 129;
        pub const RetryAfter: i32 = 130;
        pub const ScheduleReply: i32 = 131;
        pub const ScheduleTag: i32 = 132;
        pub const SecPurpose: i32 = 133;
        pub const SecTokenBinding: i32 = 134;
        pub const SecWebSocketAccept: i32 = 135;
        pub const SecWebSocketExtensions: i32 = 136;
        pub const SecWebSocketKey: i32 = 137;
        pub const SecWebSocketProtocol: i32 = 138;
        pub const SecWebSocketVersion: i32 = 139;
        pub const Server: i32 = 140;
        pub const ServerTiming: i32 = 141;
        pub const SetCookie: i32 = 142;
        pub const Signature: i32 = 143;
        pub const SignatureInput: i32 = 144;
        pub const SLUG: i32 = 145;
        pub const SoapAction: i32 = 146;
        pub const StatusURI: i32 = 147;
        pub const StrictTransportSecurity: i32 = 148;
        pub const Sunset: i32 = 149;
        pub const SurrogateCapability: i32 = 150;
        pub const SurrogateControl: i32 = 151;
        pub const TCN: i32 = 152;
        pub const TE: i32 = 153;
        pub const Timeout: i32 = 154;
        pub const Topic: i32 = 155;
        pub const Traceparent: i32 = 156;
        pub const Tracestate: i32 = 157;
        pub const Trailer: i32 = 158;
        pub const TransferEncoding: i32 = 159;
        pub const TTL: i32 = 160;
        pub const Upgrade: i32 = 161;
        pub const Urgency: i32 = 162;
        pub const UserAgent: i32 = 163;
        pub const VariantVary: i32 = 164;
        pub const Vary: i32 = 165;
        pub const Via: i32 = 166;
        pub const WantContentDigest: i32 = 167;
        pub const WantReprDigest: i32 = 168;
        pub const WWWAuthenticate: i32 = 169;
        pub const XContentTypeOptions: i32 = 170;
        pub const XFrameOptions: i32 = 171;
        pub const AcceptCharset: i32 = 172;
        pub const CPEPInfo: i32 = 173;
        pub const Pragma: i32 = 174;
        pub const ProtocolInfo: i32 = 175;
        pub const ProtocolQuery: i32 = 176;
    };
};
